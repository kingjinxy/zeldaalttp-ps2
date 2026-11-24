# Running walkthrough

## Step 1: project setup (2026-11-15)

- Copied the USA ROM as `baserom.gba` (SHA-1 matches `checksum.sha1`), EU and JP as `baserom_eu.gba` and
  `baserom_jp.gba` (reference only; all ignored by `*.gba`).
- Cloned `zeldaret/tmc` and `Jyhsus/FourSwordsRecomp` into `reference/`, excluded in `.git/info/exclude`.
- State of the decomp: about 305 functions in C, about 7,430 still in `asm/`, about 4.9 MB of data still
  `.INCBIN` from the base ROM. Not yet built: agbcc and binutils missing.
- Adapted the agent rules from `../tp-ps2/CLAUDE.md` into `CLAUDE.md`; copied `archive_conversation.py`.

## Step 2: matching build (2026-11-15)

- User installed `binutils-arm-none-eabi`, `libpng-dev`, `pkg-config`, `mgba-qt`.
- Built pret/agbcc (cloned to `reference/agbcc`), installed into `tools/agbcc` with its `install.sh`.
- First `make compare` failed at link with ~100 undefined symbols. Cause: the Makefile's `CPP` is
  `$(DEVKITARM)/bin/arm-none-eabi-cpp`, which Debian's binutils package doesn't have; the
  `cpp | agbcc` pipe hid the error, so every C file compiled to an empty `.s`.
- Fix: `CPP` falls back to the host `cpp` without devkitARM, and `SHELL := /bin/bash -o pipefail`
  so a failing pipe stops the build. `make compare` now prints `zeldaalttp.gba: OK`.

## Step 3: boot straight into Four Swords, headless mGBA runner (2026-11-15)

- `tools/mgba_run`: mGBA 0.10.5 built from source as a static library in `reference/mgba` (the Debian
  mgba-qt 0.10 can't load scripts from the command line, and no dev package was installed). Runs a ROM
  with a button script, writes PNGs and RAM dumps at chosen frames, prints a byte when it changes.
  3,000 frames take 3 s.
- Normal ROM, mashing A/Start with an empty save: mode `0x03006D10` 0 → 8 (file select, frame 324) →
  6 (CHOOSE A GAME, 838) → 13 (LttP, 938; the cursor starts on LttP).
- First `FS_ONLY` try put an early `return` into `sub_0803074C`: white screen, mode stuck at 0. The
  extra bytes moved all later code, and the `.INCBIN` data still holds fixed code addresses. The ROM is
  not shiftable yet (now a Phase 2 item).
- Working version: mode-table entry 6 (`gUnknown_0842731C` in `src/main.c`) points to
  `fs_only_choose_game` in `src/fs_only.c`, which the ldscript places at `0x08700000`, past the end of
  the ROM's data (`0x08645BE5`). Nothing else moves. Trace: 8 → 6 (frame 838) → 9 (839), then the Four
  Swords title and "Linking with other systems…". `make compare` still matches.
- Makefile: `FS_ONLY=1` adds `-DFS_ONLY`; `.cppflags` records the flags so switching rebuilds the C.

## Step 4: linked GBAs in the mGBA runner (2026-11-15)

- `tools/mgba_run --players N` (1-4) links GBAs with mGBA 0.10.5's lockstep SIO driver. The host callbacks
  are a C port of mgba-qt's `MultiplayerController.cpp`.
- First version ran each GBA on its own `mCoreThread`, as mgba-qt does. Problems on the way:
  - Crash in `GBASIOLockstepNodeUnload` from `GBAReset`: the driver was attached before the first reset,
    which unloads it. Attach after the reset.
  - Threads exited at frame 0 / hung: the runner was compiled without the library's feature defines
    (`ENABLE_SCRIPTING`, `USE_DEBUGGERS`, ...) and `NDEBUG`, which change `mCoreThread` and lockstep struct
    layouts. `tools/mgba_run.sh` now force-includes `build/include/mgba/flags.h` and sets `-DNDEBUG`.
  - Then it linked, but RAM after 6,000 frames differed on every run, and 1 run in 5 segfaulted: thread
    scheduling decides where link transfers land. Not usable as a reference.
- Final version: no threads. All GBAs run on one thread in a fixed order, one `core->runLoop` each,
  skipping GBAs the link has put to wait (mgba-qt only parks a thread between `runLoop` calls, so this is
  the same logic in a fixed order). Five runs: identical RAM, no crashes.
- Result with `FS_ONLY` and A/Start mashing: 2 and 4 GBAs go 8 → 6 → 9 → 5 (frame 1288) → 2 (1438, in game)
  on the same frames; 4 Links on screen; "P1 PAUSE!" on the other GBAs when GBA 1 pauses. FourSwordsRecomp
  needed a link timing override (its DESIGN.md §9); mGBA 0.10.5 did not.
- 2 GBAs × 6,000 frames: 5.4 s. 4 GBAs × 3,000 frames: 6.5 s.

## Step 5: reachability map and coverage (2026-11-15)

- `tools/reach.py`: call graph from the linked ELF. Edges: Thumb/ARM `BL`, and every aligned word in a
  function (literal pools, jump tables) that points at a function or ROM data; a data object (one data
  symbol to the next) passes on every pointer it holds. LttP cut: the mode-13 handler `sub_0800B69C`.
  - First result had `AgbMain` unreachable: `_start` and other ARM routines are untyped global labels, not
    `FUNC` symbols. Counted as functions now.
  - Result: 5,411 of 7,780 functions (65% of code bytes) with LttP cut, 99% without. Still includes LttP
    sprites: `--why` showed the path runs through `gUnknown_0854F7E8`, a 990 KB `.INCBIN` blob. Eight
    blobs over 64 KB; until they're split into labelled data, the static map is an upper bound.
- `mgba_run --coverage FILE`: bitmap of executed ROM halfwords. Getting the same run as without it took
  three tries: `core->step` per instruction stalled the link at the lobby (step runs one more instruction
  after an event put the GBA to wait); processing events separately linked but gave different RAM (GBAs
  interleaved per instruction instead of per event slice). Final: `ARMRunLoop` re-implemented with
  `core->step` inside the slice; same RAM as a normal run, 3,000 frames × 2 GBAs in 3.5 s.
- Lobby run (2 GBAs, mashing to the pause menu): 657 functions executed. 10 of them (`rom1.s`,
  `0x080074D4`–`0x08008EFC`) aren't in the static map: called via `ldr r1, [sl, #0x2c]`, a function table
  in RAM whose entries don't appear as words in the ROM.

## Step 6: per-function decomp layout, -O0 Four Swords code (2026-11-15)

- `tools/asm_split.py asm/X.s NAME`: one `.inc` per function in `asm/non_matching/NAME/`, included from
  `src/NAME.c` by top-level `asm(".include ...")` lines (checked first: agbcc keeps top-level asm in source
  order between C functions). Top-level asm instead of tmc's `NAKED` functions means no C declarations for
  undecompiled functions, so nothing clashes with header prototypes. Where `src/NAME.c` already existed
  directly before `asm/X.o` in the ldscript, the includes are appended to it. All chunks stay one assembly
  unit, so labels shared between functions still work. `make compare` matches; `FS_ONLY` ROM unchanged.
- Makefile: `src/%.o` depends on `asm/non_matching/%/*.inc` (`.SECONDEXPANSION`), as `SCANINC` isn't in
  this repo.
- Prologues show two compiler settings: `-O2` everywhere except `0x0803668C`–`0x080668E4`, where functions
  start `push {r7, lr}; mov r7, sp` (agbcc without `-O2`; checked by compiling). That region holds the
  mode 1 and 2 handlers (Four Swords game). Moved to `src/fs_game.c` (915 functions), built without `-O2`.
  Four functions inside it are `-O2` (`sub_08039288`, `sub_0803E518`, `sub_0804721C`, `sub_0804BD9C`).
- First decompiled functions, all matching: `sub_08036760`, `sub_080368C0` (fs_game, -O0),
  `sub_08011408` (file_select, -O2).

## Step 7: first decomp batches (2026-11-15)

- 122 fs_game functions matching, plus `sub_08011408` (file_select). 99 of them are entity dispatchers
  (`table[this->field](this)`) generated from one exact template; the rest by hand.
- Helpers: `tools/declare.py` turns the `//extern gUnknown_X;` / `//sub_X();` placeholders in
  `variables.h`/`functions.h` into declarations; `tools/first_diff.py` names the symbol at the first
  differing byte. When code size changes, the first `sub_XXXXXXXX` no longer at its own address (names
  encode the original address) points at the function that grew or shrank.
- -O0 idioms seen so far: a byte cleared with `ldrb; and #0; strb` is an 8-bit bitfield write
  (`u8 x : 8`); `add r0, r1, #4` before a store is `p[1]` on a `u32 *`, not a struct field;
  `CpuSet` with control `0x01000000`/`0x05000000` bits is `CpuFill16`/`CpuFill32`.
- Left for later: `sub_08059A44` writes `gUnknown_03000520` fields as bitfields, but that struct is shared
  with -O2 C code; needs checking that a bitfield doesn't change those matches.
- Remaining: 532 of the executed functions (120 in fs_game), 7,271 asm functions overall.
- Batch 3: 5 more (fs_game 127 of 915). `struct Entity;`/`struct Manager;` are now forward-declared in
  `types.h`: without it, each `struct Entity *` in `variables.h` was a new type scoped to that parameter
  list (agbcc warned "incompatible pointer type"). `struct Manager` (entity.h) for `DoManagerEntity`.
  Skipped: `sub_0803F550` calls a bare address (`bl 0x0800238C`) with no symbol.

## Step 8: tmc matching and code-shape groups (2026-11-15)

- `tools/tmc_match.py`: compiles all 619 tmc C files with our agbcc (all compile) and compares function
  code with BL targets and pc-relative literal words masked. 678 matches, but only 20 of 32+ bytes: the
  engine code diverged. Real matches are library code (m4a sound driver, EEPROM, one save checksum) and a
  few tiny helpers. The call/literal pairs name some of our functions: `0x08003594` GravityUpdate,
  `0x0803CC20` ProcessMovement2, `0x08009924` ShowNPCDialogue.
- m4a: our function sizes line up with pokeruby's m4a.c (2002) better than tmc's (2004), but neither
  fully; Four Swords has an in-between version. Left in asm; the port can use pret's m4a C.
- 543 empty functions (`bx lr`) and 99 -O2 entity dispatchers decompiled from templates.
- `tools/clusters.py` groups remaining functions by masked code; `tools/cluster_fill.py` fills one C
  template per group with each member's callees and literals. 193 functions from 6 groups. Lessons:
  agbcc folds `&gRam + const` into one literal unless it's a struct field access (`gRam.unk1052[a]`), so
  `gRam` arrays got split to the offsets the code uses; a `u8` field read must stay `ldrb` (cast `(u8)`
  for the `s8` field `unk1062`).
- Found 34 KB of code still raw `.INCBIN` (15 blobs, mostly rom1), including tmc's `ShowNPCDialogue` at
  `0x08009924`; 28 template-ready callers wait for it to be disassembled.
- Totals: 1,349 of 7,780 functions in C; 513 of the 657 executed functions left (115 in fs_game).

## Step 9: disassembling the code that was still .INCBIN (2026-11-15)

- `tools/disasm_blob.py INC [--arm]`: entry points from the blob start, BLs anywhere in the ROM, and odd
  (Thumb) pointers anywhere in the ROM, including data tables; recursive descent marks code, literals and
  switch tables; objdump's instructions in unified syntax; the result is linked at its ROM address and
  compared byte for byte, and any instruction that doesn't reproduce becomes a raw .2byte/.4byte. One .inc
  per entry point.
- Problems on the way: `THUMB_FUNC_START` aligns to 4, but this hand-written code has functions on 2-byte
  boundaries (new `THUMB_FUNC_START_NOALIGN` macro); a switch table of odd pointers needed `label+1`;
  the blob start sometimes already had a label; a blob in the middle of a file needs the text after it
  moved behind the new chunks; and the original rom1 asm switches to `.syntax unified` at
  `0x080007C4` for good, so the closing `.syntax` must restore the mode in effect, not assume divided.
- Result: all 15 blobs (34 KB) disassembled, 249 new functions, `make compare` matches. The ARM IWRAM
  code at `0x08008FA4` and the m4a block at `0x081339C4` included. `ShowNPCDialogue` is now
  `sub_08009924`.

## Step 10: hand-decompiling executed Four Swords functions (2026-11-15)

- 17 more fs_game functions by hand, all matching on the first or second try. fs_game executed left: 98;
  fs_game left: 746; all asm left: 6635.
- Entity reshaped from what the -O0 code accesses: `x`/`y`/`z` at 0x30/0x34/0x38 as tmc's
  `union SplitWord` (the earlier `unk32` was `x.HALF.HI`), `unkC` (s32), `unk18`, `unk1E` nibbles,
  `unk50`, `unk52`, `unk54` (Entity *), `unk5E`. The 2-bit field at 0x1C needs a `u32` container:
  agbcc reads u32 bitfields with `lsl #30; lsr #30`, u8 ones with `and #3` plus a u8 truncation.
- `gUnknown_02016D60` is an overlay area: the menu code reads s16 values at +0x20, Four Swords a pointer.
  Four Swords uses an ldscript alias, `gUnknown_02016D60_fs`, with its own struct.
- Found: the Makefile didn't rebuild C files when a header changed (no SCANINC), so a header edit could
  leave a stale object and hide a mismatch. Every C object now depends on all headers.
- (2026-11-16) Batches 62-66, 33 more fs_game functions. When a byte or halfword field at a large offset
  is written with the bitfield pattern but the shared `Entity` layout can't change yet (0x60, 0x6E, 0x76),
  a cast to `struct { u8 pad[N]; u16 v : 16; } *` gives the original's `add rX, rY, #0` field pattern, where
  a `struct BitU16 *` built from an address doesn't. A pointer plus an offset added without scaling is
  `&((u8 *)p)[off]`. Named `Struct03006C80.unk6`/`unk8` (stage and score thresholds 999/2999/4999) and
  `Struct02016D60_fs.unk9`/`unkA`. fs_game: 395 functions left in asm (of 915); all code: 6,284 left.

- (2026-11-16, later) Batches 67-103, 155 more fs_game functions (the user asked to keep going until
  everything is in C). What made the remaining ones match:
  - `struct BitU16A { u16 v : 16; } __attribute__((packed, aligned(2)))` is a 2-byte element with halfword
    access, so arrays the original writes with the bitfield pattern can be typed (the link input ring buffer
    `gUnknown_0200B1D0`, now done in `sub_08037750` through a `struct LinkKeys` view with an 11-bit field).
  - Where a shared array or field is plain in -O2 code but bitfield-written in -O0 code, an ldscript alias
    gives the -O0 view (`gUnknown_03005E10_b`, `gUnknown_03000940_b`, `gUnknown_0200B1D0_k`,
    `sub_0802C12C_int` for a caller that had no prototype). Use the same alias for reads and writes in one
    function, or the literal pool gets a second entry.
  - `BITU16_AT(base, off)` / `BITU8_AT` cast macros give the large-offset field pattern for single bytes or
    halfwords the shared struct still has as padding or as a wider field.
  - Order of operands decides load order: `a->f + b` loads `a` first but `b` before the field; `x |= y`
    computes the address of `x`, then `y`, then loads `x`. Pointer subtraction that shows `lsr` is
    `((u32)p - (u32)base) >> 1`. `p->f` through `unk3000000` (a struct at 0x03000000) keeps the base and
    offset separate where a constant address is folded.
  - Control flow: `if (c) return;` shows as `b!c next; b end`; `continue` the same; a switch with one case
    and `default: break;` gives the extra jump; `case 0: default:` puts 0 in the compare chain.
  - `sub_08008F78` is code after a 16-byte table at the start of `sub_08008F68`'s .inc; it now has a label.
    `sub_08003828` is `GetNextFrame`.
  Deferred (left in asm): `sub_0803D134` (agbcc folds `v - (x - 1)`), `sub_0803A5DC` (a max() whose select
  happens before the store), `sub_08038238` (a CpuFastSet source that is never stored), plus the earlier list.
  fs_game: 240 left in asm (of 915); all code: 6,129 left.

- (2026-11-16, later) Batches 104-131, 74 more fs_game functions. New findings:
  - `& 0x7FF` on a u16 compiles to `lsl #21; lsr #21`, so the 11-bit reads of the link ring buffer and the
    map tiles need no bitfield struct (the `LinkKeys` view was dropped again).
  - A `beq body; b end` pair is also what a long `if` body produces (Thumb conditional branches reach only
    ±256 bytes), not only `if (...) return;`. Check the body length before reaching for `return`.
  - Masks: `x.HALF.HI & ~15` (signed field) gives `mov #15; bic`; the unsigned view folds to an `and` with a
    literal. `x += (rand & 3) - 2` gives the register order `x = x + 254 + ...` doesn't.
  - `struct MapDataB` (tiles as BitU16A, then one BitU8A per tile at 0x2004) for -O0 writes to the map,
    `S16_AT/U16_AT/U8_AT/S8_AT` for plain reads at an offset.
  - `sub_080012A0` and `sub_08008F78` are entry points inside other .inc files; they now have labels.
  fs_game: 166 left in asm (of 915); all code: 6,055 left.

## Step 11: recording play sessions (2026-11-15)

- `mgba_run --play DIR` (SDL2): both GBAs side by side, real-time pacing, GBA 1 on WASD (F=A G=B R=L T=R
  1=Start 2=Select), GBA 2 on the arrows (/=A .=B ;=L '=R Enter=Start RShift=Select). Inputs are
  recorded in the replay format; `--saveP` files are now read into memory only, so replays are exact.
- First build attempt didn't happen: under `set -e`, `SDL=$(pkg-config ...)` failing exits the build
  script silently, so the old binary ran. `|| true` fixed it.
- Skipping the intro: `--save-states FRAME` writes each GBA's save state plus its EEPROM (states don't
  include EEPROM) and `--start DIR` loads them. `tests/intro_linked.inputs` gets two GBAs from empty saves
  to Choose a Stage (mode 5); states at frame 1600 are `recordings/start_linked` (local only).
  Check: continuous run vs states + 600 frames: same mode changes on the same frames, RAM identical except
  20 bytes of GBA 2's stack (0x03007D21-0x03007E80, mid-frame leftovers); runs from states repeat exactly.
- Session 1: 44,522 frames, one stage (mode 2 from frame 1752, back to Choose a Stage at 44297). Replay
  (1 m 37 s with coverage) reaches the same end screen; EEPROM equal (but unchanged during play, so a weak
  check). Coverage with the lobby run: 1,135 functions executed, 939 of them still asm (219 in fs_game).
- Step 11 batches: 14 more fs_game functions matching (Entity `unk4C`; `gUnknown_03006C80` has 9 eight-byte
  entries at +0x28 indexed by Entity.form). A callee's return type shows in the caller: `lsl r2, r0, #24;
  lsr r1, r2, #24` right after the call means the callee returns u8. Executed fs_game functions still asm
  (lobby + session 1): 205; fs_game: 732; all asm: 6621.
- More batches (all matching): CreateObject (`sub_0804C8A8`, tmc name) and a sibling, ProcessMovement2
  (names Entity `speed` 0x0C and `direction` 0x2B), DoObjectEntity, the 8.8 fixed-point helpers, list
  setup at `gUnknown_03005060`. Lessons: a `u16 *` indexed `t[1]` shows as an add before the load (struct
  fields don't); a callee without a prototype gets no argument conversion, so the original's casts are
  explicit; unoptimized agbcc allocates unused locals, so a too-small frame means a missing local;
  `x &= 0` and an 8-bit bitfield store of 0 compile the same. Overlay areas used differently by Four
  Swords get ldscript aliases (`gUnknown_0201ED90_fs`). Executed fs_game left: 151; fs_game: 678; all: 6567.
- More batches. The player input swap (`sub_0803DBD4`: each Link runs with that player's buttons from
  per-player arrays, which the port will fill from each pad). `CreateObject` is an ldscript alias of
  `sub_0804C8A8` without a prototype: the original callers were in other source files and pass
  unconverted arguments, which a prototyped call can't reproduce. tmc-style `SplitWord.HALF_U` (unsigned
  view; some code reads positions with ldrh). An explicit `return;` at the end of a function shows as an
  extra branch to the epilogue. Deferred (in asm, tried and noted): `sub_0804E394` (argument narrowing),
  `sub_0803D770` (add operand order), `sub_0803CD8C`, `sub_08056D40`/`sub_08055FA0` (bitfield writes
  to the shared BGConfig struct). Executed fs_game left: 115; fs_game: 642; all: 6531.
- Commit `6a0ac77` did not match: `tools/first_diff.py` exited 0 on a difference and a chained commit ran.
  Fixed in the next commit (`feed8e7`); `first_diff.py` now exits 1, and commits are gated on
  `make compare` printing OK.
- Lessons: a raw ROM address in a literal pool may have been a symbol in the original (different
  register allocation); give it an ldscript symbol (`gUnknown_0800A49C`). A field at a large offset
  shows `add rX, rY, #0` before the constant add (`struct MapData.unk5004`), a 2-D array `[i][1]`
  adds the column before the row. agbcc rounds structs up to 4 bytes on ARM, and `packed` makes it
  assume unaligned access, so arrays whose u16 elements are written with the bitfield pattern can't be
  typed yet (`sub_08037750`, the link input ring buffer `gUnknown_0200B1D0[4][16]`, deferred).
  Executed fs_game left: 99; fs_game: 626; all: 6515.
- Switched from executed-first to smallest-first across all of fs_game (the port needs all of it, and the
  remaining executed functions are long): 10-17 matching functions per batch instead of 2-3. Found along the
  way: the 0x14-byte records at `gUnknown_0202A7E0` are script interpreters (script pointer at +0x10,
  commands read halfword arguments and advance it); `gUnknown_0201F020` has the layout of
  `gUnknown_0200B320` (alias `gUnknown_0201F020_fs`); Entity 0x68/0x70 are word/byte unions; a pointer to
  a non-packed `struct BitU16` handles bitfield writes through a pointer. fs_game: 531 functions left in
  asm (of 915); all code: 6,420 left (of 7,894 incl. the disassembled blobs).

## Step 12: machine translation of the remaining asm to C (2026-11-16)

Hand-matching cost several thousand tokens per function, with about 6,000 functions left. The user chose
two cheaper tracks: (1) translate all remaining asm to C mechanically for the PC/PS2 build, and (2) a
draft generator for the regular -O0 Four Swords code, to speed up matching decomp.

- `tools/thumb2c.py OUTDIR` reads every `asm/non_matching/*/*.inc` that a `src/*.c` still includes and
  writes `OUTDIR/NAME_tr.c`. Each function becomes `void f_tr(void)` working on `gba_cpu` (registers and
  flags, `include/gba_tr.h`) with locals copied in and out around calls, plus a C-ABI wrapper
  `u32 f(a, b, c, d)` for decompiled callers. Memory goes through `RD*`/`WR*`, symbols through `SYM()`,
  branches are `goto`, switch tables (`mov pc, rN`) are a `switch` on the target address, `bl` sets `lr`
  to the real return address.
- First model (C ABI only: r0-r3 in, r0 out) failed on the hand-written engine code in rom1, which passes
  values in r1-r7 and the carry flag (`push {r1}; bl ...; pop {r1}; lsrs r1, #1; bcc`). Hence the shared
  register file.
- Other things the hand asm does: `bx r4` through a function table (only `pop {rN}; bx rN` and `bx lr`
  are returns), functions that run on into the next function at the end (now a tail call),
  calls and branches to addresses inside other functions (now extra entry points `sub_ADDR`), loads from
  another file's literal pool and raw `ldr rN, [pc, #n]` (read from the ROM image; a value equal to a
  symbol's address becomes that symbol).
- GBA libc functions (`memcpy`, ...) clash with the host's names; the checker renames them.
- Result: 5,985 of 6,002 asm files translate and compile with gcc. Not translated (stubs that call
  `gba_untranslated`): 4 ARM files, 4 `add rN, pc`, 2 jumps without a table, 7 that end in raw `.byte`s.
- **Check against mGBA** (`tools/tr_check.py`, `tools/tr_check.c`, `mgba_run --trace`): mgba_run records
  registers and all memory at entry and at return for the first calls of each function (GBA 0 only;
  calls an interrupt breaks into are dropped). `tr_check` replays each call through the translated C in
  GBA address space (memory in arrays, the ROM image, SWIs CpuSet/CpuFastSet/Div/Sqrt/LZ77, immediate DMA)
  and compares r0, r4-r11, sp and all RAM/VRAM/OAM/palette (I/O and the stack below sp excluded). Calls
  into decompiled C can't be replayed there and are skipped.
- First trace (6,000 frames of session 1): 165 calls identical, 0 different, 24 skipped.
- A capture used to wait for its function to return, so one call that never returns (the main loop)
  blocked all later captures; now captures are dropped on an interrupt or after 2 million instructions.
- More translator fixes found by the traces: `mov lr, rM; bx rN` is a call whose return lands at rM (a
  continuation: call rN, then the code at rM); a `bx r3` reached by `bl` is a veneer, not a return;
  `.align` padding must be counted for addresses; unaligned `ldr`/`ldrh`/`ldrsh` behave as on the ARM7TDMI
  (rotate / sign-extend a byte) and the animation code relies on it; code left as `.byte` is decoded from
  the ROM; instructions that can't be translated become `gba_bad_insn` traps (406, mostly data decoded as
  code) instead of failing the whole function; odd ROM words pointing into code become entry points
  (function tables). The tracer only starts a capture on a real call (BL just before, or a `bx` that is
  not a return into a continuation).
- Trace of the whole session 1 (44,522 frames, up to 3 calls per function): **1,214 calls identical to
  mGBA, 4 different** (`sub_0800A810`, `sub_0800A830`, not looked at yet), 277 skipped (208 call decompiled
  C, which the checker can't run; 39 an indirect call into `.byte` data at 0x08134177; RAM code at
  0x03006D19).

### Draft generator for -O0 code (2026-11-16)

- `tools/o0_draft.py FUNC...`: symbolic execution per basic block of the -O0 asm. Stack slots become
  locals, loads/stores become field accesses (Entity names from `entity.h`), bitfield read-modify-writes
  collapse to one assignment marked `/* bf */`, `bl` becomes a call with the arguments written since the
  last statement, `cmp` + branch becomes `if (...) goto`. Not compilable; it replaces reading 200 lines of
  asm with ~40 lines of C.
- Result: 25 fs_game functions matched in this part of the session, most on the first or second build
  (before: several attempts each). Still read from the asm: conditional expressions (`?:`), jump-table
  switches, loops through registers.
- Lessons: `<< N` vs `* N` still needs the asm (a copy before `lsl` means `*`); a `bx`/`b end` before an
  `else` shows explicit `else` blocks (sub_08055460); `do ... while (a && b)` for search loops; check that
  `make compare` printed OK (a link error leaves the old ROM and `first_diff.py` says "no difference").
- Deferred: `sub_0805C878` (16-bit subtraction with operand copies and an unfolded `+ 0xFFF8`).
- fs_game: 92 left in asm (28 deferred); all code: 5,981 asm files.

## Step 13: the small fs_game functions (2026-11-17)

- 22 more fs_game functions matched with `tools/o0_draft.py` drafts, including several that had been
  deferred before. fs_game: 42 left in asm (6 of them deferred, below), all code: 5,931 asm files.
- What made the deferred ones match:
  - A `copy; add #N` address (`add r3, r1, #0; add r1, #96`) is a real struct member, not pointer
    arithmetic; the same function written with a cast pointer (`((u16 *)&this->unk60)[i]`) doesn't
    match. Small overlay structs in `fs_game.c` stand in for fields an entity kind keeps at an offset
    that `struct Entity` types differently (`EntityU16x12`, `Struct02000010Bits`, `Hitbox`).
  - `(x ^ 1) & 1` after a narrowed call result is `!(x & 1)` (sub_0804E394).
  - A chained store with no `bic #0` (the masked value of the inner assignment) means the fields are
    signed: `Struct03000488`'s scales are `s16 : 16` (sub_0805C1F4).
  - `i++` takes one dead address computation more than `i = i + 1` (sub_08054A38).
  - `x / 2` and `x >> 1` differ in register use for a u8 bitfield (sub_08063E88).
  - The constant- and index-first order of `+` decides `adds r0, r0, r1` vs `adds r0, r1, r0`; integer
    arithmetic (`idx * 32 + (u32)base`) was the only form that gave the original's (sub_0803D770).
  - Dead code after an early `return;` is still emitted at -O0 (sub_08062CB8).
  - `sub_08003184` is a second entry point inside hand-written `sub_08003170`; it is exported with
    `.global` so C can call it.
- Still deferred (notes in the session scratchpad):
  - `sub_0803D134`, `sub_0806041C`: `x - (y + C)` / `d - (x - 1)`. gcc's front end folds the constant
    out (`(x - C) - y`), the original keeps it inside. A `(u16)` cast stops the fold but adds a narrowing;
    a statement expression `({ y + 16; })` stops it and leaves only a register choice different. The
    original source must have had some other form.
  - `sub_0803A20C`: the music selection; `unk26 != (u16)song` loads in a different order.
  - `sub_08037574`, `sub_0805C878`, `sub_08059BD0` as before.
- Mistake caught: one commit went in with a mismatching ROM, because the check `grep -E "OK|did NOT"`
  succeeds on both. It was amended at once; the check is now `grep -q "zeldaalttp.gba: OK"`.

## Step 14: separating Four Swords code from A Link to the Past code (2026-11-17)

- `reach.py --classify FILE` walks the call graph from boot twice, once with the A Link to the Past mode
  handler cut (mode 13, `0x0800B69C`) and once with the Four Swords one (mode 9, `0x0802E764`; mode table
  `0x0842731C` as documented by FourSwordsRecomp), and labels each function fs / shared / lttp /
  unreached, plus whether a coverage run executed it.
- First result: 5,689 shared, 2 Four Swords only. The walk follows every pointer-like word in data, and
  the data is still unlabelled `.INCBIN` blobs (up to 1 MB) where graphics and sound bytes happen to look
  like pointers (`AgbMain` reached the A Link to the Past sprite code through a tilemap). Rules on blob
  size or neighbouring words also dropped real edges; reverted.
- `tools/lz77_scan.py`: 2,085 LZ77 streams (2.8 MB, compressed graphics), skipped by `reach.py --packed`.
- `mgba_run --loads FILE`: logs BIOS copies/decompression (swi 0x0B, 0x0C, 0x11-0x15) and DMA from ROM
  data, copies from RAM to palette/VRAM/OAM, Thumb CPU loads from ROM data, and a bitmap of RAM words read
  by 32-bit loads. Replay of session 1 with it: same coverage and same final screen as without.
  - DMA first logged nothing: mGBA starts and ends an immediate DMA within one step, so the enable bit is
    never seen; a new transfer is detected by its registers changing. The game moves no graphics by DMA
    (only sound FIFO and EEPROM); it uses CpuFastSet, also from RAM buffers.
- `tools/load_ranges.py`: ROM ranges with exact bounds, kept only when the data goes to palette/VRAM/OAM,
  to a RAM buffer later sent there, or to RAM that no 32-bit load reads (the tilemap behind the false
  link: CpuSet into a RAM map buffer read as halfwords). No CPU load reads inside any gfx range.
  288 ranges, 243 KB.
- Result with both lists excluded: shared 3,472, A Link to the Past only 4,291 (`rom3c`, `rom3b`, `rom4`,
  most of `rom3a`, the `lttp/sprite*` files, `hud`, `interface`; none executed in the Four Swords
  session). Functions executed but not reachable stay at the LZ77-only count, so no real edge was lost.
- Next false link: sound samples (signed 8-bit PCM in `0x083C3BBC`, read by the ARM mixer in IWRAM,
  which `--loads` doesn't decode) still link the sound driver to A Link to the Past code and keep
  fs_game reachable with the Four Swords handler cut. Fix: sample ranges from the m4a voice groups, or
  decode ARM-mode loads.
- Known bug: `mgba_run --shot` with a missing `--out` directory segfaults at the end of the run.
- `tools/m4a_samples.py`: sample ranges from the m4a instrument tables. The song table is at
  `0x083C3E34` (466 entries, some empty songs with 0 tracks), found by shape; `0x083C28FC`, the first
  guess, is the driver's command jump table. 11 voicegroups (key split and rhythm followed), 49 samples,
  333 KB, no overlaps. The only 32-bit CPU reads inside them are the driver reading the PCM header's
  frequency and copying wave-memory instruments to the sound hardware, so the PCM ranges start after the
  16-byte header.
- With LZ77 streams, loaded graphics and samples excluded: shared 2,943, A Link to the Past only 4,820,
  executed but not reachable still 67. `rom3.o` shared fell from 543 to 72. What still joins the games
  is real: `interrupt_main -> DoObjectEntity ->` the object handler table `0x0813F998`, which holds both
  games' entities. Separating those needs which object types Four Swords creates (coverage, or the
  types passed to CreateObject from Four Swords code).
- Object subtypes (2026-11-17): `reach.py --cut` now also takes data objects. Cutting the object handler
  table `0x0813F998` (108 entries, indexed by Entity.subtype from `DoObjectEntity`) drops 627 functions
  from the Four Swords walk; 36 subtypes ran in session 1.
  - `tools/object_subtypes.py`: subtypes created by code, statically: constant r0 at calls to the
    creators `sub_0804C8A8`/`sub_0804C938` (51 subtypes, 4 calls non-constant), the spawn lists given to
    `sub_0804C808` (6 constant lists), `sub_0804CCE4` (always 93), the drop tables read by `sub_08013EC0`
    (`0x084299B4`) and `sub_080142F4` (`0x08429A00`), direct stores in C. 55 subtypes in all.
  - `mgba_run --loads` also logs each entity registered by `sub_08012728` (type, subtype, caller). 18 of
    the 36 subtypes that ran aren't in the static list: 15 come from the room object loader
    (`sub_0800A148`/`sub_0800A1A8`: 8-byte records, halfword 0 = subtype bits 0-8, type bits 9-12,
    position mode bits 13-15; halfword 1 = form, parameter; then x, y; lists end with 0xFFFF; walked by
    `sub_08013C8C`, 17 call sites), 3 from `sub_08014958`/`sub_08015888`/`sub_08015AC4`/not registered.
  - The room lists hang off per-room pointers at `0x02016330[room]`, filled by the room loader; the area
    table `0x0842AD18` -> header +20 holds only room 0's layer table (12 lists, 2 subtypes). Finding lists
    by shape alone is useless (1,903 "lists" even with subtype < 108). Not applied to reach.py yet: an
    incomplete subtype list would drop objects of stages not yet recorded.
- Room lists found (2026-11-17): `sub_080131FC` fills `0x02016330[room]` from room pools
  `0x0842B8CC[area]` (counts `0x0842B8DC`; 216 rooms, entries {descriptor, flags}, descriptor +4 = layer
  table), `sub_080133D0` from special pools `0x0842B8A8[6]` (counts `0x0842B8C0`, header +20), plus
  `0x0842AD08[0..3]` and the area headers. Objects are layers 0 and 1 (`sub_08012F84(room, layer)`
  callers); layer 3 is another format, layer 7 code. Also: tile objects from `0x081380F8`/`0x0813821E`
  (`sub_08015AC4`, {key, type, subtype, ?}), asm that stores type 6 then a constant subtype
  (`sub_08015888`). `object_subtypes.py` now finds 97 of the 108 subtypes; of the 36 that ran only 42 is
  missing (logged by `mgba_run` as `morph 0 -> 42`: created without `sub_08012728`, source not found).
- `reach.py --objects FILE`: an object table entry is followed only when a reachable function creates
  its subtype or its handler ran. Effect: Four Swords walk 2,945 -> 2,910 functions (1,780 still asm),
  executed-but-unreachable unchanged at 67. Nearly the whole object table is Four Swords code, so the
  "shared" class is in practice "needed by Four Swords": the A Link to the Past walk reaches it only
  because the entity update runs from the interrupt handler in every mode.
- Work list for the port: the Four Swords walk (2,910 functions, 1,780 in asm) plus anything a coverage
  run executes; the 4,820 "lttp" functions (3,930 in asm) can wait.
- `tools/classify.sh OUT REC_DIR...` rebuilds everything from the build and local recordings (replays with
  `--coverage --loads`, LZ77 streams, loaded graphics, m4a samples, object subtypes) and runs
  `reach.py --classify`; result committed as `docs/function_classes.txt` (address, name, object, size,
  class, executed, in asm). 2.5 minutes for session 1, same numbers as by hand. A replay has to run as
  long as the session, not to its last key change (session 1: 44,522 frames, last input 43,996), so
  `mgba_run --play` now writes `DIR/frames` and classify.sh reads it.
- Cross-check against FourSwordsRecomp's hand-checked jump tables (57) and data-pointer functions
  (1,354): 1,769 of our functions; 598 shared, 1 fs, 1,144 lttp (the recomp covers the whole ROM),
  26 unreached. The 26 are all handlers of the 10 object subtypes nothing creates and that never ran
  (21, 26, 27, 43, 44, 62, 63, 71, 79, 106) and three sub-state tables of those handlers: no
  contradiction.

## Step 15: the executed -O2 functions Four Swords needs (2026-11-17)

- Work queue from `docs/function_classes.txt`: Four Swords-needed functions still in asm that ran, split
  into compiled code, hand-written asm and the m4a driver. Hand-written: no `bx` return, or `pop {..pc}`,
  `mov pc, lr`, `.arm` (agbcc with `-mthumb-interwork` always returns through `bx`). Needed asm: 1,413
  compiled (296 executed), 308 hand-written (210 executed: matching C impossible; plain C for the port
  later), 61 m4a (from pret's C later).
- 78 of the 296 executed compiled functions matched in batches of 10-13 (`o0_draft.py` gives a rough
  shape for -O2 too; the registers it can't name are usually obvious). Per-function check after a batch:
  compare each function by symbol against the original (later code shifts while a batch is wrong); a
  difference only in the literal pool is from another function's size.
- -O2 lessons:
  - Block order follows the source for `if (c) return X; return Y;`, not for `c ? X : Y` or
    `if/else`: when the branch is inverted, swap which case returns first.
  - A loop with no initial bound check is `do ... while`.
  - Scheduling a store's constant before an earlier store means the compiler knew they don't alias:
    two struct fields, not two indexes of one `u8 *` (sub_0800E39C).
  - `p--` after `p = table[i]` vs `p = table[i] - 1` changes register use (sub_0802C23C).
  - A caller that passes an argument unconverted had a different prototype: alias the function in the
    ldscript (`sub_08012F84_u32`, like `CreateObject`).
  - Second entry points into hand-written code (`sub_08003F1C`, after a 0x40-byte table that starts
    `sub_08003EDC`) get a `.global` label.
- Structs found: the text reader `Struct0800EE2C` (rom_0800D4F0; a pointer stack at 0x20, 8-byte entries
  at 0xD8), `Struct0202A770`, `Struct0202E110`, `Struct02002440`, `gEntityLinks` (8 list heads),
  `Struct03000450` bytes 4-8 and 0x16.
- Deferred: sub_08013D20 (narrowing before a struct copy), sub_0801620C (signed range test kept on a
  `u8`), sub_08012410, sub_08012B04, sub_0802C148, sub_08013C50 (not tried).

## Step 16: more -O2 functions, with the matching-decomp skill's tips (2026-11-17)

- Read two outside guides (kept locally in `reference/`, not committed): the gba-matching-decomp skill
  repo (agbcc tips by ID) and an article on setting up a GBA decomp project. Useful rules from them:
  matches must come from plausible source (no compiler forks, register pins or similar tricks); flags
  that only add output, like agbcc's RTL dumps, are fair for register-choice cases.
- The Makefile already rebuilds C objects when any header changes (step 6), so nothing to add there.
- 26 more functions matched (5,804 asm files left). Forms that fixed a mismatch:
  - sub_0801620C: a signed `0..2` range check on a byte that the compiler kept as two compares: two
    separate early returns on an `s32` local (`if (n < 0) return; if (n > 2) return;`). The skill's
    `switch` tip still folded it to one unsigned compare.
  - sub_08012410, sub_0802C148: an early return before the loop / a `do ... while` outer loop.
  - sub_0800C658: index the checksum loop (`((u16 *)p)[i]`); a walking pointer reloads the global.
  - sub_0800E5EC: a fall-through switch; the fill loop's constant in a local before the pointer setup.
  - sub_08013A10: the end bound is `base + 48` records; `gUnknown_0201EFF0` is the same address under
    another name.
  - sub_0802B0F8: a decrement of a `u16 :16` bitfield adds a 0xFFFF mask; a plain `u16` cast store
    matches (a plain union member did not).
  - sub_080144A0: store through the just-assigned globals rather than a local pointer.
  - sub_0800EE50: `s32` bank (signed range compare from the switch), `(u8)c` for the glyph index.
  - sub_0802CEC4: repeat the field read in the condition instead of a local.
- Prototype fixes: `sub_080144F0` takes a u16 first argument (callers pass 310). `Struct0800EE2C.unk3` is
  the text column.
- Deferred, with what was tried (scratchpad notes): sub_0806041C and sub_0803D134 (`x - (s + 16)` folded;
  at -O0 a temporary would need a stack slot the original doesn't have), sub_08013C50, sub_0802614C,
  sub_0802D228, sub_0802D190, sub_0800E63C, and the earlier register-choice ones.

## Step 17: decomp-permuter (2026-11-17)

- Set up `decomp-permuter` (simonlindholm, MIT, from GitHub; it bundles its own pycparser fork and only
  needs `toml`, also cloned from GitHub into `reference/`). `tools/permuter_setup.py FUNC draft.c OUTDIR`
  builds a permuter directory for one function: the file's C with the draft in place of the function's
  asm include (other asm includes dropped), preprocessed; the original asm assembled alone as the target;
  a compile script with the file's flags (-O2 or -O0 for fs_game, `-fprologue-bugfix` per the Makefile).
- 37 more functions matched (5,767 asm files left). The permuter's zero-score sources are rarely plausible
  C (an extra variable holding a table or a constant, `if (1)`, `r = x != 0`), so they are not committed
  as they are. They point at the expression that sets the registers, and a plausible form follows:
  - `u8` casts on a table of `u16` pairs (sub_0803472C), `<< 2` instead of `* 4` (sub_0801DEC0).
  - The `if`/`else` branches swapped (sub_08016EF0, sub_0801E7A0).
  - A struct view (`((struct View *)&g)->field`) where the ROM keeps the base address in a register and
    adds the offset; an array index or a field of the global itself folds base+offset into the pool word
    (sub_0802C710, sub_0800E63C).
  - `u32` counters assigned back to a `u8` field (sub_0801E7A0).
- Other forms: `b = ...` inside the first expression to order loads (sub_080260E4), separate statements
  for two stores of one constant (sub_0803008C), `if (a != X && ...) {...; return 16;} return 0;`
  (sub_080269F8), and an ldscript-alias prototype for a wider argument (`sub_08012F84_u32`, sub_08026ACC).
- Prototype and struct fixes: `sub_08009664` returns u16, `sub_0800EB50` takes a u32, `sub_08013C8C` takes
  a `u16 *`, the 4th argument of `sub_08013C8C` from sub_0803472C is `unk52`; Struct0202A5E0 (`gTextbox`)
  `unk2_6`, `unk10C`, `unk10D`; Struct03000450 `unk2A`; Struct03006C80 `unk49`, `unk4B`; Struct0202A770
  `unk58` (a 12-byte record, copied to `unk5C`); Struct0202A580 `unk8` is a u16; the link state
  `gUnknown_02030790` (rom2.c) with its packet pointers.
- Process: one commit was made after a failed compare because `| tail -1` hid make's status; the gate is
  `grep -q "zeldaalttp.gba: OK"` again and the commit was amended. The scratchpad `unplace.py` once
  deleted asm include lines while removing a draft's declarations; the compare caught it before a commit.
- Deferred with permuter scores in the scratchpad notes: ~30 functions, mostly register choice.

## Step 18: functionally equivalent C is enough (2026-11-17)

- The user's goal for the port is functionally equivalent C; byte-matching was costing most of the time
  (~10 functions/hour, mostly on register and instruction-order near-misses). New rule (also in
  CLAUDE.md): one or two quick tries for a match, otherwise commit the C under `#ifdef NONMATCHING` with the
  original asm include in the `#else`. `make compare` stays the regression check for the matching ROM.
- `make NONMATCHING=1` builds the equivalent C into `zeldaalttp_nm.gba` (it has to compile and link). It
  won't run correctly yet: much of the remaining asm calls absolute addresses, which shift once a C function
  has a different size. Behaviour checks for NONMATCHING code come with the port harness (same inputs, RAM
  compared against mGBA). Old upstream LttP drafts that no longer compiled are guarded by
  `NONMATCHING_LTTP` instead.
- `tools/place_nonmatching.py DRAFT.c...` places drafts this way. All 76 earlier near-miss drafts went in,
  then new functions at about one try each (~82 NONMATCHING functions now, plus new true matches like
  sub_0802CD3C and sub_0800EC08).
- Checks found two real bugs in drafts: argument order in a call that had no prototype (sub_0800E78C to
  sub_0800E80C), and a missing third argument (sub_0802C070 to sub_0802C1C0). Implicit declarations hide
  these, so calls from NONMATCHING code get prototypes and are checked against the asm's registers.
- The permuter queues were stopped: with equivalent C as the goal they no longer pay.

## Step 19: making the NONMATCHING build run, and checking it call by call (2026-11-17)

- A NONMATCHING ROM built, but showed a blank screen: once C changes a function's size, everything
  after it moves, and the remaining asm and data pointed at the old addresses.
  - `tools/symbolize_asm.py`: absolute ROM addresses in branches and pool words of the asm (~1,900) become
    symbol+offset from the matching ELF. A `.4byte` against a Thumb function symbol gets bit 0 set by the
    linker, so even words use plain labels (local `_0801...` labels only in their own file, an extra
    `sub_0812CC58_addr` label where needed; a label right after `THUMB_FUNC_START` becomes the function
    symbol because of `.thumb_func`, so it goes after the function's own label).
  - `tools/split_incbin_ptrs.py`: the data `.INCBIN` slices hold ~5,800 Thumb function pointers (handler
    tables); each word equal to a function's address + 1 becomes `.4byte name`.
  - `ldscript_nm.txt` (generated for NONMATCHING builds): `.rodata` fixed at its original address
    (0x08137B04, data blobs point into it) and libgcc's soft float moved after it for slack.
  - `make compare` stays OK after each step (the symbols resolve to the same addresses).
- Result: the NONMATCHING ROM boots and plays. Screens match the original at the title screen, but in Four
  Swords differ by a few pixels after some seconds even when the only change is a function that never runs:
  moved code changes cycle timing, and with two linked GBAs and timer-based randomness the games diverge.
  So whole-game comparison can't validate NONMATCHING C.
- Per-function check instead: `mgba_run --replay ROM MAP TRACE.gz...` loads each call recorded by
  `mgba_run --trace` on the original ROM (registers and all memory at entry and at return) into the
  NONMATCHING ROM, maps function pointers in RAM to the moved code, runs the function at its new address
  with IRQs masked until it returns, and compares r0, r4-r11, sp and RAM/VRAM/OAM/palette (I/O and the
  callee's stack excluded). `tools/check_nonmatching.sh OUT tools/fs_walk.inputs 3921` does all of it.
- First run: 179 calls of 63 functions on the Four Swords walk: 166 identical; the rest are a void
  function's r0, a link function that reads SIO registers (I/O isn't restored), and top-level loops that
  read timers. No difference in the NONMATCHING functions themselves.
- `make NONMATCHING=1 NONMATCHING_EXCLUDE="src/x.c ..."` builds all NONMATCHING C but those files' (bisecting).

## Step 20: more NONMATCHING C, and keeping .rodata fixed (2026-11-17)

Added as NONMATCHING C: the player bookkeeping sub_0803E114, the moving platforms sub_08028200 and sub_080272D0
(the 8-way one steps one or two axes through a shared helper), the stage clear sequence sub_08038E44, the held
item sub_08040074, the multi-player block push sub_08014958, the 3-row tile blocks sub_08028CD0/sub_080291F8 and
the door tiles sub_08050444/sub_08050B50 (two sets of near-identical unrolled code each, so each pair shares one
table-driven helper).

What went wrong:
- `make NONMATCHING=1 objects | grep error` missed "undeclared" and "conflicting types" messages. Check make's
  exit status instead.
- The replay check then showed 21 new failures in functions that had passed. In the NONMATCHING build
  file_select.o's .rodata was 16 bytes larger: sub_080272D0's static table of function pointers. That shifted all
  the fixed data after it. Static tables in NONMATCHING C now carry `NM_RODATA` (include/global.h), which puts
  them in `.rodata.nm`. The generated ldscript_nm.txt links that section after .rodata, next to the soft-float
  code. tools/check_nonmatching.sh now stops when the two builds' .rodata sizes differ.

State: 119 NONMATCHING functions. The fs_walk replay check gives 155 ok, 5 fail (the known I/O read and void
return cases).

## Step 21: translating the long tail mechanically (2026-11-18)

The user chose machine translation for what remains, with hand-written C kept for code the port has to change.
`tools/asm2c.py` turns each agbcc Thumb function into C:
- registers are `u32` locals;
- N/Z/C/V are computed only where a later branch reads them;
- the stack is a local array laid out like the original frame, with incoming stack arguments copied in;
- memory goes through the `R8`…`W32` macros in `include/auto.h`, so the port can remap addresses;
- jump tables become `switch`;
- calls use the C ABI (r0-r3, plus the first stack words for callees with more than 4 arguments).

Nothing in `src/` changes. In `make NONMATCHING=1 AUTO_C=1` each object's compiler output is scanned for the
asm includes still in it. Those are translated into `src/auto/NAME.c` (generated, ignored by git) and compiled
into section `.text.auto`, which is linked at 0x08800000. The remaining asm keeps its relative layout.
`AUTO_C_FILES` and `AUTO_C_SKIP` limit the translation, for bisecting.

What broke, and the rule each problem added (asm2c's `pinned_functions`, which keeps functions as asm):
- Short branches from kept asm into translated functions went out of range: branch targets stay asm, and the
  translated code moved out of `.text`.
- Calls and branches into the middle of a function, and functions split over two files or running off their end.
- Hand-written asm: unified-syntax mnemonics, lowercase macros, raw `.byte` code reached by control flow (which
  the first version silently translated as empty functions), and pops below the entry stack pointer.
- Code outside the C calling convention: inputs in r4/r5 (the sound engine), and callers that keep using r1-r3 or
  r12 after a call, e.g. `mov r12, lr; bl X; bx r12`.
- Layout-bound code:
  - hard-coded `.4byte 0x0800xxxx` addresses into rom1, which keep all of rom1 as asm;
  - `label+offset` pointers such as `_0800C4E4+0x305` (a function pointer to sub_0800C7E8);
  - raw `ldr rX, [pc, #N]` reads.
- The sound engine's command table mixes hand-written and compiled handlers, so the whole table stays asm.
- The worst bug: depth analysis didn't follow jump tables, so every switch lost its case bodies. Code that no
  path reaches now fails the function instead of being dropped.

Checking:
- `tools/check_nonmatching.sh` takes `AUTO_C=1` and `TRACE_MAX`.
- `mgba_run --replay` counts code at 0x08800000+ as code addresses, and skips r0 when it equals the return
  address (the `pop {r0}; bx r0` of a void function).
- Final run: 604 ok, 14 fail. The fails are the EEPROM save functions (EEPROM state isn't restored) and the
  2 known I/O cases.

Linked whole-game screenshots don't work as a check here:
- The untranslated NONMATCHING build already drifts from the original by frame 2000.
- Subsets of the translation give results that aren't monotonic (A+B fails, a superset of A+B passes).
- That is timing between the two linked GBAs, the same limit noted in step 19.

State: 5,102 of 5,753 asm functions translate; 651 stay asm (listed in the planning doc).

## Step 22: global-state translation for the asm asm2c can't take (2026-11-18)

The user chose to write our own recompiler-style mode instead of copying FourSwordsRecomp's code
(PolyForm Noncommercial). `tools/gstate2c.py` plus `include/gstate.h`:
- **Renamed copies.** Every function asm2c refuses stays assembled as a copy, `src/auto/gstate/NAME.inc`, with global-state
  names renamed `NAME__asm` and a `NAME__base` label. Layout, pools, embedded tables and hard-coded
  addresses all stay valid; rom1 stays at its original address.
- **Translation from machine code.** gstate2c decodes the Thumb code of the assembled copies (its own decoder,
  so raw `.byte` code decodes too) and writes `void gs_NAME(u32 entry)`. That code runs on `gCpu`, the
  registers and flags at 0x0203C000. Registers are locals synced around calls; sp always lives in gCpu.
- **Calls and returns.** lr holds real return addresses. A return sets `gCpu.pc`, and each caller frame checks
  it, so code that returns past its caller unwinds right. Jumps elsewhere go through `gstate_run`: a binary search
  of two address-sorted tables (copy entries, and wrappers), otherwise a C call.
- **Entry stubs.** `NAME` is a register-transparent asm stub. Real r0-r11 go into gCpu, and the global-state code's
  r0-r11 come back. gCpu is saved around the call (interrupts), and a trampoline runs on until the magic
  return address comes back.
- **Natives.** ARM code, and functions that don't decode or jump into code copied to RAM (the m4a mixer at
  0x03006D18), run natively under their own name.

Bugs found by the replay check, roughly in order:
- relocated `b`/`bcc` to symbols (a self-loop);
- code running off its end;
- the stack pointer published late, so wrappers overwrote saved lr (found by ring-tracing play_sound);
- local `bl` calls to helpers (m4a's `call_r3`);
- raw code pointers inside rom1's `.byte` data;
- `bx` to ARM;
- duplicate table entries at a function's end (endless recursion).

The replay also needed fixes:
- a privilege-mode reset per call, because one hang in the BIOS cascaded into later calls;
- skipping the global-state state area;
- a 1024-entry ring trace of global-state entries and `gstate_run` targets (`GSTATE_RING=1 mgba_run --replay ...`).

State. Of the 5,753 asm functions:
- 5,010 C-ABI C;
- 603 global-state C;
- 112 NONMATCHING C;
- 28 native.

Replay: 1,325 ok, 24 fail. The fails are the sound engine's player chain (sub_08134074 recursing through its
callbacks; the PS2 audio layer replaces it), EEPROM, and the 2 known I/O cases.

## Step 23: the Four Swords level format, and a room dump tool (2026-11-23)

Groundwork for bringing the Anniversary Edition's new levels to the port: document how Four Swords stores its
levels, using the GBA data, before comparing with the DSi files (the DSi ROM lives in `reference/dsi/`, never
committed).

- Found the loaders from a session 1 replay with `mgba_run --loads`, grouped by calling function: the BIOS
  decompressions from the map-data blob come from `sub_0801484C`, the same loader as Minish Cap's
  `LoadMapData` (12-byte MapDataDefinition records: source offset from `gUnknown_0854F7E8` with bit 31 =
  more, destination, size with bit 31 = LZ77; destination 0 = palette group). The blob starts where the DSi
  `zelmap.bin` matches the GBA ROM.
- Levels: a stage descriptor (pools `gUnknown_0842B8A8[6]`, counts `gUnknown_0842B8C0`, 146 stages) gives
  the stage map index (`gUnknown_08146090`, 63x63 metatiles, two layers), the tileset (`gUnknown_08146078`, 6),
  the slot count and slot positions, the four players' start points and the object-layer table. Each slot
  gets a random sub-room (`sub_08013120`, pools `gUnknown_0842B8CC[4]`, 216 sub-rooms: map index into
  `gUnknown_0814627C`, pixel size `gUnknown_081465E0`), stamped into the map by `sub_08015FE4`. Tilesets
  load as in Minish Cap: tiles to VRAM 0x06000000/0x06004000, metatile tables to +0x7004 and types to +0x5004 of
  the two layer buffers (0x0201F020 top, 0x0200B320 bottom), plus a palette group.
- `tools/fs_rooms.py` lists every stage and sub-room and with `--png DIR` renders each stage map (all 146
  render correctly). Slots are left unfilled: which room pool fills which stage pool isn't known yet (6 against
  4); an attempt that stamped pool 0's rooms everywhere drew the wrong rooms.
- Next: the slot-to-pool mapping and rendering sub-rooms, then run the same decoding over the DSi files.
- Slot mapping (same day): stage pools 4 and 5 have no slots, so a stage's sub-rooms come from the room pool
  with its own number (0-3, `gUnknown_03006C80.unk1` indexes both). Pool flags bits 30-31 are the variant
  (`sub_080131C8`); sub-rooms only use 0-2, matching the three key levels. `--png` now stamps one valid pick per
  slot (same pool, same variant), and the rooms fit their stages.
- DSi comparison: `tools/dsi_zelmap.py` reads `zelmap.bin` (NDS file 24: {offset, size | bit 31 = LZ type
  0x11} index, 779 entries) and matches each decompressed entry against every GBA map-data record. 578 are
  byte-identical to GBA data (379 sub-room layers, 196 stage layers, 3 tileset parts). Of the 201 others:
  all 55 sub-room layers are edits of GBA rooms (52 at 90%+ equal metatiles); the stage layers are stored as
  (top, bottom) pairs in GBA stage order, and after GBA stage 122 come 18 new pairs: the new levels (DSi
  stages 123-140); the rest of the new entries are tile graphics and metatile tables, i.e. new tilesets.
- Rendering the new stages with GBA tilesets 0-3 gives level-shaped layouts with the wrong graphics: they use
  new DSi tilesets. Which zelmap entries form each DSi tileset (and which tileset each stage uses) is in the
  DSi code's own tables, the next thing to find (ARM9, by searching for entry-index lists).
- DSi descriptors: the DSi ARM9 binary keeps the GBA stage-descriptor format with relocated pointers (145 of
  the 146 GBA descriptors found verbatim). The 18 new stages have descriptors in a pool at 0x02103DD4 (entries
  {descriptor, flags}), map indices 123-140, using new tilesets 6-14 (123-131: tilesets 6/7/8, three stages
  each; 132-137: 11/12/13; 138-140: 14). Sub-room descriptors (u16 map, u8 key, pointer) also sit in the ARM9
  around 0x02104B30-0x0210F930. Still to find: the DSi tileset table (how tilesets 6-14 name their zelmap
  entries), then render the new stages with their own graphics.
- DSi tileset table: 0x020D70F0, 15 pointers (tilesets 0-14; 3 and 5 share a list, as on the GBA), followed
  by a 15-entry animation table at 0x020D712C. Each list is 12-byte records {u32 zelmap entry A | bit 31 = more,
  u32 destination, u32 entry B}, B = A + 1 so far; destination 0 = palette group A. Tileset 1 (0x020D7168):
  A = 0x1A..0x24 step 2 to 0x06008000, 0x0600C000 (DS BG VRAM), 0x0215FF84, 0x0216AF88, 0x0215DF84, 0x02168F88,
  palette 0x18. Stage maps are zelmap entries 64 + 2m (top) and 65 + 2m (bottom).
- Not solved: what A and B each hold. The entries don't line up with the GBA tileset parts (similarity
  0.01-0.3); several are identity tables (u16 0, 1, 2, ...) and the 0x8000-byte ones are larger than any GBA
  metatile table, so the DSi engine converts or re-lays out tiles and metatiles. Reading the DSi loader code
  (Ghidra/melonDS; it's the code that walks these records) is the next step, not more byte matching.
- DSi loader read (objdump on the extracted ARM9, `reference/dsi/extract/arm9.bin`; Ghidra wasn't needed):
  - 0x02056F80.. is the DSi `sub_08015DD8` (area setup). It centres the camera on 128/96 (half of 256x192)
    where the GBA used 120/80: the resolution change in one place. It calls the loader `0x02021EC4` (DSi
    `sub_0801484C`) with the tileset list from 0x020D70F0.
  - The loader fetches word A (offset) and word B (size | bit 31 = LZ) of zelmap.bin's index: A and B are
    the two halves of one index pair, so the entry is A / 2 (my earlier "B = A + 1" was this). DSi tileset 1
    is entries 13-18 and matches GBA tileset 1 (graphics identical, metatiles 90%+); destinations keep the GBA
    layer layout (types +0x5004, metatiles +0x7004 of 0x02158F80 / 0x02163F84), BG characters at 0x06008000.
  - Palettes: DSi `load_palette_from_gfx_group` at 0x02029B38, groups at 0x021039B8, records {u16: low byte =
    zeldat.bin entry (NDS file 20), high byte = offset / 16; u8 palette; u8 count | more}.
  - Stage maps: table at 0x020D7660 (DSi `gUnknown_08146090`), indexed by descriptor [0]; layers to 0x02138780
    (top) and 0x0213A780 (bottom).
- `tools/dsi_zelmap.py --png DIR` now renders the 18 new stages from their own descriptors with their DSi
  tilesets and palettes; all 18 come out clean. Tilesets 11, 13 and 14 are recolours of GBA tilesets 1, 3, 0
  (new palette groups), 12 pairs new graphics with tileset 2's metatiles, 6-10 are new.
- Next for the port's level work: the new stages' object layers (descriptor +20) and sub-room pools, which
  use the same formats as the GBA, and any new object/enemy types they reference.

## Step 24: the PS2 build boots and runs the main loop (2026-11-23)

Milestones 1 and 2 of the PS2 port: everything compiles and links into one EE ELF (`make -f Makefile.ps2 elf`,
after `make NONMATCHING=1 AUTO_C=1 objects`), and it boots in PCSX2 and runs the game's main loop (1,200+ frames,
no crash; no rendering yet).

- **Compile.** Hand-written C through `tools/ps2/struct_align.py` (agbcc pads and aligns every non-packed struct
  and union to 4 bytes; all 78 header struct sizes now match agbcc's), with ARM-only asm removed and GCC 2.95
  cast-as-lvalues rewritten. The 16 naked-asm functions became `asm/non_matching` includes (matching unchanged),
  so `asm2c` translates them. `gstate2c.py` writes a PS2 file next to each global-state file: the copies as one
  contiguous data blob per object with relocated literal words (code reads neighbouring functions' literal pools),
  C entry functions with the 8-argument convention, BIOS calls through `ps2_swi`.
- **gstate2c fix found on the way:** Thumb labels inside a copy ended it, so their code was never translated (the
  ARM build ran it natively); they are now entries. The first attempt treated function names of grouped copies as
  inner labels and produced a 147 MB rom1 file; agbcc -O2 on it was OOM-killed at 5.4 GB and took the IDE down.
  Safeguards since: generated global-state C compiles at -O0, compiles run under `ulimit -v`, long builds run in
  `systemd-run --user --scope -p MemoryMax=6G` (which then caught asm2c at 6 GB with `-j2`; `-j1` fits).
- **Link** (`src/ps2/ps2.ld`): the ROM data objects at their GBA addresses with physical load addresses at
  0x01000000 (`tools/ps2/fix_elf.py` moves the segment to physical for loaders), the ROM's code area from
  baserom.gba, GBA RAM symbols as absolute addresses (`tools/ps2/gba_syms.py`).
- **Runtime** (`src/ps2`): TLB entries map 0x02/03/04/05/06/07/08/0D000000 onto the top 16 MB of PS2 RAM
  (PCSX2's kernel refuses `PutTLBEntry` with -1; its unused entries 39-47 work with `_SetTLBEntry`); BIOS calls in C;
  C ports of the ARM routines the game runs from IWRAM (UpdateAllEntities, sub_080007C4, sub_080008A8,
  sub_08008FA4) and of two Thumb oddities in rom1's code area; `ICALL()` resolves indirect calls to GBA addresses.
- **I/O side effects:** a read-only I/O mapping that traps stores was tried first; PCSX2 raises no TLB-modified
  exception, so stores went through silently. Instead translated code's R*/W* macros send I/O addresses to
  `src/ps2/io.c` (DMA runs in software, IF write-1-to-clear), and hand C's `DmaSet` polls it.
- **Debugging aids:** a VBlank-interrupt watchdog prints the frame count and the last functions entered (the
  global-state trace ring, now also fed by translated C-convention functions on the PS2) once a second over SIO.
  Hangs found with it: m4a waiting for VCOUNT 159 (VCOUNT now alternates 159/160), a DMA3 wait, EEPROM polling
  (the EEPROM window is mapped to all ones; no saves yet).
- Next: rendering (mGBA's software renderer, MPL-2.0) and vsync pacing, input.

## Step 25: graphics, input, and the file select screen on the PS2 (2026-11-23)

- **Rendering:** mGBA 0.10.5's software renderer, vendored in `src/ps2/mgba` (MPL-2.0, with its LICENSE and a
  README naming the commit; 51 files: the renderer and the headers it includes; a handful of mGBA functions it calls
  are stubbed in `src/ps2/mgba_stubs.c`). `src/ps2/video.c` hands it the I/O registers, palette and OAM each frame
  (VRAM it reads directly from the mapped GBA video memory), draws 160 lines into a 256-wide buffer (mGBA's 32-bit
  colour is the GS's CT32 layout) and shows it with gsKit, waiting for vsync. Frames 60/600/900/1500 are written to
  `host:` as PPM, to compare with `tools/mgba_run --shot` without a window.
- **Bugs found on the way to the logo and title:**
  - KEYINPUT read 0 (active low: every button held, including the reset combo) and the game reset every frame.
  - `sub_0800D87C` is `void` but called through an `int` table in a `while` loop; on ARM r0 happened to be 0, on
    MIPS v0 held garbage. It returns 0 now (matching unchanged).
  - The global-state tables: GCC aligns each object's table to 8, entries were 12 bytes, so the section had gaps and
    the binary search read shifted entries. A failed lookup made `gstate_run` call the copy's data as MIPS code,
    which stopped the EE with interrupts off. Entries are 16 bytes on the PS2 now.
- **Tools that found them:** the watchdog prints the interrupted pc (COP0 EPC); hand-written C is built with
  `-finstrument-functions` into the same trace ring; a flag word (0x0203C1F0) makes all trace points print over SIO
  for a window of frames.
- **Input:** `src/ps2/input.c` reads controller 1 with libpad (XSIO2MAN/XPADMAN from rom0) into KEYINPUT each frame:
  Circle A, Cross B, L1/R1 L/R, Start, Select, D-pad or left stick.
- **State:** logo and title match mGBA's frames; the file select screen appears (files 2 and 3 "corrupted": the
  EEPROM stub reads all ones). 60+ seconds (22,000 frames) without a crash. The heartbeat line now uses tp-ps2's
  `heartbeat: vblank N frame M` format; without it `pcsx2_run.py` reported a stall after 15 real seconds that wasn't
  one.
- Not yet: saves (EEPROM), sound, HBlank-timed effects (per-scanline registers), link cable / multiplayer, and the
  ARM-side replay check after this step's translator changes.
- **Saves (same day):** `src/ps2/io.c` emulates the 64 Kbit EEPROM behind the game's DMA3 bit streams (read request
  `11`+address+`0`, 68-bit read; write `10`+address+64 bits+`0`; 6- or 14-bit addresses), in mGBA's `.sav` layout
  (8 KB, block n at n×8, bits most significant first), so mGBA saves load as they are. `src/ps2/save.c` loads
  `host:zeldaalttp.sav` at startup (missing: an erased chip, all ones) and writes it at the vblank after a write.
  With no file the game formats the save and the file select is clean; `recordings/session1/end_save0.sav` shows
  file A with its hearts and Four Swords data. shortcut: host: only; a memory card file for real hardware is next.
- **Replay check after the PS2 work:** `JOBS=1 AUTO_C=1 TRACE_MAX=6 tools/check_nonmatching.sh` (now with a `JOBS`
  setting: AUTO_C builds need one job) first gave 1,232 ok / 120 fail. Bisected: not the allocator translation,
  not gstate2c's range or inner-label changes (each switched off: still 120), the pre-session commit still gave
  1,325 / 24, commit f67c462 1,328 / 24. The cause was the memory safeguard that compiled generated global-state
  C at agbcc -O0; back at -O2 (still under `ulimit -v`): 1,328 ok / 24 fail, the same known failures as before
  (EEPROM, I/O, the four sound-path calls). Why -O0 behaves differently isn't known yet.

## Step 26: two game instances on the PS2 (2026-11-23)

Goal: two players, each with a game instance of their own, shown side by side; no link cable emulation yet (the
instances will later share game data directly, like a split-screen game).

- **Threads.** Each instance runs the game's AgbMain in an EE thread (256 KB stack, same priority as the main
  thread). Scheduling is cooperative: `ps2_vblank_wait` (VBlankIntrWait) wakes the main thread and sleeps, so
  each instance runs exactly one game frame per turn. The main loop (`src/ps2/main.c`): for each instance, swap
  its memory in, run its frame, draw its screen, read its controller port, write its save. Then present both
  screens side by side (`src/ps2/video.c`, one mGBA renderer and one texture per instance).
- **Per-instance state outside GBA memory**: EEPROM image, read address and dirty flag (`io.c`), save file
  (`host:zeldaalttp.sav`, `host:zeldaalttp_p2.sav`), pad port. The game itself keeps nothing in PS2 memory
  (checked with `nm` on the game objects: only port glue has .data/.bss).
- **Tried first: repointing the TLB entries per instance** (each instance's RAM in its own physical block,
  `_SetTLBEntry` on every switch). Instance 0 ran; instance 1 died at once in m4a sound init with the
  global-state CPU block reading zero (`gstate_run 00000000: sp 00000000`). The EWRAM mapping checked fine from
  the main thread, and a probe written from the instance thread read back. But the traces showed instance 1
  reading stale values for gCpu (0x0203C000). Cause, from PCSX2's source (`recVTLB.cpp`,
  `vtlb_DynGenWrite_Const` / `ReadNonQuad_Const`): for a constant address the EE recompiler looks up the page
  mapping at compile time and emits the host pointer. A TLB write (`COP0.cpp` `MapTLB`/`UnmapTLB`) only clears
  the recompiled code *in* the remapped pages, so code compiled while instance 0 was mapped keeps accessing
  instance 0's memory. Real hardware wouldn't have this problem, but PCSX2 is the test bench.
- **Now: one fixed mapping onto a live block, memory copied per switch** (`src/ps2/tlb.c`). `ps2_tlb_select(i)`
  copies the running instance's EWRAM, IWRAM, I/O, palette, VRAM and OAM (the used 387 KB) out to its backing
  block (0x01900000 + i MB, through kseg0), then copies instance i's in. Two switches per frame with two players.
- **Debugging aids kept**: `ps2_trace_on` (frame.c) prints every traced entry over SIO; gstate_run fails loudly
  when sp is outside EWRAM.

State: both instances boot and reach the file select in PCSX2, each with its own save. Cost: rendering two
screens takes 8.4 M EE cycles per frame (budget 4.9 M), the game and the memory switches about 2 M, so the pair
runs at 30 fps. Moving the PPU work to the GS is the next performance step.
Open: a save-dependent TLB miss in the file select (`gs_sub_08003870` reading a null pointer's fields at 0x0–0x10,
loads only). It happens with one instance too when given the second instance's save, so it isn't a multi-instance
bug. Next to fix.

## Step 27: four game instances (2026-11-23)

- `INSTANCES 4` (`src/ps2/main.c`); the screens are laid out 2x2 for 3-4 players (`ps2_video_present`).
- Players 2-4 get copies of player 1's save renamed B, C, D: `tools/ps2/fs_save_copy.py <src> <dst> <letter>`.
  It un-reverses mGBA's byte-reversed 8-byte EEPROM blocks, changes the name at 0x588 (game order) in both save
  copies (0 and 0x1000), and fixes the file-1 status checksum at 0x70. That checksum is the Minish Cap algorithm
  (tmc `CalculateChecksum`) over the status word plus the 64-byte record at 0x580. Its range was found by searching
  every range for one that matches the stored value. It's a stand-in until the port has its own save system.
- First run: `memset` stored to address 0 during video init. With four 256 KB thread stacks the heap (about 3 MB
  between `_end` and the stack) no longer had room for the per-screen `memalign` buffers next to gsKit's queues.
  Fix: the four 160 KB pixel buffers are static (.bss).

State: four instances reach the file select, no TLB misses or fatal errors in 60 s. At real-time speed PCSX2
shows about 12-14 fps: four software renderers cost about 4.2 M EE cycles each, against 4.9 M per frame for
everything. Players 3-4 have no controller yet (multitap support is still to come).

## Step 28: the link between instances, scripted input, and a linked replay on the PS2 (2026-11-24)

Goal: run a recorded replay in PCSX2. Both recordings are linked two-GBA runs, so the instances needed a link first.
(`tools/fs_walk.inputs` turned out to walk into A Link to the Past: mGBA shows its intro from frame 1,500. Its main
loop busy-waits on a RAM flag its VBlank interrupt sets, which the port doesn't run outside VBlankIntrWait.)

- **Link, at the transfer level (`src/ps2/link.c`).** The game's link layer is in `src/rom2.c`: `sub_0800C41C`
  init, `sub_0800C658` queues a 20-byte payload, `sub_0800C75C` (VBlank, parent only) starts a packet,
  `sub_0800C54C`/`sub_0800C6A8` take received ones. It also has the serial/Timer3 handler `sub_0800C7E8` (copied to
  EWRAM). A packet is 13 16-bit transfers: the parent's 0xFEFE, then 12 halfwords from every player.
  `ps2_link_exchange` runs after every instance's frame. While the parent's SIOCNT busy bit is set, it gathers each
  instance's SIOMLT_SEND, writes SIOMULTI0-3 into every instance, and runs a C port of the handler on each
  instance's memory (`ps2_inst_ptr`: the mapped memory for the running instance, else its saved copy). SIOCNT
  reads (`io.c`) report the cable's status: SD high, SI low only on instance 0 (parent), ID = instance.
  No serial timing or interrupts. Packets land between frames.
- **The EWRAM helper.** `sub_0800C6A8` calls an ARM routine the game copies to 0x02030950 (from 0x08000318) through
  a cast function pointer. On the PS2 that jumped into GBA bytes and executed them as MIPS, and the EE died with
  interrupts off. `ps2_link_take` is that routine in C, under `PLATFORM_PS2`.
- **AgbMain returns** to switch games (crt0 then runs init again): `instance_main` loops.
- **Scripted input (`src/ps2/input.c`)**: `host:replay_p<n>.inputs`, the mGBA runner's format, replaces pad n;
  keys for frame k+1 are set after frame k, as in the runner.
- **FS_ONLY on the PS2** (`Makefile.ps2`, default on): picking a file starts Four Swords, as `recordings/fs_only.gba`
  does, so `tests/intro_linked.inputs` applies. `INSTANCES=n` sets the player count.
- **The lobby.** `sub_080368D8` resets the link whenever a player who was ever received is missing from this frame's
  packets. Every frame must carry everyone, which the between-frames exchange does. Both instances reached
  "Linking with other systems…" with the right badges, then the lobby step-5 hold (`gUnknown_03000FC0` = 02 05).
  The PS2 gets there about 200 frames later than mGBA, so the recorded presses run out first. With A/Start presses
  added after frame 1,400 (`build/ps2/replay_p*.inputs`, not the test file), the instances go on to Choose a Stage
  and into a stage together.
- **Code kept as bytes in the asm.** Five fixes on the way into the stage:
  - `sub_08008CB4.inc` held three Thumb handlers and their jump table (0x08008D00) as `.byte`s, so the translator
    never generated them. They're now written as instructions with labels (`sub_08008D0C/D24/D50`,
    `gUnknown_08008D00`, `gUnknown_08008CC0`). The literal pool in `sub_08008E5C.inc` names them, and
    `sub_08008D8C`, symbolically. Same bytes: `make compare` OK.
  - General fix: such raw ROM addresses can't be relocated by the PS2 link. `tools/ps2/gba_copies.py` lists every
    global-state copy's GBA address (from the matching ELF). `gstate_run` and `find_entry` map a ROM address with
    no entry to the same offset in the copy's PS2 bytes (`ps2_gba_copy`).
  - `gstate2c.py`: a function whose offset 0 doesn't decode (hand-written rom1 routines that start with their
    tables, e.g. `sub_0800505C`) is no longer dropped when other entries decode. 24 native-only functions down
    to 18.
  - Division by zero: GCC guards divisions with `teq`, the GBA's libgcc returns 0 (`Ldiv0`), and the game relies
    on it (`sub_08012B64`, a random pick among none). The trap handler (`crash.c`) now sets HI = LO = 0 and
    continues. `crash.c` reports over SIO (it used `printf`, which never showed).
- **Debugging aids:** the watchdog's stuck report lists the EE threads' states (that's how the "everything asleep"
  cases were told apart); `ps2_icall` stops on targets below 0x00100000 instead of jumping into the kernel.

State: two instances go from empty saves through the link lobby into the same Four Swords stage in PCSX2 (15,000+
frames, no crash or TLB miss). Not yet: frame-exact comparison with mGBA (the PS2 runs a different number of frames
through loading), the original replay scripts unmodified, A Link to the Past.

## Step 29: video modes and the two-player layout (2026-11-24)

The user's spec: one player 240p by default, with 480i, 480p and 720p options; 240x160 centred 1:1 in 320x240p,
2x (480x320) in 480p, 3x (720x480) inside the 854x480 anamorphic frame in 480p 16:9. Two players: 4:3 480p, P1 on
the top half and P2 on the bottom half, each centred.

- `src/ps2/video.c` has a mode table (GS mode, interlace, buffer size, the width the screen spans in square pixels,
  one-player scale). The GS setup follows `../psx-to-ps2-HAL/src/ps2/display_ps2.c`: gsKit sets the timing, then
  DISPLAY1/2 get MAGH = DW / buffer width - 1, centred. 720p is a 640x720 buffer doubled horizontally, 16-bit so two
  buffers fit in GS memory. 16:9 is a 640-wide buffer: square-pixel widths are scaled by 640/854.
- Layout (`place`): one player at the mode's scale (720p: 4x, 960x640; 480i: 2x, both my choice, the spec didn't
  say); two players at 1:1 (240x160), stacked with no gap, the 240x320 pair centred in the frame (the user's choice after trying 1.5x and 1:1 centred per half); three or four in a 2x2 grid.
  Non-integer sizes (1.5x, the 16:9 squeeze) use bilinear filtering, whole multiples stay nearest.
- Not in a menu yet: `ps2_video_mode` comes from `make -f Makefile.ps2 VIDEO_MODE=0..4` (240p, 480i, 480p, 480p 16:9,
  720p); without it, 240p for one player and 480p for more.

Checked in PCSX2 (software renderer): two players in 480p reach the stage one above the other; one player in 240p,
480p 16:9 and 720p shows the centred title screen. No TLB misses. One player alone stops at "Linking with other
systems" since Four Swords needs a link partner; single player is a later feature. 480i and plain 480p one-player
weren't run (same code paths as 480p).

Aspect check against mGBA (user asked): PCSX2 screenshots looked too wide because the user's `PCSX2.ini` has
`AspectRatio = 16:9`, which stretches the 4:3 output by 4/3 (a screen measured 316x158, ratio 2.0, against mGBA's
240x160, 1.5). The port's output was right. Screenshot runs now pass `--set "AspectRatio=4:3"` to `pcsx2_run.py` (16:9
for the 16:9 mode); with it the screens measure 306x204, 1.5. The earlier 240p/16:9 shots above were taken stretched.

## Step 30: wide view, step 1: the renderer draws more than 240x160 (2026-11-24)

Goal (user): try one player at 320x240 and two players at 640x240 each by drawing more of the game world, not
stretching. Step 1 only changes the renderer, to see what the unchanged game puts in the extra area.

- `make -f Makefile.ps2 WIDE_VIEW=1` (off by default): one player 320x240 (1:1 in 240p, 2x in 480p), two players
  640x240 each, filling the 480p frame one above the other. Three or four keep 240x160.
- mGBA renderer (`src/ps2/mgba`): `GBA_VIDEO_HORIZONTAL/VERTICAL_PIXELS` are now the variables `ps2_view_w/h`; line
  buffers, the scanline cache and its dirty bits are sized for 640x240. Bitmap modes keep the GBA's 240x160 layout.
  Sprites: x is negative only when the sprite wraps past 511 (mGBA sign-extended x 256-511, so a 320-wide view lost
  them), and below a taller view means y up to 255. Window registers are 16-bit internally; a window edge at 240/160
  (the GBA screen's edge) becomes the view's edge.
- Memory: the four 640x240 pixel buffers didn't fit the ~2 MB EE heap (gsKit's allocation came back NULL, stores near
  0x30000000). One 1.2 MB pool now holds two wide or four normal screens, and gsKit's draw queues are 64 KB/16 KB
  instead of its 1.25 MB default (a clear and a sprite per screen each frame).
- Check: at each dump frame the wide build also draws the GBA's own 240x160 from the same state
  (`frame_p<n>_<frame>_gba.ppm`). Its pixels equal the wide frame's top-left 240x160 in all 10 dumps (title, Choose a
  Stage, the stage while walking).
- Build bug found on the way: mGBA objects didn't depend on mGBA's headers, so after the struct change
  `software-mode0.o` (text backgrounds) kept the old layout and the stage drew with no backgrounds. `Makefile.ps2` now
  rebuilds them (and `video.o`) when a header changes.

What the extra area shows (PCSX2, two players with P1 walking, and one player at the lobby):
- Backgrounds repeat every 256 pixels across: the maps are 256 wide (32 tiles), so the room, and the HUD layer with its
  hearts and rupee counter, appear two and a half times on a 640-wide screen.
- Below line 160: HUD-layer rows the game never fills (old tiles), black and stray tiles in the stage, tile data as
  garbage on the title.
- Sprites the GBA keeps out of sight become visible: the switches' sprites again below the screen, the "YOU / P1"
  marker parked at x 250 in the lobby.
- No other players or enemies appear in the extra area: the repeated room is the map wrapping, not more of the room.
- Cost: wide two-player drawing is ~19M EE cycles a frame (4 frames of time), against ~6M for 240x160; about 12 fps.

Not done: game side (map streaming, camera, culling, HUD), and a faster renderer. Found on the way, not from this
change: with the A-only lobby replay, the EE executes a word that looks like a PS2 code address around frame 1770
("Unknown R5900 SPECIAL", then a TLB miss at 0x24a00), in the normal build too. To investigate.

## Step 31: survey of the video features the game uses (2026-11-24)

For the GS renderer plan: which GBA video features need GS support. `mgba_run --survey FILE` wraps mGBA's renderer
so every video register write is seen with its scanline (any write during lines 0-159 is a mid-frame change,
whatever caused it), and logs per frame: display mode, BG types, windows, blend settings, sprite attributes
(visible sprites only), HBlank DMAs and HBlank/VCount interrupts. Runs: `tests/intro_linked.inputs` (boot, file
select, name entry, game choice, to Choose a Stage; 1,700 frames) and session 1 (44,522 frames, one stage).

Found:
- **Mode 0 only**: four 16-colour text BGs. No rotating/scaling BGs, no bitmap modes, no 256-colour tiles. BG mosaic
  bits are set on some screens, but the MOSAIC register stays 0 (no visible effect).
- **Sprites**: rotating/scaling sprites in the stage (from frame 4388; double-size ones around frames 28,867-32,705).
  No semi-transparent sprites, no sprite window, no sprite mosaic, no 256-colour sprites. 2D tile mapping on Choose a
  Stage.
- **Blending**, rare and on menus, apart from fades:
  - full-screen fades: brighten or darken with every layer a first target (stage start and end);
  - alpha eva 12 + evb 8 (sum 20, not 16), BG2 over BG3, file select and name entry (frames 337-837);
  - alpha eva 4 + evb 12, BG1 over everything, the A Link to the Past / Four Swords choice fading in (847-940);
  - brighten on BG2 only, the A Link to the Past title fading (1546-1585).
- **Per-scanline effects**, two:
  - HBlank DMA to WIN0H (the window's left/right edges per line) with a darken fade outside the window: the diagonal
    wipe from Choose a Stage into the stage, and out of it (1701-1752, 44297-44415);
  - HBlank DMA to BG3HOFS (BG3's horizontal scroll per line) during the game-choice transition (846-938).
  A VCount interrupt at line 0 is on all the time, but writes no video registers mid-frame (DISPCNT on 4-6 frames
  only, at transitions).
- **Windows**: window 0 only: the wipe above, and on the file select/name entry (425-740). No window 1.

Limits: one stage and the menus. Other stages, bosses, the pause and results screens and game over aren't covered;
more recordings would need the same check.

## Step 32: per-line effects (HBlank DMA) and the VCount interrupt (2026-11-24)

The survey (step 31) found two per-line effects driven by HBlank DMA. The port drew neither.

- **Why no HBlank DMA ever started:** the game starts it from its VCount interrupt, not VBlank. The VCount handler
  alternates: at line 0 `process_dma_request` (src/main.c) starts DMA0 from a queued request and moves the match line
  to 32; at line 32 `sub_0800B7FC` runs the m4a sound mixer and moves it back to 0. The port only raised VBlank.
  `ps2_vblank_wait` (src/ps2/frame.c) now raises the VCount interrupts too, after VBlank and before the frame is
  drawn, each line once a frame in line order. Three wrong turns:
  - clearing DISPSTAT's VBlank flag for the VCount call hung the file select (`sub_0801484C` polls that flag): the
    port keeps it set between frames, as before;
  - the port calls the game's handler table entries directly (VBlank is `INTR_TABLE + 4`), not its dispatcher, so the
    first try ran the VBlank handler twice; VCount is `INTR_TABLE + 8`;
  - the line-32 handler reaches the sound mixer (`sub_081339D4`, native ARM, not translated). Shortcut until sound is
    ported: frame.c does only its hand-back (DISPSTAT line 0, table entry back to `process_dma_request`). The table
    holds the PS2 addresses of those C functions, not GBA addresses.
- **Drawing:** `video.c` applies each active HBlank DMA's table while drawing: line y gets entry y - 1 (written
  through the renderer's register write), and after line 159 entry 159 goes into the I/O register, where the GBA's
  last transfer leaves it.
- **Check against mGBA** (`recordings/fs_only.gba`, `tests/intro_linked.inputs`; the PS2 build is FS_ONLY, the full
  ROM goes elsewhere): the HBlank DMA here is the window wipe that opens Choose a Stage (mGBA frames 1305-1409).
  PS2 frames 1476-1496 are pixel-identical to mGBA frames 1306-1326, both players. From 1500, 19 pixels differ on line
  0 (cause not found; the last-entry change didn't affect it). From 1508, 1,300-2,200 pixels along the wipe's edges, and no
  mGBA frame matches exactly; the frame offset also changes by one (170 to 169) there, so probably a lag frame on
  the GBA (interrupt-driven wipe vs main-loop clouds), which the port doesn't reproduce. Not proven.
- No TLB misses in the run. The stage-entry wipe (HBlank DMA to WIN0H in session 1) and the BG3 wave (game choice,
  not reached in FS_ONLY) use the same path.

## Step 33: GS renderer, first version: the stage matches the software renderer exactly (2026-11-24)

`make -f Makefile.ps2 GS_RENDER=1` draws the GBA screens with the Graphics Synthesizer (`src/ps2/gsrender.c`), covering
what the survey (step 31) found in the stage: mode 0 16-colour BGs, sprites (1D/2D mapping, flips, rotating/scaling
ones as textured triangles), window 0 with per-line edges, and brighten/darken fades.

- Each frame per instance: VRAM goes up as one 4-bit texture, 256 wide (32 tiles a row; BG tiles rows 0-511, sprite
  tiles 512-767, rearranged on the EE), and each 16-colour palette as its own 8x2 CLUT (32 of them, 256 bytes apart).
  Layers are drawn back to front (per priority: BG3..BG0, then sprites from OAM 127 down to 0) into a 256x160 render
  target per instance, which `video.c` shows as before (no texture upload). Colour 0 is transparent through the alpha
  test. Window 0: its shape goes into the target's alpha once a frame (line runs, so per-line edges from the HBlank
  DMA cost 160 small rectangles at most); later colour writes mask alpha off, and a layer shown only inside or outside
  uses the destination alpha test. Fades: a blended rectangle (darken (0 - Cd) * evy + Cd, brighten (white - Cd) * evy
  + Cd), where the window's effect bit is on.
- Check: at the dump frames the software renderer draws the same state too, the GS target is read back
  (tp-ps2's readback, from the HAL) and compared pixel by pixel; both pictures are written (`_gs.ppm`).
- Fixed on the way:
  - a 4-bit texture's CLUT load takes 16 entries at CSA, not 256: per-palette CLUTs, loaded with CLD 4 (only when the
    palette changes);
  - mGBA expands 5-bit colour as `(c << 3) | (c >> 2)`, not a plain shift;
  - the GS samples at a pixel's top-left corner: a flipped tile's texture range must start 1/16 texel inside (u + 8)
    or its first pixel reads the next tile, and the end must stay at u (u = 0 minus 1/16 wrapped to garbage);
  - the render target shown through gsKit needs `TBW` set (normally set by an upload): rows repeated every 32;
  - per-line window edges drawn by redrawing tiles per line run overflowed the packet: the alpha mask instead;
  - the game starts DMA0 with source 0 for a frame (the BIOS, which a DMA can't read): skipped (both renderers).
- Result (2 players, intro replay): the stage frames (2000, 2400, 2800) are identical to the software renderer, 0
  pixels different on both screens; Choose a Stage 7 pixels; the lobby (3,820) and Choose a Stage's opening
  (6,000-22,000) differ by their alpha blending, not done yet. Drawing both screens: ~1.5M EE cycles a frame (the
  software renderer: ~6M); no TLB misses.

## Step 34: GS renderer: fades fixed, alpha blending (2026-11-24)

- The fade, window-mask and backdrop rectangles were sent with a PACKED GIF tag naming RGBAQ/XYZ2 but data written as
  A+D pairs (PACKED register formats differ), so they drew garbage: the brighten outside Choose a Stage's opening
  window did nothing. One A+D helper (`flat`) now draws them. Choose a Stage's opening (window wipe + brighten) became
  identical to the software renderer.
- Alpha blending (BLDCNT effect 1; the lobby, BG2 over BG3, eva 12 + evb 8): the render target's alpha carries "the
  layer here is a second target" (0x80 / 0x40, vertex alpha through MODULATE; the alpha test keeps colour 0 out at
  0x40). A first-target layer is drawn in four passes: frame buffer x evb where the flag is set, + layer x eva there
  (COLCLAMP), the layer as is where it isn't, then its own flag. Windows are scissor rectangles while blending (the
  alpha is taken); a per-line or wrapping window with blending isn't done (logged, drawn unblended) — the survey has
  none.
- Result, intro replay, 2 players, 34 frames compared per screen: 33 identical; the lobby has 3,261 pixels one level
  off (the GS adds b * evb / 16 and a * eva / 16 rounded separately, mGBA rounds the sum), none further.
- Cost: both screens drawn in ~1.5M EE cycles a frame against ~6M for the software renderer.

## Step 35: GS renderer by default; four players 1:1 in a 2x2 block (2026-11-24)

- `GS_RENDER` defaults to 1 (`Makefile.ps2`); `GS_RENDER=0` builds the software renderer, which stays the default with
  `WIDE_VIEW` (the GS renderer doesn't do the wide view yet).
- Three or four players: four 240x160 screens at 1:1, touching, the 480x320 block centred in the 640x480 frame
  (`place()` in `src/ps2/video.c`; it used to scale each screen to fill a quarter of the frame).
- Four players cost 4.6 M EE cycles a frame to draw, about 1.1 M per screen. Timing `ps2_gsr_draw` split that into
  the VRAM-to-texture swizzle in `upload()` (about 0.3 M per screen) and building the draw packet (about 0.85 M;
  sending both is small). Two changes to the packet building:
  - Tiles of colour 0 only are found during the swizzle (`sBlank`) and skipped in `draw_bg`.
  - A blended BG's tile list is built once and its packet copied for the other three passes (`draw_layer`).
    Sprites are still listed again each pass, since their list may switch PRIM.
  Four screens now cost 2.6 M a frame, two 1.2 M. Pictures are unchanged: the 2-player replay's 34 compared frames are
  all identical to the software renderer, and the 4-player run gives the same differences as before (one level of
  blend rounding in the lobby and file select).
- Four players still run at 30 fps: the game and the memory switches take 3.9 M of the 4.9 M frame, so drawing has to
  shrink further (the swizzle) and the game side too.
- The 4-player run shows the known TLB misses in `gs_sub_08003870` (Step 26: a null animation pointer in the file
  select, save-dependent); players 3 and 4 sit on the file select with no inputs. Still open.

## Step 36: shared-world plan; phase 0 step 1, timing the memory switches (2026-11-24)

- The shared-world plan (one world, a camera per player) is in `docs/Planning Doc.md` Phase 5, with phases 0-3 and
  the first estimate: 4 players from 6.5 M EE cycles a frame to ~3.2-3.8 M.
- `ps2_tlb_select` (`src/ps2/tlb.c`) now counts its cycles (`ps2_switch_cycles`); the 10-second cost line shows them
  as part of the game's share.
- Results (EE cycles per frame, 4.9 M at 60 fps):

  | run | game share | of which memory switches | game code |
  |---|---|---|---|
  | 4 players, lobby / file select | 3.92 M | 3.57 M | 0.35 M |
  | 2 players, lobby | 2.42 M | 1.78 M | 0.64 M |
  | 2 players, stage (replay ended, players idle) | 1.84 M | 1.78 M | 0.05 M |

  Each switch copies the instance's 387 KB out and the next one's in: about 0.9 M per instance per frame, ~1.15
  cycles a byte. The game code is small next to it in every scene measured.
- So the plan's estimate was wrong about where the time goes: the four simulations are cheap, copying memory is not.
  A shared world still removes the switches, but making the switches cheaper (copying less, or not at all) would also
  put 4 players at 60 fps (2.6 M rendering + ~0.35 M game) without changing the game. A busy 4-player stage still
  needs measuring; there's no 4-player replay yet.
