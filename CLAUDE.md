# Four Swords PS2 port — notes for Claude

Fork of the `zeldaalttp` GBA disassembly (USA *A Link to the Past & Four Swords*, `AZLE`). Goal: decompile
Four Swords to C and port it to the PS2 with split-screen multiplayer in place of linked GBAs. Plan:
`docs/Planning Doc.md`. Rules below come from the TP PS2 port (`../tp-ps2`), which took them from the MGS1
and Silent Hill PS2 ports.

## Scope

- **Four Swords only.** Leave A Link to the Past code (`src/lttp`, LttP-only asm) in assembly. The first
  target is a program that boots straight into Four Swords, as FourSwordsRecomp does.
- **Only USA matches.** `baserom.gba` is USA (`checksum.sha1`). `baserom_eu.gba` and `baserom_jp.gba` are
  reference only. No ROM, BIOS or extracted asset is ever committed.

## References (`reference/`, excluded locally via `.git/info/exclude`, never committed)

- `reference/tmc`: the Minish Cap decomp. Four Swords shares its engine. Check it for names, structs and
  matching C before naming or decompiling shared engine code.
- `reference/FourSwordsRecomp`: static recompilation. Use it for structure (how Four Swords boots alone, how
  several GBAs run in one process, known addresses in its `CLAUDE.md` and `docs/DESIGN.md`), not as code.

## Ponytail (solve it with the least new code)

From `DietrichGebert/ponytail` (MIT), `AGENTS.md`. Take the first option that fully works: does it need to exist;
already in this codebase; standard library or platform; an installed dependency; one clear line; otherwise the minimum.

- Before editing, list everything the change must reach. Bug fixes: grep the callers, fix the root cause once.
- Be lazy about the solution, not the change: finish every part it needs. No abstraction, option or "for later" code.
- Deletion beats addition. Between options of equal size, take the one correct on edge cases.
- New non-trivial logic leaves one small check. A shortcut with a known limit gets `shortcut: <the limit>, <when to upgrade>`.
- Never cut validation, error handling that prevents data loss, security, or anything the user asked for.

## Matching build (regression check)

After every decomp change, `make compare` must report `zeldaalttp.gba: OK` (SHA-1 in `checksum.sha1`).
Needs `tools/agbcc` (pret/agbcc) and `arm-none-eabi` binutils. A decompiled function counts as done only
when it matches; anything under `NONMATCHING` is tracked in the planning doc.

## Accuracy checks (no TAS exists for Four Swords)

- The matching build is the check for the decomp itself.
- For the PS2/PC port: compare game state against mGBA at the same frame with the same scripted inputs
  (RAM dumps and screenshots), one GBA instance per player.

## Working with the user

- **Notify at stopping points.** Send a short push notification at a question that needs the user
  or at a finished step of a multi-step plan; they aren't always watching the session.
- **Web access: GitHub only without asking.** GitHub (github.com, its API, raw/release downloads)
  is fine. Ask the user before fetching or downloading from any other site.
- **Never access tcrf.net** (The Cutting Room Floor) in any way: no fetch, curl or search-result
  fetches, even if the user approves or asks. The site doesn't want Claude scraping it. Ask the
  user to paste the relevant section instead.
- **Keep `docs/Running Walkthrough.md` up to date** at milestones and before commits: append a dated
  `## Step N: ... (date)` section on how each change was made, what was tried and failed, and the state
  afterwards. Update it together with `docs/Planning Doc.md`'s checkboxes.
- **Keep `Claude Conversation.md` up to date** at milestones and before commits. Concatenate *all*
  session `.jsonl` files in `~/.claude/projects/-home-alex-Documents-zeldaalttp-ps2/` in date order
  (`ls -tr`) into a scratch file, then run
  `python3 tools/ps2/archive_conversation.py <that file> "Claude Conversation.md"`. The script
  rewrites the whole file, so passing only the newest session drops earlier history; check that
  `git diff` shows no removed lines.
- **Check what was already tried.** Before planning a debugging technique (especially on
  hardware), search `docs/`, the reference repos' docs, and the other ports' `Running Walkthrough.md`
  (`../tp-ps2/docs`, `../mgs1_ps2`, `../silent-hill-1-ps2-port`) for what has already been tried and failed.

## Shell

- **No `pkill -f <pattern>`** in a command whose own command line contains the pattern: it kills
  the calling shell and loses the output. Stop background tasks with TaskStop, or kill by a PID
  read first.

## Emulator testing

- **mGBA is the reference**, running the user's own ROM. Keep it muted. Multiplayer needs linked instances.
- **Windows are invisible by default** (Xvfb, as `../tp-ps2/tools/ps2/offscreen`); a `--show` option puts them
  on the desktop for that run.
- **PCSX2 uses the software GS renderer** (`PCSX2.ini` `[EmuCore/GS] Renderer = 13`), enforced by any run
  script; state-only comparison runs may use the null renderer. Never the hardware renderer: the VM has no
  real GPU. Measure frame rates in emulated time.
- **Parallel PCSX2 runs only when they save time** (up to 3 at once). A single question gets a single run.
- **A PCSX2 stall is a crash.** 15 emulated seconds without a new frame (at most 15 real seconds
  when emulation is slower): close PCSX2 and end the run, rather than waiting out a long timeout.
- **Try PINE when debugging in PCSX2.** PCSX2's IPC socket (`EnablePINE = true`) reads EE memory from the
  host while the game runs or is hung. Record state in globals, find their addresses with `nm`, and read them
  (`../tp-ps2/tools/ps2/pine_read.py <wait_s> <hex addr> <count>`).
- **Never block with interrupts off (EE).** The EE kernel keeps the interrupt-enable state global, not per
  thread, so a wait on a semaphore with interrupts off (printf's lock, host: file I/O, an IOP RPC) stops all
  interrupts, including the wait's own completion. Port code reachable from game code logs over SIO, never
  `printf`, and wraps blocking I/O so interrupts are on.
- **Never dismiss "TLB Miss" lines in PCSX2.** PCSX2 lets user-mode reads of unmapped addresses continue, but
  a real PS2 crashes there. GBA code reads open bus and unmapped memory freely because the GBA doesn't fault.
  Collect the unique PCs and fix each one.

## Real hardware

- Deploy through the HAL's UDPFS server and log receiver (`../psx-to-ps2-HAL/tools/udpfs_serve.py`,
  `tools/ps2_log.py`) with this port's own Neutrino folder, as the other ports do.
- **A hung PS2 needs a power cycle.** RESET has never brought Neutrino back on the user's console.
  Ask them to hold power to switch off, turn it on, and restart Neutrino from uLaunchELF.
- **No EE hardware data breakpoints.** Under Neutrino they never fire. Catch stray writes with software
  checks in port code linked after the game.
