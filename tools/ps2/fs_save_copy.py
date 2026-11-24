#!/usr/bin/env python3
"""Copy a Four Swords save (mGBA .sav layout, 8 KB EEPROM) with file 1's name changed, for another player.

  fs_save_copy.py <src.sav> <dst.sav> <name>

shortcut: a stand-in until the port has its own save system; only file 1, single-letter names.
Layout (found from the USA save): mGBA stores each 8-byte EEPROM block byte-reversed. In game order, file 1's
record is 64 bytes at 0x580 with the name's first letter at 0x588; its status at 0x70 is checksum, -checksum,
"S4FT". The checksum is the Minish Cap one (tmc src/save.c CalculateChecksum) over the status word plus the
record. The whole save is kept twice, at 0 and 0x1000.
"""
import struct
import sys


def unrev(b):
    return b"".join(b[i:i + 8][::-1] for i in range(0, len(b), 8))


def checksum(d):
    c, n = 0, len(d)
    for i in range(0, len(d), 2):
        c += struct.unpack_from("<H", d, i)[0] ^ n
        n -= 2
    return c & 0xFFFF


def main():
    src, dst, name = sys.argv[1:4]
    if len(name) != 1:
        sys.exit("name: one letter")
    g = bytearray(unrev(open(src, "rb").read()))
    for base in (0, 0x1000):
        st = base + 0x70
        if g[st + 4:st + 8] != b"S4FT":
            sys.exit(f"{src}: no file 1 status at {st:#x}")
        old = struct.unpack_from("<H", g, st)[0]
        if (checksum(g[st + 4:st + 8]) + checksum(g[base + 0x580:base + 0x5C0])) & 0xFFFF != old:
            sys.exit(f"{src}: file 1 checksum at {st:#x} doesn't match: layout differs")
        g[base + 0x588] = ord(name)
        c = (checksum(g[st + 4:st + 8]) + checksum(g[base + 0x580:base + 0x5C0])) & 0xFFFF
        struct.pack_into("<HH", g, st, c, -c & 0xFFFF)
    open(dst, "wb").write(unrev(bytes(g)))


if __name__ == "__main__":
    main()
