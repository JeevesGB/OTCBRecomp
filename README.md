# OTCB Recompiled

[![GitHub downloads (all assets, all releases)](https://img.shields.io/github/downloads/JeevesGB/OTCBRecomp/total)](https://github.com/JeevesGB/OTCBRecomp/releases)
[![GitHub downloads (latest release)](https://img.shields.io/github/downloads/JeevesGB/OTCBRecomp/latest/total)](https://github.com/JeevesGB/OTCBRecomp/releases/latest)
[![GitHub release](https://img.shields.io/github/v/release/JeevesGB/OTCBRecomp)](https://github.com/JeevesGB/OTCBRecomp/releases/latest)

Static recompilation of **OTCB** for PlayStation, powered by **[psxrecomp](https://github.com/mstan/psxrecomp)** and **[recomp-ui](https://github.com/RetroPortingToolKit/recomp-ui)**.

> **Status:** Active static recompilation / porting project scaffolded on the `psxrecomp` New Project Layout. See `psxrecomp/docs/GAME_PROJECT_SETUP.md` for full setup details.

---

## Running OTCB Recompiled

### Standalone Release
1. Download the latest release archive from the [Releases](https://github.com/JeevesGB/OTCBRecomp/releases) page for your platform.
2. Extract the archive and supply your own legally obtained **OTCB** disc image when prompted.
3. Launch the executable (releases use the bundled MIT-licensed OpenBIOS by default).

### Retro Launcher
You can also install, update, and manage disc, BIOS, and save paths through **[Retro Launcher](https://github.com/RetroPortingToolKit/Retro-Launcher)**:
- [Retro Launcher Downloads](https://github.com/RetroPortingToolKit/Retro-Launcher/releases)
- [Retro Launcher Documentation](https://github.com/RetroPortingToolKit/Retro-Launcher#readme)

---

## Development Setup

### Prerequisites & Submodules
Initialize all required submodules (including `psxrecomp`, `recomp-ui`, and nested dependencies):

```bash
git submodule update --init --recursive
```

### 1. Build Emitters & Generate Recompiled C
Build the `psxrecomp` emitters and generate C code from your **OTCB** disc image (`disc/<your>.cue`):

```bash
./psxrecomp/tools/ci/build_emitters.sh
python3 psxrecomp/psxrecomp_cli.py generate \
  --config game.toml \
  --project-root . \
  --disc disc/<your>.cue
```

`generated/` is tracked in this repository so CI and prebuilt release workflows can compile the game without a disc present. Whenever you change seeds, symbols, or framework pins, regenerate and commit `generated/`:

```bash
git add generated
git commit -m "Regenerate OTCB recompiled C"
```

### 2. Configure & Build the Runtime
Use `rebuild` rather than a bare `cmake` invocation so `overlay_toolchain/` is built and staged alongside the runtime (enabling streamed overlays to compile into native shards instead of falling back to interpretation):

```bash
python3 psxrecomp/psxrecomp_cli.py rebuild \
  --config game.toml \
  --project-root . \
  --build-dir build-release \
  --no-pgo
```

---

## Symbols & Reverse Engineering

Function mappings and symbol overrides are tracked progressively:

```text
symbols.toml ─▶ python3 tools/sync_symbols.py ─▶ psx_symbols.h (PSX_FN_*)
```

See `psxrecomp/docs/SYMBOLS.md` for workflows and conventions.

---

## Framework Pins

Submodule commits (`psxrecomp`, optional `recomp-ui`, and nested `recomp-net`) are the source of truth for pinned framework versions:
- `framework_pins.txt` is only an optional scaffold snapshot.
- Release workflows record SHAs via `record_pins.sh`, but compile against whatever commits the gitlinks point to.
- Update submodules intentionally rather than floating on `main` or `master` in release builds.

---

## Packaging & Releases

See `psxrecomp/docs/RELEASING_A_TITLE.md` for full release procedures.

- **Optimized Windows / Linux Releases (requires disc):** Update `VERSION` and commit any pin/source changes, then run:
  ```bash
  scripts/package_release.sh --channel public
  ```
  *(On Windows PowerShell: `psxrecomp/tools/package_title_release.ps1 --channel public`. Use `--channel playtest` for non-public builds, or `--platform` to target a specific OS.)*
- **Prebuilt CI Releases (no disc required):** Tagging `vX.Y.Z` or dispatching the *Release builds* workflow runs `scripts/package_prebuilt_release.sh` from committed `generated/` sources across Linux, Windows, and macOS (without selective PGO training).

---

## Legal & Assets

- **Game Discs:** You must own a legal copy of **OTCB**. Files under `disc/` are gitignored and must never be committed.
- **BIOS:** Proprietary/retail PlayStation BIOS dumps are not redistributed and no C code derived from them may be committed. Releases ship using the bundled MIT OpenBIOS.
- **Icon & Artwork:**
  - Default application icon: `assets/psxrecomp.ico` (plus `.png` / `.svg` variants from `psxrecomp/assets/`), embedded on Windows via `APP_ICON`.
  - Optional box art under `launcher_assets/img/` may source from [libretro-thumbnails](https://github.com/libretro-thumbnails/libretro-thumbnails) (`Named_Boxarts`); check `BOXART_SOURCE.txt` if present.