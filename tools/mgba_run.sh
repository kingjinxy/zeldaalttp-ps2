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
gcc -O2 -o tools/mgba_run tools/mgba_run.c -I$M/include -I$M/build/include -DM_CORE_GBA \
    $(grep -oE '\-D[A-Z_0-9]+(=[^ ]*)?' $M/build/build.ninja | grep -E 'USE_|HAVE_|BUILD_' | sort -u | tr '\n' ' ') \
    $M/build/libmgba.a -lpng -lz -lm -lpthread
