// Runtime for C produced by tools/thumb2c.py (machine-translated Thumb, PC/PS2 builds only).
#ifndef GUARD_GBA_TR_H
#define GUARD_GBA_TR_H

// No libc headers: the PS2 and 32-bit PC toolchains differ in what they ship
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned long long u64;
typedef __UINTPTR_TYPE__ uintptr_t;

// Registers and flags shared by translated functions: they call each other through these, so the
// hand-written engine code can pass values in any register or flag. Each function keeps local copies
// (LOAD_REGS on entry and after a call, SAVE_REGS before a call and on return).
struct GbaCpu { u32 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr, N, Z, C, V; };
extern struct GbaCpu gba_cpu;
#define LOAD_REGS (r0 = gba_cpu.r0, r1 = gba_cpu.r1, r2 = gba_cpu.r2, r3 = gba_cpu.r3, r4 = gba_cpu.r4, \
    r5 = gba_cpu.r5, r6 = gba_cpu.r6, r7 = gba_cpu.r7, r8 = gba_cpu.r8, r9 = gba_cpu.r9, r10 = gba_cpu.r10, \
    r11 = gba_cpu.r11, r12 = gba_cpu.r12, sp = gba_cpu.sp, lr = gba_cpu.lr, N = gba_cpu.N, Z = gba_cpu.Z, \
    C = gba_cpu.C, V = gba_cpu.V)
#define SAVE_REGS (gba_cpu.r0 = r0, gba_cpu.r1 = r1, gba_cpu.r2 = r2, gba_cpu.r3 = r3, gba_cpu.r4 = r4, \
    gba_cpu.r5 = r5, gba_cpu.r6 = r6, gba_cpu.r7 = r7, gba_cpu.r8 = r8, gba_cpu.r9 = r9, gba_cpu.r10 = r10, \
    gba_cpu.r11 = r11, gba_cpu.r12 = r12, gba_cpu.sp = sp, gba_cpu.lr = lr, gba_cpu.N = N, gba_cpu.Z = Z, \
    gba_cpu.C = C, gba_cpu.V = V)

// C ABI entry (decompiled C calling a translated function): arguments in r0-r3, result in r0
static inline u32 gba_enter(void (*f)(void), u32 a, u32 b, u32 c, u32 d) {
    gba_cpu.r0 = a, gba_cpu.r1 = b, gba_cpu.r2 = c, gba_cpu.r3 = d;
    f();
    return gba_cpu.r0;
}
// Indirect call (bl _call_via_rN) to a GBA function address: the runtime finds the translated function
void gba_call_ptr(u32 addr);

// GBA address -> host pointer. Host addresses below 0x02000000 (PS2 EE RAM) pass through; GBA ranges are
// mapped by the hardware layer. shortcut: identity until the layer exists (32-bit hosts only).
#ifndef GBA_PTR
#define GBA_PTR(a) ((void *)(uintptr_t)(a))
#endif
#ifndef RD8
#define RD8(a) (*(volatile u8 *)GBA_PTR(a))
#define RD16(a) (*(volatile u16 *)GBA_PTR(a))
#define RD32(a) (*(volatile u32 *)GBA_PTR(a))
#define WR8(a, v) (*(volatile u8 *)GBA_PTR(a) = (u8)(v))
#define WR16(a, v) (*(volatile u16 *)GBA_PTR(a) = (u16)(v))
#define WR32(a, v) (*(volatile u32 *)GBA_PTR(a) = (u32)(v))
#endif

// Address of a data or function symbol; a test harness can define it as the symbol's GBA address
#ifndef SYM
#define SYM(name) ((u32)(uintptr_t)(name))
#endif
void gba_bad_jump(u32 target);
// An instruction thumb2c could not translate (tools: traps.txt); fatal if it ever runs
void gba_bad_insn(u32 addr);

void gba_swi(u32 n, u32 *r0, u32 *r1, u32 *r2, u32 *r3);
u32 gba_untranslated(const char *name);

// Flag-setting ALU operations; N, Z, C, V are locals of the calling function
#define ADDS(a, b) ({ u32 a_ = (a), b_ = (b), r_ = a_ + b_; N = r_ >> 31; Z = r_ == 0; C = r_ < a_; \
                      V = ((a_ ^ r_) & (b_ ^ r_)) >> 31; r_; })
#define SUBS(a, b) ({ u32 a_ = (a), b_ = (b), r_ = a_ - b_; N = r_ >> 31; Z = r_ == 0; C = a_ >= b_; \
                      V = ((a_ ^ b_) & (a_ ^ r_)) >> 31; r_; })
#define ADCS(a, b) ({ u32 a_ = (a), b_ = (b); u64 w_ = (u64)a_ + b_ + C; u32 r_ = (u32)w_; \
                      N = r_ >> 31; Z = r_ == 0; C = w_ >> 32; V = ((a_ ^ r_) & (b_ ^ r_)) >> 31; r_; })
#define SBCS(a, b) ({ u32 a_ = (a), b_ = (b); u64 w_ = (u64)a_ - b_ - !C; u32 r_ = (u32)w_; \
                      N = r_ >> 31; Z = r_ == 0; C = !(w_ >> 32); V = ((a_ ^ b_) & (a_ ^ r_)) >> 31; r_; })
#define LSLS(a, s) ({ u32 a_ = (a), s_ = (s) & 0xFF, r_; \
                      if (s_ == 0) r_ = a_; else if (s_ < 32) { C = (a_ >> (32 - s_)) & 1; r_ = a_ << s_; } \
                      else { C = s_ == 32 ? a_ & 1 : 0; r_ = 0; } N = r_ >> 31; Z = r_ == 0; r_; })
#define LSRS(a, s) ({ u32 a_ = (a), s_ = (s) & 0xFF, r_; \
                      if (s_ == 0) r_ = a_; else if (s_ < 32) { C = (a_ >> (s_ - 1)) & 1; r_ = a_ >> s_; } \
                      else { C = s_ == 32 ? a_ >> 31 : 0; r_ = 0; } N = r_ >> 31; Z = r_ == 0; r_; })
#define ASRS(a, s) ({ u32 a_ = (a), s_ = (s) & 0xFF, r_; \
                      if (s_ == 0) r_ = a_; else if (s_ < 32) { C = (a_ >> (s_ - 1)) & 1; r_ = (u32)((s32)a_ >> s_); } \
                      else { C = a_ >> 31; r_ = (u32)((s32)a_ >> 31); } N = r_ >> 31; Z = r_ == 0; r_; })
#define RORS(a, s) ({ u32 a_ = (a), s_ = (s) & 0xFF, r_ = a_; \
                      if (s_) { u32 k_ = s_ & 31; r_ = k_ ? (a_ >> k_) | (a_ << (32 - k_)) : a_; C = r_ >> 31; } \
                      N = r_ >> 31; Z = r_ == 0; r_; })

#endif
