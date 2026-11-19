@echo off
rem Rebuilds the OTCB port after launcher changes. Double-click to run.
set PSXRECOMP_TOOLCHAIN_DIR=E:\otcb-recomp\cmake-clang-v1
set PATH=E:\otcb-recomp\cmake-clang-v1\bin;C:\Program Files\Git\bin;C:\Program Files\Git\usr\bin;%PATH%
cd /d E:\otcb-recomp\OTCBRecomp
python psxrecomp\psxrecomp_cli.py rebuild --config game.toml --project-root . --build-dir build-release --no-pgo
echo.
echo Finished. Check the last lines above for errors.
pause
