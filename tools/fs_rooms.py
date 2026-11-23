#!/usr/bin/env python3
"""Lists and renders Four Swords stages and sub-rooms from the user's ROM.

    tools/fs_rooms.py [--rom baserom.gba] [--png DIR] [--stage POOL:N] [--room POOL:N]

A stage (pool gUnknown_0842B8A8[6], counts gUnknown_0842B8C0) is a descriptor:
    [0] map index (gUnknown_08146090), [1] tileset (gUnknown_08146078), [2] slot count, [3] ?,
    [4 + 2i] slot i x/y in 16px metatiles, [12..19] the four players' start x/y, +20 object-layer table.
Its slots get sub-rooms (pool gUnknown_0842B8CC[4], counts gUnknown_0842B8DC) at random:
    +0 u16 map index (gUnknown_0814627C, pixel size gUnknown_081465E0), +2 u8 key, +4 object-layer table.
Pool entries are {descriptor, flags}: flags bits 30-31 pick the variant (sub_080131C8).
Maps are MapDataDefinition lists (12 bytes: src offset from gUnknown_0854F7E8 with bit 31 = more follow,
dest, size with bit 31 = LZ77) as read by sub_0801484C; dest 0 means a palette group (gUnknown_08429750).
--png renders each stage with one valid sub-room pick per slot (the game picks at random).
"""
import argparse, os, struct

ROM = 0x08000000
MAPDATA = 0x0854F7E8      # gUnknown_03000BA4 (main.c)
PALDATA = 0x0844DD74      # gUnknown_03000030 (main.c)
STAGE_POOLS, STAGE_COUNTS, NSTAGE = 0x0842B8A8, 0x0842B8C0, 6
ROOM_POOLS, ROOM_COUNTS, NROOM = 0x0842B8CC, 0x0842B8DC, 4
TILESETS, STAGE_MAPS, ROOM_MAPS, ROOM_SIZES, PALGROUPS = 0x08146078, 0x08146090, 0x0814627C, 0x081465E0, 0x08429750
# Layer buffers (TMC MapLayer): map at +4 (64x64 u16 metatiles), metatile tiles at +0x7004
TOP, BOTTOM = 0x0201F020, 0x0200B320


class Rom:
    def __init__(self, path):
        self.d = open(path, 'rb').read()

    def u8(self, a): return self.d[a - ROM]
    def u16(self, a): return struct.unpack_from('<H', self.d, a - ROM)[0]
    def u32(self, a): return struct.unpack_from('<I', self.d, a - ROM)[0]
    def bytes(self, a, n): return self.d[a - ROM:a - ROM + n]

    def lz77(self, a):
        """BIOS LZ77UnComp (type 0x10)"""
        p = a - ROM; d = self.d
        assert d[p] == 0x10, hex(a)
        n = d[p + 1] | d[p + 2] << 8 | d[p + 3] << 16; p += 4
        out = bytearray()
        while len(out) < n:
            flags = d[p]; p += 1
            for bit in range(8):
                if len(out) >= n: break
                if flags & 0x80 >> bit:
                    l = (d[p] >> 4) + 3; off = ((d[p] & 15) << 8 | d[p + 1]) + 1; p += 2
                    for _ in range(l): out.append(out[-off])
                else:
                    out.append(d[p]); p += 1
        return bytes(out[:n])

    def mapdefs(self, a):
        """[(src, dest, size, compressed)] of a MapDataDefinition list"""
        out = []
        while True:
            s, dst, n = self.u32(a), self.u32(a + 4), self.u32(a + 8)
            out.append((MAPDATA + (s & 0x7FFFFFFF), dst, n & 0x7FFFFFFF, bool(n >> 31))); a += 12
            if not s >> 31: return out

    def pool(self, pools, counts, i):
        p, n = self.u32(pools + 4 * i), self.u16(counts + 2 * i)
        return [(self.u32(p + 8 * k), self.u32(p + 8 * k + 4)) for k in range(n)]


class Mem:
    """Just enough GBA memory to apply MapDataDefinition lists"""
    def __init__(self, rom):
        self.rom, self.m, self.pal = rom, {}, [0] * 256

    def load(self, defs):
        for src, dst, n, lz in defs:
            if dst == 0:
                self.palgroup(src - MAPDATA)
                continue
            data = self.rom.lz77(src) if lz else self.rom.bytes(src, n)
            for i, b in enumerate(data): self.m[dst + i] = b

    def palgroup(self, gid):   # load_palette_from_gfx_group
        p = self.rom.u32(PALGROUPS + 4 * gid)
        while True:
            off, num, f = self.rom.u16(p), self.rom.u8(p + 2), self.rom.u8(p + 3)
            for i in range(16 * ((f & 15) or 16)):
                self.pal[(num * 16 + i) & 255] = self.rom.u16(PALDATA + off + 2 * i)
            if not f & 0x80: return
            p += 4

    def u16(self, a): return self.m.get(a, 0) | self.m.get(a + 1, 0) << 8


def stages(rom):
    for s in range(NSTAGE):
        for k, (d, f) in enumerate(rom.pool(STAGE_POOLS, STAGE_COUNTS, s)):
            yield s, k, d, f


def rooms(rom):
    for s in range(NROOM):
        for k, (d, f) in enumerate(rom.pool(ROOM_POOLS, ROOM_COUNTS, s)):
            yield s, k, d, f


def render(rom, pool, desc, flags, path):
    from PIL import Image
    mem = Mem(rom)
    a = [rom.u8(desc + i) for i in range(20)]
    mem.load(rom.mapdefs(rom.u32(TILESETS + 4 * a[1])))
    # stage map: decompressed to 0x02038000 (top) / 0x0203A000 (bottom), 63x63 metatiles in a 64 grid
    mem.load(rom.mapdefs(rom.u32(STAGE_MAPS + 4 * a[0])))
    grid = {TOP: [[mem.u16(0x02038000 + 2 * (y * 63 + x)) for x in range(63)] for y in range(63)],
            BOTTOM: [[mem.u16(0x0203A000 + 2 * (y * 63 + x)) for x in range(63)] for y in range(63)]}
    # sub-rooms: room pool = stage pool (pools 4 and 5 have no slots); candidates whose variant (flags bits
    # 30-31, sub_080131C8) equals the stage's, taken in pool order. The game shuffles; this is one valid pick.
    var = flags >> 30
    cands = [d for s, k, d, f in rooms(rom) if s == pool and f >> 30 == var] or \
            [d for s, k, d, f in rooms(rom) if s == pool]
    for i in range(a[2]):
        r = cands[i % len(cands)]
        mi = rom.u16(r)
        w, h = rom.u16(ROOM_SIZES + 4 * mi) >> 4, rom.u16(ROOM_SIZES + 4 * mi + 2) >> 4
        mem.load(rom.mapdefs(rom.u32(ROOM_MAPS + 4 * mi)))
        for buf, layer in ((0x02038000, TOP), (0x02038800, BOTTOM)):
            for y in range(h):
                for x in range(w):
                    gy, gx = a[5 + 2 * i] + y, a[4 + 2 * i] + x
                    if gy < 63 and gx < 63: grid[layer][gy][gx] = mem.u16(buf + 2 * (y * w + x))
    draw(mem, grid, path)


def draw(mem, grid, path):
    """grid: {TOP|BOTTOM: 63x63 metatile indices}, drawn with the tileset loaded in mem"""
    from PIL import Image
    img = Image.new('RGB', (63 * 16, 63 * 16))
    px = img.load()
    rgb = [((c & 31) * 255 // 31, (c >> 5 & 31) * 255 // 31, (c >> 10 & 31) * 255 // 31) for c in mem.pal]
    for y in range(63 * 16):
        for x in range(63 * 16): px[x, y] = rgb[0]
    tile_cache = {}
    for layer in (BOTTOM, TOP):
        for my in range(63):
            for mx in range(63):
                mt = grid[layer][my][mx]
                for q in range(4):
                    e = mem.u16(layer + 0x7004 + 2 * (mt * 4 + q))
                    t, hf, vf, pal = e & 0x3FF, e >> 10 & 1, e >> 11 & 1, e >> 12
                    if t not in tile_cache:
                        tile_cache[t] = [mem.m.get(0x06000000 + t * 32 + i, 0) for i in range(32)]
                    tb = tile_cache[t]
                    for ty in range(8):
                        for tx in range(8):
                            sx, sy = (7 - tx if hf else tx), (7 - ty if vf else ty)
                            b = tb[sy * 4 + sx // 2]
                            c = b >> 4 if sx & 1 else b & 15
                            if c: px[mx * 16 + (q & 1) * 8 + tx, my * 16 + (q >> 1) * 8 + ty] = rgb[pal * 16 + c]
    img.save(path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--rom', default='baserom.gba')
    ap.add_argument('--png')
    ap.add_argument('--stage', help='POOL:N, render only this one')
    a = ap.parse_args()
    rom = Rom(a.rom)
    print('stages: pool idx descriptor flags | map tileset slots ? | slots | starts | layers')
    for s, k, d, f in stages(rom):
        b = rom.bytes(d, 20)
        slots = ' '.join(f'{b[4 + 2 * i]},{b[5 + 2 * i]}' for i in range(b[2]))
        starts = ' '.join(f'{b[12 + 2 * i]},{b[13 + 2 * i]}' for i in range(4))
        print(f'S {s} {k:2} {d:08x} {f:08x} | {b[0]:3} {b[1]} {b[2]} {b[3]:2} | {slots:16} | {starts} | {rom.u32(d + 20):08x}')
        if a.png and (a.stage is None or a.stage == f'{s}:{k}'):
            os.makedirs(a.png, exist_ok=True)
            render(rom, s, d, f, os.path.join(a.png, f'stage_{s}_{k:02}.png'))
    print('sub-rooms: pool idx descriptor flags | map key | w h (px) | layers')
    for s, k, d, f in rooms(rom):
        mi = rom.u16(d)
        print(f'R {s} {k:2} {d:08x} {f:08x} | {mi:3} {rom.u8(d + 2)} | {rom.u16(ROOM_SIZES + 4 * mi)} '
              f'{rom.u16(ROOM_SIZES + 4 * mi + 2)} | {rom.u32(d + 4):08x}')


if __name__ == '__main__':
    main()
