#include "gba/gba.h"
#include "global.h"
#include "entity.h"

void load_palette_from_gfx_group(u32 gfxId)
{
    const struct UnknownStruct6 *r4 = gUnknown_08429750[gfxId];
    
    for (;;)
    {
        u8 r3 = r4->unk2;
        u32 r0;
        u16 r2;
        u32 foo;

        if ((r4->unk3 & 0xF) == 0)
            r2 = 16;
        else
            r2 = r4->unk3 & 0xF;
        r0 = r4->unk0;
        foo = (uintptr_t)gUnknown_03000030;
        r0 += foo;
        load_palette((void *)r0, r3, r2);
        if (!(r4->unk3 & 0x80))
            break;
        r4++;
    }
}

void load_palette(u16 *src, u32 paletteNum, u32 size)
{
    register s32 i asm("r1");
    u32 r2 = 1 << paletteNum;
    u16 *dest;

    asm("":::"r3");
    for (i = size - 1; i != 0; i--)
        r2 |= r2 << 1;
    gUnknown_0200B310 |= r2;
    dest = gPaletteBuf2 + paletteNum * 16;
    size = size * 32;
    if (gUnknown_0202A4F4 != NULL)
    {
        do
        {
            u16 *ptr = dest++;
            *ptr = gUnknown_0202A4F4[*src & 0x1F]
                 | gUnknown_0202A4F4[((*src & 0x3E0) >> 5) + 32]
                 | gUnknown_0202A4F4[((*src & 0x7C00) >> 10) + 64];
            src++;
            size -= 2;
        } while (size != 0);
    }
    else
    {
        CpuFastCopy(src, dest, size);
    }
}

void set_palette_color(u32 index, u32 color)
{
    if (gUnknown_0202A4F4 != NULL)
        color = gUnknown_0202A4F4[color & 0x1F]
              | gUnknown_0202A4F4[((color & 0x3E0) >> 5) + 32]
              | gUnknown_0202A4F4[((color & 0x7C00) >> 10) + 64];
    gPaletteBuf2[index] = color;
    gUnknown_0200B310 |= 1 << (index / 16);
}

void flush_palette_buffer(void)
{
    u32 bitmask;
    u16 *src;
    u16 *dest;

    if (gPaletteBuf1Bitmask != 0)
    {
        src = gPaletteBuf1;
        bitmask = gPaletteBuf1Bitmask;
    }
    else
    {
        src = gPaletteBuf2;
        bitmask = gPaletteBuf2Bitmask;
    }
    dest = (void *)PLTT;
    while (bitmask != 0)
    {
        if (bitmask & 1)
            CpuFastCopy(src, dest, 16 * sizeof(u16));
        src += 16;
        dest += 16;
        bitmask >>= 1;
    }
    gPaletteBuf1Bitmask = gPaletteBuf2Bitmask = 0;
}

void load_gfx_group(u16 gfxId)
{
    struct GfxGroup *r4 = gUnknown_084297F8[gfxId];

    do
    {
        bool32 shouldCopy = FALSE;
        u32 var = (r4->unk0 >> 24) & 0xF;

        switch (var)
        {
          case 14:
            if (gGameLanguage > 1)
                shouldCopy = TRUE;
            break;
          case 15:
            if (gGameLanguage != 0)
                shouldCopy = TRUE;
            break;
          case 7:
                shouldCopy = TRUE;
            break;
          default:
            if (var == gGameLanguage)
                shouldCopy = TRUE;
            break;
        }

        if (shouldCopy)
        {
            const u8 *src = gUnknown_03000030 + (r4->unk0 & 0x00FFFFFF);
            u8 *dest = r4->dest;

            if (r4->size < 0)
            {
                if (dest >= (u8 *)VRAM)
                    LZ77UnCompVram(src, dest);
                else
                    LZ77UnCompWram(src, dest);
            }
            else
            {
                CpuCopy16(src, dest, (u32)r4->size);
            }
        }
    } while (((r4++)->unk0 >> 24) & 0x80);
}

void sub_0800BAE4(u16 *dest, const u16 *src, u16 c, u16 d)
{
    u16 var;
    u16 i;

    if (d & 0x8000)
        var = 64 - c;
    else
        var = 32 - c;
    d &= 0x7FFF;
    do
    {
        for (i = 0; i < c; i++)
            *dest++ = *src++;
        dest += var;
        d--;
    } while (d != 0);
}

void sub_0800BB3C(u16 *dest, const u16 *src, u16 c, u16 d, u16 e)
{
    u16 var;
    u16 i;

    if (d & 0x8000)
        var = 64 - c;
    else
        var = 32 - c;
    d &= 0x7FFF;
    do
    {
        for (i = 0; i < c; i++)
            *dest++ = *src++ | e;
        dest += var;
        d--;
    } while (d != 0);
}

void rom2_read_keys(void)
{
    u16 keyInput = REG_KEYINPUT ^ KEYS_MASK;

    keyInput &= KEYS_MASK;
    gNewKeys = keyInput & ~gHeldKeys;
    gHeldKeys = keyInput;
}

void sub_0800BBD4(void)
{
    u16 keyInput = REG_KEYINPUT ^ KEYS_MASK;

    gNewKeys = keyInput & ~gHeldKeys;
    if (keyInput == gHeldKeys)
    {
        gUnknown_03000BF4--;
        if (gUnknown_03000BF4 == 0)
        {
            gUnknown_03005BE0 = keyInput;
            gUnknown_03000BF4 = 4;
        }
        else
        {
            gUnknown_03005BE0 = 0;
        }
    }
    else
    {
        gUnknown_03000BF4 = 20;
        gUnknown_03005BE0 = keyInput & ~gHeldKeys;
    }
    gHeldKeys = keyInput;
}

void sub_0800BC50(void)
{
    gUnknown_03005ADC[0] = (gHeldKeys & DPAD_UP) ? gUnknown_03005ADC[0] + 1 : 0;
    gUnknown_03005ADC[1] = (gHeldKeys & DPAD_RIGHT) ? gUnknown_03005ADC[1] + 1 : 0;
    gUnknown_03005ADC[2] = (gHeldKeys & DPAD_DOWN) ? gUnknown_03005ADC[2] + 1 : 0;
    gUnknown_03005ADC[3] = (gHeldKeys & DPAD_LEFT) ? gUnknown_03005ADC[3] + 1 : 0;

    if (gUnknown_03005ADC[0] > 29)
    {
        gNewKeys |= DPAD_UP;
        gUnknown_03005ADC[0] = 22;
    }

    if (gUnknown_03005ADC[1] > 29)
    {
        gNewKeys |= DPAD_RIGHT;
        gUnknown_03005ADC[1] = 22;
    }

    if (gUnknown_03005ADC[2] > 29)
    {
        gNewKeys |= DPAD_DOWN;
        gUnknown_03005ADC[2] = 22;
    }

    if (gUnknown_03005ADC[3] > 29)
    {
        gNewKeys |= DPAD_LEFT;
        gUnknown_03005ADC[3] = 22;
    }
}


// Weird pointer arithmetic and looping. I'm not going to attempt decompiling this one right now.
/*
u32 sub_0800BD14(u16 a)
{
    struct UnknownStruct10
    {
        u16 unk0;
        u16 unk2;
    };

    u16 r2;
    u16 r7;
    void *r4;
    void *r3;
    u32 r5;
    u32 r10;
    u16 r12;
    struct UnknownStruct10 *r8;
    
    a &= ~3;
    r8 = (struct UnknownStruct10 *)gUnknown_0202A8D0;
    r7 = gUnknown_0202A8D0[0];
    r5 = 1;
    // yeah, I don't understand
    r3 = (u16 *)((u8 *)gUnknown_0202A8D0 + 0x2800);
    r4 = (u16 *)((u8 *)r3 - a);
    r2 = 0;
    while (r2 < r7)
    {
        void *r1 = (u8 *)gUnknown_0202A8D0 + r8[r2].unk2;  // WTF?
        void *r0 = (u8 *)gUnknown_0202A8D0 + r8[r2 + 1].unk0;
        if (r1 <= r4 && r4 <= r0)
            goto _0800BD8E;
        //_0800BD7C
        if (r1 <= r3 && r3 <= r0)
        {
            r5 = 0;
            break;
        }
        //_0800BD4C
        if (r1 <= r4 && r3 <= r0)
            goto _0800BD8E;
        if (r4 <= r1 && r0 <= r3)
            goto _0800BD8E;
        //_0800BD5C
        r2++;
    }
    //_0800BD86
    //r10 = r7 * 4;
    if (r5 == 0)
    {
    _0800BD8E:
        //r10 = r7 * 4;
        for (r12 = 0; r12 < r7; r12++)
        {
            r3 = (u8 *)gUnknown_0202A8D0 + r8[r12].unk2;
            r4 = (u8 *)r3 - a;
            r5 = 0;
            if (r4 >= &r8[r7 + 1].unk2)
            {
                r5 = 1;
                break;
            }
        }
        if (r5 != 0)  // maybe?
        {
            for (r2 = 0; r2 < r7; r2++)
            {
                
            }
        }
        //_0800BE14
    }
    //_0800BE18
}
*/
__attribute__((naked))
void *sub_0800BD14(u16 a)
{
    asm("push {r4-r7,lr}\n\
	mov r7, r10\n\
	mov r6, r9\n\
	mov r5, r8\n\
	push {r5-r7}\n\
	lsl r0, r0, #16\n\
	lsr r0, r0, #16\n\
	mov r9, r0\n\
	add r0, r0, #3\n\
	mov r2, #4\n\
	neg r2, r2\n\
	add r1, r2, #0\n\
	and r0, r0, r1\n\
	lsl r0, r0, #16\n\
	lsr r0, r0, #16\n\
	mov r9, r0\n\
	ldr r6, _0800BD48  @ =gUnknown_0202A8D0\n\
	mov r8, r6\n\
	ldrh r7, [r6]\n\
	mov r5, #1\n\
	mov r3, #160\n\
	lsl r3, r3, #6\n\
	add r3, r3, r8\n\
	sub r4, r3, r0\n\
	mov r2, #0\n\
	b _0800BD62\n\
_0800BD48:\n\
	.4byte gUnknown_0202A8D0\n\
_0800BD4C:\n\
	cmp r1, r4\n\
	bhi _0800BD54\n\
	cmp r3, r0\n\
	bls _0800BD8E\n\
_0800BD54:\n\
	cmp r4, r1\n\
	bhi _0800BD5C\n\
	cmp r0, r3\n\
	bls _0800BD8E\n\
_0800BD5C:\n\
	add r0, r2, #1\n\
	lsl r0, r0, #16\n\
	lsr r2, r0, #16\n\
_0800BD62:\n\
	cmp r2, r7\n\
	bcs _0800BD86\n\
	lsl r0, r2, #2\n\
	add r0, r0, r8\n\
	ldrh r1, [r0, #2]\n\
	ldr r6, _0800BD98  @ =gUnknown_0202A8D0\n\
	add r1, r1, r6\n\
	ldrh r0, [r0, #4]\n\
	add r0, r0, r6\n\
	cmp r1, r4\n\
	bhi _0800BD7C\n\
	cmp r4, r0\n\
	bls _0800BD8E\n\
_0800BD7C:\n\
	cmp r1, r3\n\
	bhi _0800BD4C\n\
	cmp r3, r0\n\
	bhi _0800BD4C\n\
	mov r5, #0\n\
_0800BD86:\n\
	lsl r0, r7, #2\n\
	mov r10, r0\n\
	cmp r5, #0\n\
	bne _0800BE18\n\
_0800BD8E:\n\
	mov r1, #0\n\
	mov r12, r1\n\
	lsl r2, r7, #2\n\
	mov r10, r2\n\
	b _0800BDAC\n\
_0800BD98:\n\
	.4byte gUnknown_0202A8D0\n\
_0800BD9C:\n\
	mov r5, #0\n\
_0800BD9E:\n\
	mov r0, r12\n\
	add r0, r0, #1\n\
	lsl r0, r0, #16\n\
	lsr r0, r0, #16\n\
	mov r12, r0\n\
	cmp r12, r7\n\
	bcs _0800BE14\n\
_0800BDAC:\n\
	mov r6, r12\n\
	lsl r0, r6, #2\n\
	add r0, r0, r8\n\
	ldrh r0, [r0, #2]\n\
	ldr r1, _0800BDD4  @ =gUnknown_0202A8D0\n\
	add r3, r0, r1\n\
	mov r2, r9\n\
	sub r4, r3, r2\n\
	mov r5, #0\n\
	mov r0, r10\n\
	add r0, r0, #2\n\
	add r0, r0, r8\n\
	add r0, r0, #4\n\
	cmp r4, r0\n\
	bcc _0800BD9E\n\
	mov r5, #1\n\
	mov r2, #0\n\
	add r6, r1, #0\n\
	b _0800BDEE\n\
	.byte 0x00\n\
	.byte 0x00\n\
_0800BDD4:\n\
	.4byte gUnknown_0202A8D0\n\
_0800BDD8:\n\
	cmp r1, r4\n\
	bhi _0800BDE0\n\
	cmp r3, r0\n\
	bls _0800BD9C\n\
_0800BDE0:\n\
	cmp r4, r1\n\
	bhi _0800BDE8\n\
	cmp r0, r3\n\
	bls _0800BD9C\n\
_0800BDE8:\n\
	add r0, r2, #1\n\
	lsl r0, r0, #16\n\
	lsr r2, r0, #16\n\
_0800BDEE:\n\
	cmp r2, r7\n\
	bcs _0800BE10\n\
	lsl r0, r2, #2\n\
	add r0, r0, r8\n\
	ldrh r1, [r0, #2]\n\
	add r1, r1, r6\n\
	ldrh r0, [r0, #4]\n\
	add r0, r0, r6\n\
	cmp r1, r4\n\
	bhi _0800BE06\n\
	cmp r4, r0\n\
	bcc _0800BD9C\n\
_0800BE06:\n\
	cmp r1, r3\n\
	bcs _0800BDD8\n\
	cmp r3, r0\n\
	bhi _0800BDD8\n\
	mov r5, #0\n\
_0800BE10:\n\
	cmp r5, #0\n\
	beq _0800BD9E\n\
_0800BE14:\n\
	cmp r5, #0\n\
	beq _0800BE40\n\
_0800BE18:\n\
	ldr r0, _0800BE3C  @ =gUnknown_0202A8D2\n\
	mov r6, r10\n\
	add r2, r6, r0\n\
	sub r3, r0, #2\n\
	sub r1, r4, r3\n\
	strh r1, [r2]\n\
	add r0, r0, #2\n\
	add r0, r0, r10\n\
	add r1, r1, r9\n\
	strh r1, [r0]\n\
	add r0, r7, #1\n\
	strh r0, [r3]\n\
	add r0, r4, #0\n\
	mov r1, r9\n\
	bl zero_memory\n\
	add r0, r4, #0\n\
	b _0800BE42\n\
_0800BE3C:\n\
	.4byte gUnknown_0202A8D2\n\
_0800BE40:\n\
	mov r0, #0\n\
_0800BE42:\n\
	pop {r3-r5}\n\
	mov r8, r3\n\
	mov r9, r4\n\
	mov r10, r5\n\
	pop {r4-r7}\n\
	pop {r1}\n\
	bx r1");
}

//#define gUnknown_0202A8CE ((u16 *)0x0202A8CE)
//#define gUnknown_0202A8D0 ((u16 *)0x0202A8D0)

extern u16 gUnknown_0202A8CE[];
#define gUnknown_0202A8D0 (gUnknown_0202A8CE + 1)

// register differences
#ifdef NONMATCHING
void sub_0800BE50(u8 *a)
{
    register u16 *r4 = &gUnknown_0202A8CE[1];
    register u32 r5 = *r4++;
    u16 r1 = a - (u8 *)&gUnknown_0202A8CE[1];
    u16 r2 = 0;
    
    if (r2 < r5)
    {
        if (*r4 == r1)
        {
            u16 *ptr;
            ptr = &gUnknown_0202A8CE[r5 * 2];
            r4[0] = *ptr;
            *ptr = 0;
            ptr++;
            r4[1] = *ptr;
            *ptr = 0;
            gUnknown_0202A8CE[1] = r5 - 1;
        }
        //_0800BE8C
        else
        {
            register u16 *ptr asm("r1");
            while (*r4 != r1)
            {
                asm("":::"r3");
                r4 += 2;
                r2++;
                if (r2 >= r5)
                    return;
            }
            ptr = &gUnknown_0202A8CE[r5 * 2];
            r4[0] = *ptr;
            *ptr = 0;
            ptr++;
            r4[1] = *ptr;
            *ptr = 0;
            gUnknown_0202A8CE[1] = r5 - 1;
            asm("");
        }
    }
    //_0800BEB8
}
#else
__attribute__((naked))
void sub_0800BE50(u8 *a)
{
    asm("\n\
	push {r4,r5,lr}\n\
	ldr r4, _0800BE88  @ =gUnknown_0202A8D0\n\
	ldrh r5, [r4]\n\
	add r4, r4, #2\n\
	ldr r3, _0800BE88  @ =gUnknown_0202A8D0\n\
	sub r0, r0, r3\n\
	lsl r0, r0, #16\n\
	lsr r1, r0, #16\n\
	mov r2, #0\n\
	cmp r2, r5\n\
	bcs _0800BEB8\n\
	ldrh r0, [r4]\n\
	cmp r0, r1\n\
	bne _0800BE8C\n\
	lsl r0, r5, #2\n\
	sub r1, r3, #2\n\
	add r0, r0, r1\n\
	ldrh r1, [r0]\n\
	strh r1, [r4]\n\
	strh r2, [r0]\n\
	add r0, r0, #2\n\
	ldrh r1, [r0]\n\
	strh r1, [r4, #2]\n\
	strh r2, [r0]\n\
	sub r0, r5, #1\n\
	strh r0, [r3]\n\
	b _0800BEB8\n\
	.byte 0x00\n\
	.byte 0x00\n\
_0800BE88:\n\
	.4byte gUnknown_0202A8D0\n\
_0800BE8C:\n\
	add r4, r4, #4\n\
	add r0, r2, #1\n\
	lsl r0, r0, #16\n\
	lsr r2, r0, #16\n\
	cmp r2, r5\n\
	bcs _0800BEB8\n\
	ldrh r0, [r4]\n\
	cmp r0, r1\n\
	bne _0800BE8C\n\
	lsl r1, r5, #2\n\
	ldr r3, _0800BEC0  @ =gUnknown_0202A8CE\n\
	add r1, r1, r3\n\
	ldrh r0, [r1]\n\
	strh r0, [r4]\n\
	mov r2, #0\n\
	strh r2, [r1]\n\
	add r1, r1, #2\n\
	ldrh r0, [r1]\n\
	strh r0, [r4, #2]\n\
	strh r2, [r1]\n\
	sub r0, r5, #1\n\
	strh r0, [r3, #2]\n\
_0800BEB8:\n\
	pop {r4,r5}\n\
	pop {r0}\n\
	bx r0\n\
	.byte 0x00\n\
	.byte 0x00\n\
_0800BEC0:\n\
	.4byte gUnknown_0202A8CE\n");
}
#endif

void sub_0800BEC4(void)
{
    zero_memory(gUnknown_0202A8CE + 1, 0x2800);
}

extern u8 gUnknown_03005E20[];

void sub_0800BED8(void)
{
    REG_DISPCNT = 0;
    gUnknown_0300050C = 0;
    gUnknown_03000204 = 0;
    gUnknown_03000E34 = gUnknown_03006630;
    gUnknown_03005E08 = (u8 *)gUnknown_03000E34 + 128;
    gUnknown_03005E04 = gUnknown_03005E20 + 64;//gUnknown_03005E60;
    gUnknown_03000948.unk5 = 0;
    gUnknown_03000948.unk4 = 0;
    sub_0800BFBC();
    CpuFastFill(0xA0, (void *)OAM, OAM_SIZE);
    CpuFastFill(0xA0, gUnknown_03005E20, 0x800);
    CpuFastFill(0, gUnknown_03006630, 0x100);
    CpuFastFill(0, gBG0Buffer, 0x1000);
    if (gUnknown_03000BC0.unk0 != 0)
    {
        DmaStop(0);
        gUnknown_03000BC0.unk0 = 0;
    }
}

void sub_0800BFBC(void)
{
    zero_memory(gUnknown_030059A0, 108);
    gUnknown_030059A0->dispCnt = 0x40;
}

int is_ram_address(void *addr)
{
    return (uintptr_t)addr - IWRAM < IWRAM_SIZE
        || (uintptr_t)addr - EWRAM < EWRAM_SIZE;
}


int sub_0800C004(u8 *a)
{
    return a >= gEntityList && a < gEntityList + 0x4000;
}

int is_rom_address(void *addr)
{
    return (uintptr_t)addr - 0x08000000 < 0x800000;
}

void sub_0800C03C(void)
{
    zero_memory(&gUnknown_03000520, 16);
    sub_0800C080();
    gUnknown_03000520.unkC = -1;
    gUnknown_03000520.unk4 = 1;
}

void sub_0800C060(void)
{
    zero_memory(&gUnknown_03000520, 16);
    gUnknown_03000520.unkC = -1;
    gUnknown_03000520.unk4 = 1;
}

void sub_0800C080(void)
{
    if (gUnknown_03000520.unk4 != 0)
    {
        gUnknown_0200B310 = -1;
        gUnknown_0201EDE0 = 0;
    }
    else
        gUnknown_030004A0.bldcnt = 0;
}

extern u16 gUnknown_08137D18[];

void sub_0800C0B0(u8 a, u32 b)
{
    gUnknown_03000520.unk1 = a;
    gUnknown_03000520.unk3 = b;
    gUnknown_03000520.unk0 = 1;
    gUnknown_03000520.unk2 = 0;
    gUnknown_03000520.unk8 = 0x100;
    if (gUnknown_03000520.unk4 != 0)
    {
        gUnknown_03000520.unk7 = (a > 1) ? 25 : 0;
        gUnknown_0200B310 = 0;
    }
    else
    {
        gUnknown_030004A0.bldcnt = gUnknown_08137D18[a];
        gUnknown_030004A0.bldy = ((a & 1) != 0) ? 15 : 0;
    }
}

extern void (*gUnknown_08427390[])(struct Struct03000520 *);

void sub_0800C118(void)
{
    if (gUnknown_03000520.unk0 != 0)
        gUnknown_08427390[gUnknown_03000520.unk1](&gUnknown_03000520);
}

void sub_0800C140(struct Struct03000520 *a)
{
    if (a->unk4 != 0)
    {
        a->unk8 -= a->unk3;
        if (a->unk8 <= 0)
        {
            a->unk8 = 0;
            a->unk0 = 0;
        }
        sub_0800C1EC(a->unk8);
    }
    else
    {
        a->unk8 -= a->unk3;
        gUnknown_030004A0.bldy = a->unk8 >> 4;
        if (a->unk8 <= 0)
        {
            a->unk0 = 0;
            gUnknown_030004A0.bldy = 0;
        }
    }
}

void sub_0800C190(struct Struct03000520 *a)
{
    if (a->unk4 != 0)
    {
        a->unk8 -= a->unk3;
        if (a->unk8 <= 0)
        {
            a->unk8 = 0;
            a->unk0 = 0;
        }
        sub_0800C1EC(256 - a->unk8);
    }
    else
    {
        a->unk8 -= a->unk3;
        gUnknown_030004A0.bldy = 16 - (a->unk8 >> 4);
        if (a->unk8 <= 0)
        {
            a->unk0 = 0;
            gUnknown_030004A0.bldy = 16;
        }
    }
}

// Functions not decompiled yet are in asm/non_matching/rom2/, one .inc each (tools/asm_split.py from asm/rom2.s).

asm(".INCLUDE \"macro.inc\"");
#ifdef NONMATCHING
extern u32 gUnknown_0201EDE0;

// Fades the palettes picked by gUnknown_03000520.unkC from gPaletteBuf2 into gPaletteBuf1, weight k/256
void sub_0800C1EC(u32 k)
{
    u16 *src = gPaletteBuf2;
    u16 *dst = gPaletteBuf1;
    u32 c = gUnknown_03000520.unk7 << 3;
    u8 i = 0;
    u32 mask = gUnknown_03000520.unkC;
    u32 base = k * c;
    u8 j;
    u32 col, r, g, b;

    do {
        if (mask & (1 << i)) {
            gUnknown_0201EDE0 |= 1 << i;
            for (j = 16; j != 0; j--) {
                col = *src;
                r = (col & 31) << 3;
                col >>= 5;
                g = (col & 31) << 3;
                col >>= 5;
                b = (col & 31) << 3;
                *dst = ((r * (256 - k) + base) >> 11) | (((g * (256 - k) + base) >> 11) << 5) | (((b * (256 - k) + base) >> 11) << 10);
                src++;
                dst++;
            }
        } else {
            src += 16;
            dst += 16;
        }
    } while (++i <= 31);
}
#else
asm(".include \"asm/non_matching/rom2/sub_0800C1EC.inc\"");
#endif

asm(".include \"asm/non_matching/rom2/sub_0800C2B8.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800C328.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800C41C.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800C4E8.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800C4FC.inc\"");

// Link packet header: two id bytes and a checksum over 12 halfwords, then 5 words of data
struct Packet0800C658 { u8 unk0; u8 unk1; u16 sum; u32 data[5]; };
struct Struct02030790 {
    u8 unk0, unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unkA, unkB;
    u8 padC[8];
    u32 unk14;
    s32 unk18;
    struct Packet0800C658 *unk1C, *unk20;  // swapped by sub_0800C75C
    u32 unk24, unk28;  // swapped by sub_0800C75C
    u8 *unk2C;  // 4 received packets of 28 bytes (sub_0800C6A8)
};
extern struct Struct02030790 gUnknown_02030790;

u8 sub_0800C6A8(u8 *);
#ifdef NONMATCHING
extern struct Struct02030790 gUnknown_02030790;

u8 sub_0800C6A8(u8 *);

// Link cable state machine; returns the status word (received mask, connection bits)
u32 sub_0800C54C(u8 *dst)
{
    u32 siocnt = *(vu32 *)REG_ADDR_SIOCNT;
    struct Struct02030790 *g = &gUnknown_02030790;
    u32 r, s;

    switch (g->unk1) {
    case 0:
        if (g->unk18 == 13) {
            if ((siocnt & 0x88) != 8)
                goto end;
            if ((u8)(siocnt & 4) == 0) {
                REG_IME = 0;
                REG_IE &= ~0x80;
                REG_IE |= 0x40;
                REG_IME = 1;
                ((vu8 *)REG_ADDR_SIOCNT)[1] &= ~0x40;
                *(vu32 *)REG_ADDR_TM3CNT = 0xB72F;
                REG_IF = 0xC0;
                g->unk0 = siocnt & 0x88;
            }
        }
        g->unk1 = 1;
    case 1:
        if (gUnknown_02030790.unk2 != 0) {
            if (gUnknown_02030790.unk8 <= 7)
                gUnknown_02030790.unk8++;
            else
                gUnknown_02030790.unk1 = 2;
        }
    case 2:
        sub_0800C6A8(dst);
    }
end:
    gUnknown_02030790.unkB++;
    s = gUnknown_02030790.unk3;
    r = gUnknown_02030790.unk2 << 8;
    if (gUnknown_02030790.unk0 == 8)
        r = 0x80 | r | s;
    else
        r = s | r;
    if (gUnknown_02030790.unk7 != 0)
        r |= 0x1000;
    s = (gUnknown_02030790.unk8 >> 3) << 15;
    if (((siocnt << 26) >> 30) > 3)
        return 0x2000 | s | r;
    return r | s;
}
#else
asm(".include \"asm/non_matching/rom2/sub_0800C54C.inc\"");
#endif


void sub_0800C658(void *data)
{
    s32 sum = 0;
    u32 i;

    gUnknown_02030790.unk1C->unk0 = gUnknown_02030790.unkB;
    gUnknown_02030790.unk1C->unk1 = gUnknown_02030790.unk2 ^ gUnknown_02030790.unk3;
    gUnknown_02030790.unk1C->sum = sum;
    CpuSet(data, gUnknown_02030790.unk1C->data, 0x04000005);
    for (i = 0; i < 12; i++)
        sum += ((u16 *)gUnknown_02030790.unk1C)[i];
    gUnknown_02030790.unk1C->sum = ~sum - 14;
    gUnknown_02030790.unk4 = 1;
}
#ifdef NONMATCHING
extern u8 gUnknown_02030950[];  // code copied to EWRAM

u8 sub_0800C6A8(u8 *dst)
{
    vu32 unused = 0;
    u32 zero;
    u8 *pkt;
    s32 i;
    u32 j;
    s32 sum;
    u8 ok = ((u8 (*)(void))gUnknown_02030950)();

    gUnknown_02030790.unk3 = 0;
    if (ok) {
        for (i = 0; i <= 3; i++) {
            pkt = gUnknown_02030790.unk2C + i * 28;
            sum = 0;
            for (j = 0; j <= 11; j++)
                sum += ((u16 *)pkt)[j];
            if ((s16)sum == -15) {
                CpuSet(pkt + 4, dst + i * 20, 0x04000005);
                gUnknown_02030790.unk3 |= 1 << i;
            }
            zero = 0;
            CpuSet(&zero, pkt + 4, 0x05000005);
        }
    }
    gUnknown_02030790.unk2 |= gUnknown_02030790.unk3;
    return gUnknown_02030790.unk3;
}
#else
asm(".include \"asm/non_matching/rom2/sub_0800C6A8.inc\"");
#endif

#ifdef NONMATCHING
void sub_0800C75C(void)
{
    struct Struct02030790 *g = &gUnknown_02030790;
    u32 t;

    if (g->unk0 != 0) {
        if (g->unk4 != 0 && g->unk1 != 0 && g->unk6 != 0) {
            g->unk18 = -1;
            t = g->unk28; g->unk28 = g->unk24; g->unk24 = t;
            {
                struct Packet0800C658 *q = g->unk20; g->unk20 = g->unk1C; g->unk1C = q;
            }
            g->unk4 = 0;
            g->unk14 = 0;
            g->unk7 = (*(vu32 *)REG_ADDR_SIOCNT << 25) >> 31;
            *(vu16 *)(REG_ADDR_SIOCNT + 2) = 0xFEFE;
            REG_SIOCNT |= 0x80;
            REG_TM3CNT_H = 0xC0;
        }
    } else if (g->unk9 <= 3) {
        g->unk9++;
    } else {
        REG_IME = g->unk0;
        gUnknown_03007FF8 |= 0x80;
        REG_IME = 1;
    }
}
#else
asm(".include \"asm/non_matching/rom2/sub_0800C75C.inc\"");
#endif

asm(".include \"asm/non_matching/rom2/sub_0800C7E8.inc\"");

extern u8 *(*const gUnknown_084273C8[])(u8 *);

void sub_0800C8E4(void)
{
    u8 *p = gUnknown_03006630 + ((gUnknown_03000204 ^ 1) << 7);

    while (p < (u8 *)gUnknown_03005E08)
        p = gUnknown_084273C8[*p](p + 1);
    gUnknown_03005E08 = gUnknown_03006630 + ((gUnknown_03000204 ^ 1) << 7);
}


const u8 *sub_0800C940(const u8 *p)
{
    CpuFastSet((void *)(p[0] + (p[1] << 8) + (p[2] << 16) + (p[3] << 24)),
               (void *)(p[4] + (p[5] << 8) + (p[6] << 16) + (p[7] << 24)), (u32)(p[8] + (p[9] << 8)) >> 2);
    return p + 10;
}


bool32 sub_0800C984(void)
{
    return (u8 *)gUnknown_03000E34 < gUnknown_030066A6 + gUnknown_03000204 * 128;
}


const u8 *sub_0800C9AC(const u8 *p)
{
    u8 *src = (u8 *)(p[0] + (p[1] << 8) + (p[2] << 16) + (p[3] << 24));

    CpuFastSet(src, (void *)(p[4] + (p[5] << 8) + (p[6] << 16) + (p[7] << 24)), (u32)(p[8] + (p[9] << 8)) >> 2);
    sub_0800BE50(src);
    return p + 10;
}

asm(".include \"asm/non_matching/rom2/sub_0800C9F8.inc\"");

void sub_0800CA34(void)
{
}


void sub_0800CA38(void)
{
}


void sub_0800CA3C(void)
{
    gUnknown_030004A0.dispCnt &= 0xDFFF;
    gUnknown_03000BC0.unk0 = 0;
    DmaStop(0);
    sub_0800CA38();
}


void sub_0800CA84(u32 a, u32 b)
{
    gUnknown_030004A0.dispCnt |= 0x2000;
    gUnknown_030004A0.winin = a;
    gUnknown_030004A0.winout = b;
    gUnknown_030004A0.win0v = 160;
    gUnknown_03000BC0.unk0 = 1;
    gUnknown_03000BC0.dest = (void *)0x04000040;
    gUnknown_03000BC0.dmaCnt = 0xA2600001;
    sub_0800CA34();
}

asm(".include \"asm/non_matching/rom2/sub_0800CAD4.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800CBBC.inc\"");
asm(".include \"asm/non_matching/rom2/sub_0800CCAC.inc\"");
#ifdef NONMATCHING
extern u8 gUnknown_02038000[];
void sub_0800D0A8(s16, s16, s16, s16, s16);

// Window 0 as a triangle around (cx, cy), radius r, rotated by angle a: each edge is rasterised into the
// scanline table (3 x per line), then each line's leftmost/rightmost x becomes that line's WIN0H value
void sub_0800CE74(u32 cx_, u32 cy_, u32 r_, u32 a_)
{
    s16 cx = cx_, cy = cy_, r = r_, a = a_;
    u16 fill;
    s16 x0, y0, x1, y1, x2, y2;
    u32 k;
    s16 *line;
    u8 *out;
    s32 i;
    s16 p, q, s, t;

    fill = 0xFFFF;
    CpuSet(&fill, gUnknown_02038000, 0x010001E0);
    k = (a - 64) & 255;
    x0 = cx + ((gUnknown_0813E4CC[k + 64] * r) >> 8);
    y0 = cy + ((gUnknown_0813E4CC[k] * r) >> 8);
    k = (a + 104) & 255;
    x1 = cx + ((gUnknown_0813E4CC[k + 64] * r) >> 8);
    y1 = cy + ((gUnknown_0813E4CC[k] * r) >> 8);
    k = (a - 232) & 255;
    x2 = cx + ((gUnknown_0813E4CC[k + 64] * r) >> 8);
    y2 = cy + ((gUnknown_0813E4CC[k] * r) >> 8);
    sub_0800D0A8(x0, y0, x1, y1, 0);
    sub_0800D0A8(x0, y0, x2, y2, 1);
    sub_0800D0A8(x1, y1, x2, y2, 2);
    zero_memory(gUnknown_0202A0F0[gUnknown_03000204], 320);
    line = (s16 *)gUnknown_02038000;
    out = (u8 *)gUnknown_0202A0F0[gUnknown_03000204];
    for (i = 160; i > 0; i--, out += 2) {
        p = *line++;
        q = *line++;
        s = *line++;
        if (p > q) { t = p; p = q; q = t; }
        if (p > s) { t = p; p = s; s = t; }
        if (q > s) { t = q; q = s; s = t; }
        if (p != -1) {
            out[0] = s;
            out[1] = p;
        } else if (q != p) {
            out[0] = s;
            out[1] = q;
        } else if (s != p) {
            out[1] = p;
            out[0] = p;
        }
    }
    gUnknown_030004A0.win0h = gUnknown_0202A0F0[gUnknown_03000204][0];
    gUnknown_03000BC0.src = gUnknown_0202A0F0[gUnknown_03000204];
}
#else
asm(".include \"asm/non_matching/rom2/sub_0800CE74.inc\"");
#endif

extern u8 gUnknown_02038000[];

// Rasterises the edge (x0,y0)-(x1,y1) into column `slot` of the 3-per-line scanline table, x clamped to 0..240
void sub_0800D0A8(s16 x0, s16 y0, s16 x1, s16 y1, s16 slot)
{
    u16 *p = (u16 *)gUnknown_02038000;
    s16 t;
    s32 step;
    s32 pos;

    if (y0 < 0 && y1 < 0)
        return;
    if (y0 > 159 && y1 > 159)
        return;
    if (y0 > y1) {
        t = y0; y0 = y1; y1 = t;
        t = x0; x0 = x1; x1 = t;
    }
    if (y0 == y1)
        return;
    step = ((x1 - x0) << 16) / (y1 - y0);
    if (y0 < 0) {
        x0 = ((-y0 * step) >> 16) + x0;
        y0 = 0;
    }
    if (y1 > 159)
        y1 = 159;
    pos = x0 << 16;
    p += y0 * 3 + slot;
    do {
        if (x0 < 0)
            x0 = 0;
        if (x0 > 240)
            x0 = 240;
        *p = x0;
        pos += step;
        x0 = pos >> 16;
        y0++;
        p += 3;
    } while (y0 <= y1);
}


void sub_0800D1A0(void)
{
    zero_memory(gUnknown_0201EDA8, 8);
    gUnknown_0201EDA8[1] = 0;
    gUnknown_0201EDA8[0] = 0x100;
}


void sub_0800D1C0(struct Entity *this, u32 snd)
{
    if (this->type == 1 && this->form != gLCDRegisterBuffer && (snd & 0xFFFF) <= 199)
        snd = (snd & 0xFFFF0000) | ((snd & 0xFFFF) + 200);
    play_sound(snd);
}

asm(".include \"asm/non_matching/rom2/sub_0800D200.inc\"");
asm(".include \"asm/non_matching/rom2/play_sound.inc\"");
