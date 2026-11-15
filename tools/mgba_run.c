// Headless mGBA runner: 1-4 GBAs on one link cable, a button script per GBA, screenshots and RAM dumps
// at chosen frames. Build: tools/mgba_run.sh. Usage:
//   mgba_run ROM FRAMES [--players N] [--inputs FILE] [--inputsP FILE] [--saveP FILE]
//            [--shot N,N,...] [--out DIR] [--dump N:ADDR:LEN] [--watch ADDR] [--coverage FILE]
// --coverage: write a bitmap of executed ROM halfwords (bit n = address 0x08000000 + 2n, all GBAs combined)
// for tools/reach.py. Same run as without it (same RAM), a little slower.
// P is a player number 0-3: --inputs1 a.inputs is GBA 1's script; --inputs is the default for all.
// Without --saveP a GBA starts with an empty EEPROM that is never written to disk.
// Inputs file: lines "FRAME KEYS", KEYS = '-' or letters A B s(elect) S(tart) R L U D r(ight) l(eft);
// held from FRAME until the next line. Output files: DIR/pP_fNNNNN.png. Output lines start with "pP ".
//
// GBAs are linked with mGBA's lockstep SIO driver; the host callbacks are a C port of
// src/platform/qt/MultiplayerController.cpp (mGBA 0.10.5). mgba-qt runs each GBA on its own thread, which
// makes linked runs differ from run to run (tested: different RAM after 6,000 frames every time). Here
// all GBAs run on one thread in a fixed order, one core->runLoop (up to the next hardware event) each,
// skipping GBAs that the link has put to wait, so a run always gives the same result.
#include <mgba/core/core.h>
#include <mgba/core/config.h>
#include <mgba/core/log.h>
#include <mgba/gba/core.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/gba/gba.h>
#include <mgba/internal/gba/input.h>
#include <mgba/internal/gba/sio/lockstep.h>
#include <mgba-util/png-io.h>
#include <mgba-util/vfs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 4096

struct Script {
	unsigned frame[MAX_LINES];
	int keys[MAX_LINES];
	int n;
};

struct Player {
	struct mCore *core;
	struct mCoreCallbacks callbacks;
	struct GBASIOLockstepNode node;
	color_t *pixels;
	unsigned w, h;
	struct Script *script;
	int line, keys, last;
	unsigned frame;
	int done;
	// Lockstep host state (MultiplayerController::Player); waiting = the thread's "wait" state in mgba-qt
	int waiting;
	int awake;
	int32_t cyclesPosted;
	unsigned waitMask;
};

static struct Player players[MAX_GBAS];
static int nplayers = 1;
static struct GBASIOLockstep lockstep;

static const char *shots, *outDir = ".";
static const char *dumps[64];
static int ndumps;
static unsigned frames, watch;
static const char *coverage;
static uint8_t covered[0x800000 / 16];

static void quietLog(struct mLogger *l, int category, enum mLogLevel level, const char *fmt, va_list args) {
	(void) l; (void) category; (void) level; (void) fmt; (void) args;
}
static struct mLogger quiet = { .log = quietLog };

static int keyBits(const char *s) {
	int k = 0;
	for (; *s; s++) {
		switch (*s) {
		case 'A': k |= 1 << GBA_KEY_A; break;
		case 'B': k |= 1 << GBA_KEY_B; break;
		case 's': k |= 1 << GBA_KEY_SELECT; break;
		case 'S': k |= 1 << GBA_KEY_START; break;
		case 'r': k |= 1 << GBA_KEY_RIGHT; break;
		case 'l': k |= 1 << GBA_KEY_LEFT; break;
		case 'U': k |= 1 << GBA_KEY_UP; break;
		case 'D': k |= 1 << GBA_KEY_DOWN; break;
		case 'R': k |= 1 << GBA_KEY_R; break;
		case 'L': k |= 1 << GBA_KEY_L; break;
		case '-': break;
		default: fprintf(stderr, "bad key '%c'\n", *s); exit(1);
		}
	}
	return k;
}

static struct Script *loadScript(const char *path) {
	struct Script *s = calloc(1, sizeof *s);
	FILE *f = fopen(path, "r");
	if (!f) { perror(path); exit(1); }
	char buf[256], keys[64];
	while (fgets(buf, sizeof buf, f) && s->n < MAX_LINES) {
		if (buf[0] == '#' || sscanf(buf, "%u %63s", &s->frame[s->n], keys) != 2) continue;
		s->keys[s->n++] = keyBits(keys);
	}
	fclose(f);
	return s;
}

static int inList(const char *list, unsigned n) {
	for (const char *p = list; p && *p;) {
		if ((unsigned) strtoul(p, (char **) &p, 0) == n) return 1;
		if (*p == ',') p++;
	}
	return 0;
}

// --- Lockstep host callbacks: MultiplayerController.cpp without setSync (no audio/video sync here) and
// without locks (one thread). mCoreThreadWaitFromThread / mCoreThreadStopWaiting set and clear `waiting`. ---

static bool lsSignal(struct mLockstep *l, unsigned mask) {
	(void) l;
	struct Player *p = &players[0];
	p->waitMask &= ~mask;
	if (!p->waitMask && p->awake < 1) {
		p->waiting = 0;
		p->awake = 1;
		return true;
	}
	return false;
}

static bool lsWait(struct mLockstep *l, unsigned mask) {
	(void) l;
	struct Player *p = &players[0];
	p->waitMask |= mask;
	if (p->awake > 0) {
		p->waiting = 1;
		p->awake = 0;
		return true;
	}
	return false;
}

static void lsAddCycles(struct mLockstep *l, int id, int32_t cycles) {
	(void) l;
	if (cycles < 0) abort();
	if (id) {
		players[id].cyclesPosted += cycles;
		return;
	}
	for (int i = 1; i < nplayers; i++) {
		struct Player *p = &players[i];
		if (p->node.d.p->mode > SIO_MULTI) continue;
		p->cyclesPosted += cycles;
		if (p->awake < 1) p->node.nextEvent += p->cyclesPosted;
		p->waiting = 0;
		p->awake = 1;
	}
}

static int32_t lsUseCycles(struct mLockstep *l, int id, int32_t cycles) {
	(void) l;
	struct Player *p = &players[id];
	p->cyclesPosted -= cycles;
	if (p->cyclesPosted <= 0) {
		p->waiting = 1;
		p->awake = 0;
	}
	return p->cyclesPosted;
}

static int32_t lsUnusedCycles(struct mLockstep *l, int id) { (void) l; return players[id].cyclesPosted; }

static void lsUnload(struct mLockstep *l, int id) {
	(void) l;
	if (id) {
		players[id].cyclesPosted = 0;
		struct Player *p = &players[0];
		p->waitMask &= ~(1u << id);
		if (!p->waitMask && p->awake < 1) {
			p->waiting = 0;
			p->awake = 1;
		}
		return;
	}
	for (int i = 1; i < nplayers; i++) {
		struct Player *p = &players[i];
		p->cyclesPosted += lockstep.players[0]->eventDiff;
		if (p->awake < 1) p->node.nextEvent += p->cyclesPosted;
		p->waiting = 0;
		p->awake = 1;
	}
}

// --- Per-frame work (videoFrameEnded) ---

static void onFrame(void *context) {
	struct Player *p = context;
	int id = p - players;
	struct mCore *core = p->core;
	unsigned frame = p->frame++;
	if (frame >= frames) { p->done = 1; return; }

	if (watch) {
		int v = core->busRead8(core, watch);
		if (v != p->last) {
			printf("p%d frame %u: [0x%08X] = %d\n", id, frame, watch, v);
			p->last = v;
		}
	}
	if (inList(shots, frame)) {
		char path[512];
		snprintf(path, sizeof path, "%s/p%d_f%05u.png", outDir, id, frame);
		struct VFile *f = VFileOpen(path, O_CREAT | O_TRUNC | O_WRONLY);
		png_structp png = PNGWriteOpen(f);
		png_infop info = PNGWriteHeader(png, p->w, p->h);
		PNGWritePixels(png, p->w, p->h, p->w, p->pixels);
		PNGWriteClose(png, info);
		f->close(f);
	}
	for (int d = 0; d < ndumps; d++) {
		char *s;
		if (strtoul(dumps[d], &s, 0) != frame) continue;
		unsigned addr = strtoul(s + 1, &s, 0), len = strtoul(s + 1, NULL, 0);
		printf("p%d frame %u: dump 0x%08X:", id, frame, addr);
		for (unsigned i = 0; i < len; i++) printf("%s%02X", i % 16 ? " " : "\n  ", core->busRead8(core, addr + i));
		printf("\n");
	}
	// Keys for the next frame
	struct Script *s = p->script;
	while (s && p->line < s->n && s->frame[p->line] <= frame + 1) p->keys = s->keys[p->line++];
	core->setKeys(core, p->keys);
}

int main(int argc, char **argv) {
	if (argc < 3) { fprintf(stderr, "usage: see tools/mgba_run.c\n"); return 1; }
	const char *rom = argv[1], *saves[MAX_GBAS] = { 0 };
	struct Script *defaultScript = NULL, *scripts[MAX_GBAS] = { 0 };
	frames = strtoul(argv[2], NULL, 0);
	for (int i = 3; i + 1 < argc; i += 2) {
		const char *o = argv[i], *v = argv[i + 1];
		if (!strcmp(o, "--players")) nplayers = atoi(v);
		else if (!strcmp(o, "--inputs")) defaultScript = loadScript(v);
		else if (!strncmp(o, "--inputs", 8) && o[8] >= '0' && o[8] <= '3' && !o[9]) scripts[o[8] - '0'] = loadScript(v);
		else if (!strncmp(o, "--save", 6) && o[6] >= '0' && o[6] <= '3' && !o[7]) saves[o[6] - '0'] = v;
		else if (!strcmp(o, "--shot")) shots = v;
		else if (!strcmp(o, "--out")) outDir = v;
		else if (!strcmp(o, "--dump") && ndumps < 64) dumps[ndumps++] = v;
		else if (!strcmp(o, "--watch")) watch = strtoul(v, NULL, 0);
		else if (!strcmp(o, "--coverage")) coverage = v;
		else { fprintf(stderr, "unknown option %s\n", o); return 1; }
	}
	if (nplayers < 1 || nplayers > MAX_GBAS) { fprintf(stderr, "--players 1-4\n"); return 1; }
	setvbuf(stdout, NULL, _IOLBF, 0);
	static struct mLogFilter quietFilter;
	mLogFilterInit(&quietFilter);
	quiet.filter = &quietFilter;
	mLogSetDefaultLogger(&quiet);

	GBASIOLockstepInit(&lockstep);
	mLockstepInit(&lockstep.d);
	lockstep.d.signal = lsSignal;
	lockstep.d.wait = lsWait;
	lockstep.d.addCycles = lsAddCycles;
	lockstep.d.useCycles = lsUseCycles;
	lockstep.d.unusedCycles = lsUnusedCycles;
	lockstep.d.unload = lsUnload;

	for (int i = 0; i < nplayers; i++) {
		struct Player *p = &players[i];
		struct mCore *core = GBACoreCreate();
		core->init(core);
		mCoreInitConfig(core, NULL);
		core->desiredVideoDimensions(core, &p->w, &p->h);
		p->pixels = calloc(p->w * p->h, sizeof(color_t));
		core->setVideoBuffer(core, p->pixels, p->w);
		if (!mCoreLoadFile(core, rom)) { fprintf(stderr, "cannot load %s\n", rom); return 1; }
		struct VFile *sv = saves[i] ? VFileOpen(saves[i], O_CREAT | O_RDWR) : VFileMemChunk(NULL, 0);
		if (!sv || !core->loadSave(core, sv)) { fprintf(stderr, "cannot open save %d\n", i); return 1; }
		p->script = scripts[i] ? scripts[i] : defaultScript;
		p->last = -1;
		p->awake = 1;
		p->core = core;
		p->callbacks.videoFrameEnded = onFrame;
		p->callbacks.context = p;
		core->addCoreCallbacks(core, &p->callbacks);
		core->reset(core);
		if (nplayers > 1) {
			// After the reset, which unloads the SIO driver; in player order, so node ids equal player numbers.
			struct GBA *gba = core->board;
			GBASIOLockstepNodeCreate(&p->node);
			GBASIOLockstepAttachNode(&lockstep, &p->node);
			GBASIOSetDriver(&gba->sio, &p->node.d, SIO_MULTI);
			GBASIOSetDriver(&gba->sio, &p->node.d, SIO_NORMAL_32);
		}
	}

	for (;;) {
		int all = 1, ran = 0;
		for (int i = 0; i < nplayers; i++) {
			struct Player *p = &players[i];
			all &= p->done;
			if (p->waiting) continue;  // a GBA past FRAMES keeps running: the others may wait on it
			ran = 1;
			if (coverage) {
				// ARMRunLoop with each instruction's address recorded before it runs (as mGBA's
				// ARMDebuggerCheckBreakpoints computes it), so GBAs interleave exactly as with runLoop.
				struct ARMCore *cpu = ((struct GBA *) p->core->board)->cpu;
				while (cpu->cycles < cpu->nextEvent) {
					uint32_t pc = cpu->gprs[ARM_PC] - (cpu->executionMode == MODE_THUMB ? 2 : 4) - 0x08000000;
					if (pc < 0x800000) covered[pc >> 4] |= 1 << ((pc >> 1) & 7);
					p->core->step(p->core);
				}
				cpu->irqh.processEvents(cpu);
			} else
				p->core->runLoop(p->core);
		}
		if (all) break;
		if (!ran) { fprintf(stderr, "link deadlock: every GBA is waiting\n"); return 1; }
	}
	for (int i = 0; i < nplayers; i++) players[i].core->deinit(players[i].core);
	if (coverage) {
		FILE *f = fopen(coverage, "wb");
		if (!f || fwrite(covered, sizeof covered, 1, f) != 1) { perror(coverage); return 1; }
		fclose(f);
	}
	return 0;
}
