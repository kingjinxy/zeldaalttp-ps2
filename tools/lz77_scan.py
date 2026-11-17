#!/usr/bin/env python3
"""Find GBA LZ77 streams (BIOS LZ77UnComp format) in the ROM's data area: compressed graphics and maps.

    python3 tools/lz77_scan.py [ROM] > ranges.txt

A stream counts when its header is 0x10 with a decoded size of 32 bytes .. 256 KiB and it decodes to
exactly that size without copying from before its start. The scan resumes after a stream. Prints
"START END SIZE" (hex) per stream. Words inside these ranges are compressed bytes, never pointers.
"""
import sys

DATA_START, ROM_BASE = 0x137B10, 0x08000000

def decode_len(rom, p):
    """Bytes the stream at p occupies, or None if it isn't a valid stream."""
    if rom[p] != 0x10:
        return None
    n = rom[p + 1] | rom[p + 2] << 8 | rom[p + 3] << 16
    if not 32 <= n <= 0x40000:
        return None
    q, k = p + 4, 0
    while k < n:
        if q >= len(rom):
            return None
        flags = rom[q]; q += 1
        for b in range(8):
            if k >= n:
                break
            if flags & 0x80 >> b:
                if q + 1 >= len(rom):
                    return None
                x = rom[q] << 8 | rom[q + 1]; q += 2
                if (x & 0xFFF) + 1 > k:  # copies from before the start: not a real stream
                    return None
                k += (x >> 12) + 3
            else:
                q += 1; k += 1
    return q - p if k == n else None  # an overlong final copy also marks a false hit

rom = open(sys.argv[1] if len(sys.argv) > 1 else "baserom.gba", "rb").read()
p, count, total = DATA_START & ~3, 0, 0
while p < len(rom) - 4:
    ln = decode_len(rom, p)
    if ln:
        print(f"{ROM_BASE + p:08X} {ROM_BASE + p + ln:08X} {ln:X}")
        count += 1; total += ln
        p = (p + ln + 3) & ~3
    else:
        p += 4
print(f"# {count} streams, {total:,} bytes", file=sys.stderr)
