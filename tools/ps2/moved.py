"""PS2 only: the per-player arrays moved out of the GBA's packed RAM into the I/O entry's unused page at 0x04001000
(src/ps2/tlb.c), with room for 8 players (docs/Planning Doc.md, more than 4 players). (old start, old size, new start)
Used by gba_syms.py (every symbol inside a range moves with it; the translated asm follows, its literal pools being
relocations), fix_elf.py (ROM words pointing into a range: the data tables the game reads at 0x08xxxxxx) and
overlay_ranges.py (the per-player map)."""
MOVED = [
    (0x03006A30, 0x240, 0x04001000),  # gUnknown_03006A30[4]: the player records, 0x90 each (8: 0x480)
    (0x0200B1D0, 0x80, 0x04001480),   # gUnknown_0200B1D0[4][16]: the link key ring (8: 0x100)
    (0x03000940, 0x8, 0x04001580),    # gUnknown_03000940[4]: keys held (8: 0x10)
    (0x03005E10, 0x8, 0x04001590),    # gUnknown_03005E10[4]: keys newly pressed (8: 0x10)
    (0x03000FC0, 0x90, 0x040015A0),   # gUnknown_03000FC0: keys and link packets, unk38[4] at the end (8: 0xE0)
]
# after them, not a move: 0x04001680-0x0400170B gUnknown_03006C80_hi, players 5-8's per-player fields of
# gUnknown_03006C80 (include/variables.h C80_PLAYER); 0x04001710-0x040018CF players 5-8's 0x70-byte blocks
# (src/ps2/players.c); src/ps2/tlb.c copies the page up to 0x040018D0


def moved(v):
    """address v after the move"""
    for a, n, b in MOVED:
        if a <= v < a + n:
            return b + v - a
    return v
