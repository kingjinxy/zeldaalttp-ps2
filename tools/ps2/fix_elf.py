#!/usr/bin/env python3
"""PS2 ELF fix-up: program headers whose p_vaddr is in the GBA ROM range (0x08000000-0x09FFFFFF) get
p_vaddr = p_paddr, so ELF loaders write the physical copy that src/ps2/tlb.c maps at 0x08000000. The ROM image's
words that point into an array tools/ps2/moved.py moves are changed to the new place (data tables the game reads at
0x08xxxxxx; literal pools in it too, harmless: code runs from its relocated copies).
shortcut: any aligned ROM word in those ranges is taken for a pointer; a plain number that happens to fall there
would be changed too (none known)."""
import struct, sys
sys.path.insert(0, "tools/ps2")
from moved import MOVED, moved

f = open(sys.argv[1], "r+b")
d = bytearray(f.read())
phoff, = struct.unpack_from("<I", d, 0x1C)
phentsize, phnum = struct.unpack_from("<HH", d, 0x2A)
n = patched = 0
for i in range(phnum):
    o = phoff + i * phentsize
    vaddr, paddr = struct.unpack_from("<II", d, o + 8)
    if 0x08000000 <= vaddr < 0x0A000000:
        struct.pack_into("<I", d, o + 8, paddr)
        n += 1
        off, filesz = struct.unpack_from("<I", d, o + 4)[0], struct.unpack_from("<I", d, o + 16)[0]
        for w in range(off + (-vaddr & 3), off + filesz - 3, 4):
            v, = struct.unpack_from("<I", d, w)
            if moved(v) != v:
                struct.pack_into("<I", d, w, moved(v))
                patched += 1
f.seek(0)
f.write(d)
print("fix_elf: %d GBA ROM segment(s) moved to physical addresses, %d pointers to moved arrays changed" % (n, patched))
