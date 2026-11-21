# Reading and building OTCBRecomp

## Readable C (`readable/`)

`generated/SLPS_025.87_*.c` is compiler output (7.0 million lines, 258 MB).
The recompiler emits code for every build flavour (co-simulation, PGXP precision
tracking, debug tools, tail chains) and each MIPS instruction expands to about
20 lines of C. A given build only compiles one flavour, so most of that text is
dead code for it.

`readable/` is the same program with that dead code removed (0.8 million lines,
33 MB, all 3,165 functions). It is produced by `tools/make_readable.py`:

1. The build-flavour `#ifdef`s are resolved with the release build's real
   settings (cycle accounting stays; co-sim, PGXP, debug tools, tail chains are
   off in that build, so their code goes).
2. The no-op PGXP wrappers and the temporaries that only fed them are removed.
3. `cpu->gpr[29]` becomes `sp`, `cpu->gpr[31]` becomes `ra`, and so on.
4. Each raw encoding comment becomes the MIPS instruction it implements.

Before:

```c
{ uint32_t _pgxa = cpu->gpr[29] + 100; cpu->gpr[31] = psx_cyc_load_word(cpu, cpu->gpr[29] + 100, 31, 0x20000000u);
PGXP_LOAD(0x8FBF0064u, _pgxa, cpu->gpr[31]); }  /* 0x80010B20: 0x8FBF0064 */
```

After:

```c
ra = psx_cyc_load_word(cpu, sp + 100, 31, 0x20000000u);  /* 80010B20  lw $ra, 0x64($sp) */
```

What is still there on purpose: the block labels and the `cpu->pc` re-entry
switch, the `psx_cyc_*` cycle accounting and `psx_icache_fetch`. Calls and
returns in this design are not C calls: a `jal` sets `cpu->pc` and returns to a
dispatcher, and every block can be re-entered. Removing that would break the
game, so it stays.

**This is not decompiled source.** There are no original variable names,
structs or loops. The code is still what a MIPS CPU executes, written as C.

### How it is verified

Nothing is trusted by eye. `--verify` compiles the original and the readable
shard with the project's real compiler command and compares the machine code:

```sh
python3 tools/make_readable.py --verify generated/SLPS_025.87_full_00.c
```

Result over all 192 files: 188 compile to byte-identical `.text` and `.rodata`.
Four (full_47, 51, 63, 64) contain exactly the same instructions with 2-4
independent register loads scheduled in a different order by the compiler, out
of about 11,000-12,000 instructions each. A full game build from `readable/`
links (see below).

### Using it

```sh
python3 tools/make_readable.py                     # regenerate readable/ (needs unifdef, capstone)
cmake -S . -B build-readable -G Ninja -DCMAKE_BUILD_TYPE=Release \
      -DPSXRECOMP_REQUIRE_GAME_C=ON -DOTCB_USE_READABLE_C=ON
```

`generated/` remains the source of truth and is what CI builds. Regenerate
`readable/` whenever `generated/` changes. It is only valid for the release
flavour; if you build with PSX_COSIM or PGXP on, use `generated/`. On Windows
`unifdef` is available from MSYS2 (`pacman -S unifdef`).

### Function names and decompiled C (from Ghidra)

`functions/functions.json` and `functions/functions/<address>.c` (exported from
Ghidra) hold real names and decompiler-style C. `make_readable.py` uses them:
each function in `readable/` gets a comment with its Ghidra name, signature and
the path of its decompiled source:

```c
/* MenuRender_VSRaceSetup
 * Ghidra: undefined MenuRender_VSRaceSetup(void)
 * decompiled: functions/functions/8002737c.c */
void func_8002737C(CPUState* cpu)
```

Coverage: 1,538 of the 3,165 recompiled functions have a Ghidra entry (1,116 with
a real name such as `RenderRace` or `UpdateCarLights`, 422 still `FUN_...`).
The other 1,627 have no export yet. `show_func.py` accepts these names too
(`python3 tools/show_func.py RenderRace`); `symbols.toml` wins if both define one.

The Ghidra C is for reading only. It is pseudo-C (`param_1`, `iVar4`, hardware
macros) and will not compile or run as the game; the recompiled code is what
runs. It is a good reference for *what* a function does.

## Why `generated/` is hard to read (background)

The files must not be edited by hand (see `psxrecomp/CLAUDE.md`, rule 4); they
are regenerated from the original executable.

## Reading a function as plain assembly

```sh
pip install capstone                       # one-time, Python 3.11+ (any OS)
python3 tools/show_func.py BootEntry       # by name from symbols.toml
python3 tools/show_func.py 80010B20        # by address
python3 tools/show_func.py 80010B20 --c    # add the emitted C beside each line
python3 tools/show_func.py --list          # every function address
```

Output is a plain MIPS listing with branch labels:

```
# func_80010B20  [80010B20..80010B3F]  8 instructions
  80010B20  8FBF0064  lw      $ra, 0x64($sp)
  ...
  80010B38  --------  jr      $ra   ; reconstructed from C
  80010B3C  27BD0068  addiu   $sp, $sp, 0x68
```

Rows marked `--------` are branches, jumps and calls. The emitter writes no raw
encoding for those, so the tool rebuilds them from the C constructs. Anything it
cannot rebuild prints as `???` instead of being dropped. Across all 3,165
functions, 2 of 151,105 instructions currently print as `???`. Alias entries
(309 functions) have no body of their own and point you at the real function.

To give a function a readable name, add it to `symbols.toml`; the tool uses
those names in titles and lookups.

## Building on Windows

The project's own docs recommend MSYS2 MinGW-64 for Windows
(`psxrecomp/docs/BUILDING.md`; MSVC also works). I verified the build on Linux
only, so treat these steps as the documented route, not something I ran on
Windows.

1. Install [MSYS2](https://www.msys2.org/), open an **MSYS2 MinGW64** shell and run:
   ```sh
   pacman -S --needed git python mingw-w64-x86_64-toolchain \
       mingw-w64-x86_64-cmake mingw-w64-x86_64-ninja mingw-w64-x86_64-ccache
   ```
   If you have other MinGW installs on `PATH`, read
   `psxrecomp/docs/WINDOWS_TOOLCHAIN_TRAPS.md` first.
2. Fetch submodules, then build with the project's `rebuild` command (this is
   the same one the README uses; the C in `generated/` is already committed, so
   no disc is needed to compile):
   ```sh
   git submodule update --init --recursive
   python3 psxrecomp/psxrecomp_cli.py rebuild --config game.toml \
       --project-root . --build-dir build-release --no-pgo
   ```
3. The first build compiles all 193 generated shards and is slow. It took about
   8 minutes on a 2-core Linux machine.

## Running

Supply your own legally obtained disc image and BIOS (releases can use the
bundled OpenBIOS instead):

```sh
./build-release/OTCB_Recompiled.exe --game game.toml \
    --bios /path/to/SCPH1001.BIN --disc /path/to/game.cue
```

On Linux the build is the same CMake project; I built it there with
`cmake -S . -B build-release -G Ninja -DCMAKE_BUILD_TYPE=Release
-DPSXRECOMP_REQUIRE_GAME_C=ON` after installing SDL3's X11/Wayland/ALSA
development packages.
