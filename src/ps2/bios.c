// GBA BIOS calls in C (GBATEK "BIOS Functions"), for the game's C and for global-state code (ps2_swi).
// Addresses are GBA addresses: the GBA memory regions are TLB-mapped (tlb.c), so they're plain pointers here.
#include <tamtypes.h>
#include <string.h>

#define GCPU ((volatile u32 *)0x0203C000)  // struct GstateCpu (include/gstate.h): r[0..15]

void ps2_vblank_wait(void);  // frame.c
void ps2_fatal(const char *fmt, ...);

void CpuSet(const void *src, void *dst, u32 ctrl)
{
    u32 n = ctrl & 0x1FFFFF;
    int fill = ctrl & (1 << 24);
    if (ctrl & (1 << 26)) {
        const u32 *s = src;
        u32 *d = dst;
        u32 v = *s;
        while (n--)
            *d++ = fill ? v : *s++;
    } else {
        const u16 *s = src;
        u16 *d = dst;
        u16 v = *s;
        while (n--)
            *d++ = fill ? v : *s++;
    }
}

void CpuFastSet(const void *src, void *dst, u32 ctrl)
{
    u32 n = ((ctrl & 0x1FFFFF) + 7) & ~7u;  // words, rounded up to blocks of 8
    const u32 *s = src;
    u32 *d = dst;
    u32 v = *s;
    if (ctrl & (1 << 24))
        while (n--)
            *d++ = v;
    else
        while (n--)
            *d++ = *s++;
}

static void lz77(const u8 *src, u8 *dst)
{
    u32 n = src[1] | src[2] << 8 | src[3] << 16, o = 0;
    src += 4;
    while (o < n) {
        u8 flags = *src++;
        for (int b = 0; b < 8 && o < n; b++, flags <<= 1) {
            if (flags & 0x80) {
                u32 len = (src[0] >> 4) + 3, d = ((src[0] & 15) << 8 | src[1]) + 1;
                src += 2;
                while (len-- && o < n) {
                    dst[o] = dst[o - d];
                    o++;
                }
            } else {
                dst[o++] = *src++;
            }
        }
    }
}

void LZ77UnCompWram(const void *src, void *dst) { lz77(src, dst); }
void LZ77UnCompVram(const void *src, void *dst) { lz77(src, dst); }  // byte writes are fine in mapped RAM

static void rl(const u8 *src, u8 *dst)
{
    u32 n = src[1] | src[2] << 8 | src[3] << 16, o = 0;
    src += 4;
    while (o < n) {
        u8 f = *src++;
        if (f & 0x80) {
            u32 len = (f & 0x7F) + 3;
            u8 v = *src++;
            while (len-- && o < n)
                dst[o++] = v;
        } else {
            u32 len = (f & 0x7F) + 1;
            while (len-- && o < n)
                dst[o++] = *src++;
        }
    }
}

void RLUnCompWram(const void *src, void *dst) { rl(src, dst); }
void RLUnCompVram(const void *src, void *dst) { rl(src, dst); }

s32 Div(s32 num, s32 den) { return den ? num / den : 0; }
s32 Mod(s32 num, s32 den) { return den ? num % den : 0; }

u16 Sqrt(u32 x)
{
    u32 r = 0, b = 1u << 30;
    while (b > x)
        b >>= 2;
    while (b) {
        if (x >= r + b) {
            x -= r + b;
            r = (r >> 1) + b;
        } else {
            r >>= 1;
        }
        b >>= 2;
    }
    return r;
}

// sin/cos of the BIOS's 16-bit angle, 8.8 fixed point (SWI 0x0F/0x0E)
static s16 fsin(u16 a)
{
    // shortcut: float sine; the BIOS uses a 256-entry table, so results can differ by 1 in the low bit. Upgrade to
    // the table if a replay shows the difference.
    extern float sinf(float);
    return (s16)(sinf(a * (6.2831853f / 65536.0f)) * 256.0f);
}

struct ObjAffineSrc { s16 sx, sy; u16 rot; };
void ObjAffineSet(const struct ObjAffineSrc *src, void *dst, s32 n, s32 stride)
{
    while (n-- > 0) {
        s16 s = fsin(src->rot & 0xFF00), c = fsin((src->rot & 0xFF00) + 0x4000);
        s16 *d = dst;
        d[0] = (c * src->sx) >> 8;
        d[stride / 2] = (-s * src->sx) >> 8;
        d[stride] = (s * src->sy) >> 8;
        d[stride * 3 / 2] = (c * src->sy) >> 8;
        dst = (u8 *)dst + stride * 4;
        src++;
    }
}

struct BgAffineSrc { s32 tx, ty; s16 dx, dy, sx, sy; u16 rot; };
struct BgAffineDst { s16 pa, pb, pc, pd; s32 x, y; };
void BgAffineSet(const struct BgAffineSrc *src, struct BgAffineDst *dst, s32 n)
{
    while (n-- > 0) {
        s16 s = fsin(src->rot & 0xFF00), c = fsin((src->rot & 0xFF00) + 0x4000);
        dst->pa = (c * src->sx) >> 8;
        dst->pb = (-s * src->sx) >> 8;
        dst->pc = (s * src->sy) >> 8;
        dst->pd = (c * src->sy) >> 8;
        dst->x = src->tx - (dst->pa * src->dx + dst->pb * src->dy);
        dst->y = src->ty - (dst->pc * src->dx + dst->pd * src->dy);
        src++, dst++;
    }
}

void VBlankIntrWait(void) { ps2_vblank_wait(); }
void IntrWait(u32 discard, u32 flags) { (void)discard, (void)flags; ps2_vblank_wait(); }
void SoftReset(u32 flags) { ps2_fatal("SoftReset(%x)", flags); }
void RegisterRamReset(u32 flags) { (void)flags; }
void SoundBiasReset(void) {}
void SoundBiasSet(void) {}

// ARM libgcc helpers the translated code calls by name
s32 __divsi3(s32 a, s32 b) { return b ? a / b : 0; }
s32 __modsi3(s32 a, s32 b) { return b ? a % b : 0; }
u32 __udivsi3(u32 a, u32 b) { return b ? a / b : 0; }
u32 __umodsi3(u32 a, u32 b) { return b ? a % b : 0; }

// BIOS call from global-state code: arguments and results in gCpu.r[0..3]
void ps2_swi(u32 n)
{
    volatile u32 *r = GCPU;
    switch (n) {
    case 0x00: SoftReset(0); break;
    case 0x01: RegisterRamReset(r[0]); break;
    case 0x04: IntrWait(r[0], r[1]); break;
    case 0x05: VBlankIntrWait(); break;
    case 0x06: {
        s32 a = r[0], b = r[1];
        r[0] = Div(a, b), r[1] = Mod(a, b), r[3] = (u32)(r[0] < 0x80000000u ? r[0] : -r[0]);
        break;
    }
    case 0x08: r[0] = Sqrt(r[0]); break;
    case 0x0B: CpuSet((void *)r[0], (void *)r[1], r[2]); break;
    case 0x0C: CpuFastSet((void *)r[0], (void *)r[1], r[2]); break;
    case 0x0E: BgAffineSet((void *)r[0], (void *)r[1], r[2]); break;
    case 0x0F: ObjAffineSet((void *)r[0], (void *)r[1], r[2], r[3]); break;
    case 0x11: LZ77UnCompWram((void *)r[0], (void *)r[1]); break;
    case 0x12: LZ77UnCompVram((void *)r[0], (void *)r[1]); break;
    case 0x14: RLUnCompWram((void *)r[0], (void *)r[1]); break;
    case 0x15: RLUnCompVram((void *)r[0], (void *)r[1]); break;
    case 0x19: SoundBiasSet(); break;
    default: ps2_fatal("swi 0x%x", n);
    }
}
