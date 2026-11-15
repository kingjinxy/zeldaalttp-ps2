// Headless mGBA runner: one ROM, a button script, screenshots and RAM dumps at chosen frames.
// Build: tools/mgba_run.sh. Usage:
//   mgba_run ROM FRAMES [--inputs FILE] [--save FILE] [--shot N,N,...] [--out DIR]
//            [--dump N:ADDR:LEN] [--watch ADDR]
// Inputs file: lines "FRAME KEYS", KEYS = '-' or letters A B s(elect) S(tart) R L U D r(ight) l(eft);
// held from FRAME until the next line. --watch prints the byte at ADDR whenever it changes.
#include <mgba/core/core.h>
#include <mgba/core/config.h>
#include <mgba/core/log.h>
#include <mgba/gba/core.h>
#include <mgba/internal/gba/input.h>
#include <mgba-util/png-io.h>
#include <mgba-util/vfs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 4096

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

static int inList(const char *list, unsigned n) {
	for (const char *p = list; p && *p;) {
		if ((unsigned) strtoul(p, (char **) &p, 0) == n) return 1;
		if (*p == ',') p++;
	}
	return 0;
}

int main(int argc, char **argv) {
	if (argc < 3) { fprintf(stderr, "usage: see tools/mgba_run.c\n"); return 1; }
	const char *rom = argv[1], *inputs = NULL, *save = NULL, *shots = NULL, *out = ".";
	unsigned frames = strtoul(argv[2], NULL, 0), watch = 0;
	const char *dumps[64]; int ndumps = 0;
	for (int i = 3; i + 1 < argc; i += 2) {
		if (!strcmp(argv[i], "--inputs")) inputs = argv[i + 1];
		else if (!strcmp(argv[i], "--save")) save = argv[i + 1];
		else if (!strcmp(argv[i], "--shot")) shots = argv[i + 1];
		else if (!strcmp(argv[i], "--out")) out = argv[i + 1];
		else if (!strcmp(argv[i], "--dump") && ndumps < 64) dumps[ndumps++] = argv[i + 1];
		else if (!strcmp(argv[i], "--watch")) watch = strtoul(argv[i + 1], NULL, 0);
		else { fprintf(stderr, "unknown option %s\n", argv[i]); return 1; }
	}

	unsigned lineFrame[MAX_LINES]; int lineKeys[MAX_LINES]; int nlines = 0;
	if (inputs) {
		FILE *f = fopen(inputs, "r");
		if (!f) { perror(inputs); return 1; }
		char buf[256], keys[64];
		while (fgets(buf, sizeof buf, f) && nlines < MAX_LINES) {
			if (buf[0] == '#' || sscanf(buf, "%u %63s", &lineFrame[nlines], keys) != 2) continue;
			lineKeys[nlines++] = keyBits(keys);
		}
		fclose(f);
	}

	mLogSetDefaultLogger(&quiet);
	struct mCore *core = GBACoreCreate();
	core->init(core);
	mCoreInitConfig(core, NULL);
	unsigned w, h;
	core->desiredVideoDimensions(core, &w, &h);
	color_t *pixels = calloc(w * h, sizeof(color_t));
	core->setVideoBuffer(core, pixels, w);
	if (!mCoreLoadFile(core, rom)) { fprintf(stderr, "cannot load %s\n", rom); return 1; }
	// No save file: the game sees an empty EEPROM, which is never written back to disk.
	struct VFile *sv = save ? VFileOpen(save, O_CREAT | O_RDWR) : VFileMemChunk(NULL, 0);
	if (!sv || !core->loadSave(core, sv)) { fprintf(stderr, "cannot open save\n"); return 1; }
	core->reset(core);

	int line = 0, keys = 0, last = -1;
	for (unsigned frame = 0; frame < frames; frame++) {
		while (line < nlines && lineFrame[line] <= frame) keys = lineKeys[line++];
		core->setKeys(core, keys);
		core->runFrame(core);
		if (watch) {
			int v = core->busRead8(core, watch);
			if (v != last) { printf("frame %u: [0x%08X] = %d\n", frame, watch, v); last = v; }
		}
		if (inList(shots, frame)) {
			char path[512];
			snprintf(path, sizeof path, "%s/f%05u.png", out, frame);
			struct VFile *f = VFileOpen(path, O_CREAT | O_TRUNC | O_WRONLY);
			png_structp png = PNGWriteOpen(f);
			png_infop info = PNGWriteHeader(png, w, h);
			PNGWritePixels(png, w, h, w, pixels);
			PNGWriteClose(png, info);
			f->close(f);
		}
		for (int d = 0; d < ndumps; d++) {
			char *p;
			if (strtoul(dumps[d], &p, 0) != frame) continue;
			unsigned addr = strtoul(p + 1, &p, 0), len = strtoul(p + 1, NULL, 0);
			printf("frame %u: dump 0x%08X:", frame, addr);
			for (unsigned i = 0; i < len; i++) printf("%s%02X", i % 16 ? " " : "\n  ", core->busRead8(core, addr + i));
			printf("\n");
		}
	}
	core->deinit(core);
	free(pixels);
	return 0;
}
