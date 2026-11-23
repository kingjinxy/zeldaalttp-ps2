#!/usr/bin/env python3
"""Compares the DSi Anniversary Edition's map file (zelmap.bin) with the GBA Four Swords map data.

    tools/dsi_zelmap.py [--rom baserom.gba] [--dsi reference/dsi/fsae.app] [--png DIR]

zelmap.bin (NDS file 24) starts with {offset, size | bit 31 = LZ type 0x11} pairs; the first offset / 8 is the
entry count. Each entry is decompressed and matched against every GBA MapDataDefinition record (tilesets,
stage maps, sub-room maps; see fs_rooms.py). Unmatched 63x63 stage layers (0x1F02 bytes) and sub-room layers
are scored against the closest GBA layer of the same size: the fraction of equal metatiles.
--png renders each changed or new stage (layer pairs; GBA has 123, the DSi file more) once per GBA tileset 0-3, since which tileset a
DSi stage uses isn't known yet.
"""
import argparse, array, os, struct
import fs_rooms as F

ZELMAP_FILE = 24


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
        # stage layers come in (top, bottom) pairs, in stage order like the GBA's: DSi stage n = pair n
        st = [(i, data) for i, data in ents if len(data) == 0x1F02]
        for n in range(len(st) // 2):
            (i, top), (_, bottom) = st[2 * n], st[2 * n + 1]
            if n < 123 and top in recs: continue    # unchanged GBA stage
            for t in range(4):
                mem = F.Mem(rom)
                mem.load(rom.mapdefs(rom.u32(F.TILESETS + 4 * t)))
                g = lambda b: [[struct.unpack_from('<H', b, 2 * (y * 63 + x))[0] for x in range(63)] for y in range(63)]
                F.draw(mem, {F.TOP: g(top), F.BOTTOM: g(bottom)}, os.path.join(a.png, f'dsi_stage{n:03}_ts{t}.png'))


if __name__ == '__main__':
    main()
