// PS2: the game's per-player pointer tables, with room for 8 players. In the ROM they have four entries (0x08000FF4
// the player records, 0x08003B54 their Link pointers at +0x28), and code indexes them by player number
// (sub_08001D5C: a Link's record by its Entity.form), so players 5-8 read past them. ldscript.txt names them
// (gPlayerRecordPtrs, gPlayerLinkPtrs) and tools/ps2/gba_syms.py points the names here; the records themselves are
// moved to 0x04001000 with room for 8 (tools/ps2/moved.py).
#include <tamtypes.h>

#define RECORDS 0x04001000u  // gUnknown_03006A30 in the PS2 build, 0x90 bytes a player
#define R(i) (RECORDS + (i) * 0x90)
const u32 ps2_player_record_ptrs[8] = { R(0), R(1), R(2), R(3), R(4), R(5), R(6), R(7) };
const u32 ps2_player_link_ptrs[8] = { R(0) + 0x28, R(1) + 0x28, R(2) + 0x28, R(3) + 0x28,
                                      R(4) + 0x28, R(5) + 0x28, R(6) + 0x28, R(7) + 0x28 };
