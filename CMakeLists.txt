cmake_minimum_required(VERSION 3.20)
set(PSXRECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/psxrecomp" CACHE PATH
    "Path to psxrecomp")
if(NOT EXISTS "${PSXRECOMP_ROOT}/runtime/runtime.cmake")
    message(FATAL_ERROR
        "PSXRecomp runtime is missing: ${PSXRECOMP_ROOT}/runtime/runtime.cmake\n"
        "This project expects the psxrecomp framework checkout at ${PSXRECOMP_ROOT}.\n"
        "Run: git submodule update --init --recursive\n"
        "If psxrecomp/ is not a submodule, set -DPSXRECOMP_ROOT=<path-to-psxrecomp>.")
endif()

project(OTCBRecomp LANGUAGES C CXX)

# --- Opt-in product surfaces (OFF by default in the framework) -------------
# Scaffold prompts / flags fill these. Without recomp-ui, PSX_RECOMP_UI is OFF.
# The wizard (WIZARD_CMAKE_BLOCK / ENABLE_SETUP_WIZARD) is the first-run disc
# picker; releases are compiled from the committed generated/ C, so it never
# needs to generate or rebuild anything on a player's machine.
# recomp-ui submodule present (PSX_RECOMP_UI defaults ON).
# Full netplay UI -- enable after adding recomp-ui + testing:
# if(EXISTS "${PSXRECOMP_ROOT}/lib/recomp-net/CMakeLists.txt")
#     set(PSX_NETPLAY ON CACHE BOOL "..." FORCE)
# endif()
set(PSX_SETUP_WIZARD ON CACHE BOOL
    "Advertise first-run setup wizard + Generate & rebuild in recomp-ui" FORCE)
include("${PSXRECOMP_ROOT}/runtime/runtime.cmake")

# This project's own mod catalog. The FRAMEWORK stages it -- together with its
# builtin psx.* packages -- into <exe-dir>/mods/bundled, and refuses to
# configure if a catalog exists here but is not declared. Shared Internal
# Resolution is included even with a builtin allowlist, enabled at 4x on fresh
# profiles, with 1x..32x choices; do not supply a title-local copy of that id.
# Never copy the catalog by hand: five titles did, and framework 4cc04be3's rename of the staged
# directory broke all five silently (bead beads-eio.3.101).
set(PSX_PRELOADED_MODS "${CMAKE_CURRENT_SOURCE_DIR}/mods/preloaded")
if(NOT IS_DIRECTORY "${PSX_PRELOADED_MODS}")
    set(PSX_PRELOADED_MODS "NONE")
endif()

# Optional: compile the readable shards (tools/make_readable.py) instead of
# generated/. They are the same code with the unused build-flavour code removed
# and MIPS register names, verified to compile to identical machine code. Only
# valid for this release flavour (no PSX_COSIM / PGXP / tail chains).
option(OTCB_USE_READABLE_C "Compile readable/ instead of generated/" OFF)
if(OTCB_USE_READABLE_C)
    set(OTCB_FULL_GLOB "readable/SLPS_025.87_full_*.c")
else()
    set(OTCB_FULL_GLOB "generated/SLPS_025.87_full_*.c")
endif()

psxrecomp_add_game_runtime(psx-runtime
    PRELOADED_MODS_DIR "${PSX_PRELOADED_MODS}"
    # ENABLE_NETPLAY_IF_PRESENT
    # NETPLAY_LOBBY_URL ws://netplay.retcomm.net:8765
    ENABLE_SETUP_WIZARD
    WINDOW_TITLE "OTCB Recompiled"
    DEFAULT_GAME_CONFIG_PATH "game.toml"
    MAX_PLAYERS 8
    # LAUNCHER_BOXART "${CMAKE_CURRENT_SOURCE_DIR}/launcher_assets/img/boxart.tga"
    APP_ICON "${CMAKE_CURRENT_SOURCE_DIR}/assets/psxrecomp.ico"
    # Committed game C (psxrecomp_cli.py generate; git add generated). Release
    # CI configures with -DPSXRECOMP_REQUIRE_GAME_C=ON so a checkout without
    # it fails instead of building a setup host.
    GEN_MARKER "generated/SLPS_025.87_dispatch.c"
    GEN_FULL_GLOB "${OTCB_FULL_GLOB}"
    CODEGEN_SETUP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/codegen_setup.c"
)
if(OTCB_USE_READABLE_C)
    # The readable shards #include the generated headers (decls.h etc.).
    target_include_directories(psx-runtime PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/generated")
endif()

# Stage runtime configs next to the exe for direct build/ launches. Only copy
# files that exist ??? never fail POST_BUILD when game_options.toml is absent.
foreach(_PSX_RUNTIME_CONFIG game.toml game_options.toml)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${_PSX_RUNTIME_CONFIG}")
        add_custom_command(TARGET psx-runtime POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_SOURCE_DIR}/${_PSX_RUNTIME_CONFIG}"
                "$<TARGET_FILE_DIR:psx-runtime>/${_PSX_RUNTIME_CONFIG}"
            COMMENT "Staging ${_PSX_RUNTIME_CONFIG}"
            VERBATIM)
    endif()
endforeach()

# OTCB: launcher artwork. recomp-ui only copies the images it ships itself, so
# anything in launcher_assets/img (launcher_logo.tga, launcher_bg.tga, ...) would
# otherwise never reach the exe's assets/img folder, where the launcher loads
# its images from. Copy at configure time (picks up edits on every rebuild) and
# again after each link.
set(OTCB_LAUNCHER_IMG "${CMAKE_CURRENT_SOURCE_DIR}/launcher_assets/img")
if(IS_DIRECTORY "${OTCB_LAUNCHER_IMG}")
    file(GLOB _OTCB_LAUNCHER_IMGS "${OTCB_LAUNCHER_IMG}/*.tga")
    if(_OTCB_LAUNCHER_IMGS)
        file(COPY ${_OTCB_LAUNCHER_IMGS}
             DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/assets/img")
    endif()
    add_custom_command(TARGET psx-runtime POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            "${OTCB_LAUNCHER_IMG}" "$<TARGET_FILE_DIR:psx-runtime>/assets/img"
        COMMENT "Staging launcher_assets/img"
        VERBATIM)
endif()
