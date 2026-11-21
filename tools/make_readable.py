#!/usr/bin/env python3
"""Rewrite generated/*.c into a readable form that compiles to the SAME code.

generated/ is emitter output meant for every build flavour (co-simulation,
PGXP, debug tools, tail chains...). A given build only uses one flavour, so most
of each file is dead code for it. This tool produces readable/<same names>.c:

  1. Resolves the build-flavour #ifdefs (unifdef) with the settings of the real
     release build, deleting code that build never compiles.
  2. Removes the PGXP wrappers (they are ((void)0) when PGXP is off) together
     with the temporaries that only fed them.
  3. Writes register names ($sp, $ra...) instead of cpu->gpr[29], cpu->gpr[31].
  4. Replaces the raw encoding comment with the MIPS instruction it implements.
  5. Names each function from the Ghidra export (functions/functions.json), with
     its signature and the path of its decompiled C, in a comment above it.

Nothing is guessed: `--verify` compiles the original and the readable shard with
the project's real compiler command and requires the machine code (.text and
.rodata) to be byte-identical.

    python3 tools/make_readable.py                      # all shards -> readable/
    python3 tools/make_readable.py generated/SLPS_025.87_full_00.c
    python3 tools/make_readable.py --verify generated/SLPS_025.87_full_00.c

Requires: unifdef, capstone (pip install capstone).
"""
from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# Settings of the release build this readable code is for. If you build with
# other flags (e.g. PSX_COSIM or PGXP on), keep using generated/ instead.
UNIFDEF_FLAGS = [
    "-DPSX_ENABLE_BLOCK_CYCLES", "-DPSX_NO_DEBUG_TOOLS=1",
    "-DPSX_NATIVE_TAIL_CHAINS=0",
    "-UPSX_COSIM", "-UPSX_PGXP", "-UPSX_OVERLAY_DLL_BUILD",
]

REG = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3",
       "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
       "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
       "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]

# One PGXP-wrapped statement: "{ <temporaries> <statements> PGXP_xxx(...); }".
WRAPPER_RE = re.compile(
    r"\{ (?P<decls>(?:uint32_t _pgx\w+ = [^;]+; )+)(?P<body>[^{}]*?)PGXP_\w+\([^;]*\); \}")
ENC_RE = re.compile(r"/\* 0x([0-9A-Fa-f]{8}): 0x([0-9A-Fa-f]{8}) \*/")
GPR_RE = re.compile(r"cpu->gpr\[(\d+)\]")


def run_unifdef(src: Path) -> str:
    if shutil.which("unifdef") is None:
        sys.exit("unifdef is required (apt install unifdef / pacman -S unifdef)")
    p = subprocess.run(["unifdef", *UNIFDEF_FLAGS, str(src)],
                       capture_output=True, text=True, check=False)
    if p.returncode not in (0, 1):  # 1 just means "output differs"
        sys.exit(f"unifdef failed on {src}: {p.stderr}")
    return p.stdout


STANDALONE_PGXP_RE = re.compile(r"^[ \t]*PGXP_\w+\([^;]*\);[ \t]*(?:/\*.*?\*/)?[ \t]*\n", re.M)


def strip_pgxp(text: str) -> str:
    def repl(m: re.Match) -> str:
        body = re.sub(r"\s*\n\s*", " ", m.group("body")).strip()
        decls = m.group("decls")
        names = re.findall(r"uint32_t (_pgx\w+) =", decls)
        if any(re.search(rf"\b{n}\b", body) for n in names):
            return "{ " + decls + body + " }"  # temporaries are really used
        return body
    text = WRAPPER_RE.sub(repl, text)
    text = STANDALONE_PGXP_RE.sub("", text)  # bare no-op calls
    # Temporaries that really are used (GTE loads/stores): give them plain names.
    return text.replace("_pgxa", "_addr").replace("_pgxv", "_val")


def disassembler():
    try:
        import capstone
    except ImportError:
        sys.exit("capstone is required: pip install capstone")
    md = capstone.Cs(capstone.CS_ARCH_MIPS,
                     capstone.CS_MODE_MIPS32 + capstone.CS_MODE_LITTLE_ENDIAN)

    def dis(addr: int, enc: int) -> str:
        if enc == 0:
            return "nop"
        r = list(md.disasm(enc.to_bytes(4, "little"), addr))
        if r:
            return f"{r[0].mnemonic} {r[0].op_str}".strip()
        if (enc >> 26) == 0x12:
            return f"cop2 0x{enc & 0x1FFFFFF:07x}"
        return f".word 0x{enc:08x}"
    return dis


def annotate(text: str, dis) -> str:
    def repl(m: re.Match) -> str:
        addr, enc = int(m.group(1), 16), int(m.group(2), 16)
        return f"/* {addr:08X}  {dis(addr, enc)} */"
    return ENC_RE.sub(repl, text)


def rename_registers(text: str) -> str:
    """cpu->gpr[29] -> sp. The names are macros defined after the includes."""
    return GPR_RE.sub(lambda m: REG[int(m.group(1))], text)


def add_register_macros(text: str) -> str:
    defs = "\n".join(f"#define {n} cpu->gpr[{i}]" for i, n in enumerate(REG))
    block = ("/* MIPS register names for this file (undefined again at the end). */\n"
             f"{defs}\n")
    undefs = "\n".join(f"#undef {n}" for n in REG) + "\n"
    lines = text.split("\n")
    last_inc = max((i for i, l in enumerate(lines) if l.startswith("#include")), default=-1)
    lines.insert(last_inc + 1, block)
    return "\n".join(lines).rstrip("\n") + "\n\n" + undefs


FUNC_DEF_RE = re.compile(r"^void func_([0-9A-Fa-f]{8})\(CPUState\* cpu\)[ \t]*$", re.M)


def load_ghidra(path: Path) -> dict[int, dict]:
    """Ghidra export (functions/functions.json): address -> {name, signature}."""
    if not path.exists():
        return {}
    import json
    return {int(f["entry"], 16): f for f in json.loads(path.read_text(encoding="utf-8"))}


def annotate_functions(text: str, ghidra: dict[int, dict]) -> str:
    """Put the Ghidra name, signature and decompiled-source path above each function."""
    if not ghidra:
        return text

    def repl(m: re.Match) -> str:
        addr = int(m.group(1), 16)
        g = ghidra.get(addr)
        if g is None:
            return m.group(0)
        sig = g["signature"].replace("*/", "* /")
        name = g["name"]
        label = "" if re.match(r"(FUN|LAB|thunk_FUN)_", name) else f"{name}\n * "
        return (f"/* {label}Ghidra: {sig}\n"
                f" * decompiled: functions/functions/{g['entry']}.c */\n" + m.group(0))
    return FUNC_DEF_RE.sub(repl, text)


def make_readable(src: Path, dis, ghidra: dict[int, dict] | None = None) -> str:
    text = run_unifdef(src)
    text = strip_pgxp(text)
    text = annotate(text, dis)
    text = rename_registers(text)
    text = annotate_functions(text, ghidra or {})
    text = add_register_macros(text)
    text = re.sub(r"\n{3,}", "\n\n", text)
    header = ("/* READABLE VIEW of generated/%s for the release build flavour.\n"
              " * Produced by tools/make_readable.py; do not edit - regenerate. */\n" % src.name)
    return header + text


def compile_command(build_dir: Path, shard: str) -> str:
    out = subprocess.run(["ninja", "-C", str(build_dir), "-t", "targets", "all"],
                         capture_output=True, text=True).stdout
    tgt = next((l.split(":")[0] for l in out.splitlines() if l.split(":")[0].endswith(shard + ".o")), None)
    if tgt is None:
        sys.exit(f"no build target for {shard}; configure build-release first")
    cmds = subprocess.run(["ninja", "-C", str(build_dir), "-t", "commands", tgt],
                          capture_output=True, text=True).stdout.strip().splitlines()
    return cmds[-1], tgt


def verify(src: Path, readable: str, build_dir: Path) -> bool:
    cmd, tgt = compile_command(build_dir, src.name)
    with tempfile.TemporaryDirectory() as td:
        td = Path(td)
        rpath = td / src.name
        rpath.write_text(readable, encoding="utf-8")
        results = {}
        for label, path, extra in (("orig", src, ""), ("read", rpath, f"-I{src.parent} ")):
            c = cmd.replace(f"-o {tgt}", f"-o {td / (label + '.o')}")
            c = c.replace(f"-c {src}", f"{extra}-c {path}")
            r = subprocess.run(c, shell=True, cwd=build_dir, capture_output=True, text=True)
            if r.returncode:
                print(f"{label} compile failed:\n{r.stderr[-1500:]}")
                return False
            results[label] = {}
            for sec in (".text", ".rodata", ".data"):
                b = subprocess.run(["objcopy", "-O", "binary", f"--only-section={sec}",
                                    str(td / (label + ".o")), "/dev/stdout"],
                                   capture_output=True).stdout
                results[label][sec] = b
        same = all(results["orig"][s] == results["read"][s] for s in results["orig"])
        print(f"{src.name}: {'IDENTICAL machine code' if same else 'DIFFERENT machine code'} "
              f"({len(results['orig']['.text'])} bytes .text)")
        return same


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("shards", nargs="*", type=Path, help="generated/*.c files (default: all)")
    ap.add_argument("--out", type=Path, default=ROOT / "readable")
    ap.add_argument("--ghidra", type=Path, default=ROOT / "functions" / "functions.json",
                    help="Ghidra export used to name functions (default: functions/functions.json)")
    ap.add_argument("--build-dir", type=Path, default=ROOT / "build-release")
    ap.add_argument("--verify", action="store_true",
                    help="compile original and readable shard and require identical machine code")
    args = ap.parse_args()

    shards = args.shards or sorted((ROOT / "generated").glob("*.c"))
    dis = disassembler()
    ghidra = load_ghidra(args.ghidra)
    args.out.mkdir(exist_ok=True)
    ok = True
    for s in shards:
        s = s.resolve()
        readable = make_readable(s, dis, ghidra)
        (args.out / s.name).write_text(readable, encoding="utf-8")
        if args.verify:
            ok &= verify(s, readable, args.build_dir)
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
