#ifndef GUARD_GSTATE_H
#define GUARD_GSTATE_H
// Runtime for the global-state C that tools/gstate2c.py generates (src/auto/*_gstate.c, NONMATCHING AUTO_C builds).
// All of it is static: every generated file carries its own copy, so no object has to be linked first.
#include "auto.h"

// shortcut: CPU state and stack sit at the top of EWRAM, which the game leaves unused (0x0203C000 up stays zero
// through the fs_walk recording); move them if a game mode turns out to use it.
struct GstateCpu {
    u32 r[16];
    u32 n, z, c, v;
};
#define gCpu (*(struct GstateCpu *)0x0203C000)
#define GSTATE_STACK_TOP 0x02040000u
#define GSTATE_BAD_ADDR (*(volatile u32 *)0x0203C0F0)  // set when gstate_run meets an address it can't run
#define GSTATE_MAGIC_RET 0xFFFFFFF1u  // lr of a wrapper call: returning there ends the global-state code

// debugging: every global-state function entry appends (address, sp, lr) to a 1024-entry ring at 0x0203C200
#define GSTATE_RING ((volatile u32 *)0x0203C200)
#define GSTATE_TRACE(a) do { u32 i_ = GSTATE_RING[0] % 1024; GSTATE_RING[1 + 3 * i_] = (a); GSTATE_RING[2 + 3 * i_] = gCpu.r[13]; \
    GSTATE_RING[3 + 3 * i_] = lr; GSTATE_RING[0] = i_ + 1; } while (0)

struct GstateEntry {
    u32 addr;
    void (*fn)(u32);
    u32 off;
};

#define GSTATE_LOCALS u32 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, lr, n, z, c, v
#define GSTATE_LOAD() (r0 = gCpu.r[0], r1 = gCpu.r[1], r2 = gCpu.r[2], r3 = gCpu.r[3], r4 = gCpu.r[4], \
    r5 = gCpu.r[5], r6 = gCpu.r[6], r7 = gCpu.r[7], r8 = gCpu.r[8], r9 = gCpu.r[9], r10 = gCpu.r[10], \
    r11 = gCpu.r[11], r12 = gCpu.r[12], lr = gCpu.r[14], n = gCpu.n, z = gCpu.z, c = gCpu.c, v = gCpu.v)
#define GSTATE_STORE() (gCpu.r[0] = r0, gCpu.r[1] = r1, gCpu.r[2] = r2, gCpu.r[3] = r3, gCpu.r[4] = r4, \
    gCpu.r[5] = r5, gCpu.r[6] = r6, gCpu.r[7] = r7, gCpu.r[8] = r8, gCpu.r[9] = r9, gCpu.r[10] = r10, \
    gCpu.r[11] = r11, gCpu.r[12] = r12, gCpu.r[14] = lr, gCpu.n = n, gCpu.z = z, gCpu.c = c, gCpu.v = v)

// a jump to t: inside this function (base, size) continue there, else return with gCpu.pc = t
#define GSTATE_JUMP_IN(base, size, t) do { u32 tt_ = (t) & ~1u; \
    if (tt_ - (base) < (size)) { e = tt_ - (base); goto dispatch; } \
    GSTATE_STORE(); gCpu.r[15] = (t); return; } while (0)
// after a call returning to ret: anywhere else means the callee returned past us
#define GSTATE_RETURNED_IN(base, size, ret) do { if ((gCpu.r[15] ^ (ret)) & ~1u) { u32 tt_ = gCpu.r[15] & ~1u; \
    if (tt_ - (base) < (size)) { e = tt_ - (base); goto dispatch; } return; } } while (0)

#ifdef PLATFORM_PS2  // sorted at startup (ps2 runtime), so writable
extern struct GstateEntry __gstatetable_start[], __gstatetable_end[], __gstatetablew_start[], __gstatetablew_end[];
#else
extern const struct GstateEntry __gstatetable_start[], __gstatetable_end[], __gstatetablew_start[], __gstatetablew_end[];
#endif

static const struct GstateEntry *gstate_find(const struct GstateEntry *lo, const struct GstateEntry *hi, u32 a)
{
    while (lo < hi) {  // both tables are in address order (link order, emission order)
        const struct GstateEntry *m = lo + (hi - lo) / 2;
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

static void gstate_bad(u32 a)
{
    GSTATE_BAD_ADDR = a;
    for (;;)
        ;
}

// run the code at address a as a call from global-state code (gCpu.lr holds the return address)
static void gstate_run(u32 a)
{
    const struct GstateEntry *f;
    u32 b = a & ~1u;
    {  // ring trace (GSTATE_TRACE): gstate_run targets get bit 30 set
        u32 i_ = GSTATE_RING[0] % 1024;
        GSTATE_RING[1 + 3 * i_] = a | 0x40000000u, GSTATE_RING[2 + 3 * i_] = gCpu.r[13], GSTATE_RING[3 + 3 * i_] = gCpu.r[14];
        GSTATE_RING[0] = i_ + 1;
    }
    f = gstate_find(__gstatetable_start, __gstatetable_end, b);
    if (!f)
        f = gstate_find(__gstatetablew_start, __gstatetablew_end, b);
    if (f) {
        f->fn(f->off);
        return;
    }
#ifndef PLATFORM_PS2  // PS2: C functions live anywhere in EE RAM
    if (!(b < 0x4000u || (b >= 0x08000000u && b < 0x08137B04u) || (b >= 0x08800000u && b < 0x0A000000u) ||
          (b >= 0x03000000u && b < 0x03008000u) || (b >= 0x02000000u && b < 0x02040000u))) {
        W32(0x0203C0F4u, gCpu.r[14]);  // lr: who jumped there
        gstate_bad(a);
    }
#endif
    // C (or native) code: the C calling convention, then return to lr
    {
        u32 s = gCpu.r[13];
        gCpu.r[0] = ((u32 (*)())a)(gCpu.r[0], gCpu.r[1], gCpu.r[2], gCpu.r[3], R32(s), R32(s + 4), R32(s + 8),
                                   R32(s + 12));
        gCpu.r[15] = gCpu.r[14];
    }
}

// Entry into global-state code from outside (gstate2c's per-function stubs, through gstate_enter): f holds the caller's
// registers (f[0..2] r5-r7, f[3..6] r8-r11, f[7..10] r0-r3, f[11] r4, f[12] lr, f[13..16] its first 4 stack
// words) and gets the registers the global-state code ends with. gCpu is saved around the call (interrupts).
static void gstate_enter_c(void (*fn)(u32), u32 *f)
{
    struct GstateCpu save = gCpu;
    u32 sp = gCpu.r[13];
    u32 i;
    if (sp - 0x02038000u >= 0x8001u)
        sp = GSTATE_STACK_TOP;
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
    gCpu.r[14] = GSTATE_MAGIC_RET;
    fn(0);
    // a jump out of every global-state frame (into C or native code, or back into a frame that has unwound): run on
    // from there until the code returns to this call
    while ((gCpu.r[15] | 1) != GSTATE_MAGIC_RET)
        gstate_run(gCpu.r[15]);
    for (i = 0; i < 4; i++)
        f[7 + i] = gCpu.r[i];
    f[11] = gCpu.r[4];
    for (i = 0; i < 3; i++)
        f[i] = gCpu.r[5 + i];
    for (i = 0; i < 4; i++)
        f[3 + i] = gCpu.r[8 + i];
    gCpu = save;
}

#endif  // GUARD_GSTATE_H
