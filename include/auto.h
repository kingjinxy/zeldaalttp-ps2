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

#define R8(a) (*(volatile u8 *)(a))
#define R16(a) (*(volatile u16 *)(a))
#define R32(a) (*(volatile u32 *)(a))
#define RS8(a) ((u32)(s32)*(volatile s8 *)(a))
#define RS16(a) ((u32)(s32)*(volatile s16 *)(a))
#define W8(a, x) (*(volatile u8 *)(a) = (u8)(x))
#define W16(a, x) (*(volatile u16 *)(a) = (u16)(x))
#define W32(a, x) (*(volatile u32 *)(a) = (u32)(x))

// register-specified shifts (amount = low byte of the register, as on the ARM); _C: the carry out
#define LSL(a, s) (((s) & 0xFF) >= 32 ? 0 : (a) << ((s) & 0xFF))
#define LSR(a, s) (((s) & 0xFF) >= 32 ? 0 : (a) >> ((s) & 0xFF))
#define ASR(a, s) ((u32)((s32)(a) >> (((s) & 0xFF) >= 32 ? 31 : ((s) & 0xFF))))
#define ROR(a, s) (((s) & 31) ? ((a) >> ((s) & 31)) | ((a) << (32 - ((s) & 31))) : (a))
#define LSL_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) > 32 ? 0 : ((a) >> (32 - ((s) & 0xFF))) & 1)
#define LSR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) > 32 ? 0 : ((a) >> (((s) & 0xFF) - 1)) & 1)
#define ASR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((s) & 0xFF) >= 32 ? (a) >> 31 : ((a) >> (((s) & 0xFF) - 1)) & 1)
#define ROR_C(a, s, c) (((s) & 0xFF) == 0 ? (c) : ((a) >> (((s) - 1) & 31)) & 1)

#endif  // GUARD_AUTO_H
