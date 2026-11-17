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

// Stack pointer shared by all translated functions (points into GBA IWRAM as on the hardware)
extern u32 gba_sp;

// GBA address -> host pointer. Host addresses below 0x02000000 (PS2 EE RAM) pass through; GBA ranges are
// mapped by the hardware layer. shortcut: identity until the layer exists (32-bit hosts only).
#ifndef GBA_PTR
#define GBA_PTR(a) ((void *)(uintptr_t)(a))
#endif
#define RD8(a) (*(volatile u8 *)GBA_PTR(a))
#define RD16(a) (*(volatile u16 *)GBA_PTR(a))
#define RD32(a) (*(volatile u32 *)GBA_PTR(a))
#define WR8(a, v) (*(volatile u8 *)GBA_PTR(a) = (u8)(v))
#define WR16(a, v) (*(volatile u16 *)GBA_PTR(a) = (u16)(v))
#define WR32(a, v) (*(volatile u32 *)GBA_PTR(a) = (u32)(v))

typedef u32 (*gba_fn)(u32, u32, u32, u32);
#ifndef CALL_PTR
#define CALL_PTR(p, a, b, c, d) (gba_sp = sp, ((gba_fn)(uintptr_t)((p) & ~1u))(a, b, c, d))
#endif
// Address of a data or function symbol; a test harness can define it as the symbol's GBA address
#ifndef SYM
#define SYM(name) ((u32)(uintptr_t)(name))
#endif
u32 gba_bad_jump(u32 target);

u32 gba_swi(u32 n, u32 r0, u32 r1, u32 r2, u32 r3);
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
