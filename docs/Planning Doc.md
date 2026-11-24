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
- [x] Recording mode: `mgba_run --play DIR --start STATES` (window, GBA 1 on WASD, GBA 2 on arrows), starting
      linked at Choose a Stage from saved states; replays exactly with `--start DIR`
- [ ] Coverage runs that play Four Swords (stages, items, enemies, bosses), to grow the lower bound.
      Session 1 (one stage, 44,522 frames): 1,135 functions executed (705 before)
- [ ] Work queue = static ∪ executed; order by coverage first
- [ ] Split `asm/` by that map into Four Swords, shared engine and LttP files (`tools/classify.sh`, result in `docs/function_classes.txt`: Four Swords needs at most 2,910 functions, 1,780 in asm; 4,820 are A Link to the Past only); name shared engine
      functions from `reference/tmc`.

## Phase 2: decompile the reachable set to C
- [x] Per-function layout (`tools/asm_split.py`): each not-yet-decompiled function is
      `asm/non_matching/NAME/FUNC.inc`, included in order from `src/NAME.c` by a top-level `asm(".include")`.
      Decompiling = replacing that line with C. All game asm converted except crt0, syscall, veneers, LttP bee.
- [x] Four Swords game code `0x0803668C`–`0x080668E4` (915 functions) is `-O0` (frame pointer in r7); it is
      `src/fs_game.c`, built without `-O2`. Four `-O2` functions inside it need their own file when decompiled.
- [ ] Executed functions first (`reach.py --coverage ... --list-executed`): 144 of 657 done (fs_game: 41 of 156)
- [ ] fs_game: 873 of 915 done (6 deferred); all code: 5,754 asm files left in asm/non_matching, of which 119 also have equivalent C under NONMATCHING
- [x] Disassemble the code still `.INCBIN`: 15 blobs, 34 KB in the code range (rom1 mostly, rom5 m4a ARM
      part); includes ARM code copied to RAM and Thumb code such as `0x08009924` (tmc `ShowNPCDialogue`)
- [ ] m4a: our version sits between pokeruby's (2002, most sizes equal) and tmc's; for the port, pret's m4a C
      can stand in. Matching it is optional.
- [x] Mechanical translation (`tools/thumb2c.py`): every remaining asm function as C for the PC/PS2 build,
      replaced function by function as decomp matches. All but 4 ARM files translate (406 trap
      instructions, mostly data decoded as code). Session 1 trace: 1,214 calls identical to mGBA, 4 differ
      (`tools/tr_check.py`, `mgba_run --trace`).
- [x] Draft generator for the -O0 fs_game code (`tools/o0_draft.py`): C drafts from the asm by symbolic execution
- [ ] Library code first, where C already exists elsewhere: BIOS calls (`syscall.s`), m4a sound
      driver, EEPROM, link/SIO (tmc and pret decomps).
- [ ] Shared engine code (tmc as reference)
- [ ] Four Swords game code
- [ ] ARM functions and RAM-copied code rewritten in C (matching not required; marked `NONMATCHING`)
- [ ] Shiftable ROM (code can grow or move): every `.INCBIN` region that holds pointers becomes labelled data, so it can link anywhere.
- [ ] Track `NONMATCHING` functions here
- [x] Mechanical translation of the remaining agbcc asm (`tools/asm2c.py`, `make NONMATCHING=1 AUTO_C=1`, user
      decision 2026-11-18): 5,102 of 5,753 asm functions become C in that build; replay check 604 ok, 14 fail
      (EEPROM, I/O). Linked whole-game screenshots aren't a valid check for moved code (timing).
- [x] Global-state translation for the rest (`tools/gstate2c.py`, include/gstate.h, 2026-11-18): 603 functions run as C
      on one global CPU state; their asm stays assembled as renamed copies, so layout and embedded data hold.
      Of the 5,753 asm functions: 5,010 C-ABI C, 603 global-state C, 112 NONMATCHING C, 28 native
      (ARM code, and 24 that don't decode or jump into code copied to RAM). Replay: 1,325 ok, 24 fail.
- [ ] Remaining fails are the m4a player chain (MPlayMain recursion through callbacks), EEPROM and I/O. The
      m4a mixer, EEPROM, link cable and BIOS calls get a PS2 platform layer (pret m4a as reference).
- [ ] More replay coverage: only ~130 translated functions run in fs_walk; longer recordings.

## Phase 3: PC host (risk removal before the PS2)
- Licence note (2026-11-17): FourSwordsRecomp and its engine GBARecomp (github.com/mstan/gbarecomp) are both
  PolyForm Noncommercial 1.0.0. Their code is not copied into this port; their design docs are a reference
  for the instance timeline, the link hub (DESIGN.md §9), booting straight into Four Swords (§2) and saves.
- [ ] `PLATFORM_PC` build with GCC: hardware addresses (`REG_*`, VRAM, OAM, palette) through macros onto
      arrays; fixed-address RAM symbols become a struct per instance.
- [ ] GBA layer: software PPU, timers, DMA, IRQ/VBlank, keypad, EEPROM, m4a output (SDL)
- [ ] One instance boots into Four Swords; frames and RAM match mGBA at the same frames
- [ ] 2–4 instances in one process on an in-memory link hub; reaches the game together, matches linked mGBA

## Phase 4: PS2
- [ ] ps2sdk build (EE GCC), same GBA layer with GS output (one texture per instance, 2 or 4-way split),
      multitap pads, audsrv sound, memory card saves
- [ ] Boots in PCSX2; same state comparison against mGBA
- [x] Two instances in PCSX2 (threads, memory swapped per frame, side-by-side screens, own saves; 2026-11-23)
- [ ] Frame-rate budget for 4 instances on the EE (software PPU ×4); move the PPU to the GS if needed
- [ ] Real hardware through Neutrino

## Phase 5: single shared world
Requested by the user (2026-11-24): the players share one world, each with a camera into it, instead of four linked
instances exchanging packets. Each step is checked against the four-instance build, which stays as the reference and
fallback. Estimate (4 players, EE cycles per frame, 4.9 M at 60 fps): now 6.5 M (game ×4 with memory switches 3.9 M,
rendering 2.6 M); shared ~3.2-3.8 M (world once ~1 M, per-player parts ×4 ~0.5 M, rendering ~1.7 M with the tiles
uploaded once). Revised as the phase 0 numbers come in.

Phase 0: measure and map (no game changes)
- [x] 1. Time the memory switches (`ps2_tlb_select`) apart from the game code (2026-11-24): the switches are almost
      all of it, about 0.9 M per instance per frame (387 KB out and in, ~1.15 cycles a byte); the game code itself
      was 30-300 K per instance in the scenes measured (lobby, file select, an idle stage). Revised estimate: the
      shared world's speed-up comes from dropping the switches; cheaper switches alone would also reach 60 fps
      (4 players: 2.6 M rendering + ~0.35 M game). Still to measure: game code in a busy 4-player stage.
- [x] 2. Log and decode the link packet (12 halfwords per player per frame): does it carry little more than inputs?
      Yes (2026-11-24, 2-player replay: lobby, stage choice, stage, pause). Per player per frame: a frame counter
      and status byte, a checksum, then the 20 data bytes of `gUnknown_03000FD0`: a scene byte (0x20/0x21/0x40/0x50/
      0x150), the keys 5 times (the last 5 frames' keys, as a resend), a frame counter, 6 bytes always zero. Nothing
      about the world crosses the cable: every GBA simulates it from the inputs alone. Not yet seen: shop, results,
      item choice, a 4-player stage.
- [x] 3. Diff the instances' memory at the same frame: what differs is per-player state (2026-11-24, 2 players,
      frames 1400 lobby, 3000 and 4000 stage). 12-13 KB of the 480 KB differ, in 31 of 120 4 KB pages:
      - EWRAM ~10 KB: `gUnknown_0203A000`+0x2200 (~6 KB, a BG map buffer around the camera, it seems), the save
        data at 0x02001C00-0x02003090 (each player has their own file), `gTextbox`, `gUnknown_0202A5E0`,
        `gUnknown_0202D250`/`0202DA50` (per-player 28/43-byte records), `gUnknown_02030790` (link state)
      - IWRAM ~0.7 KB: `gLCDRegisterBuffer` (scroll), `gUnknown_03005E60` and `gUnknown_03006226` (~300 bytes each,
        an OAM buffer?), a few entity bytes
      - VRAM ~4.4 KB: BG maps at 0x0600C000-0x0600FFFF, 64 bytes of tiles at 0x06004000/0x06005000; OAM 35 bytes
      - The same everywhere: palettes, all sprite tiles, the world (entities, room data)
      Naming each block is Phase 1 step 5's job.
- [x] 4. Find every read of the player's own number (2026-11-24). `sub_080369B4` reads SIOCNT's ID bits once
      (when linking) into the byte at 0x03000414 (`gLCDRegisterBuffer`, misnamed: it's the player number), and
      `sub_080381A8` points `gUnknown_03006730` at the player's record (`&gUnknown_03006A30[id]`). Reads in
      mGBA over session 1 (44,522 frames: lobby, one whole stage, back to Choose a Stage), `mgba_run --reads`:
      - the number, 18 functions: "is it mine?" checks on entities and sounds (`sub_0800D1C0`, `sub_08042DB0`,
        `sub_0805BF9C`, `sub_0803719C`, `sub_08052C0C`), per-player array indexes (`gUnknown_03000940[id]` keys,
        `gUnknown_03005E10[id]`, `gUnknown_0200B1D0[id]` link ring, `gUnknown_03006A30[id]`), the HUD/menus
        (`sub_08030314`, `sub_08037574`, `sub_08052CE4`, file select `sub_080128EC`/`sub_08012BE4`/`sub_0802CD3C`/
        `sub_0802CFBC`), and `sub_0800DBE0`, `sub_0800E1D4`, `sub_0800E324`, `sub_080381A8`, `sub_0803883C`,
        `sub_08055A08`
      - the record pointer, 5 functions: `sub_0802C89C`, `sub_0802CF70`, `sub_0802CFBC`, `sub_0802D190`,
        `sub_0805792C`
      Not covered: ARM-mode code (IWRAM copies), Thumb code run from RAM, copies of the number into other
      variables (entities' `form` holds a player number but is compared, not copied, in the sites seen), and scenes
      session 1 doesn't reach (other stages, bosses, results, shop).

Phase 1: the world runs once (`FS_SHARED_WORLD`, breaks GBA matching on purpose)
- [ ] 5. Split the frame: world update once, then per player with only that player's state block swapped in.
      **Tabled (user, 2026-11-24)**: the plan below is ready; pick it up from 5a.
      Why it's safe: the cable carries only inputs and real GBAs stay in sync, so nothing that differs between
      players can feed back into the world. The ~13 KB that differs (step 3) is the per-player state; code that
      writes only those bytes is the view part and can run once per player after the world update.
      Main loop now (`src/main.c`): `rom2_read_keys` (per player), `sub_0800C54C`/`sub_08036864`/`sub_080368A0`
      (link: go away), `gUnknown_0842731C[gMainState]()` (the game: world mixed with camera, HUD, "mine?" checks),
      then `sub_0800D788`, `sub_0800C118`, `sub_0802C940`, `sub_0800B524` (roles unknown, probably mostly per
      player).
  - [x] 5a (2026-11-24, walkthrough Step 43). In session 1's stage 14.9 KB differ (IWRAM stack excluded): profile
        area 0x02000000-0x02003000 8.5 KB, sound engine 0x0202E1E4-0x02032100 4.4 KB, 0x0202D000-0x0202E1E4 0.7 KB,
        OAM buffers (?) 0x03005E60-0x03006450 0.65 KB, entities 62 bytes, the rest ~0.5 KB. Writers by area:
        `docs/shared_world/per_player_writers.txt` (10 profile, 13 0x0202D/E, 39 sound, 72 entity, 5 OAM-buffer, 76 other
        functions; entity and other lists include file-select code from before the stage).
    (The plan for 5a was: who writes the per-player bytes: a write watch (like `mgba_run --reads`) over step 3's ranges on the
        session 1 replay gives the view functions and their callers. More memory diffs across session 1 (other
        rooms, menus, the stage's end) to complete the 13 KB list.)
  - [ ] 5b, first pass (2026-11-24, walkthrough Step 44). Kinds of per-player state found:
        1. View-only entities: object 16 (`sub_08052B88`), the other players' off-screen arrows; form 0 computes
           directions from this player's camera (`sub_08052CE4`), `sub_08052C0C` creates one arrow per other player.
           Shared world: one set per player, in the per-player pass.
        2. Drawing attributes stored in shared entities: +0x50 low bits = 0x0E on the local player's Link only (the
           camera setup writes 14 into the followed entity, file_select.c; other Links 0), +0x18 (object 65), +0x1F
           (manager 9). Shared world: worked out at draw time per player (e.g. "is this the viewer's Link").
        3. World events with a "mine?" check: object 65 (`sub_0805BF9C`, a pickup) adds to the collector's own
           counter (`sub_0800D67C`, profile area) only on the collector's GBA. Shared world: index the profile by the
           collector (`e->form`) instead.
        4. Save data 0x02000000-0x02003000 (8.5 KB): each player's own file as loaded (A Link to the Past's
           inventory symbols `gBow`... sit at 0x02002320; `gPaletteBuf1` at 0x02000030). Static during play except
           events (kind 3). Shared world: per-player copies.
        5. Sound (4.4 KB): per player until the one mixer (Phase 3); the PS2 has no sound yet.
        6. View state: camera struct `gUnknown_03000450`, OAM buffers (0x03005E60-0x03006450), HUD/text
           (0x0202D000-0x0202E1E4), BG ring buffers.
        Entity lists are always the same length on every GBA (707 comparisons), so entity slots stay in step.
        Drawing is per entity right after its update (`UpdateAllEntities` calls the draw routine `sub_080008A8`
        after each handler), so the per-player pass can be a draw-only walk of the lists with each camera.
        The stage frame (`sub_08038A30`, main state 2 / `gUnknown_08427BCC[9]`) in order: input and timers, world
        update `UpdateAllEntities` (each entity's handler, then its draw `sub_080008A8`), `sub_08014900`, camera
        `sub_08015D9C` (dispatch on `gUnknown_03000450.unk6`; `sub_08008B4A`/`sub_08008C02` follow the entity),
        `sub_08015C64`, `sub_08013A60`, BG streaming `sub_08008ED8`, HUD `sub_0802CD3C`, `sub_08000434`, `sub_0803F284`,
        `sub_08052A88` (writes the arrow objects), sprite-list finish `sub_08000BAC`, `sub_0802BFC4`, end checks,
        random seed saved, `sub_08037574` (reads the player number). Then the main loop's `sub_0800D788` (text),
        `sub_0800C118`, `sub_0802C940` (BG0 buffer swap), `sub_0800B524` (flip: swaps the two OAM buffers at
        0x03005E60/0x03006260, copies the video registers).
        Draft view pass for players 1-3 (5c): camera `sub_08015D9C`; a draw-only walk of the entity lists
        (`sub_080008A8` per entity, with kind-2 attributes for the viewer); the arrow objects; HUD `sub_0802CD3C`;
        `sub_08000BAC`; then text and the flip. BG streaming isn't needed with the GS renderer's room drawing (it
        draws from the room data at the viewer's camera). To confirm for each: that it writes only per-player bytes
        (the write watch per function), and which of `sub_08014900`, `sub_08015C64`, `sub_08013A60`, `sub_08000434`,
        `sub_0803F284`, `sub_0802BFC4` are world and which view.
        Measured (`mgba_run --bracket`, memory diffed around each call incl. callees, session 1 frames 1800-12000,
        every 10th; blocks 0x02030700-0x020309FF and 0x03000B00 change under nearly every function: interrupt-time
        link/sound state, ignored): view (per-player bytes, or the camera struct / video-register buffer at
        0x03000400 / sprite data 0x03000900, 0x03005C00): `sub_08015D9C`, `sub_08008ED8`, `sub_0802CD3C`,
        `sub_08000BAC`, `sub_0800D788`, `sub_0802C940`, `sub_0800B524`; link (goes away): `sub_0800C54C`,
        `sub_08037574` (0x03000F00), `sub_080368A0`, `sub_08036864`; nothing outside the noise: `sub_08014900`,
        `sub_08013A60`, `sub_0803F284`, `sub_08052A88`, `sub_0802BFC4`; to identify: `sub_08015C64` (0x02002400-0x0200247F,
        just below `gPaletteBuf1Bitmask`), `sub_08000434` (0x03005000), `sub_0802B74C` (0x0202A700), `sub_0800C118`
        (0x02000000-0x020004FF, around `gPaletteBuf1`). Per-player bytes per stage frame: 21.6, of which 21.0 from
        `sub_08000BAC`.
        The four left: `sub_08015C64` steps 8 tile-animation timers at `gUnknown_02002440` and loads the next tiles
        (shared, once); `sub_08000434` runs the IWRAM `sub_080007C4` and `sub_0803A320` (world, 0x03005000);
        `sub_0802B74C` runs `gUnknown_0813D678[]`, e.g. `sub_0802B778`, a spawner that picks a random player (world);
        `sub_0800C118` runs a queued effect on the palette buffer, identical on every GBA (shared, once).
        The entity draw routine (`sub_080008A8`, ARM at 0x03005AE0; `--bracket` now sees ARM and RAM code too):
        4,200 calls, 0.1 bytes changed per call (0x03005000-0x030051FF), no per-player bytes: it queues the entity
        in a shared draw list; `sub_08000BAC` builds each player's sprite list from it with the camera.
        **5b result / 5c design (overlay):** instance 0 runs the whole frame as now (world + player 0's view). For
        each other player, an overlay of the per-player bytes (the `--perplayer` map's 14.9 KB, plus the VRAM BG maps
        0x0600C000-0x0600FFFF and OAM) is swapped in, the player number byte set, and the view pass run: camera
        `sub_08015D9C`, the arrow objects' handlers (object 16), HUD `sub_0802CD3C`, `sub_08000BAC`, text
        `sub_0800D788`, `sub_0802C940`, the flip `sub_0800B524` and the VBlank copies; then drawn and swapped out.
        Kind 2 (the local-Link mark +0x50) comes with the overlay. Kind 3 needs a port patch: a pickup collected by
        player n > 0 adds to n's overlay (`sub_0805BF9C` / `sub_0800D67C`). The overlay map comes from mGBA
        (session 1) and is fixed into the build; scenes it doesn't cover may need more.
        Still to sort: the remaining step 4 readers and the profile, HUD and "other" writers in
        `docs/shared_world/per_player_writers.txt`.
  - [ ] 5b. Sort each per-player function and the ~23 from step 4: view only (camera, BG map streaming, OAM,
        HUD, text, own sound: moves to the per-player pass); world code with a "mine?" check (e.g. `sub_08042DB0`:
        the check moves to the view pass if it only affects drawing, else the flag becomes per player); arrays
        already indexed by player (keys, link ring, `gUnknown_03006A30[id]`: shared as they are). (~1 session)
  - [ ] 5c, first version (2026-11-24, walkthrough Step 46): `make -f Makefile.ps2 SHARED_WORLD=1` (off by default),
        `src/ps2/shared.c`. Works in a stage: player 0's screen is pixel-identical to the separate-instance build at
        every check frame; the game's share for two players is 0.51 M cycles a frame (1.84 M separate), with no memory
        switches. Player 1's screen is right while nobody pauses; still wrong: the pause (each GBA decides menu or
        "Pn PAUSE!" bar inside the stage frame, which only player 0 runs: `gUnknown_03000E20` +0x11, the pause UI at
        0x0201EF18, text and its glyph tiles at VRAM 0x06005400+), the camera's fields past +0x27, a few entity bytes,
        and the sprite list (5 extra shadow sprites: the draw walk queues entities the real frame doesn't). Next: make
        the stage frame's per-player branches (pause, its text) run in the view pass, and replace the draw walk with
        the entities that really reached `sub_08003688` this frame.
  - [x] 5c, pause and sprites (2026-11-24, walkthrough Step 47): both players' screens identical to the separate build
        at all 34 check frames of the 2-player replay (two pauses, an unpause), `SHARED_CHECK` clean, no TLB misses;
        game share 0.39 M cycles a frame for two players (1.84 M separate). Left: player 1's memory still differs in
        ~45 bytes that don't reach the screen (link packet bytes at 0x020305EF..., 0x03000490, 0x03001FF2,
        0x03006C70/0x03006EF8/0x03006F0C); 4 players untested (players 3-4 have no recorded input); other stages,
        bosses and the results screen untested; the pickup patch (kind 3).
  - [x] 5c, four players (2026-11-24, walkthrough Step 48): `INSTANCES=4 SHARED_WORLD=1` runs a stage with four
        screens at 60 fps (render 2.67 M + game 0.58 M cycles of 4.9 M; separate instances ran at 30). Players 3-4
        replay player 2's script for now (copies of `replay_p2.inputs`; real inputs later). Not checked pixel for
        pixel against the separate build: the copied scripts don't keep the two builds in step.
  - [ ] 5c, as planned: Port, under `FS_SHARED_WORLD`: one world block plus a ~13 KB overlay per player, swapped by
        `ps2_tlb_select`. Frame: player 0 runs the whole frame as now; players 1-3 get their overlay, the player
        number byte (0x03000414) and only the view functions from 5b. Keys straight into the arrays the link
        fills (step 6). Player 0's frame stays identical to today's, so mistakes show as wrong screens for
        players 1-3, not a broken world. (5c+5d: 2-3 sessions)
  - [ ] 5d. = step 7: world memory against instance 0, each overlay against instance i, each screen pixel for
        pixel (the GS readback check); the first mismatching byte points at the code.
      Risks: view code deep inside an entity's update (5a shows how much); a view function that also writes world
      bytes would update the world twice (the write watch flags functions writing both kinds); session 1 covers one
      stage only. Expected first result: switches from ~0.9 M to ~0.05 M cycles per player, enough for 4 players at
      60 fps on the step 1 numbers.
- [ ] 6. Inputs straight from a shared array in place of the link exchange
- [ ] 7. Check each screen and the world memory against the four-instance build, same scripted inputs

Phase 2: rendering from shared graphics
- [ ] 8. Tiles and palettes uploaded once a frame
- [ ] 9. Per camera only what differs: BG maps, scroll, OAM, windows, fades

Phase 3: audio
- [ ] 10. One mixer fed by the shared world

## Wider view (the DSi's resolution change, user priority 2 of the FSAE features)
`WIDE_VIEW` (walkthrough Step 30) draws more of the unchanged game: it shows the 32-tile background ring repeating
and stale tiles, because the game streams only a 256x192 window of the room. What's known (2026-11-24, Step 39):
- The game keeps the whole room in EWRAM, identical for every player: the two metatile layers (63x63 at
  0x0201F024 top, 0x0200B324 bottom) and a room-wide tile map (128x128 tiles at 0x02016D90; the second layer's at
  0x020231D0 overlaps other data outside the room).
- The full redraw (`sub_08008FA4`, ARM, run from IWRAM through `sub_08008ED8`, Four Swords' `UpdateScrollVram`)
  copies 32x24 tiles of the room tile map into a 32x32 ring. The DSi's copy of it (0x0207F7A0) copies 64x32 into a
  64x32 map (512x256), without the one-tile margin; with the camera centred on 128/96.
- [x] Route (b) chosen (user, 2026-11-24). Step 1 done (walkthrough Step 40): `WIDE_VIEW=1 GS_RENDER=1` draws BG1/BG2
      from the room data across the whole view, the GBA screen in the middle matching the GBA exactly
- [ ] Step 2: sprites outside the GBA screen (the game's culling and 9-bit OAM x: a port-side sprite list)
- [ ] Step 3: camera centred on the bigger view and clamped to the room; step 4: HUD placement; step 5: windows
- [ ] Cost: two 640x240 views take 3.35 M cycles to draw (240x160: 1.2 M)
- [ ] Two routes: (a) as the DSi: 64x32 background maps (GBA BGCNT size 1, fine up to 320x240), a 64x32 redraw,
      and the row/column scroll updates (`sub_080090A0`, `sub_08009106`?) and their DSi versions widened to match;
      (b) the PS2 renderer draws the backgrounds straight from the room data at any size (needed beyond 512 wide,
      e.g. 640x240), leaving the game's ring alone
- [ ] Either way: the camera centre and limits, sprite culling, and the HUD for the bigger view; the DSi code for
      those is still to find
- [x] The GS renderer with `WIDE_VIEW` (Step 40)

## Medium priority: more than 4 players
Requested by the user (2026-11-16). After Phase 4 works with 4 players.
- [x] Find every 4-player limit (survey 2026-11-24, walkthrough Step 51):
      - **Arrays of four**, all packed against their neighbours (none can grow in place): the player records
        `gUnknown_03006A30[4]` (0x90 each, ends at `gUnknown_03006C70`), keys held `gUnknown_03000940[4]` and newly
        pressed `gUnknown_03005E10[4]`, the link key ring `gUnknown_0200B1D0[4][16]` (ends at 0x0200B250), the packets
        `gUnknown_03000FC0.unk38[4]`, and inside `gUnknown_03006C80`: `unkC`, `unk28` (by `Entity.form`), `unk54`-`unk68`,
        `unk70` (by `Entity.unk18`); `Struct...unkD8[4][8]`/`unk8[4]` (types.h 750).
      - **Code:** 20 loops `i <= 3`/`i < 4` (fs_game.c 14, file_select.c 5, rom2.c 1); unrolled four-way checks
        (`sub_0803781C`, `sub_080378F4`, `sub_080379BC`, `sub_08037A94`, `sub_08037B5C`, the `sub_08038A30`
        start-button checks); player masks `& 15`/`gUnknown_03000BF0` bits 0-3 (`sub_08037B5C`). Users of the arrays:
        about 130 functions for `gUnknown_03006A30`, 115 for `gUnknown_03006C80`, 20-30 each for the key arrays and
        `gLCDRegisterBuffer` (the player number). Correction (same day): about 186 of these functions are still asm
        only (plain `asm(".include")`, run as gstate translations that read the addresses from the ROM's literal
        pools): file_select.c 109, game_select.c 40, rom2a.c 20, fs_game.c 16, rom_0800D4F0.c 1. Moving an array by
        linker symbol doesn't reach them.
      - **Player number:** `Entity.form` and `Entity.unk18` are full bytes (no 2-bit fields found in the headers);
        the player byte 0x03000414 is a byte. Masks `& 3` on them still need checking function by function.
      - **Link protocol:** the PS2 port does the exchange itself (`ps2_link_exchange`), so 8 packets are a port change;
        the game's packet code (`sub_08037574`, `sub_080368A0`) loops over four.
      - **Room to grow:** the EWRAM mirror at 0x02040000 (tlb.c maps it to the same 256 KB as 0x02000000) can get
        its own memory: 256 KB at a GBA address for 8-player copies of these arrays (or a new region of its own
        at an unused address, one line in tlb.c's region table).
- [ ] Data that comes in four (Link colours, palettes, HUD slots, spawn points, item/rupee splits)
      Link colours (2026-11-24, walkthrough Step 45): exactly four in the ROM (green, red, blue, purple at
      0x0844DD74-0x0844DDF3, the palette base; a copy at 0x0844DED4), sprite palettes 7-10 in a stage. All share
      entries 1-2 and 8-15 (skin, hair, outline); entries 3-5 are the tunic, 6 a shared blue, 7 an accent. No unused
      fifth colour: the only near-variant (0x0844F7D4, green with a pink entry 2 and orange entry 7) is loaded into
      Link 1's slot by palette group 17 and overwritten by the same group's next record. Players 5+ need new colours
      on the template (entries 3-7), and all 16 sprite palettes are in use in a stage: the GS renderer can give an
      extra player's Link its own CLUT at draw time instead of a GBA palette slot.
- [ ] Input beyond 4 pads on the PS2 (two multitaps give 8) and a screen layout for 5+ views
      Layout done (2026-11-24, walkthrough Step 49): `SCREENS=8` (GS renderer), a 3x3 grid of 426x240 cells at
      1280x720, centre black; with `WIDE_VIEW=1` each view is the cell at 1:1 (426x240 of the world, pixel for pixel;
      Step 50). Until there are more players, screens 5-8 repeat players 1-4. Cost with 4 players, shared world:
      render 11.4 M + game 0.58 M cycles (about 20 fps; 6.77 M at the first version's 284x160 views).
- [ ] Players 5+ in a stage: lift the 4-player limits above (shared world); white Link palette for 5+ (GS CLUT at
      draw time); pack the saved blocks at 512 KB (eight 1 MB blocks don't fit in 32 MB)
- [ ] Easier in the Phase 5 shared world (per-player arrays sized by a constant) than with linked instances

## Open decisions
- Decided (2026-11-16): automatic Thumb-to-C translation for the not-yet-decompiled functions, so Phase 3
  starts now; decomp replaces it function by function.
- Host memory model: translated code keeps GBA addresses in u32 registers, so it needs a 32-bit host
  (PS2 EE; PC with -m32) where symbols are host addresses and GBA ranges (0x02000000+) are mapped by
  GBA_PTR, or the GBA-address-space model of tr_check (all memory in arrays at GBA addresses).
