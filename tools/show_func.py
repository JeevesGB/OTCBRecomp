#!/usr/bin/env python3
"""Print a recompiled function as a readable MIPS listing.

The files in generated/ are build artifacts emitted by psxrecomp: one MIPS
instruction expands to ~20 lines of C (cycle accounting, PGXP hooks, debug
hooks, co-simulation hooks). They must never be edited by hand. This tool does
not touch them. It reads a function out of generated/ and shows only what the
original program does: address, raw encoding, disassembly, and optionally the
C statement the recompiler produced for that instruction.

Usage:
    python3 tools/show_func.py 80010B20
    python3 tools/show_func.py 0x80010B20 --c        # also show emitted C
    python3 tools/show_func.py BootEntry             # name from symbols.toml
    python3 tools/show_func.py --list | head         # list every function

Requires: Python 3.11+ and `pip install capstone`.
"""
from __future__ import annotations

import argparse
import re
import sys
import tomllib
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# Every real instruction line the emitter writes ends with this trailer.
INSTR_RE = re.compile(r"/\* (0x[0-9A-Fa-f]{8}): (0x[0-9A-Fa-f]{8}) \*/")
FUNC_RE = re.compile(r"^void func_([0-9A-Fa-f]{8})\(CPUState\* cpu\)\s*$")
TRAILING_COMMENT_RE = re.compile(r"\s*/\*.*?\*/")


def load_symbols(path: Path) -> dict[str, int]:
    if not path.exists():
        return {}
    data = tomllib.loads(path.read_text(encoding="utf-8"))
    return {f["name"]: int(f["pc"]) for f in data.get("func", []) if "name" in f}


def load_ghidra_names(path: Path) -> dict[str, int]:
    """name -> address from the Ghidra export (skips auto-generated FUN_/LAB_ names)."""
    if not path.exists():
        return {}
    import json
    out = {}
    for f in json.loads(path.read_text(encoding="utf-8")):
        if not re.match(r"(FUN|LAB|thunk_FUN)_", f["name"]):
            out.setdefault(f["name"], int(f["entry"], 16))
    return out


def shard_files(gen_dir: Path) -> list[Path]:
    return sorted(gen_dir.glob("*_full_*.c"))


def iter_functions(gen_dir: Path):
    """Yield (address, shard_path) for every function definition."""
    for shard in shard_files(gen_dir):
        with shard.open("r", encoding="utf-8", errors="replace") as fh:
            for line in fh:
                m = FUNC_RE.match(line)
                if m:
                    yield int(m.group(1), 16), shard


def read_function(shard: Path, addr: int) -> list[str]:
    header = f"void func_{addr:08X}(CPUState* cpu)"
    body: list[str] = []
    inside = False
    with shard.open("r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not inside:
                if line.startswith(header):
                    inside = True
                    body.append(line)
                continue
            body.append(line)
            if line.rstrip("\n") == "}":
                break
    return body


def find_function(gen_dir: Path, addr: int) -> list[str]:
    needle = f"void func_{addr:08X}(CPUState* cpu)"
    for shard in shard_files(gen_dir):
        if needle in shard.read_text(encoding="utf-8", errors="replace"):
            return read_function(shard, addr)
    return []


def collect_instructions(body: list[str]) -> dict[int, tuple[int, str]]:
    """Map address -> (encoding, best emitted C line).

    Each instruction is emitted more than once (an optional PGXP-instrumented
    path, then a plain path). Prefer the plain line for the C view.
    """
    found: dict[int, tuple[int, str]] = {}
    for line in body:
        m = INSTR_RE.search(line)
        if not m:
            continue
        addr, enc = int(m.group(1), 16), int(m.group(2), 16)
        c_stmt = TRAILING_COMMENT_RE.sub("", line).strip()
        plain = "PGXP" not in line and "pgxp" not in line
        if addr not in found or (plain and "PGXP" in found[addr][1].upper()):
            found[addr] = (enc, c_stmt)
    return found


REG = ["$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3",
       "$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7",
       "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7",
       "$t8", "$t9", "$k0", "$k1", "$gp", "$sp", "$fp", "$ra"]

GPR_RE = re.compile(r"cpu->gpr\[(\d+)\]")
SIZE_RE = re.compile(r"/\* Address: (0x[0-9A-Fa-f]+), Size: (\d+) bytes")
BC_RE = re.compile(r"int _bc_([0-9A-Fa-f]{8}) = \((.*)\);\s*/\* branch cond before")
TAKEN_RE = re.compile(r"goto block_([0-9A-Fa-f]{8});\s*/\* taken \*/")
JT_RE = re.compile(r"uint32_t _jt_([0-9A-Fa-f]{8}) = ")
CPS_JR_RE = re.compile(r"/\* CPS: jr (.+?) \*/")
LINK_RE = re.compile(r"cpu->gpr\[31\] = 0x([0-9A-Fa-f]{8})u;\s*/\* jal link before")
CPS_JAL_RE = re.compile(r"/\* CPS jal -> 0x([0-9A-Fa-f]{8}) \*/")
# Unconditional j: either a tail jump out of the function ("CPS j: split") or a
# jump to another block inside it ("goto block_...; /* j */").
J_RE = re.compile(
    r"(?:cpu->pc = 0x|goto block_)([0-9A-Fa-f]{8})u?;\s*(?:return;\s*)?/\* (?:CPS )?j(?:: split)? \*/")


def regnames(text: str) -> str:
    return GPR_RE.sub(lambda m: REG[int(m.group(1))], text)


def collect_control_flow(body: list[str]) -> dict[int, tuple[str, str, int | None]]:
    """Recover branches, jr and jal. The emitter writes no encoding trailer for
    these; it encodes them as C constructs that each carry the instruction's
    own address. Returns address -> (mnemonic, operands, target-or-None).
    """
    found: dict[int, tuple[str, str, int | None]] = {}
    for i, line in enumerate(body):
        m = BC_RE.search(line)
        if m:
            addr = int(m.group(1), 16)
            if addr in found:
                continue
            target = None
            for later in body[i + 1:i + 40]:
                t = TAKEN_RE.search(later)
                if t:
                    target = int(t.group(1), 16)
                    break
            cond = regnames(m.group(2))
            ops = f"if ({cond}) goto " + (f"{target:08X}" if target else "?")
            found[addr] = ("branch", ops, target)
            continue
        m = JT_RE.search(line)
        if m:
            addr = int(m.group(1), 16)
            if addr in found:
                continue
            reg = GPR_RE.search(line)
            reg_name = REG[int(reg.group(1))] if reg else "?"
            for later in body[i + 1:i + 40]:
                j = CPS_JR_RE.search(later)
                if j:
                    found[addr] = ("jr", regnames(j.group(1)), None)
                    break
                if "/* CPS jalr */" in later:
                    found[addr] = ("jalr", reg_name, None)
                    break
            continue
        m = J_RE.search(line)
        if m:
            # Unconditional j: the delay-slot instruction was emitted just
            # before this line, and the j itself sits one word earlier.
            for earlier in reversed(body[max(0, i - 15):i]):
                d = INSTR_RE.search(earlier)
                if d:
                    addr = int(d.group(1), 16) - 4
                    if addr not in found:
                        tgt = int(m.group(1), 16)
                        found[addr] = ("j", f"0x{tgt:08X}", tgt)
                    break
            continue
        m = LINK_RE.search(line)
        if m:
            addr = int(m.group(1), 16) - 8
            if addr in found:
                continue
            for later in body[i + 1:i + 40]:
                j = CPS_JAL_RE.search(later)
                if j:
                    tgt = int(j.group(1), 16)
                    found[addr] = ("jal", f"func_{tgt:08X}", None)
                    break
    return found


def function_extent(body: list[str], instrs, control) -> tuple[int, int]:
    """(first address, instruction count) from the emitter's own header."""
    for line in body:
        m = SIZE_RE.search(line)
        if m:
            return int(m.group(1), 16), int(m.group(2)) // 4
    seen = sorted(set(instrs) | set(control))
    if not seen:
        return 0, 0  # emitted without instruction markers; caller reports it
    return seen[0], (seen[-1] - seen[0]) // 4 + 1


def disassemble(instrs, control, start: int, count: int):
    """Rows: (addr, enc|None, mnemonic, operands, c_stmt, target|None).

    Every address in the function appears exactly once. Control transfers the
    tool cannot reconstruct (j, jalr) are shown as explicit placeholders so
    that nothing is silently missing.
    """
    try:
        import capstone
    except ImportError:
        sys.exit("capstone is required: pip install capstone")
    md = capstone.Cs(capstone.CS_ARCH_MIPS,
                     capstone.CS_MODE_MIPS32 + capstone.CS_MODE_LITTLE_ENDIAN)
    md.detail = False
    rows = []
    for addr in range(start, start + count * 4, 4):
        if addr in instrs:
            enc, c_stmt = instrs[addr]
            decoded = list(md.disasm(enc.to_bytes(4, "little"), addr))
            if decoded:
                mnem, ops = decoded[0].mnemonic, decoded[0].op_str
            elif (enc >> 26) == 0x12:  # COP2: Geometry Transformation Engine
                mnem, ops = "cop2", f"0x{enc & 0x1FFFFFF:07X}"
            else:
                mnem, ops = ".word", f"0x{enc:08X}"
            rows.append((addr, enc, mnem, ops, c_stmt, None))
        elif addr in control:
            mnem, ops, target = control[addr]
            rows.append((addr, None, mnem, ops + "   ; reconstructed from C", "", target))
        else:
            rows.append((addr, None, "???", "control transfer not reconstructed (j/jalr?) - see emitted C", "", None))
    return rows


def render(addr: int, rows, name: str | None, show_c: bool) -> str:
    lo = rows[0][0] if rows else addr
    hi = rows[-1][0] if rows else addr
    # Branch/jump targets that land inside this function get a label.
    targets = {t for *_rest, t in rows if t is not None and lo <= t <= hi}
    for a, enc, mnem, ops, _c, _t in rows:
        if enc is not None and mnem in {"b", "beq", "bne", "beqz", "bnez", "bgez",
                                        "bgtz", "blez", "bltz", "bal", "j"}:
            m = re.search(r"0x([0-9a-fA-F]+)\s*$", ops)
            if m and lo <= int(m.group(1), 16) <= hi:
                targets.add(int(m.group(1), 16))
    reconstructed = sum(1 for r in rows if r[1] is None and r[2] != "???")
    unresolved = sum(1 for r in rows if r[2] == "???")
    title = f"func_{addr:08X}" + (f"  ({name})" if name else "")
    note = f"{reconstructed} control-flow rows reconstructed from C"
    if unresolved:
        note += f", {unresolved} NOT reconstructed"
    out = [f"# {title}  [{lo:08X}..{hi + 3:08X}]  {len(rows)} instructions  ({note})", ""]
    for a, enc, mnem, ops, c_stmt, _t in rows:
        if a in targets:
            out.append(f"loc_{a:08X}:")
        raw = f"{enc:08X}" if enc is not None else "--------"
        line = f"  {a:08X}  {raw}  {mnem:<7} {ops}"
        if show_c and c_stmt:
            line = f"{line:<62} | {c_stmt}"
        out.append(line.rstrip())
    return "\n".join(out)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("function", nargs="?", help="address (hex) or symbols.toml name")
    ap.add_argument("--generated", type=Path, default=ROOT / "generated")
    ap.add_argument("--symbols", type=Path, default=ROOT / "symbols.toml")
    ap.add_argument("--c", action="store_true", help="show the emitted C next to each instruction")
    ap.add_argument("--list", action="store_true", help="list all function addresses")
    args = ap.parse_args()

    symbols = load_ghidra_names(ROOT / "functions" / "functions.json")
    symbols.update(load_symbols(args.symbols))  # symbols.toml wins over Ghidra
    by_addr = {v: k for k, v in symbols.items()}

    if args.list:
        for a, _ in iter_functions(args.generated):
            print(f"{a:08X}" + (f"  {by_addr[a]}" if a in by_addr else ""))
        return 0
    if not args.function:
        ap.error("a function address or name is required (or use --list)")

    key = args.function
    addr = symbols[key] if key in symbols else int(key.lower().removeprefix("func_").removeprefix("0x"), 16)
    body = find_function(args.generated, addr)
    if not body:
        print(f"func_{addr:08X} not found in {args.generated}", file=sys.stderr)
        return 1
    instrs = collect_instructions(body)
    control = collect_control_flow(body)
    start, count = function_extent(body, instrs, control)
    if count == 0:
        alias = re.search(r"psx_alias_body_([0-9A-Fa-f]{8})\(", "".join(body))
        if alias:
            print(f"func_{addr:08X} is an alias entry into func_{alias.group(1)}; "
                  f"run: show_func.py {alias.group(1)}")
            return 0
        print(f"func_{addr:08X} has no per-instruction markers (not a plain recompiled "
              f"body, e.g. an alias/host body); read the emitted C directly.", file=sys.stderr)
        return 2
    rows = disassemble(instrs, control, start, count)
    print(render(addr, rows, by_addr.get(addr), args.c))
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except BrokenPipeError:  # e.g. `show_func.py --list | head`
        sys.exit(0)
