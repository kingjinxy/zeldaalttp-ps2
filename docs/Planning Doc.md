# Four Swords PS2 port — planning doc

Approach: decompile the code Four Swords reaches to C, keep the GBA build matching, then compile the same C
for a PC host and the PS2 against a GBA hardware layer. Several game instances run in one program, one per
player, linked in memory instead of by cable, each drawn into its own part of the screen.

## 0. Platform constraints

| | GBA | PS2 | Consequence |
|---|---|---|---|
| CPU | ARM7TDMI 16.8 MHz, Thumb + some ARM | EE R5900 294 MHz, little-endian | Same endianness: data needs no swapping. ARM asm (IRQ, sound mixer, RAM code) is rewritten in C. |
| Memory | Fixed addresses: EWRAM `0x02000000`, IWRAM `0x03000000`, I/O `0x04000000`, VRAM `0x06000000`, ROM `0x08000000` | 32 MB, no fixed map for the game | Hardware addresses become arrays; ROM pointers in data become symbols. |
| Video | PPU: tile BGs, affine, OAM sprites, windows, blending | GS, 4 MB VRAM | Software PPU on the EE per instance, uploaded as a texture; GS tile rendering later if too slow. |
| Audio | m4a software mixer, DirectSound FIFO | SPU2 via the IOP | m4a in C (tmc has it), output to audsrv. One instance plays sound. |
| Link | SIO multiplayer cable, up to 4 GBAs | — | In-process hub; known timing trap (FourSwordsRecomp DESIGN.md §9). |
| Save | 64 Kbit EEPROM | Memory card | Save layer maps EEPROM blocks to a memory card file. |
| Input | One GBA pad each | Multitap, up to 4 pads | Pad *n* drives instance *n*. |

## Phase 0: tooling ✅
- [x] Install `arm-none-eabi` binutils, libpng, mGBA
- [x] Build `tools/agbcc` (pret/agbcc)
- [x] `make compare` matches `checksum.sha1`

## Phase 1: Four Swords on its own (GBA build)
- [x] `make FS_ONLY=1` (default off, `make compare` still matches): mode-table entry 6 points to
      `fs_only_choose_game` (`src/fs_only.c`, linked at `0x08700000`), which calls `start_four_swords`
      (`0x08030E0C`). Checked in mGBA: mode 8 → 6 → 9 in one frame, Four Swords title, link wait.
- [x] Headless mGBA runner (`tools/mgba_run`, built by `tools/mgba_run.sh` on mGBA 0.10.5 from source):
      button script, screenshots, RAM dumps, byte watch. One instance.
- [x] Linked instances in `tools/mgba_run` (`--players 2-4`, mGBA lockstep SIO on one thread, repeatable):
      2 and 4 GBAs reach the Four Swords game together (mode 2 at frame 1438).
- [x] Reachability map (`tools/reach.py`): static call graph from `_start` with the LttP mode handler
      `sub_0800B69C` cut off: 5,411 of 7,780 functions, 828 KB of 1.28 MB code (65%; 99% without the cut).
      Upper bound: eight unlabelled data blobs over 64 KB pass on every pointer-shaped word.
- [x] Coverage (`mgba_run --coverage`, `reach.py --coverage`): executed functions; lower bound. Lobby run:
      657 functions. Finds calls the static map can't see (10 in `rom1.s`, via a function table in RAM).
- [ ] Recording mode in `mgba_run` (window, 2-4 pads), so the user's play becomes coverage and replay tests
- [ ] Coverage runs that play Four Swords (stages, items, enemies, bosses), to grow the lower bound
- [ ] Work queue = static ∪ executed; order by coverage first
- [ ] Split `asm/` by that map into Four Swords, shared engine and LttP files; name shared engine
      functions from `reference/tmc`.

## Phase 2: decompile the reachable set to C
- [x] Per-function layout (`tools/asm_split.py`): each not-yet-decompiled function is
      `asm/non_matching/NAME/FUNC.inc`, included in order from `src/NAME.c` by a top-level `asm(".include")`.
      Decompiling = replacing that line with C. All game asm converted except crt0, syscall, veneers, LttP bee.
- [x] Four Swords game code `0x0803668C`–`0x080668E4` (915 functions) is `-O0` (frame pointer in r7); it is
      `src/fs_game.c`, built without `-O2`. Four `-O2` functions inside it need their own file when decompiled.
- [ ] Executed functions first (`reach.py --coverage ... --list-executed`): 144 of 657 done (fs_game: 41 of 156)
- [ ] fs_game: 152 of 915 done; all code: 1,349 of 7,780 functions in C (6,431 left in asm/non_matching)
- [ ] Disassemble the code still `.INCBIN`: 15 blobs, 34 KB in the code range (rom1 mostly, rom5 m4a ARM
      part); includes ARM code copied to RAM and Thumb code such as `0x08009924` (tmc `ShowNPCDialogue`)
- [ ] m4a: our version sits between pokeruby's (2002, most sizes equal) and tmc's; for the port, pret's m4a C
      can stand in. Matching it is optional.
- [ ] Library code first, where C already exists elsewhere: BIOS calls (`syscall.s`), m4a sound
      driver, EEPROM, link/SIO (tmc and pret decomps).
- [ ] Shared engine code (tmc as reference)
- [ ] Four Swords game code
- [ ] ARM functions and RAM-copied code rewritten in C (matching not required; marked `NONMATCHING`)
- [ ] Shiftable ROM (code can grow or move): every `.INCBIN` region that holds pointers becomes labelled data, so it can link anywhere.
- [ ] Track `NONMATCHING` functions here

## Phase 3: PC host (risk removal before the PS2)
- [ ] `PLATFORM_PC` build with GCC: hardware addresses (`REG_*`, VRAM, OAM, palette) through macros onto
      arrays; fixed-address RAM symbols become a struct per instance.
- [ ] GBA layer: software PPU, timers, DMA, IRQ/VBlank, keypad, EEPROM, m4a output (SDL)
- [ ] One instance boots into Four Swords; frames and RAM match mGBA at the same frames
- [ ] 2–4 instances in one process on an in-memory link hub; reaches the game together, matches linked mGBA

## Phase 4: PS2
- [ ] ps2sdk build (EE GCC), same GBA layer with GS output (one texture per instance, 2 or 4-way split),
      multitap pads, audsrv sound, memory card saves
- [ ] Boots in PCSX2; same state comparison against mGBA
- [ ] Frame-rate budget for 4 instances on the EE (software PPU ×4); move the PPU to the GS if needed
- [ ] Real hardware through Neutrino

## Phase 5: single shared world
Only if the cable carries little more than inputs (check in Phase 1). Each step is checked against the
four-instance build, which stays as the reference and fallback.
- [ ] Audio: one mixer; other instances' sound events feed it
- [ ] Rendering: one PPU pass per player view
- [ ] Simulation once, per-player state as arrays (`FS_SHARED_WORLD`, breaks GBA matching on purpose)

## Open decisions
- Whether to use automatic Thumb-to-C translation for not-yet-decompiled functions, so Phase 3 starts
  before Phase 2 is finished (decomp then replaces it function by function).
