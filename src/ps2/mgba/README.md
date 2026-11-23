# mGBA software renderer (vendored)

From mGBA 0.10.5 (https://github.com/mgba-emu/mgba, commit 26b7884bc25a5933960f3cdcd98bac1ae14d42e2), under the
Mozilla Public License 2.0 (`LICENSE`): the GBA software renderer (`src/gba/renderers/`) and the headers it
includes. `include/mgba/flags.h` is the build configuration mGBA's CMake generated for that build. Changes to these
files are published under the MPL as well. The PS2 port drives the renderer from `src/ps2/video.c`; the few mGBA
functions it calls outside these files are stubbed in `src/ps2/mgba_stubs.c`.
