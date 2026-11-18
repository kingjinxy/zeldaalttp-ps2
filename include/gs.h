#ifndef GUARD_GS_H
#define GUARD_GS_H
// Runtime for the global-state C that tools/gs2c.py generates (src/auto/*_gs.c, NONMATCHING AUTO_C builds).
// All of it is static: every generated file carries its own copy, so no object has to be linked first.
#include "auto.h"

// shortcut: CPU state and stack sit at the top of EWRAM, which the game leaves unused (0x0203C000 up stays zero
// through the fs_walk recording); move them if a game mode turns out to use it.
struct GsCpu {
    u32 r[16];
    u32 n, z, c, v;
};
#define gCpu (*(struct GsCpu *)0x0203C000)
#define GS_STACK_TOP 0x02040000u
#define GS_BAD_ADDR (*(volatile u32 *)0x0203C0F0)  // set when gs_run meets an address it can't run
#define GS_MAGIC_RET 0xFFFFFFF1u  // lr of a wrapper call: returning there ends the GS code

// debugging: every GS function entry appends (address, sp, lr) to a 1024-entry ring at 0x0203C200
#define GS_RING ((volatile u32 *)0x0203C200)
#define GS_TRACE(a) do { u32 i_ = GS_RING[0] % 1024; GS_RING[1 + 3 * i_] = (a); GS_RING[2 + 3 * i_] = gCpu.r[13]; \
    GS_RING[3 + 3 * i_] = lr; GS_RING[0] = i_ + 1; } while (0)

struct GsEntry {
    u32 addr;
    void (*fn)(u32);
    u32 off;
};

#define GS_LOCALS u32 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, lr, n, z, c, v
#define GS_LOAD() (r0 = gCpu.r[0], r1 = gCpu.r[1], r2 = gCpu.r[2], r3 = gCpu.r[3], r4 = gCpu.r[4], \
    r5 = gCpu.r[5], r6 = gCpu.r[6], r7 = gCpu.r[7], r8 = gCpu.r[8], r9 = gCpu.r[9], r10 = gCpu.r[10], \
    r11 = gCpu.r[11], r12 = gCpu.r[12], lr = gCpu.r[14], n = gCpu.n, z = gCpu.z, c = gCpu.c, v = gCpu.v)
#define GS_STORE() (gCpu.r[0] = r0, gCpu.r[1] = r1, gCpu.r[2] = r2, gCpu.r[3] = r3, gCpu.r[4] = r4, \
    gCpu.r[5] = r5, gCpu.r[6] = r6, gCpu.r[7] = r7, gCpu.r[8] = r8, gCpu.r[9] = r9, gCpu.r[10] = r10, \
    gCpu.r[11] = r11, gCpu.r[12] = r12, gCpu.r[14] = lr, gCpu.n = n, gCpu.z = z, gCpu.c = c, gCpu.v = v)

// a jump to t: inside this function (base, size) continue there, else return with gCpu.pc = t
#define GS_JUMP_IN(base, size, t) do { u32 tt_ = (t) & ~1u; \
    if (tt_ - (base) < (size)) { e = tt_ - (base); goto dispatch; } \
    GS_STORE(); gCpu.r[15] = (t); return; } while (0)
// after a call returning to ret: anywhere else means the callee returned past us
#define GS_RETURNED_IN(base, size, ret) do { if ((gCpu.r[15] ^ (ret)) & ~1u) { u32 tt_ = gCpu.r[15] & ~1u; \
    if (tt_ - (base) < (size)) { e = tt_ - (base); goto dispatch; } return; } } while (0)

extern const struct GsEntry __gstable_start[], __gstable_end[], __gstablew_start[], __gstablew_end[];

static const struct GsEntry *gs_find(const struct GsEntry *lo, const struct GsEntry *hi, u32 a)
{
    while (lo < hi) {  // both tables are in address order (link order, emission order)
        const struct GsEntry *m = lo + (hi - lo) / 2;
        u32 ma = m->addr & ~1u;
        if (ma == a)
            return m;
        if (ma < a)
            lo = m + 1;
        else
            hi = m;
    }
    return 0;
}

static void gs_bad(u32 a)
{
    GS_BAD_ADDR = a;
    for (;;)
        ;
}

// run the code at address a as a call from GS code (gCpu.lr holds the return address)
static void gs_run(u32 a)
{
    const struct GsEntry *f;
    u32 b = a & ~1u;
    {  // ring trace (GS_TRACE): gs_run targets get bit 30 set
        u32 i_ = GS_RING[0] % 1024;
        GS_RING[1 + 3 * i_] = a | 0x40000000u, GS_RING[2 + 3 * i_] = gCpu.r[13], GS_RING[3 + 3 * i_] = gCpu.r[14];
        GS_RING[0] = i_ + 1;
    }
    f = gs_find(__gstable_start, __gstable_end, b);
    if (!f)
        f = gs_find(__gstablew_start, __gstablew_end, b);
    if (f) {
        f->fn(f->off);
        return;
    }
    if (!(b < 0x4000u || (b >= 0x08000000u && b < 0x08137B04u) || (b >= 0x08800000u && b < 0x0A000000u) ||
          (b >= 0x03000000u && b < 0x03008000u) || (b >= 0x02000000u && b < 0x02040000u))) {
        W32(0x0203C0F4u, gCpu.r[14]);  // lr: who jumped there
        gs_bad(a);
    }
    // C (or native) code: the C calling convention, then return to lr
    {
        u32 s = gCpu.r[13];
        gCpu.r[0] = ((u32 (*)())a)(gCpu.r[0], gCpu.r[1], gCpu.r[2], gCpu.r[3], R32(s), R32(s + 4), R32(s + 8),
                                   R32(s + 12));
        gCpu.r[15] = gCpu.r[14];
    }
}

// Entry into GS code from outside (gs2c's per-function stubs, through gs_enter): f holds the caller's
// registers (f[0..2] r5-r7, f[3..6] r8-r11, f[7..10] r0-r3, f[11] r4, f[12] lr, f[13..16] its first 4 stack
// words) and gets the registers the GS code ends with. gCpu is saved around the call (interrupts).
static void gs_enter_c(void (*fn)(u32), u32 *f)
{
    struct GsCpu save = gCpu;
    u32 sp = gCpu.r[13];
    u32 i;
    if (sp - 0x02038000u >= 0x8001u)
        sp = GS_STACK_TOP;
    sp -= 16;
    for (i = 0; i < 4; i++)
        W32(sp + 4 * i, f[13 + i]);
    for (i = 0; i < 4; i++)
        gCpu.r[i] = f[7 + i];
    gCpu.r[4] = f[11];
    for (i = 0; i < 3; i++)
        gCpu.r[5 + i] = f[i];
    for (i = 0; i < 4; i++)
        gCpu.r[8 + i] = f[3 + i];
    gCpu.r[13] = sp;
    gCpu.r[14] = GS_MAGIC_RET;
    fn(0);
    // a jump out of every GS frame (into C or native code, or back into a frame that has unwound): run on
    // from there until the code returns to this call
    while ((gCpu.r[15] | 1) != GS_MAGIC_RET)
        gs_run(gCpu.r[15]);
    for (i = 0; i < 4; i++)
        f[7 + i] = gCpu.r[i];
    f[11] = gCpu.r[4];
    for (i = 0; i < 3; i++)
        f[i] = gCpu.r[5 + i];
    for (i = 0; i < 4; i++)
        f[3 + i] = gCpu.r[8 + i];
    gCpu = save;
}

#endif  // GUARD_GS_H
