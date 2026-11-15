#!/bin/bash
# Builds tools/mgba_run against mGBA 0.10.5 as a static library in reference/mgba (headless, no GUI):
#   git clone --depth 1 --branch 0.10.5 https://github.com/mgba-emu/mgba reference/mgba
#   cmake -S reference/mgba -B reference/mgba/build -G Ninja -DCMAKE_BUILD_TYPE=Release -DBUILD_QT=OFF \
#     -DBUILD_SDL=OFF -DBUILD_STATIC=ON -DBUILD_SHARED=OFF -DUSE_FFMPEG=OFF -DUSE_LUA=OFF -DUSE_EDITLINE=OFF \
#     -DUSE_SQLITE3=OFF -DUSE_ELF=OFF -DUSE_LIBZIP=OFF -DUSE_MINIZIP=OFF -DUSE_DISCORD_RPC=OFF -DM_CORE_GB=OFF
#   ninja -C reference/mgba/build
set -e
cd "$(dirname "$0")/.."
M=reference/mgba
# The library's feature defines (mgba/flags.h) and NDEBUG change struct layouts, so they must match it.
# --play needs SDL2 (sudo apt install libsdl2-dev); without it the runner builds without a window.
SDL=$(pkg-config --cflags --libs sdl2 2>/dev/null && echo -DMGBA_RUN_SDL || true)
gcc -O2 -o tools/mgba_run tools/mgba_run.c -I$M/include -I$M/build/include -include mgba/flags.h -DNDEBUG \
    -D_GNU_SOURCE $M/build/libmgba.a -lpng -lz -lm -lpthread $SDL
