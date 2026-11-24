#ifndef GUARD_AUTO_H
#define GUARD_AUTO_H
// Support for the C that tools/asm2c.py generates from asm (src/auto/, NONMATCHING builds only).
// Memory goes through these macros so the port can map GBA addresses.

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;

#ifdef PLATFORM_PS2
// GBA I/O registers (0x04000000-0x040003FF) through src/ps2/io.c: writes have side effects (DMA, IF), reads first
// finish pending DMAs
u32 ps2_io_read(u32 a, u32 size);
void ps2_io_write(u32 a, u32 v, u32 size);
#define IO_(a) ((u32)(a) - 0x04000000u < 0x400u)
// stores below 0x00100000 (the GBA BIOS area, null pointers) would land in the PS2 kernel: io.c logs and drops them
#define WIO_(a) (IO_(a) || (u32)(a) < 0x00100000u)
#define R8(a) (IO_(a) ? (u8)ps2_io_read((u32)(a), 1) : *(volatile u8 *)(a))
#define R16(a) (IO_(a) ? (u16)ps2_io_read((u32)(a), 2) : *(volatile u16 *)(a))
#define R32(a) (IO_(a) ? ps2_io_read((u32)(a), 4) : *(volatile u32 *)(a))
#define RS8(a) ((u32)(s32)(s8)R8(a))
#define RS16(a) ((u32)(s32)(s16)R16(a))
#define W8(a, x) (WIO_(a) ? ps2_io_write((u32)(a), (u8)(x), 1) : (void)(*(volatile u8 *)(a) = (u8)(x)))
#define W16(a, x) (WIO_(a) ? ps2_io_write((u32)(a), (u16)(x), 2) : (void)(*(volatile u16 *)(a) = (u16)(x)))
#define W32(a, x) (WIO_(a) ? ps2_io_write((u32)(a), (u32)(x), 4) : (void)(*(volatile u32 *)(a) = (u32)(x)))
#else
#define R8(a) (*(volatile u8 *)(a))
#define R16(a) (*(volatile u16 *)(a))
#define R32(a) (*(volatile u32 *)(a))
#define RS8(a) ((u32)(s32)*(volatile s8 *)(a))
#define RS16(a) ((u32)(s32)*(volatile s16 *)(a))
#define W8(a, x) (*(volatile u8 *)(a) = (u8)(x))
#define W16(a, x) (*(volatile u16 *)(a) = (u16)(x))
#define W32(a, x) (*(volatile u32 *)(a) = (u32)(x))
#endif

// register-specified shifts (amount = low byte of the register, as on the ARM); _C: the carry out
#define LSL(a, s) (((s) & 0xFF) >= 32 ? 0 : (a) << ((s) & 0xFF))
#define LSR(a, s) (((s) & 0xFF) >= 32 ? 0 : (a) >> ((s) & 0xFF))
#define ASR(a, s) ((u32)((s32)(a) >> (((s) & 0xFF) >= 32 ? 31 : ((s) & 0xFF))))
#define ROR(a, s) (((s) & 31) ? ((a) >> ((s) & 31)) | ((a) << (32 - ((s) & 31))) : (a))
#define LSL_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) > 32 ? 0 : ((a) >> (32 - ((s) & 0xFF))) & 1)
#define LSR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) > 32 ? 0 : ((a) >> (((s) & 0xFF) - 1)) & 1)
#define ASR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) >= 32 ? (a) >> 31 : ((a) >> (((s) & 0xFF) - 1)) & 1)
#define ROR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((a) >> (((s) - 1) & 31)) & 1)

// indirect calls of translated code: on the PS2 the target may be a GBA address (an IWRAM routine, a global-state
// copy), which src/ps2/icall.c resolves to something callable with the C convention
// PS2 debugging: entries of translated C-convention functions go into the global-state trace ring (0x0203C200,
// include/gstate.h) as GBA address | 0x80000000
#ifdef PLATFORM_PS2
void ps2_trace_print(u32 a);
extern volatile int ps2_trace_on;  // src/ps2/frame.c: print every traced entry over SIO
#define AUTO_TRACE(a) do { volatile u32 *r_ = (volatile u32 *)0x0203C200; u32 i_ = r_[0] % 1024; \
    r_[1 + 3 * i_] = (a) | 0x80000000u; r_[0] = i_ + 1; if (ps2_trace_on) ps2_trace_print((a) | 0x80000000u); } while (0)
#else
#define AUTO_TRACE(a) ((void)0)
#endif
#ifdef PLATFORM_PS2
u32 (*ps2_icall(u32 target))();
#define ICALL(p) (ps2_icall((u32)(p)))
#else
#define ICALL(p) ((u32 (*)())(p))
#endif

#endif  // GUARD_AUTO_H
