# Reading and building OTCBRecomp

## Why `generated/` is hard to read

`generated/SLPS_025.87_full_*.c` (193 shards, 3,165 functions, ~151k MIPS
instructions) is compiler output, not source. The recompiler expands every MIPS
instruction into roughly 20 lines of C: cycle accounting, PGXP precision hooks,
debug hooks, co-simulation hooks and instruction-cache fetches, each behind
`#ifdef`s. That machinery is what makes the result cycle-accurate, so it must
stay. The files are regenerated from the original executable and must not be
edited by hand (see `psxrecomp/CLAUDE.md`, rule 4).

The readable layer therefore sits on top of the generated code instead of
replacing it.

## Reading a function

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
