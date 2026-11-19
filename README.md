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