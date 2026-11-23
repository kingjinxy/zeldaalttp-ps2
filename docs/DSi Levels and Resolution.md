# Anniversary Edition (DSi) levels and resolution: notes for the PS2 port

Notes from comparing the DSi *Four Swords Anniversary Edition* (DSiWare, KQ9E) with the GBA game (2026-11-23).
The DSi ROM and anything extracted from it stay in `reference/dsi/` and are never committed. Tools:
`tools/fs_rooms.py` (GBA stages and sub-rooms) and `tools/dsi_zelmap.py` (the DSi map file). How these were
found is in `Running Walkthrough.md`, Step 23.

## Level format (GBA)

- **Stage:** a descriptor from one of 6 pools (`gUnknown_0842B8A8`, 146 stages):
  - `[0]` map index;
  - `[1]` tileset (6 tilesets);
  - `[2]` slot count, `[4 + 2i]` slot positions;
  - `[12..19]` the four players' start points;
  - `+20` the object-layer table.
- **Maps:** every stage map is 63×63 metatiles (1008×1008 px), in two layers.
- **Sub-rooms:** each slot gets a random sub-room from the room pool with the stage's own number (216 sub-rooms
  in 4 pools). The pick must match the stage's variant (pool flags bits 30-31).
- **Map data:** loaded by `sub_0801484C` from MapDataDefinition records (Minish Cap format) relative to
  `gUnknown_0854F7E8`.

## DSi level data

- **Same formats, new containers.** The DSi game keeps the GBA formats throughout: stage descriptors,
  map-data records, the metatile layout, palette groups. The only change is that records name entries of its
  archive files instead of ROM offsets.
  - `zelmap.bin` holds maps, tile graphics and metatiles.
  - `zeldat.bin` holds palettes.
- **Tables** (addresses in the ARM9 binary):

  | Table | Address |
  |---|---|
  | Tileset table | 0x020D70F0 |
  | Stage map table | 0x020D7660 |
  | Palette groups | 0x021039B8 |
  | New-stage pool | 0x02103DD4 |

- **Existing maps are mostly unchanged.**
  - Stage maps: 71 of the 111 the stages use are identical. 40 have small design edits, mostly in the
    middle of the maps rather than at the borders, such as a reshaped water channel or lake shore. Stage
    map 94 is the exception, reworked with over 2,000 changed metatiles; not yet examined.
  - Sub-room layers: 379 identical, 55 small edits.
  - The map size is unchanged: still 63×63 metatiles.
- **New levels:** 18 new stages (map indices 123-140) using new tilesets 6-14:
  - 11, 13 and 14 are recolours of GBA tilesets 1, 3 and 0;
  - 12 pairs new graphics with tileset 2's metatiles;
  - 6-10 are new.

  `tools/dsi_zelmap.py --png DIR` renders all 18. Their object layers and sub-room pools are still to be read;
  they use the GBA formats.

## Resolution

- **What the DSi changed.** Only the camera centring: 128/96, half of 256×192, where the GBA uses 120/80.
  This is in the DSi area setup at 0x02056F80, the DSi version of `sub_08015DD8`. The camera is still clamped
  to the same 1008-pixel map size, and no maps were changed for the bigger screen.
- **320×240 on the PS2 can't show past a map's edges.** The camera clamps to the map, and 320×240 is far
  smaller than 1008×1008.
- **It does show more around each play area.** A map is a canvas: play areas surrounded by filler (rock, brick
  or sky), and sometimes separate areas side by side.
  - Compared with the GBA, 320×240 shows 40 px more on every side. The DSi shows 8 px more on the left and
    right and 16 px more on the top and bottom.
  - The filler is drawn tiles, so nothing looks broken.
  - Near the edges, players may see neighbouring rooms or hidden areas that the GBA screen kept off-view.
    It's a design side effect, which the DSi already accepts in a milder form.
- **Port work the wider view needs:**
  - **Map drawing:** the GBA streams the map into a 256×256 wrapping hardware tilemap, which can't hold a
    320-px view. The PS2 renderer should draw straight from the full 64×64-metatile map in the layer buffers
    (0x0201F020 top, 0x0200B320 bottom).
  - **Object ranges:** the ranges that decide which enemies and objects update and draw are probably tied to
    the 240×160 screen. If so, a wider view shows enemies frozen or appearing late near the edges. The DSi must
    have widened these, so its code shows where.
- **Not yet checked:** boss rooms, transitions, and any mode that sets a smaller camera area than the full
  map. These are the places a wider view is most likely to show something unintended.
