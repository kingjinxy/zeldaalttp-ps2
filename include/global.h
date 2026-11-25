#ifndef GUARD_GLOBAL_H
#define GUARD_GLOBAL_H

// players the per-player arrays have room for: 4 on the GBA; the PS2 build moves the arrays (tools/ps2/moved.py) with
// room for 8 (docs/Planning Doc.md, more than 4 players). Loops over those arrays only; gUnknown_03006C80's per-player
// fields stay four until they move too.
#ifdef PLATFORM_PS2
#define MAX_PLAYERS 8
#else
#define MAX_PLAYERS 4
#endif

#include "gba/gba.h"

#define static_assert(cond) extern char assertion[(cond) ? 1 : -1]

#define ROR(x,y) ((x & 0x80) | ((x) >> (y)))

#include "types.h"
#include "variables.h"
#include "functions.h"

// Constant tables of NONMATCHING C: kept out of .rodata, whose layout the NONMATCHING build keeps fixed
#define NM_RODATA __attribute__((section(".rodata.nm")))

#endif  // GUARD_GLOBAL_H
