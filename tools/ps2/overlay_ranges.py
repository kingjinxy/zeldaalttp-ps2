#!/usr/bin/env python3
"""Per-player memory ranges for the shared world (src/ps2/shared.c), from an mgba_run --perplayer map.

  overlay_ranges.py <map.bin> <out.h>

The map is one byte per address, EWRAM (256 KB) then IWRAM (32 KB), 1 = differed between players
(docs/shared_world/per_player_map.bin: session 1's stage, frames 1800-44200, and the PS2 2-player replay
(build/ps2/replay_p1/p2.inputs on recordings/fs_only.gba, frames 1000-6000, which pauses), IWRAM stack excluded). Offsets are into the PS2 live block
(tlb.c: EWRAM +0, IWRAM +0x40000, I/O +0x48000, palette +0x4A000, VRAM +0x50000, OAM +0x70000), the same as the map's
for EWRAM and IWRAM. Runs closer than GAP bytes are merged (fewer, slightly larger copies). The fixed ranges below are
per player too but not in the map: the I/O page (keys, scroll, link registers), the IWRAM stack top (with the
interrupt flags), VRAM's per-player tiles and background maps, and OAM.
"""
import sys

GAP = 16
FIXED = [
    # per player but equal between GBAs running in step, so not in the map: found by SHARED_CHECK (walkthrough step 46)
    (0x30790, 0x30AA0, "EWRAM 0x02030790-0x02030A9F: link state and its packet buffers"),
    (0x40200, 0x40210, "IWRAM 0x03000200-0x0300020F: frame parity (the sprite-list double buffer)"),
    (0x40E34, 0x40E40, "IWRAM 0x03000E34-0x03000E3F: sprite-list buffer pointer (not E20: the pause and clear flags are world)"),
    (0x40FC0, 0x41030, "IWRAM 0x03000FC0-0x0300102F: keys and link packets (gUnknown_03000FC0)"),
    (0x45E04, 0x45E10, "IWRAM 0x03005E04-0x03005E0F: sprite-list buffer pointers (not 5E10: newly pressed keys, world)"),
    (0x02D40, 0x02EA0, "EWRAM 0x02002D40-0x02002E9F: written by the view pass (HUD?)"),
    (0x2A5E0, 0x2A700, "EWRAM 0x0202A5E0-0x0202A6FF: text/HUD state"),
    (0x2D580, 0x2D610, "EWRAM 0x0202D580-0x0202D60F: HUD records"),
    (0x2DD80, 0x2DE10, "EWRAM 0x0202DD80-0x0202DE0F: HUD records"),
    (0x1EF00, 0x1EF20, "EWRAM 0x0201EF00-0x0201EF1F: the pause UI (state index at 0x0201EF18)"),
    (0x40440, 0x40450, "IWRAM 0x03000440-0x0300044F: the current entity (the arrows' update sets it)"),
    (0x40450, 0x40490, "IWRAM 0x03000450-0x0300048F: the camera struct"),
    (0x40494, 0x40498, "IWRAM 0x03000494: the link frame number"),
    (0x47B00, 0x48000, "IWRAM 0x03007B00-0x03007FFF: game stack, BIOS interrupt flags"),
    (0x48000, 0x48400, "I/O registers"),
    # VRAM 0x06004000-0x06005FFF: only these tiles differ between players (session 1's 4 GBAs and the PS2 replay's
    # 2); the rest is world (animated BG tiles, the text glyphs). shortcut: two scenes seen; SHARED_CHECK doesn't
    # cover VRAM, so a screen that differs from the separate build is the sign of a missed one.
    (0x54000, 0x54040, "VRAM 0x06004000: per-player tile"),
    (0x54C00, 0x54C40, "VRAM 0x06004C00: per-player tile"),
    (0x55000, 0x55040, "VRAM 0x06005000: per-player tile"),
    (0x5C000, 0x60000, "VRAM 0x0600C000-0x0600FFFF: background maps"),
    (0x70000, 0x70400, "OAM"),
]

WORLD = [
    # in the map (the GBAs ran a frame apart there) but world state: the view pass reads them and doesn't recompute them
    (0x45E10, 0x45E18, "IWRAM 0x03005E10: the players' newly pressed keys (sub_08037750; the pause check reads them)"),
]


BOUNDS = [0x40000, 0x48000, 0x4A000, 0x50000, 0x70000]  # live-block region starts after EWRAM


def region(off):
    return sum(off >= b for b in BOUNDS)


def main():
    d = bytearray(open(sys.argv[1], "rb").read())
    for a, b, _ in WORLD:
        d[a:b] = bytes(b - a)
    runs, i = [], 0
    while i < len(d):
        if d[i]:
            j = i
            while j < len(d) and d[j]:
                j += 1
            if runs and i - runs[-1][1] <= GAP:
                runs[-1][1] = j
            else:
                runs.append([i, j])
            i = j
        else:
            i += 1
    # whole aligned words: the map comes from two GBAs, whose per-player values (player 0 and 1's record pointers,
    # 0x03006A30/0x03006AC0) can differ in one byte only; players 2-3's differ in more
    runs = [[a & ~3, (b + 3) & ~3] for a, b in runs]
    runs += [[a, b] for a, b, _ in FIXED]
    runs.sort()
    merged = []
    for a, b in runs:  # never across a region boundary: each region is mapped at its own GBA address
        if merged and a <= merged[-1][1] + GAP and region(a) == region(merged[-1][0]):
            merged[-1][1] = max(merged[-1][1], b)
        else:
            merged.append([a, b])
    runs = []
    for a, b in merged:  # the world ranges cut out again (the merge bridges them)
        for w0, w1, _ in WORLD:
            if a < w1 and w0 < b:
                if a < w0:
                    runs.append([a, w0])
                a = max(a, w1)
        if a < b:
            runs.append([a, b])
    for a, b in runs:
        assert region(a) == region(b - 1), f"range {a:#x}-{b:#x} crosses a region boundary"
    total = sum(b - a for a, b in runs)
    with open(sys.argv[2], "w") as f:
        f.write("// Generated by tools/ps2/overlay_ranges.py from docs/shared_world/per_player_map.bin: do not edit.\n")
        f.write(f"// {len(runs)} ranges, {total} bytes: {{offset in the live block, end}}\n")
        f.write("static const unsigned sOverlay[][2] = {\n")
        for a, b in runs:
            f.write(f"    {{ 0x{a:05X}, 0x{b:05X} }},\n")
        f.write("};\n")
    print(f"{len(runs)} ranges, {total} bytes")


if __name__ == "__main__":
    main()
