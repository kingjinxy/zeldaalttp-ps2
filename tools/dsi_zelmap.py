#!/usr/bin/env python3
"""Compares the DSi Anniversary Edition's map file (zelmap.bin) with the GBA Four Swords map data.

    tools/dsi_zelmap.py [--rom baserom.gba] [--dsi reference/dsi/fsae.app] [--png DIR]

zelmap.bin (NDS file 24) starts with {offset, size | bit 31 = LZ type 0x11} pairs; the first offset / 8 is the
entry count. Each entry is decompressed and matched against every GBA MapDataDefinition record (tilesets,
stage maps, sub-room maps; see fs_rooms.py). Unmatched 63x63 stage layers (0x1F02 bytes) and sub-room layers
are scored against the closest GBA layer of the same size: the fraction of equal metatiles.
--png renders each new stage (DSi stages 123-140) with its DSi tileset and palette (zeldat.bin).
"""
import argparse, array, os, struct
import fs_rooms as F

ZELMAP_FILE, ZELDAT_FILE = 24, 20
ARM9_LOAD = 0x02004000
# DSi ARM9 tables (DSi versions of sub_08015DD8 at 0x02056F80.., sub_0801484C at 0x02021EC4 and
# load_palette_from_gfx_group at 0x02029B38)
DSI_TILESETS, DSI_PALGROUPS, DSI_STAGE_POOL_NEW, DSI_STAGE_MAPS = 0x020D70F0, 0x021039B8, 0x02103DD4, 0x020D7660
# DSi buffer -> GBA address for drawing with fs_rooms.draw: BG chars at 0x06008000, layer buffers
DSI_DEST = {0x06008000: 0x06000000, 0x0215FF84: F.TOP + 0x7004, 0x0216AF88: F.BOTTOM + 0x7004}


def nds_file(d, fid):
    fat = struct.unpack_from('<I', d, 0x48)[0]
    s, e = struct.unpack_from('<II', d, fat + 8 * fid)
    return d[s:e]


def lz11(b):
    assert b[0] == 0x11
    n = b[1] | b[2] << 8 | b[3] << 16; p = 4; o = bytearray()
    while len(o) < n:
        fl = b[p]; p += 1
        for bit in range(8):
            if len(o) >= n: break
            if fl & 0x80 >> bit:
                t = b[p] >> 4
                if t == 0: l = ((b[p] & 15) << 4 | b[p + 1] >> 4) + 0x11; off = ((b[p + 1] & 15) << 8 | b[p + 2]) + 1; p += 3
                elif t == 1: l = ((b[p] & 15) << 12 | b[p + 1] << 4 | b[p + 2] >> 4) + 0x111; off = ((b[p + 2] & 15) << 8 | b[p + 3]) + 1; p += 4
                else: l = t + 1; off = ((b[p] & 15) << 8 | b[p + 1]) + 1; p += 2
                for _ in range(l): o.append(o[-off])
            else:
                o.append(b[p]); p += 1
    return bytes(o[:n])


def entries(z):
    for i in range(struct.unpack_from('<I', z, 0)[0] // 8):
        o, f = struct.unpack_from('<II', z, 8 * i)
        raw = z[o:o + (f & 0x7FFFFFFF)]
        yield i, lz11(raw) if f >> 31 else raw


class Dsi:
    """Map-data records of the DSi version: {u32 A | bit 31 = more, u32 dest, u32 B}. A and B are word
    indices into zelmap.bin's index (A = 2 * entry: the offset word, B = A + 1: the size word); dest 0 =
    palette group A."""
    def __init__(self, d):
        self.a9 = d[0x4000:0x4000 + struct.unpack_from('<I', d, 0x2C)[0]]
        self.ent = dict(entries(nds_file(d, ZELMAP_FILE)))
        self.dat = dict(entries(nds_file(d, ZELDAT_FILE)))

    def w(self, a): return struct.unpack_from('<I', self.a9, a - ARM9_LOAD)[0]

    def records(self, a):
        while True:
            A, dst = self.w(a), self.w(a + 4)
            yield A & 0x7FFFFFFF, dst
            if not A >> 31: return
            a += 12

    def load(self, mem, a):
        for A, dst in self.records(a):
            if dst == 0:
                self.palgroup(mem, A & 0xFFFF)
                continue
            base = max((k for k in DSI_DEST if k <= dst), default=None)
            if base is None or dst - base >= 0x10000: continue   # types, other VRAM: not drawn
            for i, b in enumerate(self.ent[A >> 1]): mem.m[DSI_DEST[base] + dst - base + i] = b

    def palgroup(self, mem, gid):
        """records {u16: low byte = zeldat.bin entry, high byte = offset / 16; u8 palette; u8 count | more}"""
        q = self.w(DSI_PALGROUPS + 4 * gid)
        while True:
            h = struct.unpack_from('<H', self.a9, q - ARM9_LOAD)[0]
            num, f = self.a9[q + 2 - ARM9_LOAD], self.a9[q + 3 - ARM9_LOAD]
            src, off = self.dat[h & 0xFF], (h >> 8) * 16
            for i in range(min(16 * ((f & 15) or 16), (len(src) - off) // 2)):
                mem.pal[(num * 16 + i) & 255] = struct.unpack_from('<H', src, off + 2 * i)[0]
            if not f & 0x80: return
            q += 4


def gba_records(rom):
    recs = {}
    def add(defs, name):
        for s, dst, n, lz in defs:
            if dst: recs.setdefault(rom.lz77(s) if lz else rom.bytes(s, n), f'{name}->{dst:x}')
    for t in range(6): add(rom.mapdefs(rom.u32(F.TILESETS + 4 * t)), f'tileset{t}')
    for m in range(123): add(rom.mapdefs(rom.u32(F.STAGE_MAPS + 4 * m)), f'stage{m}')
    for m in range(216): add(rom.mapdefs(rom.u32(F.ROOM_MAPS + 4 * m)), f'room{m}')
    return recs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--rom', default='baserom.gba')
    ap.add_argument('--dsi', default='reference/dsi/fsae.app')
    ap.add_argument('--png')
    a = ap.parse_args()
    rom = F.Rom(a.rom)
    z = nds_file(open(a.dsi, 'rb').read(), ZELMAP_FILE)
    recs = gba_records(rom)
    layers = [(k, v) for k, v in recs.items() if 'tileset' not in v]
    ents = list(entries(z))
    print('entry size match (score = equal metatiles vs the closest GBA layer)')
    for i, data in ents:
        m = recs.get(data)
        if m:
            print(f'{i:3} {len(data):5x} {m}')
            continue
        best = (0, '-')
        if len(data) in (0x1F02, 0x620):
            x = array.array('H', data)
            for k, v in layers:
                if len(k) == len(data):
                    s = sum(p == q for p, q in zip(x, array.array('H', k))) / len(x)
                    best = max(best, (s, v))
        print(f'{i:3} {len(data):5x} NEW {best[0]:.2f} {best[1]}')
    if a.png:
        os.makedirs(a.png, exist_ok=True)
        dsi = Dsi(open(a.dsi, 'rb').read())
        g = lambda b: [[struct.unpack_from('<H', b, 2 * (y * 63 + x))[0] for x in range(63)] for y in range(63)]
        # each new stage from its descriptor ({descriptor, flags} pool entries): [0] map, [1] tileset
        for k in range(18):
            dsc = dsi.w(DSI_STAGE_POOL_NEW + 8 * k)
            m, ts = dsi.a9[dsc - ARM9_LOAD], dsi.a9[dsc + 1 - ARM9_LOAD]
            mem = F.Mem(rom)
            dsi.load(mem, dsi.w(DSI_TILESETS + 4 * ts))
            lay = {dst: dsi.ent[A >> 1] for A, dst in dsi.records(dsi.w(DSI_STAGE_MAPS + 4 * m))}
            F.draw(mem, {F.TOP: g(lay[0x02138780]), F.BOTTOM: g(lay[0x0213A780])},
                   os.path.join(a.png, f'dsi_stage{m:03}_ts{ts}.png'))

if __name__ == '__main__':
    main()
