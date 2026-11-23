#!/usr/bin/env python3
"""PS2 ELF fix-up: program headers whose p_vaddr is in the GBA ROM range (0x08000000-0x09FFFFFF) get
p_vaddr = p_paddr, so ELF loaders write the physical copy that src/ps2/tlb.c maps at 0x08000000."""
import struct, sys

f = open(sys.argv[1], "r+b")
d = bytearray(f.read())
phoff, = struct.unpack_from("<I", d, 0x1C)
phentsize, phnum = struct.unpack_from("<HH", d, 0x2A)
n = 0
for i in range(phnum):
    o = phoff + i * phentsize
    vaddr, paddr = struct.unpack_from("<II", d, o + 8)
    if 0x08000000 <= vaddr < 0x0A000000:
        struct.pack_into("<I", d, o + 8, paddr)
        n += 1
f.seek(0)
f.write(d)
print("fix_elf: %d GBA ROM segment(s) moved to physical addresses" % n)
