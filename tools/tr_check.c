// Checks thumb2c's translation against mGBA: replays calls recorded by `mgba_run --trace` through the
// translated C, in GBA address space (symbols at their GBA addresses, memory in arrays), and compares r0
// and all memory except I/O and the stack below the caller's sp. Built by tools/tr_check.py.
//   tr_check BASEROM TRACE.gz...
// Output: one line per record: "ADDR NAME ok|FAIL <first difference>|SKIP <reason>", then totals.
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zlib.h>
#include "tr_check.h"

struct GbaCpu gba_cpu;
static u8 ewram[0x40000], iwram[0x8000], io[0x400], pal[0x400], vram[0x18000], oam[0x400], *rom;
static u8 dummy[64];
static size_t romSize;
static jmp_buf abortJmp;
static char abortWhy[200];

static void tr_abort(const char *fmt, u32 v) {
	snprintf(abortWhy, sizeof abortWhy, fmt, v);
	longjmp(abortJmp, 1);
}

u32 tr_missing(const char *name) {
	snprintf(abortWhy, sizeof abortWhy, "calls %s (not translated)", name);
	longjmp(abortJmp, 1);
}

u32 gba_untranslated(const char *name) { return tr_missing(name); }
void gba_bad_insn(u32 addr) { tr_abort("untranslated instruction at %08X", addr); }
void gba_bad_jump(u32 target) { tr_abort("jump to %08X outside its table", target); }

void *tr_ptr(u32 a, int write) {
	switch (a >> 24) {
	case 2: return &ewram[a & 0x3FFFF];
	case 3: return &iwram[a & 0x7FFF];
	case 4: if ((a & 0xFFFFFF) < 0x400) return &io[a & 0x3FF]; return dummy;  // unused I/O reads as junk
	case 5: return &pal[a & 0x3FF];
	case 6: a &= 0x1FFFF; return &vram[a >= 0x18000 ? a - 0x8000 : a];
	case 7: return &oam[a & 0x3FF];
	case 8: case 9:
		if (write) tr_abort("write to ROM %08X", a);
		if ((a & 0x1FFFFFF) < romSize) return &rom[a & 0x1FFFFFF];
		return dummy;
	}
	if (a < 0x4000) return dummy;  // BIOS reads
	tr_abort("access to %08X", a);
	return dummy;
}

static void dma(int ch) {
	u32 base = 0xB0 + 12 * ch;
	u32 src, dst, cnt;
	u16 ctl;
	memcpy(&src, &io[base], 4), memcpy(&dst, &io[base + 4], 4), memcpy(&cnt, &io[base + 8], 2), memcpy(&ctl, &io[base + 10], 2);
	if (!(ctl & 0x8000)) return;
	if (ctl & 0x3000) tr_abort("timed DMA %x", ctl);  // HBlank/VBlank/sound DMA: not immediate
	if (!cnt) cnt = ch == 3 ? 0x10000 : 0x4000;
	int size = ctl & 0x400 ? 4 : 2, dm = (ctl >> 5) & 3, sm = (ctl >> 7) & 3;
	for (u32 k = 0; k < cnt; k++) {
		u32 v = 0;
		memcpy(&v, tr_ptr(src, 0), size);
		memcpy(tr_ptr(dst, 1), &v, size);
		src += sm == 0 ? size : sm == 1 ? -size : 0;
		dst += dm == 0 || dm == 3 ? size : dm == 1 ? -size : 0;
	}
	ctl &= 0x7FFF;
	memcpy(&io[base + 10], &ctl, 2);
}

static u32 watch = 1;  // TR_WATCH=ADDR: print writes that cover ADDR, with the writer's host address

void tr_write(u32 a, u32 v, int size) {
	if (watch == 1) { const char *w = getenv("TR_WATCH"); watch = w ? strtoul(w, NULL, 16) : 0; }
	if (watch && a <= watch && watch < a + size)
		printf("  write %08X = %X (%d) from %p\n", a, v, size, __builtin_return_address(0));
	memcpy(tr_ptr(a, 1), &v, size);
	if (a >> 24 == 4) {
		u32 o = a & 0xFFFFFF;
		for (int ch = 0; ch < 4; ch++) {
			u32 c = 0xBA + 12 * ch;
			if (o <= c && c < o + size) dma(ch);
		}
	}
}

static void lz77(u32 src, u32 dst, int vramMode) {
	u32 h = RD32(src), n = h >> 8, d = dst;
	src += 4;
	u8 *out = malloc(n + 8);
	u32 k = 0;
	while (k < n) {
		u8 flags = RD8(src++);
		for (int b = 0; b < 8 && k < n; b++, flags <<= 1) {
			if (flags & 0x80) {
				u32 x = RD8(src) << 8 | RD8(src + 1);
				src += 2;
				u32 len = (x >> 12) + 3, disp = (x & 0xFFF) + 1;
				while (len-- && k < n) { out[k] = out[k - disp]; k++; }
			} else
				out[k++] = RD8(src++);
		}
	}
	if (vramMode)
		for (u32 i = 0; i + 1 < n + 1; i += 2) tr_write(d + i, out[i] | (i + 1 < n ? out[i + 1] << 8 : 0), 2);
	else
		for (u32 i = 0; i < n; i++) tr_write(d + i, out[i], 1);
	free(out);
}

void gba_swi(u32 n, u32 *r0, u32 *r1, u32 *r2, u32 *r3) {
	switch (n) {
	case 0x06: {  // Div
		s32 a = *r0, b = *r1;
		if (!b) tr_abort("Div by zero", 0);
		*r0 = a / b, *r1 = a % b, *r3 = (u32)(a / b < 0 ? -(a / b) : a / b);
		return;
	}
	case 0x08: {  // Sqrt
		u32 x = *r0, r = 0;
		while ((u64)(r + 1) * (r + 1) <= x) r++;
		*r0 = r;
		return;
	}
	case 0x0B: case 0x0C: {  // CpuSet, CpuFastSet
		u32 src = *r0, dst = *r1, c = *r2, cnt = c & 0x1FFFFF;
		int fill = c >> 24 & 1, word = n == 0x0C || (c >> 26 & 1);
		if (n == 0x0C) cnt = (cnt + 7) & ~7u;
		int size = word ? 4 : 2;
		u32 v = word ? RD32(src) : RD16(src);
		for (u32 k = 0; k < cnt; k++) {
			if (!fill) v = word ? RD32(src + k * size) : RD16(src + k * size);
			tr_write(dst + k * size, v, size);
		}
		return;
	}
	case 0x11: case 0x12: lz77(*r0, *r1, n == 0x12); return;
	}
	tr_abort("SWI %02X", n);
}

void gba_call_ptr(u32 addr) {
	tr_fn f = tr_lookup(addr & ~1u);
	if (!f) tr_abort("indirect call to %08X (not translated)", addr);
	u32 sp0 = gba_cpu.sp;
	f();
	if (getenv("TR_VERBOSE")) printf("  call %08X %s: sp %08X -> %08X, r0 %08X\n", addr, tr_name(addr & ~1u), sp0, gba_cpu.sp, gba_cpu.r0);
}

static int readAll(gzFile f, void *p, size_t n) { return gzread(f, p, n) == (int) n; }

static u8 snap[0x40000 + 0x8000 + 0x400 * 4 + 0x18000];

static int loadRegions(gzFile f) {
	return readAll(f, ewram, sizeof ewram) && readAll(f, iwram, sizeof iwram) && readAll(f, io, sizeof io) &&
	       readAll(f, pal, sizeof pal) && readAll(f, vram, sizeof vram) && readAll(f, oam, sizeof oam);
}

int main(int argc, char **argv) {
	FILE *rf = fopen(argv[1], "rb");
	if (!rf) { perror(argv[1]); return 1; }
	fseek(rf, 0, SEEK_END), romSize = ftell(rf), fseek(rf, 0, SEEK_SET);
	rom = malloc(romSize);
	if (fread(rom, 1, romSize, rf) != romSize) return 1;
	fclose(rf);
	int ok = 0, fail = 0, skip = 0;
	for (int i = 2; i < argc; i++) {
		gzFile f = gzopen(argv[i], "rb");
		u32 in[17], out[17];
		if (!f || !readAll(f, in, sizeof in) || !loadRegions(f)) { fprintf(stderr, "bad %s\n", argv[i]); continue; }
		// expected state at return, kept aside
		u8 *e = snap;
		if (!readAll(f, out, sizeof out) || !readAll(f, e, 0x40000) || !readAll(f, e + 0x40000, 0x8000) ||
		    !readAll(f, e + 0x48000, 0x400) || !readAll(f, e + 0x48400, 0x400) || !readAll(f, e + 0x48800, 0x18000) ||
		    !readAll(f, e + 0x60800, 0x400)) { fprintf(stderr, "short %s\n", argv[i]); gzclose(f); continue; }
		gzclose(f);
		u32 addr = in[15] - 2;
		const char *name = tr_name(addr);
		tr_fn fn = tr_lookup(addr);
		if (!fn) { printf("%08X ? SKIP not translated\n", addr); skip++; continue; }
		if (setjmp(abortJmp)) { printf("%08X %s SKIP %s\n", addr, name, abortWhy); skip++; continue; }
		u32 *g = &gba_cpu.r0;  // r0-r12, sp, lr in order
		for (int k = 0; k < 15; k++) g[k] = in[k];
		gba_cpu.N = in[16] >> 31 & 1, gba_cpu.Z = in[16] >> 30 & 1, gba_cpu.C = in[16] >> 29 & 1, gba_cpu.V = in[16] >> 28 & 1;
		fn();
		char why[200] = "";
		for (int k = 0; k < 14 && !why[0]; k++)  // r1-r3 and r12 are scratch after a call into C
			if (g[k] != out[k] && !(k >= 1 && k <= 3) && k != 12) snprintf(why, sizeof why, "r%d %08X, expected %08X", k, g[k], out[k]);
		struct { u8 *got, *exp; u32 base, size; } reg[] = {
			{ ewram, e, 0x02000000, 0x40000 }, { iwram, e + 0x40000, 0x03000000, 0x8000 },
			{ pal, e + 0x48400, 0x05000000, 0x400 }, { vram, e + 0x48800, 0x06000000, 0x18000 },
			{ oam, e + 0x60800, 0x07000000, 0x400 } };
		for (int k = 0; k < 5 && !why[0]; k++)
			for (u32 o = 0; o < reg[k].size; o++) {
				u32 a = reg[k].base + o;
				if (a >= in[13] - 0x800 && a < in[13]) continue;  // stack below the caller: scratch
				if (reg[k].got[o] != reg[k].exp[o]) {
					if (getenv("TR_VERBOSE")) printf("  %08X = %02X, expected %02X (was %02X)\n", a, reg[k].got[o], reg[k].exp[o], 0);
					else {
						snprintf(why, sizeof why, "%08X = %02X, expected %02X", a, reg[k].got[o], reg[k].exp[o]);
						break;
					}
				}
			}
		if (why[0]) { printf("%08X %s FAIL %s\n", addr, name, why); fail++; }
		else { printf("%08X %s ok\n", addr, name); ok++; }
	}
	printf("total: %d ok, %d fail, %d skipped\n", ok, fail, skip);
	return fail != 0;
}
