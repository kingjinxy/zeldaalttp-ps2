# Four Swords PS2 port — planning doc

## Phase 0: tooling
- [x] Install `arm-none-eabi` binutils, libpng, mGBA
- [x] Build `tools/agbcc` (pret/agbcc)
- [x] `make compare` matches `checksum.sha1`

## Phase 1: boot straight into Four Swords (GBA build)
- [ ] Map the Four Swords code range and the shared engine code (game modes: `0x03006D10`, setter
      `0x0800B5EC`, `start_four_swords` `0x08030E0C`, per `reference/FourSwordsRecomp/CLAUDE.md`)
- [ ] Boot patch that skips the game select and starts Four Swords, behind a build flag so `make compare` still matches
- [ ] Name shared engine functions from `reference/tmc`

## Phase 2: decompile Four Swords to C
- [ ] Shared engine code (tmc as reference)
- [ ] Four Swords game code
- [ ] Track `NONMATCHING` functions here

## Phase 3: PC/PS2 host
- [ ] GBA hardware layer (PPU, sound, timers, DMA, save) for the decompiled C
- [ ] Several game instances in one process, link cable replaced by shared memory
- [ ] Split-screen output on the PS2 GS; compare state and frames against linked mGBA instances
