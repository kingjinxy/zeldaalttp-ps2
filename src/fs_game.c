// Four Swords game code (0x0803668C-0x080668E4), compiled without optimization (-O0, see Makefile).
// Exceptions, -O2: sub_08039288, sub_0803E518, sub_0804721C, sub_0804BD9C; they need their own file when
// decompiled. Functions not decompiled yet are in asm/non_matching/fs_game/.

#include "global.h"
#include "entity.h"

asm(".INCLUDE \"macro.inc\"");


void sub_0803668C(void)
{
    CpuFill16(0, &gUnknown_03000FC0, 0x88);
    sub_08036770(0);
    sub_0800C41C();
    gUnknown_03000BF0 = gUnknown_03000834 = 0;
}


void sub_080366D0(u8 a)
{
    sub_08036704(a);
    sub_0800C4E8();
}


void sub_080366F0(void)
{
    sub_08036704(0);
    sub_0800C4FC();
}


void sub_08036704(u8 a)
{
    gUnknown_03000FC0.unk0 = a;
    gUnknown_03000FC0.unk1 = 0;
    gUnknown_03000FC0.unk4 = 1;
    gUnknown_03000FC0.unk8 = 0;
    gUnknown_03000FC0.unkC = 0;
    gUnknown_03000FC0.unkE = 0;
}



void sub_08036760(void)
{
    sub_08036770(0);
}


void sub_08036770(u32 a)
{
    gUnknown_03000FC0.unk0 = 0;
    gUnknown_03000FC0.unk1 = 0;
    gUnknown_03000FC0.unk4 = 0;
    gUnknown_03000FC0.unk8 = a;
    gUnknown_03000FC0.unkC = 0;
}


u32 sub_080367B4(void)
{
    return gUnknown_03000FC0.unk4;
}


u32 sub_080367CC(void)
{
    return gUnknown_03000FC0.unk8;
}


u8 sub_080367E4(void)
{
    return gUnknown_03000FC0.unk3;
}


void sub_080367FC(void)
{
    sub_0800C41C();
    sub_080366D0(2);
    gUnknown_03000FC0.unk3 = 0;
    gUnknown_03000FC0.unkE = 1;
}


void sub_08036834(void)
{
    sub_0800C41C();
    sub_080366D0(0);
    gUnknown_03000FC0.unk3 = 0;
    gUnknown_03000FC0.unkE = 0;
}


void sub_08036864(void)
{
    gUnknown_03000834 |= gUnknown_03000BF0;
    gUnknown_08427B84[gUnknown_03000FC0.unk0]();
}


void sub_080368A0(void)
{
    sub_0800C658(gUnknown_03000FD0);
    zero_memory(gUnknown_03000FD0, 20);
}


void sub_080368C0(void)
{
}


void sub_080368CC(void)
{
}


void sub_080368D8(void)
{
    if ((gUnknown_03000BF0 & 0x1000) || !(gUnknown_03000BF0 & 0x8000)
        || ((gUnknown_03000BF0 >> 8) & 0xF) != (gUnknown_03000BF0 & 0xF))
    {
        sub_0800C4FC();
        sub_0800C41C();
        gUnknown_03000FC0.unk1 = 0;
        gUnknown_03000FC0.unk3 = 0;
    }
}


void sub_08036948(void)
{
    if (((gUnknown_03000BF0 >> 8) & 0xF) != (gUnknown_03000FC0.unk3 & 0xF))
    {
        gUnknown_03000FC0.unk1 = 4;
        gUnknown_03000FC0.unk2 = 0;
        gUnknown_03000FC0.unk3 = gUnknown_03000FC0.unk3 & 0xF;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080369B4.inc\"");

void sub_08036DEC(u8 index, u32 a, u32 b)
{
    u32 *p = (u32 *)&gUnknown_03006CA8[index];

    p[0] = a;
    p[1] = b;
}


void sub_08036E24(void)
{
    if (gUnknown_03000FC0.unk3 == 0)
    {
        sub_08036770(5);
        return;
    }
    gUnknown_03000FC0.unk10 = 48;
    gUnknown_03000FC0.unk14 = gUnknown_0200B250[unk3000000.unk4].unk0;
    gUnknown_03000FC0.unk18 = unk3000000.unk4[gUnknown_0200B254].unk0;
    if (sub_08037B5C(48))
    {
        if ((u8)(gUnknown_03000FC0.unk3 & 1))
            sub_08036DEC(0, gUnknown_03000FC0.unk38[0].unk4, gUnknown_03000FC0.unk38[0].unk8);
        if ((u8)(gUnknown_03000FC0.unk3 & 2))
            sub_08036DEC(1, gUnknown_03000FC0.unk38[1].unk4, gUnknown_03000FC0.unk38[1].unk8);
        if ((u8)(gUnknown_03000FC0.unk3 & 4))
            sub_08036DEC(2, gUnknown_03000FC0.unk38[2].unk4, gUnknown_03000FC0.unk38[2].unk8);
        if ((u8)(gUnknown_03000FC0.unk3 & 8))
            sub_08036DEC(3, gUnknown_03000FC0.unk38[3].unk4, gUnknown_03000FC0.unk38[3].unk8);
        sub_08036770(1);
    }
    sub_08037D64(48);
}


void sub_08036F28(void)
{
    if (gUnknown_03000FC0.unk3 == 0)
    {
        sub_08036770(5);
    }
    else
    {
        gUnknown_03000FC0.unk10 = 64;
        gUnknown_03000FC0.unk14 = gRandom;
        if (sub_08037B5C(64))
        {
            if ((u8)(gUnknown_03000FC0.unk3 & 1))
                gRandom = gUnknown_03000FC0.unk38[0].unk4;
            sub_08036770(1);
        }
        sub_08037D64(64);
    }
}


void sub_08036F9C(void)
{
    gUnknown_08427BA0[gUnknown_03000FC0.unk1]();
    sub_08037D64(80);
}


void sub_08036FC8(void)
{
    u8 i;
    u16 fill;
    u16 zero;

    fill = 0xC000;
    CpuSet(&fill, gUnknown_0200B1D0, 0x01000040);
    for (i = 14; i <= 15; i++)
        gUnknown_0200B1D0[0][i].v = gUnknown_0200B1D0[1][i].v = gUnknown_0200B1D0[2][i].v = gUnknown_0200B1D0[3][i].v = 0;
    zero = 0;
    CpuSet(&zero, gUnknown_03000FE4, 0x0100000A);
    gUnknown_03000494 = 0;
    gUnknown_03000FC0.unk1++;
}


void sub_080370C0(void)
{
    u32 unused;  // the frame is 4 bytes

    gUnknown_03000FC0.unk8 = 3;
    gUnknown_03000FC0.unk24 = gUnknown_03000FC0.unk10 = 80;
    if (sub_08037B5C(80))
    {
        if ((u8)(gUnknown_03000FC0.unk3 & 1))
            sub_0803719C(0);
        if ((u8)(gUnknown_03000FC0.unk3 & 2))
            sub_0803719C(1);
        if ((u8)(gUnknown_03000FC0.unk3 & 4))
            sub_0803719C(2);
        if ((u8)(gUnknown_03000FC0.unk3 & 8))
            sub_0803719C(3);
        sub_08037300();
    }
    else
    {
        gUnknown_03000FC0.unkC++;
    }
}


void sub_0803719C(u8 player)
{
    struct LinkPacket *p;
    u32 i;

    p = &gUnknown_03000FF8[player];
    i = gUnknown_03000FC0.unk38[player].unkC & 15;
    if (i > 15)
        while (1)
            ;
    if (p->unk1 != 0 && player != gLCDRegisterBuffer)
    {
        gUnknown_0200B1D0[player][i].v = p->unk2[0];
        i = (i - 1) & 15;
        gUnknown_0200B1D0[player][i].v = p->unk2[1];
        i = (i - 1) & 15;
        gUnknown_0200B1D0[player][i].v = p->unk2[2];
        i = (i - 1) & 15;
        gUnknown_0200B1D0[player][i].v = p->unk2[3];
        i = (i - 1) & 15;
        gUnknown_0200B1D0[player][i].v = p->unk2[4];
    }
}


void sub_08037300(void)
{
    u32 ok;
    u32 i;

    ok = 1;
    i = (gUnknown_03000494 - 2) & 15;
    if (i > 15)
        while (1)
            ;
    if ((u8)(gUnknown_03000FC0.unk3 & 1) && gUnknown_0200B1D0[0][i].v == 0xC000)
        ok = 0;
    if ((u8)(gUnknown_03000FC0.unk3 & 2) && gUnknown_0200B1D0[1][i].v == 0xC000)
        ok = 0;
    if ((u8)(gUnknown_03000FC0.unk3 & 4) && gUnknown_0200B1D0[2][i].v == 0xC000)
        ok = 0;
    if ((u8)(gUnknown_03000FC0.unk3 & 8) && gUnknown_0200B1D0[3][i].v == 0xC000)
        ok = 0;
    if (ok)
        gUnknown_03000FC0.unk8 = 2;
    else
        CpuSet(gUnknown_03000FE4, gUnknown_03000FD0, 10);
}


u32 sub_08037414(void)
{
    return 1;
}


void sub_08037424(void)
{
    switch (gUnknown_03000FC0.unk1)
    {
    case 0:
        gUnknown_03000FC0.unk2 = 0;
        gUnknown_03000FC0.unk1++;
        break;
    case 1:
        gUnknown_03000FC0.unk10 = 96;
        if (sub_08037B5C(96))
        {
            sub_08036770(1);
            break;
        }
        if (++gUnknown_03000FC0.unk2 > 29)
        {
            gUnknown_03000FC0.unk1++;
            gUnknown_03000FC0.unk8 = 4;
        }
        break;
    default:
        gUnknown_03000FC0.unk10 = 96;
        if (sub_08037B5C(96))
        {
            sub_08036770(1);
            break;
        }
        if (++gUnknown_03000FC0.unk2 > 179)
        {
            sub_08036760();
            set_main_state(10);
        }
        break;
    }
}


bool32 sub_08037554(void)
{
    return gUnknown_03000FC0.unk8 == 2;
}

asm(".include \"asm/non_matching/fs_game/sub_08037574.inc\"");

void sub_08037750(void)
{
    u16 v;
    u16 i;

    for (i = 0; i <= 3; i++)
    {
        v = gUnknown_0200B1D0[i][(gUnknown_03000494 - 2) & 15].v & 0x7FF;
        gUnknown_03005E10_b[i].v = gUnknown_03000494 > 7 ? v & ~gUnknown_03000940_b[i].v : 0;
        gUnknown_03000940_b[i].v = v;
    }
}


// Which player (1-4) newly pressed all of these buttons, or 0
u8 sub_0803781C(u16 mask)
{
    if (gUnknown_03005E10[0] != 0xFFFF && (u16)(gUnknown_03005E10[0] & mask) == mask)
        return 1;
    if (gUnknown_03005E10[1] != 0xFFFF && (u16)(gUnknown_03005E10[1] & mask) == mask)
        return 2;
    if (gUnknown_03005E10[2] != 0xFFFF && (u16)(gUnknown_03005E10[2] & mask) == mask)
        return 3;
    if (gUnknown_03005E10[3] != 0xFFFF && (u16)(gUnknown_03005E10[3] & mask) == mask)
        return 4;
    return 0;
}


u8 sub_080378F4(u16 mask)
{
    if (gUnknown_03005E10[0] != 0xFFFF && (u16)(gUnknown_03005E10[0] & mask))
        return 1;
    if (gUnknown_03005E10[1] != 0xFFFF && (u16)(gUnknown_03005E10[1] & mask))
        return 2;
    if (gUnknown_03005E10[2] != 0xFFFF && (u16)(gUnknown_03005E10[2] & mask))
        return 3;
    if (gUnknown_03005E10[3] != 0xFFFF && (u16)(gUnknown_03005E10[3] & mask))
        return 4;
    return 0;
}


// Which player (1-4) holds all of these buttons, or 0
u8 sub_080379BC(u16 mask)
{
    if (gUnknown_03000940[0] != 0xFFFF && (u16)(gUnknown_03000940[0] & mask) == mask)
        return 1;
    if (gUnknown_03000940[1] != 0xFFFF && (u16)(gUnknown_03000940[1] & mask) == mask)
        return 2;
    if (gUnknown_03000940[2] != 0xFFFF && (u16)(gUnknown_03000940[2] & mask) == mask)
        return 3;
    if (gUnknown_03000940[3] != 0xFFFF && (u16)(gUnknown_03000940[3] & mask) == mask)
        return 4;
    return 0;
}


u8 sub_08037A94(u16 mask)
{
    if (gUnknown_03000940[0] != 0xFFFF && (u16)(gUnknown_03000940[0] & mask))
        return 1;
    if (gUnknown_03000940[1] != 0xFFFF && (u16)(gUnknown_03000940[1] & mask))
        return 2;
    if (gUnknown_03000940[2] != 0xFFFF && (u16)(gUnknown_03000940[2] & mask))
        return 3;
    if (gUnknown_03000940[3] != 0xFFFF && (u16)(gUnknown_03000940[3] & mask))
        return 4;
    return 0;
}


bool32 sub_08037B5C(u8 a)
{
    u8 m;
    u8 n;

    m = 0;
    n = gUnknown_03000FC0.unk3 & 15;
    if ((gUnknown_03000BF0 & 1) && gUnknown_03000FC0.unk38[0].unk0 == a)
        m |= 1;
    if ((gUnknown_03000BF0 & 2) && gUnknown_03000FC0.unk38[1].unk0 == a)
        m |= 2;
    if ((gUnknown_03000BF0 & 4) && gUnknown_03000FC0.unk38[2].unk0 == a)
        m |= 4;
    if ((gUnknown_03000BF0 & 8) && gUnknown_03000FC0.unk38[3].unk0 == a)
        m |= 8;
    return m == n;
}


bool32 sub_08037C58(u8 a)
{
    u8 m;
    u8 n;

    m = 0;
    n = gUnknown_03000FC0.unk3 & 15;
    if ((gUnknown_03000BF0 & 1) && gUnknown_03000FC0.unk38[0].unk0 == a)
        m |= 1;
    if ((gUnknown_03000BF0 & 2) && gUnknown_03000FC0.unk38[1].unk0 == a)
        m |= 2;
    if ((gUnknown_03000BF0 & 4) && gUnknown_03000FC0.unk38[2].unk0 == a)
        m |= 4;
    if ((gUnknown_03000BF0 & 8) && gUnknown_03000FC0.unk38[3].unk0 == a)
        m |= 8;
    return m == n && (gUnknown_03000BF0 & 15) == m;
}


bool32 sub_08037D64(u32 a)
{
    if (gUnknown_03000FC0.unkE != 0)
        return;
    gUnknown_03000FC0.unkC = sub_08037C58(a) ? 0 : gUnknown_03000FC0.unkC + 1;
    if ((gUnknown_03000BF0 & 0x3000) || gUnknown_03000FC0.unkC > 60)
    {
        sub_08036760();
        set_main_state(10);
    }
}


void sub_08037DE8(void)
{
    gUnknown_08427BA8[gUnknown_03005050]();
}


void sub_08037E0C(void)
{
    switch (gSubState)
    {
    case 0:
        sub_0800BED8();
        *(u16 *)0x05000000 = 0;
        ((struct BitU16 *)gPaletteBuf2)->v = 0;
        sub_08059A44();
        sub_0801239C();
        sub_080123BC();
        sub_0803668C();
        gUnknown_03000830 = 0;
        sub_0800D1A0();
        play_sound(0x80010000);
        gUnknown_02016D60_fs.unk4 = 60;
        gSubState++;
        break;
    case 1:
        if (--gUnknown_02016D60_fs.unk4 == 0)
        {
            gUnknown_03005050++;
            gSubState = 0;
        }
        break;
    }
}


void sub_08037EEC(void)
{
    u32 zero;
    struct Entity *e;

    sub_0801239C();
    sub_080123BC();
    sub_0802BF60();
    sub_0802C278();
    sub_0800D6F4();
    sub_0800D744();
    zero = 0;
    CpuFastSet(&zero, (void *)0x0600C000, 0x01001000);
    load_palette_from_gfx_group(2);
    load_palette_from_gfx_group(21);
    load_gfx_group(27);
    load_gfx_group(1);
    *(u16 *)0x05000000 = 0;
    ((struct BitU16 *)gPaletteBuf2)->v = 0;
    sub_0800F4C4(0x405, gUnknown_08427BB4);
    BITU16_AT(&gUnknown_030004A0, 8) = gUnknown_08142374[18];
    BITU16_AT(&gUnknown_030004A0, 10) = BITU16_AT(&gUnknown_030004A0, 12) = 0;
    ((struct BitU16 *)&gUnknown_030004A0)->v = 0x1340;
    BITU16_AT(&gUnknown_030004A0, 20) = gUnknown_08142374[21];
    BITU16_AT(&gUnknown_030004A0, 22) = BITU16_AT(&gUnknown_030004A0, 24) = 0;
    e = sub_08063C5C(gLCDRegisterBuffer);
    e->unk1C_0 = 2;
    e->unk1F_6 = 0;
    e->x.HALF_U.HI = 120;
    e->y.HALF_U.HI = 136;
    gUnknown_03006A30[gLCDRegisterBuffer].unkC = 7;
    sub_0800C0B0(0, 8);
    gUnknown_02016D60_fs.unk4 = 480;
    gUnknown_03005050++;
}


void sub_08038094(void)
{
    switch (gSubState)
    {
    case 0:
        if (--gUnknown_02016D60_fs.unk4 == 0)
        {
            sub_0800C0B0(3, 8);
            gSubState++;
        }
        break;
    case 1:
        if (gUnknown_03000520.unk0 != 0)
            return;
        sub_0800BED8();
        *(u16 *)0x05000000 = 0x6739;
        ((struct BitU16 *)gPaletteBuf2)->v = 0x6739;
        sub_080123BC();
        sub_0801239C();
        set_main_state(9);
        return;
    }
    ((void (*)(void))gUnknown_03006C70)();
    sub_08000BAC();
}


void sub_0803815C(void)
{
}


void sub_08038168(void)
{
    gUnknown_08427BCC[gUnknown_03005050]();
}


void sub_0803818C(void)
{
    gUnknown_03005050++;
}


void sub_080381A8(void)
{
    if (gUnknown_03000520.unk0 != 0)
        return;
    sub_0800BED8();
    *(u16 *)PLTT = 0;
    gPaletteBuf2[0] &= 0;
    sub_0803A030();
    CpuFill32(0, gUnknown_03006A30, 0x240);
    gUnknown_03000E20.unk12 &= 0;
    gUnknown_03006730 = &gUnknown_03006A30[gLCDRegisterBuffer];
    gUnknown_03005050++;
}


void sub_08038238(void)
{
    u32 zero;

    BITU8_AT(&gUnknown_03006C80, 0x5C) = BITU8_AT(&gUnknown_03006C80, 0x5D) = BITU8_AT(&gUnknown_03006C80, 0x5E) = BITU8_AT(&gUnknown_03006C80, 0x5F) = 0;
    BITU16_AT(&gUnknown_03006C80, 0x80) = BITU16_AT(&gUnknown_03006C80, 0x82) = 0;
    gUnknown_03006C80.unk6E = 1;
    gUnknown_03006C80.unk6D = 0;
    gUnknown_03006C80.unk1C = 0;
    BITU16_AT(&gUnknown_03006C80, 0x26) = 0xFFFF;
    gUnknown_03000F44 = ((struct BitU16 *)gUnknown_03000208)->v = 0;
    gUnknown_03000200 = NULL;
    sub_0800BED8();
    sub_080137DC();
    sub_0800BEC4();
    sub_0802D954();
    sub_0800D6F4();
    sub_0800D744();
    zero = 0;
    CpuFastSet(&zero, gBG0Buffer, 0x01000400);
    sub_0801424C();
    sub_080138BC();
    sub_0803E518();
    gUnknown_03005050++;
}


void sub_08038358(void)
{
    switch (gSubState)
    {
    case 0:
        sub_08036704(4);
        gSubState++;
        break;
    case 1:
        if (sub_080367CC() == 1)
        {
            gUnknown_03000490 = gRandom;
            gUnknown_03005050++;
            gSubState = 0;
        }
        break;
    default:
        break;
    }
}


void sub_080383CC(void)
{
    gUnknown_08427BFC[gSubState]();
}


void sub_080383F0(void)
{
    u8 i;

    sub_0801239C();
    sub_080144A0();
    sub_080123BC();
    sub_0803A320();
    sub_080152E0();
    sub_0802BF60();
    sub_0802C278();
    zero_memory((void *)0x03000040, 0x1C0);
    sub_0803E518();
    for (i = 0; i <= 3; i++)
        gUnknown_03006A30[i].unk1C = gUnknown_03006C80.unk58[i];
    load_palette_from_gfx_group(2);
    load_gfx_group(16);
    *(u16 *)0x05000000 = 0;
    ((struct BitU16 *)gPaletteBuf2)->v = 0;
    gSubState++;
    gUnknown_0202E1E0 = 0;
    gUnknown_03000E20.unk2 = 10;
    set_palette_color(0, 0);
    set_palette_color(14, 0xFFFF);
    ((struct BitU16 *)&gUnknown_030004A0)->v = 0;
    *(u16 *)0x04000000 = 0;
}


void sub_08038508(void)
{
    switch (gUnknown_0202E1E0)
    {
    case 0:
        sub_08036704(4);
        gUnknown_0202E1E0++;
        break;
    case 1:
        gSubState += 2;
        gUnknown_0202E1E0 = 0;
        gUnknown_02016D60_fs.unk3 = 0;
        break;
    }
}


void sub_08038570(void)
{
}


void sub_0803857C(void)
{
    *(u16 *)0x04000000 = 0;
    ((struct BitU16 *)&gUnknown_030004A0)->v = 0;
    gRandom = gUnknown_03000490;
    sub_08012BE4();
    sub_08015AC4();
    sub_08013804();
    sub_0802C800();
    sub_0803A544();
    sub_0802B6BC();
    gHeldKeys = gNewKeys = 0;
    gUnknown_03000940_b[0].v = gUnknown_03000940_b[1].v = gUnknown_03000940_b[2].v = gUnknown_03000940_b[3].v = 0;
    gUnknown_03005E10_b[0].v = gUnknown_03005E10_b[1].v = gUnknown_03005E10_b[2].v = gUnknown_03005E10_b[3].v = 0;
    gUnknown_03000E20.unk2 = 30;
    gUnknown_03000C00 = 1;
    gUnknown_03006D14 = 1;
    gUnknown_03000830 = 0;
    set_palette_color(0, 0);
    BITU16_AT(&gUnknown_030004A0, 4) = gUnknown_030004A0.dispCnt;
    ((struct BitU16 *)&gUnknown_030004A0)->v = 0;
    gUnknown_03005050++;
    gSubState = 0;
}


void sub_080386C0(void)
{
    switch (gSubState)
    {
    case 0:
        sub_08036704(4);
        gSubState++;
        break;
    case 1:
        if (sub_080367CC() == 1)
        {
            gUnknown_03005050++;
            gSubState = 0;
            gUnknown_03000C00 = gUnknown_03006D14 = BITU16_AT(&gUnknown_03000E20, 0) = BITU16_AT(&gUnknown_03000948, 0) = BITU16_AT(&gUnknown_03000E20, 4) = 0;
            gUnknown_03000E20.unk2 = 120;
            gRandom = gUnknown_03000490;
            sub_08036704(5);
            if (gUnknown_03006C80.unk5 == 0)
                sub_0802B738();
            ((struct BitU16 *)&gUnknown_030004A0)->v = U16_AT(&gUnknown_030004A0, 4);
            ((struct BitU16 *)&gUnknown_030004A0)->v = gUnknown_030004A0.dispCnt | 0x1740;
            sub_0800CA84(31, 0);
            sub_0800CE74(120, 80, 1, 0);
            sub_0800C080();
            if (gUnknown_03006C80.unk1 != 2 || gUnknown_03006C80.unk5 == 0)
            {
                sub_0804C8A8(16, 0, 0);
                sub_0804C938(46, 0, 240);
            }
            zero_memory(gUnknown_03000FE4, 20);
            play_sound(0x80010000);
            play_sound(88);
        }
        break;
    default:
        break;
    }
    sub_0802BFC4();
}

asm(".include \"asm/non_matching/fs_game/sub_0803883C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038A30.inc\"");

bool32 sub_08038CA8(void)
{
    u8 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        if ((u16)(gUnknown_03006A30[i].unk36 & 1) || gUnknown_03006A30[i].unk28->unk45 == 0)
            return FALSE;
    }
    return (u8)(sub_080367E4() & 15) == gUnknown_03006C80.unk6F;
}


void sub_08038D50(void)
{
    u32 seconds = gUnknown_03006C80.unk1C / 60;

    sub_0800D6A4(2);
    gUnknown_0201ED90_fs.unk8 = (u16)(seconds / 60);
    gUnknown_0201ED90_fs.unkC = (u16)(seconds % 60);
    gUnknown_0201ED90_fs.unk10 = sub_08038DB8();
    gUnknown_0201ED90_fs.unk14 = gUnknown_03006C80.unk0;
}


u16 sub_08038DB8(void)
{
    u32 seconds = gUnknown_03006C80.unk1C / 60;
    u8 i;
    u32 unused;  // the frame is 12 bytes

    i = 0;
    for (i = 0; i <= 6; i++)
    {
        if (seconds < gUnknown_0842ACD8[i])
            break;
    }
    return gUnknown_0842ACC4[gUnknown_03006C80.unk0][i];
}

asm(".include \"asm/non_matching/fs_game/sub_08038E44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039288.inc\"");

u8 sub_08039650(void)
{
    u8 i;
    u8 v;
    u8 a;
    u8 b;
    u8 c;

    a = b = c = 15;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        if (!(gUnknown_03006C80.unk28[i].unk0 & 8))
            return 1;
        v = gUnknown_03006C80.unk28[i].unk5;
        a &= sub_08039744(v, 1);
        b &= sub_08039744(v, 2);
        c &= sub_08039744(v, 3);
    }
    if (a != 7)
        return 1;
    if (b != 7)
        return 2;
    return 3;
}


u8 sub_08039744(u8 a, u8 b)
{
    u8 r = 0;

    if ((u8)(a & 3) >= b)
        r |= 1;
    a >>= 2;
    if ((u8)(a & 3) >= b)
        r |= 2;
    a >>= 2;
    if ((u8)(a & 3) >= b)
        r |= 4;
    return r;
}


u8 sub_080397F0(void)
{
    u8 i;
    u8 v;
    u8 a;
    u8 b;
    u8 c;

    a = b = c = 0;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        v = gUnknown_03006C80.unk28[i].unk5;
        if (sub_08039744(v, 1) == 7)
            a++;
        if (sub_08039744(v, 2) == 7)
            b++;
        if (sub_08039744(v, 3) == 7)
            c++;
    }
    if (c == gUnknown_03006C80.unk0)
        return 3;
    if (b == gUnknown_03006C80.unk0)
        return 2;
    if (a == gUnknown_03006C80.unk0)
        return 1;
    return 0;
}


void sub_080398F8(u8 a)
{
    u8 i;
    u8 v;
    u8 mask;

    mask = gUnknown_08427C0C[gUnknown_03006C80.unk1 * 2];
    a = a << gUnknown_08427C0C[gUnknown_03006C80.unk1 * 2 + 1];
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        v = gUnknown_03006C80.unk28[i].unk5;
        if ((u8)(v & mask) < a)
            gUnknown_03006C80.unk28[i].unk5 = (v & ~mask) | a;
    }
}


u8 sub_080399CC(void)
{
    switch (gUnknown_03006C80.unk6)
    {
    case 1:
        if (gUnknown_03006C80.unk8 > 999)
            return 1;
    case 2:
        if (gUnknown_03006C80.unk8 > 2999)
            return 2;
    case 3:
        if (gUnknown_03006C80.unk8 > 4999)
            return 3;
    }
    return 0;
}


u32 sub_08039A40(struct Entity *this)
{
    return gUnknown_03006C80.unk28[this->form].unk0 & 2;
}


u32 sub_08039A70(struct Entity *this)
{
    return gUnknown_03006C80.unk28[this->form].unk0 & 1;
}

asm(".include \"asm/non_matching/fs_game/sub_08039AA0.inc\"");

u8 sub_08039CD4(void)
{
    gUnknown_03006C80.unk5 = (u8)(gUnknown_03006C80.unk4 % 3) == 2 ? 129 : 0;
    return gUnknown_03006C80.unk5;
}


// Picks a different random value 0-3 for gUnknown_03006C80.unk1
void sub_08039D1C(void)
{
    u8 old = gUnknown_03006C80.unk1;

    do
        gUnknown_03006C80.unk1 = sub_0800099C() & 3;
    while (gUnknown_03006C80.unk1 == old);
}

asm(".include \"asm/non_matching/fs_game/sub_08039D64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A030.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_0803A20C.inc\"");


void sub_0803A2E8(void)
{
    CpuFill32(0, &gUnknown_0201F020_fs, 0xB004);
    CpuFill32(0, &gUnknown_0200B320, 0xB004);
}

asm(".include \"asm/non_matching/fs_game/sub_0803A320.inc\"");

void sub_0803A544(void)
{
    zero_memory(&gUnknown_03005060, 0x900);
    gUnknown_02016D50 = &gUnknown_03005060;
    gUnknown_03005060.unk0 = &gUnknown_03005060;
    gUnknown_03005060.unk4 = &gUnknown_03005060;
    gUnknown_03005060.unk8 = gUnknown_03006A30[0].unk28;
    if (gUnknown_03006A30[1].unk28 != NULL)
    {
        sub_080005F0(gUnknown_03006A30[1].unk28);
        if (gUnknown_03006A30[2].unk28 != NULL)
        {
            sub_080005F0(gUnknown_03006A30[2].unk28);
            if (gUnknown_03006A30[3].unk28 != NULL)
                sub_080005F0(gUnknown_03006A30[3].unk28);
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0803A5DC.inc\"");

void sub_0803A6DC(struct Entity *a, struct Entity *b)
{
    if (a->type == 8 && a->subtype == 9)
    {
        a->unk3D = (s8)a->unk3D >> 1;
        a->unk42 = a->unk42 >> 1;
    }
    else
    {
        b->unk3D = (s8)b->unk3D >> 1;
        b->unk42 = b->unk42 >> 1;
    }
}


void sub_0803A788(struct Entity *a, struct Entity *b)
{
    struct Entity *e = CreateObject(15, 16, 0);

    if (e != NULL)
    {
        e->x.HALF.HI = (a->x.HALF.HI + b->x.HALF.HI) >> 1;
        e->y.HALF.HI = (a->y.HALF.HI + b->y.HALF.HI) >> 1;
        e->z.HALF.HI = (a->z.HALF.HI + b->z.HALF.HI) >> 1;
        e->unk50 = a->unk50;
        sub_08008DD8(e);
    }
}


bool32 sub_0803A838(struct Entity *a, struct Entity *b, u8 c)
{
    return FALSE;
}


bool32 sub_0803A858(struct Entity *a, struct Entity *b, u8 c)
{
    sub_0803A6DC(a, b);
    return TRUE;
}


bool32 sub_0803A880(struct Entity *a, struct Entity *b, u8 c)
{
    a->unk45 = sub_0803A5DC(a, b);
    a->unk42 = b->unk46;
    a->unk3D = (u8)(b->unk46 & 0x80) ? -b->unk46 - 16 : b->unk46 + 16;
    if (b->unk3D == 0)
        b->unk3D = 0xFF;
    return TRUE;
}


bool32 sub_0803A940(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk45 = sub_0803A5DC(b, a);
    b->unk42 = a->unk46;
    b->unk3D = (u8)(b->unk46 & 0x80) ? -b->unk46 - 16 : b->unk46 + 16;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


u8 sub_0803AA04(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk45 = sub_0803A5DC(this, other);
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    other->unk45 = sub_0803A5DC(other, this);
    other->unk42 = this->unk46;
    other->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    return 1;
}


bool32 sub_0803AB30(struct Entity *a, struct Entity *b, u8 c)
{
    a->unk42 = b->unk46;
    a->unk3D = (u8)(b->unk46 & 0x80) ? b->unk46 + (s8)b->unk46 / 4 : -b->unk46 - (s8)b->unk46 / 4;
    if (b->unk3D == 0)
        b->unk3D = 0xFF;
    sub_0803A6DC(a, b);
    return TRUE;
}


u8 sub_0803AC00(struct Entity *this, struct Entity *other, u8 c)
{
    other->unk42 = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    if (this->unk3D == 0)
        this->unk3D = 255;
    return 1;
}


u8 sub_0803ACC8(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    other->unk42 = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    return 1;
}


u32 sub_0803AE00(struct Entity *a, struct Entity *b, u8 c)
{
    if (a->type == 6 && a->subtype == 0)
    {
        a->unk3C &= 0x7F;
        sub_0804C448(a, gUnknown_03006A30[b->form].unk28);
    }
    else
    {
        b->unk3C &= 0x7F;
        sub_0804C448(b, gUnknown_03006A30[a->form].unk28);
    }
    return 2;
}


u8 sub_0803AEB4(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    sub_0803A788(this, other);
    return 1;
}


u8 sub_0803AFB8(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    sub_0803A788(this, other);
    return 1;
}


u8 sub_0803B0D8(struct Entity *this, struct Entity *other, u8 c)
{
    other->unk42 = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    sub_0803A788(this, other);
    return 1;
}


u8 sub_0803B1F8(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    other->unk42 = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    sub_0803A788(this, other);
    return 1;
}


u32 sub_0803B338(struct Entity *a, struct Entity *b, u8 c)
{
    sub_08003C84(a, b);
    return 0;
}


bool32 sub_0803B360(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk15 = 0xFF;
    b->unk3D = 244;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


u8 sub_0803B3C0(struct Entity *this, struct Entity *other, u8 c)
{
    if (sub_08003FB0(this) && !(u16)(gUnknown_03006A30[this->form].unk36 & 129))
    {
        gUnknown_03006A30[this->form].unk1A = gUnknown_03006A30[this->form].unk1A | 128;
        gUnknown_03006A30[this->form].unkA = gUnknown_03006A30[this->form].unkA | 128;
        gUnknown_03006A30[this->form].unk36 = gUnknown_03006A30[this->form].unk36 | 16;
        gUnknown_03006A30[this->form].unk2 = 0;
        sub_0803D4A4(other, this, 0, 1);
        this->unk1D_6 = other->unk1D_6;
        this->unk1F_6 = other->unk1F_6;
        this->unk3D = 255;
        other->unk3D = 248;
        return 1;
    }
    return 0;
}


u8 sub_0803B550(struct Entity *this, struct Entity *other, u8 c)
{
    if ((u8)(gUnknown_03006A30[this->form].unk1E & 96))
    {
        other->unk3C = other->unk3C & 127;
    }
    else
    {
        this->unk42 = other->unk46;
        this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    }
    return 1;
}


u8 sub_0803B644(struct Entity *this, struct Entity *other, u8 c)
{
    other->unk45 = sub_0803A5DC(other, this);
    other->unk42 = this->unk46;
    other->unk3D = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? -this->unk46 - 16 : this->unk46 + 16;
    other->unk43 = 240;
    if (this->unk3D == 0)
        this->unk3D = 255;
    return 1;
}


u8 sub_0803B73C(struct Entity *this, struct Entity *other, u8 c)
{
    if (this->unk70.b == 0 && other->unk70.b == 0)
    {
        this->unk42 = other->unk46;
        this->unk70.bf = (other->unk46 & 0x80) ? other->unk46 : -other->unk46;
        other->unk42 = this->unk46;
        other->unk70.bf = (this->unk46 & 0x80) ? this->unk46 : -this->unk46;
        return 1;
    }
    return 0;
}


u8 sub_0803B834(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk45 = sub_0803A5DC(this, other);
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    if (other->unk3D == 0)
        other->unk3D = 255;
    return 1;
}


bool32 sub_0803B8D8(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk45 = sub_0803A5DC(b, a);
    b->unk3D = (u8)(a->unk46 & 0x80) ? -a->unk46 - 16 : a->unk46 + 16;
    if (b->type == 3)
        b->unk42 = 1;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


u8 sub_0803B99C(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk45 = sub_0803A5DC(this, other);
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    other->unk45 = sub_0803A5DC(other, this);
    other->unk3D = (this->unk46 & 0x80) ? -this->unk46 - 16 : this->unk46 + 16;
    if (other->type == 3)
        other->unk42 = 1;
    return 1;
}


bool32 sub_0803BAAC(struct Entity *a, struct Entity *b, u8 c)
{
    a->unk45 = 0;
    a->unk3C &= 0x7F;
    if (b->unk3D == 0)
        b->unk3D = 0xFF;
    return TRUE;
}


bool32 sub_0803BB18(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk45 = 0;
    b->unk3C &= 0x7F;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


bool32 sub_0803BB84(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk3D = 240;
    b->unk43 = 240;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


bool32 sub_0803BBF0(struct Entity *a, struct Entity *b, u8 c)
{
    b->unk3C &= 0x7F;
    b->unk45 = 0;
    if (a->unk3D == 0)
        a->unk3D = 0xFF;
    return TRUE;
}


u8 sub_0803BC5C(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    if (gUnknown_03006A30[this->form].unk28->unk3D == 0)
        gUnknown_03006A30[this->form].unk28->unk3D = 128;
    if (other->unk3D == 0)
        other->unk3D = 255;
    sub_0803A6DC(this, other);
    return 1;
}


u8 sub_0803BD78(struct Entity *this, struct Entity *other, u8 c)
{
    other->unk42 = this->unk46;
    other->unk3D = (this->unk46 & 0x80) ? this->unk46 + (s8)this->unk46 / 4 : -this->unk46 - (s8)this->unk46 / 4;
    if (gUnknown_03006A30[other->form].unk28->unk3D == 0)
        gUnknown_03006A30[other->form].unk28->unk3D = 128;
    if (this->unk3D == 0)
        this->unk3D = 255;
    return 1;
}

asm(".include \"asm/non_matching/fs_game/sub_0803BE8C.inc\"");

u8 sub_0803C070(struct Entity *this, struct Entity *other, u8 d)
{
    struct Entity *e;

    if (!(u16)(gUnknown_03006A30[this->form].unk36 & 0x1400))
    {
        e = sub_0804C8A8(85, 1, 0);
        if (e != NULL)
        {
            e->unk58 = this;
            gUnknown_03006A30[this->form].unk36 = 0x400;
            this->unk2A = (u8)(d ^ 16) >> 2;
        }
    }
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    if (other->unk3D == 0)
        other->unk3D = 255;
    return 1;
}


u8 sub_0803C1A4(struct Entity *this, struct Entity *other, u8 c)
{
    struct Entity *e;

    if (!(u16)(gUnknown_03006A30[this->form].unk36 & 0x1880))
    {
        e = sub_0804C8A8(85, 0, 0);
        if (e != NULL)
        {
            e->unk58 = this;
            this->unk45 = sub_0803A5DC(this, other);
            gUnknown_03006A30[this->form].unk36 = 0x800;
            gUnknown_03006A30[this->form].unkC = 13;
        }
    }
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    if (other->unk3D == 0)
        other->unk3D = 255;
    return 1;
}

asm(".include \"asm/non_matching/fs_game/sub_0803C2EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C50C.inc\"");

u8 sub_0803C72C(struct Entity *this, struct Entity *other, u8 c)
{
    gUnknown_03006A30[this->form].unk1A = 1;
    this->unk70.s2.unk72 = 600;
    this->unk42 = other->unk46;
    this->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    if (other->unk3D == 0)
        other->unk3D = 255;
    return 1;
}

asm(".include \"asm/non_matching/fs_game/sub_0803C810.inc\"");

u8 sub_0803C9FC(struct Entity *this, struct Entity *other, u8 d)
{
    gUnknown_03006A30[this->form].unk28->unk41 = other->unk40 | 0x80;
    gUnknown_03006A30[this->form].unk28->unk3D = (other->unk46 & 0x80) ? -other->unk46 - 16 : other->unk46 + 16;
    gUnknown_03006A30[this->form].unk28->unk42 = other->unk46;
    gUnknown_03006A30[this->form].unk28->unk3E = d ^ 16;
    gUnknown_03006A30[this->form].unk28->unk45 = sub_0803A5DC(gUnknown_03006A30[this->form].unk28, other);
    sub_080023C8(this);
    if (other->unk3D == 0)
        other->unk3D = 255;
    return 1;
}


u8 sub_0803CB7C(struct Entity *this, struct Entity *other, u8 c)
{
    this->unk3D = (other->unk46 & 0x80) ? other->unk46 + (s8)other->unk46 / 4 : -other->unk46 - (s8)other->unk46 / 4;
    other->unk3D = 255;
    sub_0803A788(this, other);
    return 1;
}


// tmc: ProcessMovement2
void sub_0803CC20(struct Entity *this)
{
    if ((u8)(this->direction & 0x80))
        return;
    this->x.WORD += gUnknown_0813E4CC[this->direction << 3] * this->speed;
    this->y.WORD -= gUnknown_0813E4CC[(this->direction << 3) + 64] * this->speed;
}


u16 sub_0803CC9C(struct Entity *this)
{
    u16 x;
    u16 y;

    x = this->x.HALF_U.HI + ((const struct EntityBox *)this->unk48)->unk0 - gUnknown_03000450.unk18;
    y = this->y.HALF_U.HI + ((const struct EntityBox *)this->unk48)->unk1 - gUnknown_03000450.unk1A;
    switch (this->unk2A)
    {
    case 0:
        y -= ((const struct EntityBox *)this->unk48)->unk5;
        break;
    case 4:
        y += ((const struct EntityBox *)this->unk48)->unk5;
        break;
    case 2:
        x += ((const struct EntityBox *)this->unk48)->unk2;
        break;
    case 6:
        x -= ((const struct EntityBox *)this->unk48)->unk2;
        break;
    }
    return ((x >> 4) & 63) + ((y * 4) & 0xFC0);
}

asm(".include \"asm/non_matching/fs_game/sub_0803CD8C.inc\"");

u8 sub_0803CE04(struct Entity *this)
{
    return gUnknown_0201F020_fs.unk2004[sub_0803CC9C(this)];
}


u16 sub_0803CE38(struct Entity *this)
{
    return gUnknown_0201F020_fs.unk4[sub_0803CC9C(this)];
}


asm(".include \"asm/non_matching/fs_game/sub_0803CE68.inc\"");


u8 sub_0803CECC(struct Entity *a, struct Entity *b)
{
    return sub_08003F4C(a, b);
}


u8 sub_0803CEF0(struct Entity *a, struct Entity *b, s8 dx, s8 dy)
{
    return sub_08003F54(a->x.HALF.HI, a->y.HALF.HI, b->x.HALF_U.HI + dx, b->y.HALF_U.HI + dy);
}


u8 sub_0803CF58(struct Entity *this)
{
    u16 v;

    if (!(u16)(this->unk50 & 0x8000))
    {
        if ((v = sub_08009310(this->x.HALF.HI, this->y.HALF_U.HI - 4, 0x8000)) != 0 && v != 0x4A2)
        {
            this->unk1D_6 = this->unk1F_6 = 2;
            return 1;
        }
        this->unk1D_6 = this->unk1F_6 = 1;
        return 0;
    }
    return 0;
}


u8 sub_0803D010(struct Entity *this)
{
    u32 unused;

    if (!(u16)(this->unk50 & 0x8000))
    {
        if (sub_08009310(this->x.HALF.HI, this->y.HALF_U.HI - 4, 0x8000))
        {
            this->unk1D_6 = this->unk1F_6 = 2;
            return 1;
        }
        switch (sub_08009310(this->x.HALF.HI, this->y.HALF_U.HI - 4, this->unk50))
        {
        case 0x21F:
        case 0x210:
        case 0x264:
        case 0x273:
            this->unk1D_6 = this->unk1F_6 = 2;
            return 1;
        default:
            this->unk1D_6 = this->unk1F_6 = 1;
            return 0;
        }
    }
    return 0;
}


asm(".include \"asm/non_matching/fs_game/sub_0803D134.inc\"");


u8 sub_0803D224(struct Entity *this)
{
    u8 v;

    v = this->unk2A;
    if (!(u8)(this->direction & 0x80))
    {
        if ((u8)(((u8)(this->direction & 28) >> 2) & 1) && !(((u8)((u8)(this->direction & 28) >> 2) - this->unk2A + 1) & 4))
            return v;
        v = this->unk2A = (this->direction >> 2) & 126;
        if (this->unk2A <= 4)
            this->unk1C_2 = 0;
        else
            this->unk1C_2 = 1;
    }
    return v;
}


s16 sub_0803D310(s16 a, s16 b)
{
    return (a * b) / 256;
}


s16 sub_0803D350(s16 a, s16 b)
{
    if (b == 0)
        return 0;
    return (a * 256) / b;
}


s16 sub_0803D398(s16 a)
{
    if (a == 0)
        return 0;
    return 0x10000 / a;
}


void sub_0803D3D0(struct Entity *a, struct Entity *b)
{
    b->x.WORD = a->x.WORD;
    b->y.WORD = a->y.WORD;
    b->z.WORD = a->z.WORD;
    b->unk50 = a->unk50;
    b->unk52 = a->unk52;
    sub_08008DD8(b);
}

asm(".include \"asm/non_matching/fs_game/sub_0803D440.inc\"");

void sub_0803D4A4(struct Entity *a, struct Entity *b, s32 dx, s32 dy)
{
    b->x.WORD = a->x.WORD + dx;
    b->y.WORD = a->y.WORD + dy;
    b->z.WORD = a->z.WORD;
    b->unk50 = a->unk50;
    b->unk52 = a->unk52;
    sub_08008DD8(b);
}


void sub_0803D520(u8 p, u16 amt, u8 dir)
{
    struct Entity *e;
    u8 k;

    if (gUnknown_03006C80.unkC[p] - amt < 0)
        return;
    switch (amt)
    {
    case 1:
        k = 1;
        break;
    case 5:
        k = 2;
        break;
    case 20:
        k = 3;
        break;
    case 50:
        k = 6;
        break;
    case 100:
        k = 8;
        break;
    case 200:
        k = 9;
        break;
    default:
        return;
    }
    e = sub_0804C8A8(0, k, 1);
    if (e != NULL)
    {
        sub_0803D3D0(gUnknown_03006A30[p].unk28, e);
        e->direction = dir | 0x80;
        e->unk10 = 0x20000;
        e->z.HALF_U.HI = e->z.HALF_U.HI - 4;
        sub_0802C53C(gUnknown_03006A30[p].unk28, -amt);
    }
    return;
}


void sub_0803D65C(u8 a, u16 n)
{
    s16 c;

    c = n / 20;
    n = n % 20;
    while (--c != -1)
        sub_0803D520(a, 20, sub_0800099C() & 31);
    c = n / 5;
    while (--c != -1)
        sub_0803D520(a, 5, sub_0800099C() & 31);
    c = n % 5;
    while (--c != -1)
        sub_0803D520(a, 1, sub_0800099C() & 31);
    return;
}


asm(".include \"asm/non_matching/fs_game/sub_0803D770.inc\"");


void sub_0803D7E8(struct Entity *this, const u16 *p, u8 n)
{
    if (n == 0)
        n = 1;
    this->unk74.b.unk76 = 0;
    this->unk74.b.unk77 = n;
    this->unk78.h = this->x.HALF_U.HI;
    this->unk78.s2.unk7A = this->y.HALF_U.HI;
    this->unk7C.h = p[0];
    this->unk7C.s.unk7E = p[1];
    return;
}


bool32 sub_0803D8AC(struct Entity *this)
{
    s32 d;
    u16 v;

    if (U8_AT(this, 0x76) >= U8_AT(this, 0x77))
    {
        this->x.HALF_U.HI = U16_AT(this, 0x7C);
        this->y.HALF_U.HI = U16_AT(this, 0x7E);
        return 1;
    }
    this->unk74.b.unk76++;
    d = S16_AT(this, 0x7C) - S16_AT(this, 0x78);
    v = U8_AT(this, 0x76) * d * 256 / U8_AT(this, 0x77) >> 8;
    this->x.HALF_U.HI = U16_AT(this, 0x78) + v;
    d = S16_AT(this, 0x7E) - S16_AT(this, 0x7A);
    v = U8_AT(this, 0x76) * d * 256 / U8_AT(this, 0x77) >> 8;
    this->y.HALF_U.HI = U16_AT(this, 0x7A) + v;
    return 0;
}


u8 sub_0803D9F4(struct Entity *this, u32 a, u32 b)
{
    s16 dx;
    s16 dy;
    u16 best;
    u16 dist;
    u8 i;
    u8 r;

    r = 255;
    best = 0xFFFF;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        if (sub_0800390C(this, gUnknown_03006A30[i].unk28, a, b))
        {
            dx = gUnknown_03006A30[i].unk28->x.HALF_U.HI - this->x.HALF_U.HI;
            if (dx < 0)
                ;
            dx = -dx;
            dy = gUnknown_03006A30[i].unk28->y.HALF_U.HI - this->y.HALF_U.HI;
            if (dy < 0)
                ;
            dy = -dy;
            dist = dx + dy;
            if (best > dist)
            {
                best = dist;
                r = i;
            }
        }
    }
    return r;
}


void sub_0803DB4C(struct Entity *this)
{
    if (gUnknown_03000E20.unk12 != 0)
        this->unk15 = 6;
    if (gUnknown_03006A30[this->parameter].unk5 == 0)
        this->unk15 = 6;
}


void DoPlayerEntity(struct Entity *this)
{
    gUnknown_08427C28[this->subtype](this);
}


// Player update: runs this player's entity with its own buttons (from the link) in gHeldKeys/gNewKeys.
void sub_0803DBD4(struct Entity *this)
{
    u16 held = gHeldKeys;
    u16 new = gNewKeys;

    gUnknown_03006620 = this;
    if (gMainState == 2 || gMainState == 12)
    {
        gHeldKeys = gUnknown_03000940[this->form];
        gNewKeys = gUnknown_03005E10[this->form];
    }
    DoPlayerItemEntity(this);
    gHeldKeys = held;
    gNewKeys = new;
}


void sub_0803DC68(struct Entity *this)
{
    this->unk1D_0 = 2;
    sub_08003B94(this);
    gUnknown_03000488.unk0 = 0x100;
    gUnknown_03000488.unk2 = 0x100;
    gUnknown_03000488.unk4 = 0;
    ObjAffineSet((struct ObjAffineSrcData *)&gUnknown_03000488, &gUnknown_03005E26[this->unk1F_1 * 16], 1, 8);
    ObjAffineSet((struct ObjAffineSrcData *)&gUnknown_03000488, &gUnknown_03006226[this->unk1F_1 * 16], 1, 8);
}


void sub_0803DD0C(struct Entity *this)
{
    gUnknown_03000488.unk0 = this->unk78.w;
    gUnknown_03000488.unk2 = this->unk7C.w;
    gUnknown_03000488.unk4 = 0;
    ObjAffineSet((struct ObjAffineSrcData *)&gUnknown_03000488, &gUnknown_03005E26[this->unk1F_1 * 16], 1, 8);
    ObjAffineSet((struct ObjAffineSrcData *)&gUnknown_03000488, &gUnknown_03006226[this->unk1F_1 * 16], 1, 8);
}


void sub_0803DD94(void)
{
    u16 v;
    u16 i;

    for (i = 0; i <= 3; i++)
    {
        v = gUnknown_03000FC0.unk38[i].unk2;
        gUnknown_03005E10_b[i].v = v & (v ^ gUnknown_03000940_b[i].v);
        gUnknown_03000940_b[i].v = v;
    }
    gUnknown_03000950 = gUnknown_03000940[gLCDRegisterBuffer];
    gUnknown_03006734 = gUnknown_03005E10[gLCDRegisterBuffer];
    gUnknown_03000FC0.unk12 = gHeldKeys;
}


void sub_0803DE94(u8 i)
{
    gUnknown_03006A30[i].unk7 = 128;
    gUnknown_03006A30[i].unk27 = gUnknown_03006A30[i].unkA = gUnknown_03006A30[i].unkB = gUnknown_03006A30[i].unk1A = 1;
    gUnknown_03006A30[i].unk28->unk3D = 254;
}


void sub_0803DF84(void)
{
    u8 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
        sub_0803DE94(i);
}


void sub_0803DFC8(void)
{
    u8 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        gUnknown_03006A30[i].unk28->unk14 = 20;
        gUnknown_03006A30[i].unk28->unk15 = 0;
    }
}


void sub_0803E048(struct Entity *this)
{
    gUnknown_03006A30[this->form].unk36 = gUnknown_03006A30[this->form].unk36 & 0xFDFF;
    this->y.HALF.HI = this->y.HALF_U.HI - gUnknown_03006A30[this->form].unk3F;
    gUnknown_03006A30[this->form].unk3F = 0;
    if ((u16)(gUnknown_03006A30[this->form].unk36 & 0x400))
        sub_080074C0(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0803E114.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803E518.inc\"");

void sub_0803F0E4(struct Entity *this)
{
    struct Entity *e;
    s32 dx;
    s32 dy;

    if ((u8)(this->unk41 & 0x80) && (u8)(this->unk41 & 127) != 12 && (u8)(this->unk41 & 127) > 3 && (u8)(this->unk41 & 127) <= 21)
    {
        this->unk4C->unk41 = (this->unk4C->unk41 & 127) | 64;
        this->unk4C->unk3F = this->unk3F = 14;
        dx = (this->x.WORD - this->unk4C->x.WORD) >> 1;
        dy = (this->y.WORD - this->unk4C->y.WORD) >> 1;
        e = sub_080123E8();
        if (e != NULL)
        {
            e->subtype = 23;
            e->type = 6;
            e->x.WORD = this->x.WORD - dx;
            e->y.WORD = this->y.WORD - dy;
            e->unk1D_6 = this->unk1D_6;
            e->unk1F_6 = this->unk1F_6;
            e->unk50 = this->unk50;
            sub_08012728(6, e);
        }
    }
}


void sub_0803F284(void)
{
    s32 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        gUnknown_03006A30[i].unk28->y.HALF_U.HI = gUnknown_03006A30[i].unk28->y.HALF_U.HI + gUnknown_03006A30[i].unk3F;
        if (gUnknown_03006A30[i].unk5 == 3 || gUnknown_03006A30[i].unk5 == 4)
            sub_0803F3C4(gUnknown_03006A30[i].unk28);
        if ((u16)(gUnknown_03006A30[i].unk36 & 4))
            sub_080021EC(gUnknown_03006A30[i].unk28);
        if (gUnknown_03006A30[i].unk2C != NULL)
            sub_0803F550(gUnknown_03006A30[i].unk28, gUnknown_03006A30[i].unk2C);
    }
}


void sub_0803F3C4(struct Entity *this)
{
    u8 a;
    struct Entity *e;
    u8 b;
    const s8 *t;

    a = this->unk29 & 127;
    e = ((struct { u8 pad[0x6C]; struct Entity *v; } *)this)->v->unk58;
    b = e->unk1A >> 4;
    t = gUnknown_08427C2C[b];
    if (e->unk14 == 2)
    {
        e->z.WORD = this->z.WORD;
        e->unk1F_6 = this->unk1F_6;
        e->unk50 = this->unk50;
        if (this->unk1C_2)
            e->x.HALF_U.HI = this->x.HALF_U.HI - t[a];
        else
            e->x.HALF_U.HI = this->x.HALF_U.HI + t[a];
        e->z.HALF_U.HI = e->z.HALF_U.HI + t[a + 1];
        e->y.WORD = this->y.WORD + 1;
        if (gUnknown_03006A30[this->form].unk5 == 4)
        {
            e->unk1D_6 = this->unk1D_6;
            sub_0803D010(e);
        }
        else if ((u8)(this->unk2A >> 1))
        {
            e->y.WORD = this->y.WORD + 1;
        }
    }
}


void sub_0803F550(struct Entity *a, struct Entity *b)
{
    sub_0800238C(b, a);
    if (a->unk2A == 0)
        b->y.WORD--;
    else
        b->y.WORD++;
}


void sub_0803F594(u8 a, u8 b)
{
    if (a == 255)
    {
        sub_0800D6A4(0x203);
    }
    else
    {
        sub_0800D6A4(0x201);
        gUnknown_0201ED90_fs.unk8 = (u16)(b + 1);
        gUnknown_0201ED90_fs.unkC = (u16)gUnknown_080046DC[gUnknown_03006C80.unk50 - 1];
        gUnknown_0201ED90_fs.unk10 = (u16)gUnknown_080046DC[gUnknown_03006C80.unk50];
    }
}


void sub_0803F628(struct Entity *this)
{
}


void sub_0803F638(struct Entity *this)
{
    this->x.HALF.HI = (gUnknown_03006C80.unk84[this->form * 2] << 4) | 8;
    this->y.HALF.HI = (gUnknown_03006C80.unk84[this->form * 2 + 1] << 4) | 8;
}


void DoManagerEntity(struct Manager *this)
{
    gUnknown_084286E0[this->subtype](this);
    this->unk41 &= 0x7F;
}


void sub_0803F6F8(struct Entity *this)
{
    DeleteThisEntity(this);
}


void sub_0803F710(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_0813E8A8[this->unk14](this);
    sub_08003688(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0803F74C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803FAE8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803FEAC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040074.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804055C.inc\"");

void sub_080407E0(struct Entity *this)
{
    u8 i;
    u8 j;
    s8 x;
    s8 y;

    y = -16;
    for (i = 0; i <= 2; i++)
    {
        x = -16;
        for (j = 0; j <= 2; j++)
        {
            sub_08001B70(this, 0, this->x.HALF_U.HI + x, this->y.HALF_U.HI + y);
            x += 16;
        }
        y += 16;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08040890.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040B10.inc\"");

void sub_08040D20(struct Entity *this)
{
    if (this->unk68.w != 0)
    {
        this->unk17 = 0;
        this->unk18 = 1;
    }
    sub_08003B64(this);
}


void sub_08040D60(struct Entity *this)
{
    this->unk68.w = 0;
    gUnknown_08428728[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08040D90.inc\"");

void sub_08040F78(struct Entity *this)
{
    struct Entity *player = gUnknown_03006A30[this->parameter].unk28;  // unused

    this->unk2E = 0;
}


void sub_08040FB4(struct Entity *this)
{
    this->unk2E = 4;
}


void sub_08040FDC(struct Entity *this)
{
    this->unk14--;
    this->unk15 = 0;
    if (this->unk17 > 60)
        this->unk17 = 60;
}


void sub_08041030(struct Entity *this)
{
    DeleteThisEntity(this);
}


void sub_08041048(struct Entity *this)
{
    if (--this->unk17 == 0xFF)
        DeleteThisEntity(this);
}


void sub_08041088(struct Entity *this)
{
    struct Entity *p;

    p = this->unk54;
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1B = 9;
        this->unk1C_0 = 1;
        this->unk20 = 206;
        this->unk1C_6 = 3;
        this->unk1E_0 = this->unk1E_4 = 0;
        this->unk1B = 9;
        sub_08003870(this, 6);
    }
    GetNextFrame(this);
    this->x.WORD = p->x.WORD;
    this->y.WORD = p->y.WORD + 1;
    this->z.WORD = p->z.WORD;
    this->unk1D_6 = p->unk1D_6;
    this->unk1F_6 = p->unk1F_6;
    if (--this->unk17 == 255)
    {
        this->unk17 = 30;
        sub_08003DFC(83);
    }
    if (p->unk14 == 3 || p->type != 8 || p->subtype != 4)
        DeleteThisEntity(this);
}


void sub_08041200(struct Entity *this)
{
    u8 v;

    if (this->unk18 > 40)
    {
        v = 8;
    }
    else
    {
        v = 4;
        if (this->unk60 & 0x8000)
            this->unk60 -= 16;
        else
            this->unk60 += 16;
        if ((this->unk60 & 240) == 0 || (this->unk60 & 240) > 128)
            this->unk60 ^= 0x8000;
        gUnknown_03000488.unk0 = 304 - (this->unk60 & 240);
        gUnknown_03000488.unk2 = 304 - (this->unk60 & 240);
        gUnknown_03000488.unk4 = 0;
        sub_0803D770(&gUnknown_03000488, this);
    }
    if ((u8)(this->unk18 & v) == 0)
        this->unk1E_0 = 0;
    else
        this->unk1E_0 = this->unk1E_4;
}


void sub_08041328(struct Entity *this)
{
    struct Entity *e;
    s32 x;
    s32 y;
    u8 i;
    u8 j;

    for (y = 16, i = 3; i != 0; y -= 16, i--)
    {
        for (x = 16, j = 3; j != 0; x -= 16, j--)
        {
            if (sub_0800934C(this, x, y) == 59)
            {
                e = sub_0804C8A8(73, 0, 0);
                if (e != NULL)
                {
                    e->x.HALF_U.HI = this->x.HALF_U.HI + x;
                    e->y.HALF_U.HI = this->y.HALF_U.HI + y;
                }
            }
        }
    }
}


void sub_0804140C(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_0842874C[this->unk14](this);
    sub_08003688(this);
}


void sub_08041448(struct Entity *this)
{
    struct Entity *e;

    e = gUnknown_03006A30[this->form].unk28;
    gUnknown_03006A30[this->form].unk2C = this;
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1E_0 = 4;
    this->unk1B = 20;
    this->unk17 = 8;
    this->unk2A = e->unk2A & 14;
    this->unk1D_6 = e->unk1D_6;
    this->unk1F_6 = e->unk1F_6;
    this->unk20 = e->unk20;
    this->unk1C_6 = e->unk1C_6;
    sub_0800238C(this, e);
    sub_0804159C(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804159C.inc\"");

void sub_08041748(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_0813EB48[this->unk14](this);
    sub_08003688(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08041784.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041C3C.inc\"");

void sub_08042208(struct Entity *this)
{
    if (this->unk17 <= 14)
        sub_08003870(this, this->unk23);
    else
        GetNextFrame(this);
    if (--this->unk17 == 0xFF)
        DeleteThisEntity(this);
}


void sub_08042268(struct Entity *this)
{
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x2000))
        DeleteThisEntity(this);
}


void sub_08042298(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_0813EB9C[this->unk15](this);
    sub_08003688(this);
}

asm(".include \"asm/non_matching/fs_game/sub_080422D4.inc\"");

void sub_08042490(struct Entity *this)
{
    struct Entity *p;
    struct Entity *a;
    struct Entity *b;

    p = gUnknown_03006A30[this->form].unk28;
    a = this->unk54;
    b = this->unk58;
    if (BITU16_AT(this, 0x64) == (u16)b->type || BITU16_AT(this, 0x66) == (u16)b->subtype)
    {
        if (b->unk14 != 2)
        {
            sub_080012A0(this->form + gUnknown_03006A30);
            DeleteThisEntity(this);
        }
        else if (gUnknown_03006A30[this->form].unk5 == 0 || p->unk70.s.unk71 != 0)
        {
            sub_08042A90(this);
            this->unk15++;
            this->direction = 255;
            this->unk10 = 0;
        }
    }
    else
    {
        sub_080012A0(this->form + gUnknown_03006A30);
        DeleteThisEntity(this);
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080425A0.inc\"");

void sub_08042A78(struct Entity *this)
{
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08042A90.inc\"");

void sub_08042CB8(struct Entity *this)
{
    if (this->unk14 != 0)
    {
        if (gUnknown_03000C00 == 0)
        {
            if (BITU8_AT(this, 0x65) != 0)
                BITU8_AT(this, 0x65)--;
            gUnknown_0842875C[this->unk14](this);
            if (this->unk3D != 0)
            {
                if (((struct { u8 pad[0x3D]; s8 v; } *)this)->v > 0)
                    this->unk3D--;
                else
                    this->unk3D++;
            }
        }
    }
    else
    {
        gUnknown_0842875C[this->unk14](this);
    }
    sub_08003688(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08042DB0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042F5C.inc\"");

void sub_080432FC(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_0813EC20[this->unk14](this);
    sub_08003688(this);
}


void sub_08043338(struct Entity *this)
{
    struct Entity *e;

    e = gUnknown_03006A30[this->form].unk28;
    if (gUnknown_03006A30[this->form].unk1E != 0)
    {
        gUnknown_03006A30[this->form].unk2C = this;
        this->unk14++;
        this->unk1B = 96;
        this->unk1E_0 = 3;
        this->unk20 = e->unk20;
        this->unk1C_6 = e->unk1C_6;
        this->unk44 = (u8)gUnknown_03006A30[this->form].unk3E_0 * 2 + 3;
        this->unk46 = 12;
        this->unk5C = 0x600;
        this->unk40 = 16;
        this->unk3F = 3;
        this->unk48 = sub_0800BD14(8);
        sub_0800238C(this, e);
        sub_080005F0(this);
        sub_080434D8(this);
    }
    else
    {
        DeleteThisEntity(this);
    }
}


void sub_080434D8(struct Entity *this)
{
    u32 unused;
    struct Entity *e;

    e = gUnknown_03006A30[this->form].unk28;
    if (gUnknown_03006A30[this->form].unk2C != this)
    {
        sub_0800BE50((u8 *)this->unk48);
        sub_08000620(this);
        DeleteThisEntity(this);
    }
    if (gUnknown_03006A30[this->form].unk1E == 0)
    {
        sub_0800BE50((u8 *)this->unk48);
        sub_08000620(this);
        gUnknown_03006A30[this->form].unk2C = NULL;
        DeleteThisEntity(this);
    }
    else if ((u8)(gUnknown_03006A30[this->form].unk1E & 64) && !(u8)(gUnknown_03006A30[this->form].unk1E & 128))
    {
        this->unk1C_0 = 1;
        this->unk3C = 173;
        sub_08043614(this, e);
    }
    else
    {
        this->unk1C_0 = this->unk3C = 0;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08043614.inc\"");

void sub_080437F8(struct Entity *this)
{
    if (gUnknown_03000C00 == 0)
        gUnknown_08428794[this->unk14](this);
    sub_08003688(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08043834.inc\"");


void sub_08043A34(struct Entity *this)
{
    struct MapData *m;
    u16 v;

    if (--this->unk64 != -1)
    {
        GetNextFrame(this);
        sub_0803CC20(this);
        this->unk17++;
        if (this->parameter == 0)
            sub_0800402C(this);
        sub_0803F0E4(this);
        m = (struct MapData *)sub_08015DC0(this->unk50);
        v = m->unk4[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4 << 6)] & 0x7FF;
        if (sub_080012CC(m->unk5004[v], gUnknown_08008840) == 0 && sub_0800935C(this) != 70 && sub_08003748(this, gUnknown_08003538, this->x.HALF_U.HI, this->y.HALF_U.HI))
        {
            sub_08000620(this);
            sub_0804CB38(this, 25, 0);
            DeleteThisEntity(this);
        }
        if (this->unk41 != 0)
        {
            sub_08000620(this);
            sub_0804CB38(this, 25, 0);
            DeleteThisEntity(this);
        }
        if (sub_080017E0(this, 12))
        {
            sub_08000620(this);
            DeleteThisEntity(this);
        }
    }
    else
    {
        sub_08000620(this);
        DeleteThisEntity(this);
    }
}


asm(".include \"asm/non_matching/fs_game/sub_08043B94.inc\"");

u8 sub_08043EA4(u8 a)
{
    if ((u8)(a & 15))
        return a >> 4;
    return 0xFF;
}


u8 sub_08043EE0(u8 a)
{
    if ((u8)(a & 7) != 4)
        return ((a + 4) & 31) >> 3;
    return 0xFF;
}


void sub_08043F20(struct Entity *this)
{
    struct Entity *e;

    if (BITU8_AT(this, 0x6A) != 0)
    {
        if (!(u8)(BITU8_AT(this, 0x6A) & 0x80))
        {
            e = sub_0804C8A8(1, this->subtype, BITU8_AT(this, 0x6A));
            if (e != NULL)
            {
                sub_0803D3D0(this, e);
                e->unk58 = this;
                BITU8_AT(this, 0x6A) = BITU8_AT(this, 0x6A) | 0x80;
            }
        }
    }
    else
    {
        if ((u8)(this->unk41 & 127) != 19)
        {
            e = sub_0804C8A8(1, this->subtype, 0);
            if (e != NULL)
            {
                sub_0803D3D0(this, e);
                e->unk17 = this->unk16;
                if (gUnknown_03000208[1] == 1)
                    e->parameter = e->parameter | 0x80;
            }
        }
        DeleteThisEntity(this);
    }
}


void sub_08044018(struct Entity *this, struct Entity *other)
{
    other->unk19 = this->unk19 & 254;
    other->x.WORD = this->x.WORD;
    other->y.WORD = this->y.WORD;
    other->z.WORD = this->z.WORD;
    other->unk50 = this->unk50;
    other->unk52 = this->unk52;
    other->unk60 = this->unk60;
    BITU8_AT(other, 0x68) = BITU8_AT(this, 0x68);
    BITU8_AT(other, 0x69) = BITU8_AT(this, 0x69);
    BITU8_AT(other, 0x6B) = BITU8_AT(this, 0x6B);
    BITU16_AT(other, 0x6C) = BITU16_AT(this, 0x6C);
}


struct Entity *sub_0804411C(struct Entity *this, u8 subtype, u8 form)
{
    struct Entity *e = sub_080123E8();

    if (e != NULL)
    {
        e->type = 4;
        e->subtype = subtype;
        e->form = form;
        sub_0803D3D0(this, e);
        sub_08012728(5, e);
    }
    return e;
}


void sub_08044198(struct Entity *this, struct Entity *a, struct Entity *b)
{
    if (a != NULL)
    {
        sub_08044018(this, a);
        if (sub_08009394(a, 6, 0) == 0 && a->x.HALF.HI + 6 < gUnknown_03000450.unk28)
            a->x.HALF_U.HI += 6;
    }
    if (b != NULL)
    {
        sub_08044018(this, b);
        if (sub_08009394(b, -6, 0) == 0 && a->x.HALF.HI - 6 >= 0)
            b->x.HALF_U.HI -= 6;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08044240.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_08044594.inc\"");


void sub_0804469C(struct Entity *this, u8 n, s16 x, s16 y)
{
    struct Entity *e;
    const u8 *p;
    u8 i;
    u8 j;
    u8 d;

    if (n > 7)
        n = 7;
    p = &gUnknown_0813ED60[n << 2];
    j = sub_0800099C() & 3;
    d = ((this->unk3E ^ 16) - 3) & 31;
    for (i = 0; i <= 3; i++)
    {
        e = sub_0804C8A8(0, p[j], 1);
        if (e != NULL)
        {
            e->direction = d | 0x80;
            sub_0803D4A4(this, e, x << 16, y << 16);
        }
        j = (j + 1) & 3;
        d = (d + 2) & 31;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080447C8.inc\"");

void sub_0804482C(struct Entity *this)
{
    gUnknown_0813EDA0[this->unk14](this);
}


void sub_08044854(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813ED84);
}


void sub_08044870(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk1D_6 = 1;
    this->unk2E = 2;
    this->unk48 = gUnknown_0813EE14;
    this->unk2A = 0;
    sub_08003870(this, 0);
    this->unk14++;
    this->unk17 = 60;
}


void sub_08044910(struct Entity *this)
{
    s16 v;

    if (--this->unk17 != 0)
        return;
    v = (sub_0800099C() & 112) + 75;
    this->unk17 = v;
    v = sub_0800099C() & 31;
    this->direction = v;
    this->unk2A = v >> 4;
    sub_08003870(this, this->unk2A);
    this->unk14++;
    this->speed = 224;
}


void sub_080449F4(struct Entity *this)
{
    u16 v;

    GetNextFrame(this);
    if (--this->unk17 != 0)
    {
        if ((u8)(this->unk17 & 15) == 0)
        {
            v = gUnknown_0813EDC0[sub_0800099C() & 3];
            this->direction = (this->direction + v) & 31;
            if (v != 0)
                sub_08044BC4(this);
        }
        if (sub_08009694(this))
            sub_08044BC4(this);
    }
    else
    {
        this->unk17 = 60;
        this->unk14++;
    }
}


void sub_08044AE0(struct Entity *this)
{
    u32 unused;

    GetNextFrame(this);
    if (--this->unk17 == 0)
    {
        this->unk14++;
        sub_08003870(this, this->unk2A + 2);
    }
    else
    {
        if (this->speed > 16)
            this->speed -= 2;
        if (sub_08009694(this))
            sub_08044BC4(this);
    }
}


void sub_08044B78(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk29 == 0x80)
    {
        this->unk17 = 60;
        this->unk14 = 1;
    }
}


void sub_08044BC4(struct Entity *this)
{
    u8 d = sub_08043EA4(this->direction);

    if (d != 0xFF && d != this->unk2A)
    {
        this->unk2A = d;
        sub_08003870(this, d);
    }
}


void sub_08044C24(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813EE1C);
}


void sub_08044C40(struct Entity *this)
{
    gUnknown_0813EE38[this->unk14](this);
}


void sub_08044C68(struct Entity *this)
{
    if (this->unk45 != 0 && this->unk7C.b != this->unk45)
        this->unk14 = 6;
    else
        sub_080098A0(this, gUnknown_0813EE1C);
}


void sub_08044CBC(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk2E = 2;
    this->unk48 = gUnknown_0813EF58;
    sub_08003870(this, 0);
    this->unk14++;
    this->unk17 = (sub_0800099C() + 30) & 60;
    this->unk7C.bf = this->unk45;
}


void sub_08044D64(struct Entity *this)
{
    GetNextFrame(this);
    if (--this->unk17 != 0)
        return;
    this->unk14++;
    this->unk17 = 72;
    this->direction = sub_0800099C() & 24;
    sub_08003870(this, (this->direction >> 3) + 1);
}


void sub_08044E10(struct Entity *this)
{
    if (--this->unk17 != 0)
    {
        if (this->unk29 == 0)
            sub_08002E64(this);
        GetNextFrame(this);
    }
    else if (sub_0800099C() & 7)
    {
        this->unk14--;
        this->unk17 = (sub_0800099C() + 30) & 60;
        sub_08003870(this, 0);
    }
    else
    {
        this->unk14++;
        sub_08003870(this, 5);
    }
}


void sub_08044ED8(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk29 != 0)
    {
        if (this->unk29 == 1)
        {
            this->unk3C = this->unk3C & 0x7F;
        }
        else
        {
            this->unk14++;
            this->unk17 = 120;
            this->unk1C_0 = 0;
        }
    }
}


void sub_08044F64(struct Entity *this)
{
    if (--this->unk17 != 0)
        return;
    this->unk14++;
    this->unk1C_0 = 1;
    sub_08003870(this, 6);
}


void sub_08044FD8(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk29 != 0)
    {
        if (this->unk29 == 1)
        {
            this->unk3C = this->unk3C | 0x80;
        }
        else
        {
            this->unk14 = 1;
            this->unk17 = (sub_0800099C() + 30) & 60;
            sub_08003870(this, 0);
        }
    }
}


void sub_08045068(struct Entity *this)
{
    struct Entity *a;
    struct Entity *b;
    s8 n;

    n = 0;
    a = sub_08012468(3);
    if (a != NULL)
    {
        a->unk3D = 240;
        n++;
    }
    b = sub_08012468(3);
    if (b != NULL)
    {
        b->x.HALF_U.HI = b->x.HALF_U.HI - 6;
        b->unk3D = 240;
        n++;
    }
    sub_08044198(this, a, b);
    if (n == 2)
    {
        a->unk54 = b;
        b->unk54 = a;
    }
    if (this->unk60 != 0)
        BITU16_AT((struct Entity *)this->unk60, 0x62) = U16_AT((struct Entity *)this->unk60, 0x62) + n;
    a = sub_0804C8A8(15, 2, 0);
    if (a != NULL)
    {
        a->x.HALF_U.HI = this->x.HALF_U.HI - 4;
        a->y.HALF_U.HI = this->y.HALF_U.HI;
        a->unk50 = this->unk50;
    }
    DeleteThisEntity(this);
}


void sub_080451CC(struct Entity *this)
{
    if (this->unk45 == 0 && this->unk14 <= 34)
        this->unk14 = 35;
    gUnknown_0813EF60[this->unk14](this);
}


void sub_0804521C(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 180;
    this->x.HALF_U.HI = 504;
    this->y.HALF_U.HI = 392;
    this->z.HALF_U.HI = 0xFF90;
    this->unk1C_4 = 2;
    this->unk5E_2 = 2;
    this->unk48 = gUnknown_0813F3F8;
    this->unk7C.bf = sub_0800099C();
    this->unk45 = gUnknown_0813EFFC[gUnknown_03006C80.unk3];
    BITU8_AT(this, 0x6A) = 1;
    sub_08008D90(this);
    sub_08003870(this, 0);
    sub_0803DF84();
}

asm(".include \"asm/non_matching/fs_game/sub_0804533C.inc\"");

void sub_08045524(struct Entity *this)
{
    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    this->z.WORD += 0x8000;
    if (this->z.HALF.HI == -48)
    {
        this->unk14 = 3;
        this->unk15 = 0;
        this->unk17 = 8;
        this->unk1C_0 = 1;
        sub_0800D67C(0x904);
    }
}


void sub_080455B4(struct Entity *this)
{
    u8 i;

    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else if (this->unk15 == 0)
    {
        if ((u8)(((u8 *)&gUnknown_02000010)[0] & 127) != 6)
            return;
        sub_0800D644();
        this->unk15 = 1;
    }
    else
    {
        for (i = 0; i < gUnknown_03006C80.unk0; i++)
        {
            if ((u16)(gUnknown_03000940[i] & 0x400))
                return;
        }
        this->unk14 = 5;
        this->unk17 = 8;
        play_sound(0x1F9);
        BITU8_AT(&gUnknown_03000520, 7) = 22;
        sub_0800C1EC(0x100);
    }
}


void sub_080456E0(struct Entity *this)
{
}


void sub_080456F0(struct Entity *this)
{
    sub_080660BC(this);
    sub_0803DF84();
    this->unk17--;
    if (this->unk17 != 0)
    {
        if (this->unk17 == 4)
        {
            sub_0801484C(gUnknown_08143FD8, 1);
            gUnknown_0200B310 = 0;
        }
    }
    else
    {
        this->unk14 = 6;
        this->unk17 = 62;
        sub_0800C0B0(2, 8);
    }
}


void sub_08045780(struct Entity *this)
{
    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 7;
        this->unk17 = 30;
    }
}


void sub_080457EC(struct Entity *this)
{
    struct Entity *e;

    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        e = sub_08012494(10);
        if (e != NULL)
        {
            e->unk54 = this;
            e->form = 1;
            this->unk58 = e;
            this->unk14 = 8;
        }
    }
}


void sub_08045870(struct Entity *this)
{
    struct Entity *e;

    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    if (this->unk58->unk29 != 0)
    {
        e = sub_08012494(11);
        if (e != NULL)
        {
            sub_0803D3D0(this, e);
            e->parameter = 1;
            e->direction = 16;
            this->unk58 = e;
            this->unk14 = 9;
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080458FC.inc\"");

void sub_08045ABC(struct Entity *this)
{
    u8 i;

    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 11;
        this->unk1D_6 = 1;
        this->unk1F_6 = 1;
        this->unk5E_0 = 3;
        for (i = 0; i < gUnknown_03006C80.unk0; i++)
            gUnknown_03006A30[i].unk28->direction = 255;
    }
}


void sub_08045B9C(struct Entity *this)
{
    sub_0803DF84();
    GetNextFrame(this);
    sub_080660BC(this);
    this->z.WORD += 0x8000;
    if (this->z.HALF.HI == -4)
    {
        this->unk14 = 12;
        this->unk17 = 30;
        this->unk2E = 12;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08045C18.inc\"");

void sub_08045DC8(struct Entity *this)
{
    GetNextFrame(this);
    if ((u16)(this->x.HALF_U.HI - 503) <= 2 && (u16)(this->y.HALF_U.HI - 415) <= 2)
    {
        this->x.HALF_U.HI = 504;
        this->y.HALF_U.HI = 416;
        this->unk17--;
        if (this->unk17 == 0)
            sub_08046D3C(this);
    }
    else
    {
        this->direction = sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, 504, 416);
        sub_0803CC20(this);
        sub_080660BC(this);
    }
}


void sub_08045E98(struct Entity *this)
{
    if ((u8)(this->unk29 & 1))
    {
        if ((u8)sub_08046FB4(this))
        {
            sub_080470C0(this);
            this->speed = gUnknown_0813F058[(u8)sub_08047678(this)];
            GetNextFrame(this);
        }
    }
    else
    {
        GetNextFrame(this);
    }
}


void sub_08045F00(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk70.b == 0)
    {
        this->unk70.bf = 3;
        this->unk14 = 16;
        this->unk17 = 60;
    }
}


void sub_08045F64(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk70.b == 15)
    {
        this->unk17--;
        if (this->unk17 == 0)
        {
            this->unk70.bf = 0;
            this->unk14 = 17;
            this->speed = 0x100;
            sub_08047174(this);
        }
    }
}


void sub_08045FDC(struct Entity *this)
{
    if (this->unk70.b == 0)
    {
        if (sub_0804721C(this) == 0)
            this->unk70.bf = 7;
    }
    else if (this->unk70.b == 4)
    {
        this->unk14 = 18;
        this->unk17 = 20;
    }
    GetNextFrame(this);
}


void sub_0804605C(struct Entity *this)
{
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 19;
        this->unk17 = 60;
        this->unk70.bf = 0;
    }
    GetNextFrame(this);
}


void sub_080460CC(struct Entity *this)
{
    if (this->unk70.b == 3)
    {
        this->unk17--;
        if (this->unk17 == 0)
        {
            this->unk70.bf = gUnknown_08137B10[this->unk70.s.unk71 + 2];
            this->unk14 = 20;
        }
    }
    GetNextFrame(this);
}


void sub_08046154(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk70.b == 0)
        this->unk14 = 21;
}


void sub_0804618C(struct Entity *this)
{
    this->unk18--;
    if (this->unk18 != 0)
    {
        sub_080470C0(this);
    }
    else
    {
        this->unk14 = 22;
        this->unk70.bf = 0xFF;
        sub_08003870(this, 4);
    }
}


void sub_080461F4(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        this->unk14 = 13;
        this->unk17 = 60;
        this->speed = 0x100;
        sub_08003870(this, 0);
    }
}


void sub_08046258(struct Entity *this)
{
    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 24;
        this->unk70.bf = 0;
        this->unk70.s.unk72 = 32;
        sub_08003870(this, 3);
        sub_08003DFC(178);
    }
}


void sub_080462DC(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 1))
    {
        sub_080473AC(this);
        this->parameter = 0;
    }
    else if ((u8)(this->unk29 & 0x80))
    {
        this->unk14 = 25;
        this->unk17 = 60;
        BITU16_AT(this, 0x6E) = 0;
        BITU8_AT(this, 0x7D) = (sub_0800099C() & 1) ? 1 : 255;
        sub_08003870(this, 0);
    }
}


void sub_0804639C(struct Entity *this)
{
    GetNextFrame(this);
    sub_08047538(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 26;
        sub_08047490(this);
    }
}


void sub_080463F4(struct Entity *this)
{
    GetNextFrame(this);
    sub_08047538(this);
    if (!(u8)sub_0804721C(this) || this->unk70.b != 0)
        this->unk14 = 27;
}


void sub_08046440(struct Entity *this)
{
    GetNextFrame(this);
    sub_08047538(this);
    if (this->unk6E == 0)
    {
        this->unk14 = 28;
        this->unk17 = 30;
    }
}


void sub_08046490(struct Entity *this)
{
    GetNextFrame(this);
    this->unk70.s.unk73 = this->unk70.s.unk73 + BITU8_AT(this, 0x7D);
    if (this->unk6E <= 31)
    {
        BITU16_AT(this, 0x6E)++;
        this->unk70.s.unk72 = 32 - ((gUnknown_0813E4CC[this->unk6E] * 32) >> 8);
    }
    else
    {
        this->unk17--;
        if (this->unk17 == 0)
        {
            this->unk70.bf = 255;
            this->unk14 = 29;
            this->unk17 = 60;
            sub_08003DFC(159);
        }
    }
}


void sub_0804659C(struct Entity *this)
{
    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk18--;
        if (this->unk18 != 0)
        {
            this->unk14 = 23;
            this->unk17 = 60;
        }
        else
        {
            this->unk14 = 13;
            this->unk17 = 60;
            this->speed = 256;
            sub_08003870(this, 0);
        }
    }
}


void sub_08046658(struct Entity *this)
{
    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 31;
        this->speed = 0x100;
    }
}


void sub_080466AC(struct Entity *this)
{
    GetNextFrame(this);
    if ((u16)(this->x.HALF_U.HI - 503) <= 2 && (u16)(this->y.HALF_U.HI - 503) <= 2)
    {
        this->unk14 = 32;
        this->unk17 = 60;
        this->x.HALF_U.HI = 504;
        this->y.HALF_U.HI = 504;
    }
    else
    {
        this->direction = sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, 504, 504);
        if ((u16)(gUnknown_03000E20.unk0 & 7) == 0)
            sub_0804CB7C(this, 1, 1, 20);
        sub_0803CC20(this);
        sub_080660BC(this);
    }
}


void sub_0804679C(struct Entity *this)
{
    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 33;
        this->unk17 = 210;
        ((struct { u8 pad[0x6E]; u16 v : 16; } *)this)->v = gUnknown_0813F070[sub_0800099C() & 7];
    }
}


void sub_08046828(struct Entity *this)
{
    struct Entity *e;

    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        if (this->unk6E == 0)
        {
            this->unk14 = 34;
            sub_080475D0(this);
        }
        else
        {
            BITU16_AT(this, 0x6E)--;
            this->unk17 = 240;
        }
    }
    else if (this->unk17 == 120)
    {
        if (this->unk6E == 0)
        {
            e = sub_08012494(10);
            if (e != NULL)
            {
                e->parameter = 1;
                e->unk54 = this;
            }
        }
        else
        {
            e = sub_08012494(10);
            if (e != NULL)
                e->unk54 = this;
        }
    }
}


void sub_08046918(struct Entity *this)
{
    u8 v;

    GetNextFrame(this);
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else
    {
        if ((u16)(gUnknown_03000E20.unk0 & 7) == 0)
            sub_0804CB7C(this, 1, 1, 20);
        v = sub_0804721C(this);
        if (v == 0)
        {
            this->unk18--;
            if (this->unk18 != 0)
            {
                this->unk14 = 32;
                this->unk17 = 60;
            }
            else
            {
                this->unk14 = 13;
                this->unk17 = 60;
                this->speed = 256;
                sub_08003870(this, 0);
            }
        }
        else if (v == 2)
        {
            this->unk17 = 30;
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08046A2C.inc\"");

void sub_08046C7C(struct Entity *this)
{
    struct Entity *e;

    GetNextFrame(this);
    this->unk1C_0 ^= 1;
    sub_080476DC();
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else
    {
        e = sub_0804C8A8(105, 0, 0);
        if (e == NULL)
            return;
        e->unk54 = this;
        this->unk14 = 37;
        this->unk1C_0 = 1;
    }
}


void sub_08046D24(struct Entity *this)
{
    GetNextFrame(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08046D3C.inc\"");

u8 sub_08046FB4(struct Entity *this)
{
    struct Entity *a;
    struct Entity *b;

    a = sub_080123E8();
    if (a != NULL)
    {
        b = sub_08012410(a);
        if (b != NULL)
        {
            a->type = 3;
            b->type = 3;
            a->subtype = 48;
            b->subtype = 48;
            a->parameter = 0;
            b->parameter = 1;
            a->direction = 160;
            b->direction = 96;
            a->unk54 = this;
            b->unk54 = this;
            a->unk58 = b;
            b->unk58 = a;
            sub_0803D3D0(this, a);
            sub_0803D3D0(this, b);
            sub_08012728(4, a);
            sub_08012728(4, b);
            return 1;
        }
    }
    return 0;
}


void sub_080470C0(struct Entity *this)
{
    this->unk14 = 15;
    this->unk70.s.unk71 = gUnknown_084287A4[(this->unk70.s.unk71 << 3) + (sub_0800099C() & 7)];
    if (this->unk70.s.unk71 == 255)
        this->unk70.s.unk71 = sub_0800099C() & 1;
    this->unk70.bf = gUnknown_08137B10[this->unk70.s.unk71];
}


void sub_08047174(struct Entity *this)
{
    this->unk74.p = gUnknown_0813F0F8[sub_0800099C() & 3];
    this->unk78.h = *((u16 *)this->unk74.w)++;
    this->unk78.s2.unk7A = *((u16 *)this->unk74.w)++;
    this->direction = *((u16 *)this->unk74.w)++;
    this->unk7C.s4.unk7E = 128;
}


u8 sub_0804721C(struct Entity *this)
{
    if (this->unk7C.s4.unk7E != 0)
        this->unk7C.s4.unk7E--;
    if (!(gUnknown_0813F10C[(u8)(this->unk7C.s4.unk7E >> 4)] & gUnknown_03000E20.unk0))
        sub_080040C4(this, sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, S16_AT(this, 0x78), S16_AT(this, 0x7A)));
    sub_0803CC20(this);
    sub_080660BC(this);
    if ((u16)(U16_AT(this, 0x78) - this->x.HALF_U.HI + 2) <= 4 && (u16)(U16_AT(this, 0x7A) - this->y.HALF_U.HI + 2) <= 4)
    {
        if (*this->unk74.p == 0xFFFF)
            return 0;
        this->unk78.h = *((u16 *)this->unk74.w)++;
        this->unk78.s2.unk7A = *((u16 *)this->unk74.w)++;
        this->direction = *((u16 *)this->unk74.w)++;
        this->unk7C.s4.unk7E = 128;
        return 2;
    }
    return 1;
}


void sub_080473AC(struct Entity *this)
{
    struct Entity *e;
    const u8 *p;
    u16 i;

    p = &gUnknown_0813F11C[sub_08047678(this) * 4 + sub_0800099C() % 3];
    for (i = 0; i <= 7; i++)
    {
        e = sub_08012494(16);
        if (e != NULL)
        {
            e->form = sub_08000AAC(p, i) ? sub_0800099C() % gUnknown_03006C80.unk0 + 1 : 0;
            e->direction = i << 5;
            e->unk54 = this;
            sub_0803D3D0(this, e);
        }
    }
}


void sub_08047490(struct Entity *this)
{
    this->unk74.p = gUnknown_0813F164[sub_0800099C() & 1];
    this->unk78.h = *((u16 *)this->unk74.w)++;
    this->unk78.s2.unk7A = *((u16 *)this->unk74.w)++;
    this->direction = *((u16 *)this->unk74.w)++;
    this->unk7C.s4.unk7E = 128;
}

asm(".include \"asm/non_matching/fs_game/sub_08047538.inc\"");

void sub_080475D0(struct Entity *this)
{
    this->unk74.p = gUnknown_0813F1F4[sub_0800099C() & 3];
    this->unk78.h = *((u16 *)this->unk74.w)++;
    this->unk78.s2.unk7A = *((u16 *)this->unk74.w)++;
    this->direction = *((u16 *)this->unk74.w)++;
    this->unk7C.s4.unk7E = 128;
}


u8 sub_08047678(struct Entity *this)
{
    u8 r = 0;

    if (gUnknown_0813F208[gUnknown_03006C80.unk3 << 1] > this->unk45)
    {
        r = 1;
        if (gUnknown_0813F208[(gUnknown_03006C80.unk3 << 1) + 1] > this->unk45)
            r = 2;
    }
    return r;
}


void sub_080476DC(void)
{
    u8 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
        gUnknown_03006A30[i].unk14 = 1;
    sub_0803DF84();
}


void sub_08047740(struct Entity *this)
{
    gUnknown_0813F400[this->form](this);
    if (this->unk54->unk70.b == 255)
    {
        DeleteThisEntity(this);
    }
    else
    {
        this->z.HALF.HI = gUnknown_0813F410[(u8)((u8)(this->unk54->unk29 & 0x70) >> 4)];
        if (this->unk54->unk41 == 255)
            this->unk3D = this->unk54->unk3D;
    }
    if (this->unk54->unk45 == 0)
    {
        sub_0804CA20(this);
        DeleteThisEntity(this);
    }
}


void sub_08047804(struct Entity *this)
{
    gUnknown_0813F420[this->unk14](this);
    this->x.HALF_U.HI = this->unk54->x.HALF_U.HI + ((gUnknown_0813E4CC[this->direction] * 44) >> 8);
    this->y.HALF_U.HI = this->unk54->y.HALF_U.HI - ((gUnknown_0813E4CC[this->direction + 64] * 36) >> 8) - 4;
}


void sub_080478AC(struct Entity *this)
{
    if (sub_0804871C(this) == 0)
        return;
    this->unk14 = 1;
    this->unk17 = 120;
    this->unk1C_0 = 1;
    this->unk2E = 8;
    this->unk5E_2 = 3;
    this->unk3C = this->unk3C | 0x80;
    this->unk70.bf = this->direction;
    this->unk48 = gUnknown_0813F53C;
    this->unk70.s.unk72 = 1;
    sub_08003870(this, 0);
}


void sub_0804799C(struct Entity *this)
{
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk70.s.unk71 = this->direction > 128 ? 1 : 255;
        this->unk70.s.unk73 = (sub_0800099C() % gUnknown_084287B4[gUnknown_03006C80.unk0 - 2]) * 2;
        if (gUnknown_08137B10[this->parameter] & this->unk54->unk70.b)
            this->unk14 = 2;
        else
            this->unk14 = 5;
    }
}


void sub_08047A7C(struct Entity *this)
{
    if ((u8)(this->unk29 & 1))
    {
        if ((u8)sub_08048850(this))
        {
            this->unk14 = 3;
            this->unk17 = 90;
            this->unk2E = 0;
        }
    }
    else
    {
        GetNextFrame(this);
    }
}


void sub_08047AF0(struct Entity *this)
{
    GetNextFrame(this->unk78.e);
    GetNextFrame(this->unk7C.e);
    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 4;
        sub_08003870(this, 1);
        sub_08003870(this->unk78.e, 4);
        sub_08003870(this->unk7C.e, 5);
    }
}


void sub_08047B70(struct Entity *this)
{
    GetNextFrame(this->unk78.e);
    GetNextFrame(this->unk7C.e);
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        this->unk14 = 5;
        this->unk2E = 8;
        this->unk54->unk70.bf = 0;
        sub_08003870(this, 0);
        DeleteThisEntity(this->unk78.e);
        DeleteThisEntity(this->unk7C.e);
    }
}


void sub_08047C0C(struct Entity *this)
{
    if ((u8)(this->unk54->unk70.b & 3) != 3)
        return;
    this->direction = this->direction + this->unk70.s.unk71;
    if ((u8)(this->direction & 63) == 0)
    {
        this->unk14 = 6;
        this->unk70.s.unk72 = this->unk70.s.unk72 & 254;
        this->unk54->unk70.bf |= gUnknown_08137B10[this->parameter + 2];
    }
}


void sub_08047CE8(struct Entity *this)
{
    if (this->unk54->unk70.b == 0)
    {
        this->unk14 = 7;
        this->unk70.s.unk71 = 2;
    }
}


void sub_08047D34(struct Entity *this)
{
    this->direction = this->direction + this->unk70.s.unk71;
    if (this->unk54->unk70.b != 0)
    {
        if (this->direction == 192)
        {
            this->unk14 = 8;
            this->unk70.s.unk71 = 255;
            this->unk70.s.unk72 = this->unk70.s.unk72 | 1;
            this->unk54->unk70.bf ^= gUnknown_08137B10[this->parameter];
        }
        else if (this->direction == 64)
        {
            this->unk14 = 8;
            this->unk70.s.unk71 = 1;
            this->unk70.s.unk72 = this->unk70.s.unk72 | 1;
            this->unk54->unk70.bf ^= gUnknown_08137B10[this->parameter];
        }
    }
}


void sub_08047EA4(struct Entity *this)
{
    if ((u8)(this->unk54->unk70.b & 4))
        return;
    this->direction = this->direction + this->unk70.s.unk71;
    if (S8_AT(this, 0x71) > 0)
    {
        if (this->direction == 88)
        {
            this->direction = 96;
            this->unk14 = 9;
            this->unk54->unk70.bf |= gUnknown_08137B10[this->parameter];
            sub_08003DFC(158);
        }
    }
    else if (this->direction == 168)
    {
        this->direction = 160;
        this->unk14 = 9;
        this->unk54->unk70.bf |= gUnknown_08137B10[this->parameter];
        sub_08003DFC(158);
    }
}


void sub_08047FFC(struct Entity *this)
{
    if (!(u8)(this->unk54->unk70.b & 3))
    {
        if (gUnknown_08137B10[this->parameter + 2] & this->unk54->unk70.b)
            this->unk14 = 10;
        else
            this->unk14 = 13;
    }
}


void sub_08048074(struct Entity *this)
{
    if ((u8)(this->unk29 & 1))
    {
        if ((u8)sub_08048850(this))
        {
            this->unk14 = 11;
            ((struct { u8 pad[0x76]; u16 v : 16; } *)this)->v = 300;
            this->unk74.b.unk74 = 0;
        }
    }
    else
    {
        GetNextFrame(this);
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080480F0.inc\"");

void sub_0804831C(struct Entity *this)
{
    GetNextFrame(this->unk78.e);
    GetNextFrame(this->unk7C.e);
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        this->unk14 = 13;
        this->unk54->unk70.bf = 0;
        sub_08003870(this, 0);
        DeleteThisEntity(this->unk78.e);
        DeleteThisEntity(this->unk7C.e);
    }
}


void sub_080483A0(struct Entity *this)
{
    if ((u8)(this->unk54->unk70.b & 3))
    {
        this->unk14 = 1;
        this->unk17 = 60;
    }
}


void sub_080483F0(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1C_0 = 1;
        this->unk48 = gUnknown_0813F54C;
        sub_08003870(this, 2);
        sub_0804894C(this);
    }
    sub_0803D4A4(this->unk58, this, 0, 1);
    if ((u8)(this->unk29 & 2))
    {
        if (this->unk70.b == 0)
        {
            this->unk70.bf = 1;
            sub_08003DFC(156);
        }
    }
    else
    {
        this->unk70.bf = 0;
    }
}


void sub_080484AC(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1C_0 = 1;
        this->unk48 = gUnknown_0813F554;
        sub_08003870(this, 3);
        sub_0804894C(this);
    }
    sub_0803D4A4(this->unk58, this, 0, 1);
}

asm(".include \"asm/non_matching/fs_game/sub_08048514.inc\"");

u8 sub_0804871C(struct Entity *this)
{
    struct Entity *a;
    struct Entity *b;

    a = sub_080123E8();
    if (a == NULL)
        goto fail;
    b = sub_08012410(a);
    if (b == NULL)
        goto fail;
    a->type = 3;
    b->type = 3;
    a->subtype = 48;
    b->subtype = 48;
    a->form = 3;
    b->form = 3;
    a->parameter = 2;
    b->parameter = 3;
    a->unk54 = this->unk54;
    b->unk54 = this->unk54;
    a->unk58 = this;
    b->unk58 = this;
    b->unk70.bf = this->direction;
    sub_0803D3D0(this, a);
    sub_0803D3D0(this, b);
    sub_08012728(4, a);
    sub_08012728(4, b);
    return 1;
fail:
    return 0;
}


u8 sub_08048850(struct Entity *this)
{
    struct Entity *a;
    struct Entity *b;

    a = sub_080123E8();
    if (a != NULL)
    {
        b = sub_08012410(a);
        if (b != NULL)
        {
            a->type = 3;
            b->type = 3;
            a->subtype = 48;
            b->subtype = 48;
            a->form = 1;
            b->form = 2;
            a->unk54 = this->unk54;
            b->unk54 = this->unk54;
            a->unk58 = this;
            b->unk58 = this;
            sub_0803D3D0(this, a);
            sub_0803D3D0(this, b);
            sub_08012728(4, a);
            sub_08012728(4, b);
            this->unk78.e = a;
            this->unk7C.e = b;
            sub_08003DFC(162);
            return 1;
        }
    }
    return 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0804894C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080489B0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08048BF4.inc\"");

void sub_08048F70(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813F55C);
}


void sub_08048F8C(struct Entity *this)
{
    gUnknown_0813F578[this->unk14](this);
}


void sub_08048FB4(struct Entity *this)
{
    struct Entity *e;
    u8 k;

    if ((u8)(this->unk41 + 124) <= 158)
    {
        this->direction = this->unk3E;
        if ((u8)(this->direction & 15))
            this->unk1C_2 = (u8)((this->direction >> 4) ^ 1);
        this->speed = 0x480;
        if (this->form == 0)
            k = gUnknown_0813F584[sub_0800099C() & 15];
        else
            k = gUnknown_0813F594[this->form - 1];
        e = sub_0804C8A8(0, k, 1);
        if (e != NULL)
        {
            e->direction = (this->direction ^ 16) | 0x80;
            sub_0803D3D0(this, e);
        }
    }
    else if (this->unk41 == 128)
    {
        this->direction += (sub_0800099C() & 1) ? 2 : -2;
        this->direction = this->direction & 31;
    }
    sub_080098A0(this, gUnknown_0813F55C);
}


void sub_08049140(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk2E = 4;
    this->z.HALF_U.HI = 0xFFFE;
    this->unk48 = gUnknown_0813F5FC;
    if (this->form != 0)
        this->unk1C_4 = 1;
    if (this->direction == 255)
        this->direction = sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, (sub_0800099C() & 31) + 472, (sub_0800099C() & 31) + 488);
    if (this->speed == 0)
        this->speed = gUnknown_0813F5A4[sub_0800099C() & 3];
    sub_080496DC(this);
    if ((u8)(this->direction & 15))
        this->unk1C_2 = (u8)((this->direction >> 4) ^ 1);
    sub_08003870(this, 0);
}


void sub_080492B4(struct Entity *this)
{
    GetNextFrame(this);
    sub_0804930C(this);
    if ((u16)(this->x.HALF_U.HI - 360) > 287 || (u16)(this->y.HALF_U.HI - 400) > 207)
        DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804930C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080494B8.inc\"");

void sub_080496DC(struct Entity *this)
{
    this->unk70.w = gUnknown_08147514[this->parameter];
    sub_080494B8(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08049708.inc\"");

void sub_08049A00(struct Entity *this)
{
    gUnknown_0813F654[this->unk14](this);
}


void sub_08049A28(struct Entity *this)
{
}


void sub_08049A38(struct Entity *this)
{
}


void sub_08049A48(struct Entity *this)
{
    if (this->unk54->unk45 != 0)
        gUnknown_0813F6C8[this->unk14](this);
    else
        DeleteThisEntity(this);
}


void sub_08049A88(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk5E_0 = 3;
    this->unk1F_6 = this->unk54->unk1F_6;
    this->unk1D_6 = this->unk54->unk1D_6;
    sub_0803D4A4(this->unk54, this, 0, 1);
    sub_08003870(this, 0);
    sub_08003DFC(156);
}


void sub_08049B30(struct Entity *this)
{
    struct Entity *e;
    struct Entity *t;

    sub_0803D4A4(this->unk54, this, 0, 1);
    GetNextFrame(this);
    if ((u8)(this->unk29 & 1) && this->form == 0)
    {
        BITU8_AT(this, 0x29) = 0;
        if (this->parameter == 0)
        {
            e = sub_08012494(11);
            if (e != NULL)
                sub_0803D3D0(this, e);
        }
        else
        {
            e = sub_08012494(17);
            if (e != NULL)
            {
                sub_0803D3D0(this, e);
                e->unk54 = this->unk54;
                e->y.HALF_U.HI -= 26;
                e->form = 1;
                e->parameter = 1;
                t = sub_08044594();
                e->direction = sub_0803CECC(this, t);
                e->unk17 = t->form;
                sub_08003DFC(181);
            }
        }
    }
    if ((u8)(this->unk29 & 0x80))
        DeleteThisEntity(this);
}


void sub_08049C60(struct Entity *this)
{
    if (this->form != 0)
        gUnknown_0813F74C[this->unk14](this);
    else
        gUnknown_0813F744[this->unk14](this);
}


void sub_08049CAC(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk2E = 2;
    this->y.WORD++;
    this->z.HALF_U.HI -= 26;
    this->unk48 = gUnknown_0813F7A0;
    this->unk5E_0 = 3;
    if (this->parameter == 0)
    {
        this->direction = sub_0803CECC(this, gUnknown_03006A30[sub_0800099C() % gUnknown_03006C80.unk0].unk28);
        this->speed = 384;
    }
    else
    {
        this->speed = 448;
    }
    sub_08003870(this, 0);
    sub_08003DFC(157);
}


void sub_08049DA8(struct Entity *this)
{
    struct Entity *e;
    u16 i;
    u8 r;

    sub_0803CC20(this);
    GetNextFrame(this);
    this->z.HALF_U.HI = this->z.HALF_U.HI + 2;
    if (this->z.HALF.HI < 0)
        return;
    this->z.HALF_U.HI = 0;
    e = sub_0804C8A8(15, 6, 0);
    if (e != NULL)
    {
        sub_0803D3D0(this, e);
        if (this->parameter != 0)
        {
            e->parameter = 64;
            play_sound(196);
        }
    }
    if (this->parameter == 0)
    {
        r = ((sub_0800099C() & 3) << 1) + 1;
        for (i = 0; i <= 3; i++)
        {
            e = sub_08012494(11);
            if (e != NULL)
            {
                e->form = 1;
                e->direction = i * 8 + r;
                sub_0803D3D0(this, e);
            }
        }
    }
    DeleteThisEntity(this);
}


void sub_08049ED8(struct Entity *this)
{
    this->unk14 = 1;
    if (this->unk17 == 0)
        this->unk17 = 5;
    this->unk1C_0 = 1;
    this->unk48 = gUnknown_0813F7A8;
    sub_08003870(this, 1);
}


void sub_08049F40(struct Entity *this)
{
    GetNextFrame(this);
    sub_08009F9C(this);
    if (this->unk2C != 0)
    {
        this->unk17--;
        if (this->unk2C == 0xFFFF || this->unk17 == 0)
        {
            sub_0804C9F4(this);
            DeleteThisEntity(this);
        }
    }
}


void sub_08049FA4(struct Entity *this)
{
    gUnknown_0813F7B0[this->unk14](this);
}


void sub_08049FCC(struct Entity *this)
{
    this->unk14++;
    this->unk17 = 30;
    this->unk1E_0++;
    this->unk1E_4 = this->unk1E_0;
    this->unk1C_0 = 1;
    this->unk2E = 4;
    this->z.HALF_U.HI = 0xFFC4;
    this->unk48 = gUnknown_0813F7C4;
    this->unk50 = 0x4000;
    this->unk20 = 128;
    sub_08003870(this, 7);
}


void sub_0804A0DC(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else if (!sub_08003594(this, 0x2000))
    {
        if (this->form != 0)
            this->form++;
        else
            sub_0804CB38(this, 13, 0);
        DeleteThisEntity(this);
    }
}


void sub_0804A154(struct Entity *this)
{
    DeleteThisEntity(this);
}


void sub_0804A16C(struct Entity *this)
{
    struct Entity *e;
    u8 v;

    if ((u8)(this->unk41 & 0x80) && this->unk41 > 131)
    {
        if ((v = gUnknown_0813F7E0[sub_0800099C() & 15]) != 255)
        {
            e = sub_0804C8A8(0, v, 1);
            if (e != NULL)
                sub_0803D3D0(this, e);
        }
        e = sub_0804C8A8(15, 6, 0);
        if (e != NULL)
            sub_0803D3D0(this, e);
        DeleteThisEntity(this);
    }
    else
    {
        gUnknown_0813F7CC[this->unk14](this);
    }
}


void sub_0804A218(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 8;
    this->unk1C_0 = 1;
    this->unk2E = 3;
    this->unk1C_4 = 1;
    this->unk10 = 0x30000;
    this->speed = gUnknown_0813F7F8[sub_0800099C() & 3];
    this->unk5E_0 = 3;
    this->unk48 = gUnknown_0813F80C;
    sub_08003870(this, 10);
}


void sub_0804A2D8(struct Entity *this)
{
    if (--this->unk17 == 0)
        this->unk3C = this->unk3C | 0x80;
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x1800))
    {
        this->unk14 = 2;
        this->unk10 = 0x1C000;
        this->unk3C = this->unk3C | 16;
    }
}


void sub_0804A38C(struct Entity *this)
{
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x1800))
    {
        this->unk14 = 3;
        this->unk10 = 0x12000;
    }
}


void sub_0804A3D4(struct Entity *this)
{
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x1800))
    {
        this->unk14 = 4;
        this->unk10 = 0xE000;
        this->unk5C = 0x21AA;
    }
}


void sub_0804A438(struct Entity *this)
{
    this->unk1C_0 = (u16)(gUnknown_03000E20.unk0 & 1);
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x1800))
        DeleteThisEntity(this);
}


void sub_0804A498(struct Entity *this)
{
    struct Entity *e;

    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1C_0 = 1;
        this->unk48 = gUnknown_0813F82C;
        sub_08003870(this, (this->direction >> 2) + 11);
    }
    if ((u8)(this->unk41 & 0x80) && this->unk4C->unk44 > 6)
    {
        sub_0804CA20(this);
        if (gUnknown_03006C80.unk1C <= 35999)
        {
            e = sub_0804C8A8(0, gUnknown_0813F818[sub_0800099C() & 7], 1);
            if (e != NULL)
                sub_0803D3D0(this, e);
        }
        DeleteThisEntity(this);
    }
    else
    {
        sub_08009FB8(this);
        if (this->unk2C != 0)
            DeleteThisEntity(this);
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0804A584.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A790.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804ABB8.inc\"");

void sub_0804B15C(struct Entity *this)
{
    if (--this->unk70.w != -1)
    {
        GetNextFrame(this);
        sub_0803CC20(this);
        if (--this->unk18 == 255)
        {
            this->direction = sub_08003F4C(this, gUnknown_03006A30[this->unk17].unk28);
            this->unk18 = 20;
        }
    }
    else
    {
        DeleteThisEntity(this);
    }
}


void sub_0804B208(struct Entity *this)
{
    if (this->unk54->unk14 == 4)
    {
        DeleteThisEntity(this);
    }
    else
    {
        GetNextFrame(this);
        if (this->unk23 == 6)
        {
            if ((u8)(this->unk29 & 0x80))
                DeleteThisEntity(this);
        }
        else if (--this->unk18 == 255)
        {
            if (this->unk23 == 11)
            {
                this->unk3C = this->unk3C | 0x80;
                this->unk18 = 120;
                sub_08003870(this, 5);
                sub_08003DFC(182);
            }
            else
            {
                this->unk3C = this->unk3C & 127;
                sub_08003870(this, 6);
            }
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0804B300.inc\"");

void sub_0804B5FC(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk15 != 0)
    {
        if (!sub_08003594(this, 0x2000))
            DeleteThisEntity(this);
    }
    else if (--this->unk18 != 255)
    {
        if (this->z.HALF.HI > this->unk54->z.HALF.HI)
            this->z.HALF_U.HI--;
        else if (this->unk54->unk78.s3.unk79 == 4)
            this->unk15++;
        if (this->x.HALF.HI == this->unk54->x.HALF.HI && this->y.HALF.HI == this->unk54->y.HALF.HI + 8)
        {
            this->direction = sub_0803CEF0(this, this->unk54, 0, 8);
            sub_0803CC20(this);
        }
    }
    else
    {
        DeleteThisEntity(this);
    }
}


void sub_0804B708(struct Entity *this, u8 form)
{
    struct Entity *e = sub_0804CABC(this, form);

    if (e != NULL)
        e->parameter = 1;
}


void sub_0804B744(struct Entity *this)
{
    gUnknown_0813F8CC[this->unk14](this);
    if (this->unk54->unk45 == 0)
    {
        sub_0804CA20(this);
        DeleteThisEntity(this);
    }
}


void sub_0804B788(struct Entity *this)
{
    this->unk14 = 1;
    this->unk2E = 8;
    this->unk17 = sub_0800099C();
    this->unk1C_0 = 1;
    this->frameTimer += (sub_0800099C() & 3) - 2;
    if (this->form == 0)
    {
        sub_08003870(this, 0);
    }
    else
    {
        this->unk3F = 67;
        if (this->form - 1 == gLCDRegisterBuffer)
        {
            this->unk1E_4 = this->unk1E_0 = this->form + 6;
            sub_08003870(this, 1);
        }
        else
        {
            sub_08003870(this, 0);
        }
    }
    sub_0804B8B0(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804B8B0.inc\"");

void sub_0804BB08(struct Entity *this)
{
    gUnknown_0813F928[this->unk14](this);
    if (this->unk45 != 0 && this->unk54->unk45 == 0)
    {
        sub_0804CA20(this);
        DeleteThisEntity(this);
    }
}


void sub_0804BB58(struct Entity *this)
{
    if (this->form == 0)
    {
        this->unk14 = 1;
    }
    else
    {
        this->unk14 = 2;
        this->unk1E_4 = this->unk1E_0 = this->unk17 + 7;
        BITU16_AT(this, 0x70) = 20;
        this->unk3C = this->unk3C & 127;
        this->speed = 256;
        this->unk74.b.unk75 = gUnknown_03006C80.unk6 + 1;
    }
    this->unk17 = sub_0800099C();
    this->unk70.s2.unk72 = 5;
    this->unk2E = 8;
    this->unk1C_0 = 1;
    this->unk48 = gUnknown_0813F990;
    sub_08003870(this, 0);
}


void sub_0804BCA4(struct Entity *this)
{
    if ((u8)(this->unk41 & 0x80) && (u8)(this->unk41 + 124) <= 135)
    {
        this->direction = this->unk3E;
        if (this->unk74.b.unk74 <= 9)
            this->unk74.b.unk74++;
        sub_08003DFC(180);
    }
    this->unk17++;
    this->unk1E_4 = this->unk1E_0 = (u8)(this->unk17 & 3) + 7;
    sub_0804C088(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804BD9C.inc\"");

void sub_0804BFA4(struct Entity *this)
{
    u8 v;

    this->unk54->unk41 = 255;
    this->unk54->unk3D = 60;
    v = this->form != 0 ? 20 : 5;
    if (this->unk54->unk45 > v)
        this->unk54->unk45 = this->unk54->unk45 - v;
    else
        this->unk54->unk45 = 0;
    if (this->form == 0)
        sub_0804469C(this, this->unk54->parameter++, 0, 0);
    else
        sub_0804469C(this, this->unk74.b.unk74, 0, 0);
    sub_08003E10(this, 45);
}


void sub_0804C088(struct Entity *this)
{
    struct Entity *e;

    this->unk70.s2.unk72--;
    if ((u8)(this->parameter & 1) && this->unk70.s2.unk72 == 0)
    {
        this->unk70.s2.unk72 = 5;
        e = sub_0804CB7C(this, 0, 1, 0);
        if (e != NULL)
            e->unk23 = 1;
    }
    GetNextFrame(this);
    sub_08009FCC(this);
    if ((u8)(this->parameter & 2) && sub_08000358(this, this->unk54))
    {
        sub_0804BFA4(this);
        DeleteThisEntity(this);
    }
    else if (this->unk2C != 0)
    {
        DeleteThisEntity(this);
    }
}


void DoObjectEntity(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_0804C200(this);
    if (this->unk3D != 0)
        this->unk3D++;
    gUnknown_0813F998[this->subtype](this);
    sub_08003688(this);
    this->unk41 &= 0x7F;
}

asm(".include \"asm/non_matching/fs_game/sub_0804C200.inc\"");

struct Entity *sub_0804C410(struct Entity *this, u8 form)
{
    struct Entity *e = CreateObject(52, form, 0);

    if (e != NULL)
        sub_0803D3D0(this, e);
    return e;
}

asm(".include \"asm/non_matching/fs_game/sub_0804C448.inc\"");

// Spawns objects from a list of (subtype, form, parameter, x, y) bytes ending with 0
bool32 sub_0804C808(const u8 *p)
{
    struct Entity *e;
    u8 subtype, form, parameter;

    while (*p != 0)
    {
        subtype = *p++;
        form = *p++;
        parameter = *p++;
        e = CreateObject(subtype, form, parameter);
        if (e == NULL)
            return FALSE;
        e->x.HALF.HI = *p++;
        e->y.HALF.HI = *p++;
    }
    return TRUE;
}


// tmc: CreateObject
struct Entity *sub_0804C8A8(u8 subtype, u8 form, u8 parameter)
{
    struct Entity *e = sub_080123E8();

    if (e != NULL)
    {
        e->type = 6;
        e->subtype = subtype;
        e->form = form;
        e->parameter = parameter;
        sub_08012728(6, e);
    }
    return e;
}


struct Entity *sub_0804C938(u8 subtype, u8 form, u8 parameter)
{
    struct Entity *e = sub_08012440();

    if (e != NULL)
    {
        e->type = 6;
        e->subtype = subtype;
        e->form = form;
        e->parameter = parameter;
        sub_08012728(6, e);
    }
    return e;
}


void sub_0804C9C8(struct Entity *this)
{
    struct Entity *e = CreateObject(15, 2, 0);

    if (e != NULL)
        sub_0803D3D0(this, e);
}


void sub_0804C9F4(struct Entity *this)
{
    struct Entity *e = CreateObject(15, 17, 0);

    if (e != NULL)
        sub_0803D3D0(this, e);
}


void sub_0804CA20(struct Entity *this)
{
    struct Entity *e = CreateObject(15, 6, 0);

    if (e != NULL)
        sub_0803D3D0(this, e);
}


void sub_0804CA4C(struct Entity *this)
{
    struct Entity *e = CreateObject(15, 11, 0);

    if (e != NULL)
        sub_0803D3D0(this, e);
}


void sub_0804CA78(struct Entity *this, s32 dx, s32 dy)
{
    struct Entity *e = CreateObject(15, 24, 32);

    if (e != NULL)
        sub_0803D4A4(this, e, (s16)dx << 16, (s16)dy << 16);
}


struct Entity *sub_0804CABC(struct Entity *this, u8 form)
{
    struct Entity *e = CreateObject(0, 0, 0);

    if (e != NULL)
    {
        e->x.WORD = this->x.WORD;
        e->y.WORD = this->y.WORD;
        e->form = form;
        e->unk50 = this->unk50;
        sub_08008DD8(e);
    }
    return e;
}


struct Entity *sub_0804CB38(struct Entity *this, u8 b, u8 c)
{
    struct Entity *e = CreateObject(15, b, c);

    if (e != NULL)
    {
        sub_0803D3D0(this, e);
        e->unk54 = this;
    }
    return e;
}


struct Entity *sub_0804CB7C(struct Entity *this, u8 a, u8 b, u8 c)
{
    struct Entity *e;

    e = sub_0804C8A8(96, a, b);
    if (e == NULL)
        return NULL;
    sub_0803D3D0(this, e);
    e->unk17 = c;
    e->unk1B = this->unk1B;
    e->unk1E_0 = e->unk1E_4 = this->unk1E_0;
    e->unk1D_6 = this->unk1D_6;
    e->unk1F_6 = this->unk1F_6;
    e->unk1C_6 = this->unk1C_6;
    e->unk20 = this->unk20;
    e->unk5E_0 = 0;
    return e;
}


void sub_0804CCBC(void)
{
    CpuFill16(0, gUnknown_0202A7E0, 0xA0);
}


u8 sub_0804CCE4(u8 a, u8 b, u8 c)
{
    struct Entity *e;
    struct Struct0202A7E0 *p;
    u8 i;
    u16 zero;

    p = gUnknown_0202A7E0;
    for (i = 0; p < gUnknown_0202A880; p++, i++)
    {
        if (p->unkC != NULL)
            continue;
        e = sub_0804C8A8(a, b, c);
        if (e != NULL)
        {
            zero = 0;
            CpuSet(&zero, p, 0x0100000A);
            p->unkC = e;
            e->unk60 = (u32)p;
            return i;
        }
    }
    return 255;
}


// Frees script record i: deletes its entity and clears it
void sub_0804CD94(u8 i)
{
    if (gUnknown_0202A7E0[i].unkC != NULL)
        DeleteThisEntity(gUnknown_0202A7E0[i].unkC);
    CpuFill16(0, &gUnknown_0202A7E0[i], 0x14);
}


void sub_0804CE00(struct Entity *this, u16 v)
{
    struct BitU16 *p = (struct BitU16 *)this->unk60;

    if (p != NULL)
        p->v = v;
}


u8 sub_0804CE38(u8 i)
{
    return gUnknown_0202A7E0[i].unk2;
}


void sub_0804CE64(struct Struct0202A7E0 *this, u32 value)
{
    this->unk10 = value;
}

asm(".include \"asm/non_matching/fs_game/sub_0804CE7C.inc\"");

u32 sub_0804CF00(struct Entity *this)
{
    return 0;
}


u32 sub_0804CF14(struct Struct0202A7E0 *p)
{
    p->unk4 = ((u16 *)p->unk10)[1];
    p->unk10 += 4;
    return 0;
}


u32 sub_0804CF4C(struct Struct0202A7E0 *p)
{
    p->unk0 = ((u16 *)p->unk10)[1];
    p->unk10 += 4;
    return 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0804CF84.inc\"");

u32 sub_0804CFE8(struct Struct0202A7E0 *p)
{
    u32 v = (((u16 *)p->unk10)[1] << 16) | ((u16 *)p->unk10)[2];

    play_sound(v);
    p->unk10 += 6;
    return 1;
}

asm(".include \"asm/non_matching/fs_game/sub_0804D024.inc\"");

u32 sub_0804D0B8(struct Struct0202A7E0 *p)
{
    if (p->unk2 == 0)
        p->unk10 += 2;
    return 0;
}


u32 sub_0804D0E0(struct Struct0202A7E0 *p)
{
    p->unk8 = ((u16 *)p->unk10)[1];
    p->unk10 += 4;
    return 0;
}


u32 sub_0804D118(struct Struct0202A7E0 *p)
{
    if (gUnknown_0202A4F8 & gUnknown_08137B10[((u16 *)p->unk10)[1]])
        p->unk10 += 4;
    return 0;
}


u32 sub_0804D15C(struct Struct0202A7E0 *p)
{
    gUnknown_0202A4F8 |= gUnknown_08137B10[((u16 *)p->unk10)[1]];
    p->unk10 += 4;
    return 0;
}


u32 sub_0804D1A0(struct Struct0202A7E0 *p)
{
    u32 v = (((u16 *)p->unk10)[1] << 16) | ((u16 *)p->unk10)[2];

    sub_0804CE64(p, v);
    return 0;
}


u32 sub_0804D1D4(struct Struct0202A7E0 *p)
{
    p->unkC->unk2A = ((u16 *)p->unk10)[1];
    p->unk10 += 4;
    return 0;
}


u32 sub_0804D214(struct Entity *this)
{
}


u32 sub_0804D224(struct Struct0202A7E0 *p)
{
    if ((u8)(gUnknown_02000010.unk0.asNotBitfield.unk0 & 0x7F) == 0 || (u8)(gUnknown_02000010.unk0.asNotBitfield.unk0 & 0x7F) == 6)
        p->unk10 += 2;
    return 0;
}


u32 sub_0804D274(struct Entity *this)
{
    sub_0800D644();
    this->unk10 += 2;
    return 0;
}


void sub_0804D298(struct Entity *this)
{
    gUnknown_0813FB8C[this->unk14](this);
}


void sub_0804D2C0(struct Entity *this)
{
    struct Entity *e;

    if ((u8)(this->parameter & 1))
    {
        this->unk14 = 2;
        this->unk17 = 30;
        this->unk18 = 8;
        play_sound(0x80010000);
        play_sound(46);
        if (gUnknown_03006C80.unk1C <= 3599)
            this->unk7C.bf = 3;
        else if (gUnknown_03006C80.unk1C <= 10799)
            this->unk7C.bf = 2;
        else if (gUnknown_03006C80.unk1C <= 17999)
            this->unk7C.bf = 1;
    }
    else
    {
        this->unk14 = 1;
        this->unk1C_0 = 1;
        if (this->unk17 != 255)
            this->unk17 %= gUnknown_03006C80.unk0;
        sub_08003870(this, 0);
        sub_08003DFC(5);
        if (this->form == 18)
        {
            this->unk1C_0 = 0;
            e = sub_0804C8A8(32, 0, 0);
            if (e != NULL)
                sub_0803D3D0(this, e);
        }
    }
}


void sub_0804D448(struct Entity *this)
{
    struct Entity *e;
    u8 v;
    u8 k;

    GetNextFrame(this);
    if (this->unk29 == 0x80)
    {
        if (this->unk17 <= 3)
        {
            k = gUnknown_0814747C[this->form];
            v = gUnknown_0814744C[k][gUnknown_03006C80.unk54[this->unk17]][sub_0800099C() & 31];
            if (v != 0xFF && this->parameter == 0)
            {
                e = CreateObject(0, v, 1);
                if (e != NULL)
                    sub_0803D3D0(this, e);
            }
        }
        DeleteThisEntity(this);
    }
}


void sub_0804D4FC(struct Entity *this)
{
    struct Entity *e;

    if (this->unk17 == 0)
    {
        e = sub_0804C8A8(15, 1, 32);
        if (e != NULL)
        {
            this->unk17 = 10;
            this->unk18--;
            if (this->unk18 == 0)
            {
                this->unk14 = 3;
                this->unk17 = 2;
                play_sound(16);
                DeleteThisEntity(this->unk58);
            }
            sub_0803D4A4(this, e, gUnknown_0842882C[this->unk18 << 1] << 16, gUnknown_0842882C[(this->unk18 << 1) + 1] << 16);
        }
    }
    else
    {
        this->unk17--;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0804D5E0.inc\"");

void sub_0804D854(struct Entity *this)
{
    if (this->form > 22)
        gUnknown_08428908[this->form - 23](this);
    else
        gUnknown_08428900[this->unk14](this);
}


void sub_0804D8A4(struct Entity *this)
{
    const struct Struct08428840 *p;

    this->unk1C_0 = 2;
    this->direction = 8;
    this->unk14++;
    sub_08003870(this, this->form);
    p = &gUnknown_08428840[this->form];
    this->x.HALF_U.HI = p->x;
    this->y.HALF_U.HI = p->y;
    this->speed = p->speed;
    this->unk1D_6 = p->unk6;
    this->unk1F_6 = p->unk7;
    if (this->form == 8 || this->form == 9)
    {
        this->x.HALF_U.HI = sub_0800099C() & 255;
        this->unk18 = this->y.HALF.HI = (sub_0800099C() & 31) + 112;
        this->unk17 = sub_0800099C() & 15;
    }
    if (this->parameter != 0)
        this->x.HALF_U.HI = this->x.HALF_U.HI + 256;
}

asm(".include \"asm/non_matching/fs_game/sub_0804DA24.inc\"");

void sub_0804DDC0(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1C_0 = 2;
        this->unk1B = 159;
        this->unk20 = 0;
        this->unk1C_6 = 3;
        this->x.HALF_U.HI = 120;
        this->y.HALF_U.HI = 72;
    }
}


void sub_0804DE58(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1C_0 = 2;
        this->unk1B = 107;
        this->unk20 = 128;
        this->unk1C_6 = 3;
        this->unk1E_0 = 15;
        this->x.HALF_U.HI = 228;
        this->y.HALF_U.HI = 88;
        sub_08003870(this, 0);
    }
    else
    {
        GetNextFrame(this);
    }
}


void sub_0804DF14(struct Entity *this)
{
    gUnknown_0813FDA0[this->form](this);
}


void sub_0804DF3C(struct Entity *this)
{
    u8 i;
    u8 n;
    struct Entity *e;
    const s16 *p;

    this->unk14 = 1;
    if (gUnknown_03006C80.unk5 == 0 || (gUnknown_03006C80.unk5 != 0 && (gUnknown_0201F000[0] & 1)))
    {
        n = gMainState == 2 ? gUnknown_03006C80.unk0 - 1 : 3;
        p = gUnknown_0813FD90[n];
        for (i = 0; i <= n; i++)
        {
            e = sub_0804C8A8(4, 1, this->parameter);
            if (e != NULL)
            {
                e->x.HALF_U.HI = this->x.HALF_U.HI + ((const u16 *)p)[i * 2];
                e->y.HALF_U.HI = this->y.HALF_U.HI + ((const u16 *)p)[i * 2 + 1];
                sub_08008D90(e);
            }
        }
        if (gUnknown_03006C80.unk2 == 0 && gUnknown_03006C80.unk5 == 0)
        {
            e = sub_0804C8A8(55, 0, 0);
            if (e != NULL)
                sub_0803D3D0(this, e);
        }
        BITU16_AT(&gUnknown_03006C80, 0x80) = this->x.HALF_U.HI;
        BITU16_AT(&gUnknown_03006C80, 0x82) = this->y.HALF_U.HI;
        DeleteThisEntity(this);
    }
}


void sub_0804E0B8(struct Entity *this)
{
    gUnknown_0813FDBC[this->unk14](this);
}


void sub_0804E0E0(struct Entity *this)
{
    this->unk14++;
    this->unk3C = 0;
    this->unk17 = 30;
    this->unk18 = 0;
    this->unk1D_6 = 3;
    this->unk5E_0 = 0;
    if (gUnknown_03006C80.unk2 != 0)
    {
        this->unk1C_0 = 1;
        this->unk14++;
    }
    sub_08003870(this, 0);
}


void sub_0804E198(struct Entity *this)
{
    if (this->unk17 == 0)
    {
        if (!sub_0802C12C(this))
        {
            sub_080009F4((void *)((this->unk53 + 1) * 0x200 + 0x06010000), (gUnknown_03006C80.unk1 * 256 + 0x42120) + gUnknown_03000030, 0x100);
            this->unk1C_0 = 1;
            this->unk14++;
        }
    }
    else
    {
        this->unk17--;
    }
}


void sub_0804E248(struct Entity *this)
{
    u8 v;

    GetNextFrame(this);
    if (gUnknown_03006C80.unk6E > 1)
    {
        this->unk14++;
    }
    else
    {
        v = sub_08000580(this);
        if (sub_08000A40(v) == 1)
        {
            if (this->parameter != gUnknown_03006C80.unk4F)
            {
                gUnknown_03006C80.unk6F = 0;
                gUnknown_03006C80.unk4F = this->parameter;
            }
            gUnknown_03006C80.unk6F = gUnknown_03006C80.unk6F | v;
            if (this->unk18 == 0)
            {
                sub_08003DFC(24);
                this->unk1E_0 = 1;
            }
            this->unk18 = 1;
        }
        else
        {
            if (this->unk18 == 1)
                this->unk1E_0 = 0;
            this->unk18 = 0;
        }
    }
}


void sub_0804E364(struct Entity *a, struct Entity *b)
{
    b->x.WORD = a->x.WORD;
    b->y.WORD = a->y.WORD;
    b->z.HALF.HI = 0;
}


asm(".include \"asm/non_matching/fs_game/sub_0804E394.inc\"");


void sub_0804E434(struct Entity *this)
{
    u8 mask = sub_08000580(this);

    if ((u8)(mask & 1))
        sub_0804E364(this, gUnknown_03006A30[0].unk28);
    if ((u8)(mask & 2))
        sub_0804E364(this, gUnknown_03006A30[1].unk28);
    if ((u8)(mask & 4))
        sub_0804E364(this, gUnknown_03006A30[2].unk28);
    if ((u8)(mask & 8))
        sub_0804E364(this, gUnknown_03006A30[3].unk28);
}


void sub_0804E4E4(struct Entity *this)
{
    gUnknown_08428920[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804E50C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E6FC.inc\"");

void sub_0804E9B4(struct Entity *this)
{
    gUnknown_08428934[this->unk15](this);
}


void sub_0804E9DC(struct Entity *this)
{
    u16 v;
    struct MapDataB *m;

    m = (struct MapDataB *)sub_08015DC0(this->unk50);
    this->unk48 = gUnknown_084289A8;
    this->unk3C = 137;
    this->unk3F = 1;
    v = gUnknown_03006A30[this->parameter].unk28->unk5C;
    v = v & 85;
    this->unk5C = v;
    m->unk4[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4 << 6)].v = U16_AT(this, 0x68);
    m->unk2004[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4 << 6)].v = U8_AT(this, 0x6A);
    this->unk15++;
}


void sub_0804EB2C(struct Entity *this)
{
}

asm(".include \"asm/non_matching/fs_game/sub_0804EB3C.inc\"");

void sub_0804ED44(struct Entity *this)
{
    sub_0804EF98(this, gUnknown_03006A30[this->parameter].unk28);
}


void sub_0804ED74(struct Entity *this)
{
    DeleteThisEntity(this);
}


void sub_0804ED8C(struct Entity *this)
{
    if (gUnknown_03006A30[this->parameter].unk5 == 0)
        sub_0804EDBC(this);
}


void sub_0804EDBC(struct Entity *this)
{
    this->unk14 = 1;
    this->unk15 = 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0804EDEC.inc\"");

void sub_0804EF98(struct Entity *this, struct Entity *target)
{
    struct Entity *e = sub_0804CB38(this, 5, 128);

    if (e != NULL)
        e->unk54 = target;
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804EFC8.inc\"");

void sub_0804F22C(struct Entity *this)
{
    gUnknown_084289D8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804F254.inc\"");

void sub_0804F458(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk17 = 8;
        if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
        {
            if (this->unk16 != this->unk18)
            {
                sub_0804F6EC(this, (const struct XY16 *)&this->unk64);
                sub_08014658(BITU16_AT(this, 0x6C), ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
                this->unk18++;
                play_sound(7);
            }
        }
        else if (this->unk18 != 0)
        {
            sub_0801478C(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
            sub_0804F6EC(this, (const struct XY16 *)&this->unk68);
            this->unk18--;
            play_sound(7);
        }
    }
}


void sub_0804F5B8(struct Entity *this)
{
    if (this->unk15 == 0)
    {
        if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
            this->unk15++;
    }
    else if (--this->unk17 == 0)
    {
        this->unk17 = 8;
        if (this->unk16 != this->unk18)
        {
            sub_0804F6EC(this, (const struct XY16 *)&this->unk64);
            sub_08014658(BITU16_AT(this, 0x6C), ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
            this->unk18++;
            play_sound(7);
        }
        else
        {
            if (BITU16_AT(this, 0x6C) != 0x159)
                play_sound(16);
            DeleteThisEntity(this);
        }
    }
}


void sub_0804F6EC(struct Entity *this, const struct XY16 *offset)
{
    this->x.HALF.HI = this->x.HALF_U.HI + offset->x;
    this->y.HALF.HI = this->y.HALF_U.HI + offset->y;
}


void sub_0804F738(struct Entity *this)
{
    gUnknown_0813FE60[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804F760.inc\"");

void sub_0804FB34(struct Entity *this)
{
    sub_0803CC20(this);
    sub_08003C10(this);
    if (--this->unk17 == 0)
        sub_0804FB80(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804FB80.inc\"");

void sub_0804FF80(u16 a, struct Entity *e)
{
    if ((u16)(e->unk50 >> 14) != 2)
    {
        if ((u8)(e->direction & 8))
            sub_08014658(81, a, e->unk50);
        else
            sub_08014658(80, a, e->unk50);
    }
    else
    {
        if ((u8)(e->direction & 8))
            sub_08014658(122, a, e->unk50);
        else
            sub_08014658(121, a, e->unk50);
    }
}


void sub_0805002C(struct Entity *this)
{
    gUnknown_0813FEBC[this->unk14](this);
}


void sub_08050054(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 24;
    this->unk60 = sub_08013D20(this->form);
    this->unk78.h = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                  | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    sub_0805039C(this);
}


void sub_080500E0(struct Entity *this)
{
    if ((u8)(this->parameter & 0x80))
    {
        this->unk14 = 2;
        sub_080501DC(this);
    }
    else if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        this->unk14 = 2;
        sub_080501DC(this);
    }
}


void sub_08050160(struct Entity *this)
{
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 3;
    }
    else if (this->unk17 == 12)
    {
        sub_08050444(this);
        sub_08003E10(this, 17);
    }
}


void sub_080501C0(struct Entity *this)
{
    sub_08050B50(this);
    DeleteThisEntity(this);
}


void sub_080501DC(struct Entity *this)
{
    const u16 *q;
    u32 unused;
    u16 t;
    u16 i;
    u16 d;
    u16 v;
    s16 step;

    this->unk7C.h = 0xFFFF;
    d = (u8)(this->parameter & 7);
    if (d > 3)
        return;
    t = U16_AT(this, 0x78);
    step = gUnknown_08137B90[d];
    q = &gUnknown_0813FED8[d * 4];
    t = t + step * 3;
    for (i = 0; i <= 7; i++)
    {
        v = sub_0800932C(t, this->unk50);
        if (q[0] == v || q[1] == v || q[2] == v || q[3] == v)
        {
            this->unk7C.h = t;
            return;
        }
        t = t + step;
    }
}


u8 sub_08050338(struct Entity *this)
{
    u16 pos = this->unk78.h + gUnknown_08137B90[(u8)(this->parameter & 3)];

    if (gUnknown_0200B320.unk2004[pos] != 24)
        return TRUE;
    return FALSE;
}


u8 sub_0805039C(struct Entity *this)
{
    this->unk7C.s.unk7E |= sub_08050338(this);
    if ((u8)(this->parameter & 4))
        return this->unk7C.s.unk7E;
    if (sub_0800935C(this) == 91)
        this->unk7C.s.unk7E |= 2;
    return this->unk7C.s.unk7E;
}

asm(".include \"asm/non_matching/fs_game/sub_08050444.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08050B50.inc\"");

void sub_080515C0(struct Entity *this)
{
    gUnknown_084289E4[this->unk14](this);
}


void sub_080515E8(struct Entity *this)
{
    sub_08051600(this);
}


void sub_08051600(struct Entity *this)
{
    const u16 *t = gUnknown_0800A49C[this->form];

    this->unk1C_0 = 0;
    this->unk1D_6 = this->unk4C->unk1D_6;
    this->unk1F_6 = this->unk4C->unk1F_6;
    this->unk14++;
    this->unk2A = *t;
    sub_08003870(this, this->unk2A);
    this->unk17 = 36;
}


void sub_080516C8(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk1C_0 = 1;
        this->unk17 = 32;
        this->unk14++;
    }
}


void sub_08051744(struct Entity *this)
{
    sub_0804C448(this, this->unk4C);
}


void sub_08051760(struct Entity *this)
{
    if ((u16)(gUnknown_03000E20.unk0 & 1))
        this->z.HALF_U.HI--;
    if (--this->unk17 == 0)
    {
        this->unk17 = 60;
        this->x.HALF_U.HI = this->unk4C->x.HALF_U.HI;
        this->y.HALF_U.HI = this->unk4C->y.HALF_U.HI + 1;
        this->z.HALF_U.HI = 0xFFED;
        this->unk1D_6 = 0;
        this->unk1F_6 = 1;
        play_sound(15);
        sub_08051744(this);
        this->unk14++;
    }
}


void sub_08051870(struct Entity *this)
{
    if (--this->unk17 == 0)
        DeleteThisEntity(this);
}


void sub_080518B0(struct Entity *this)
{
    gUnknown_0814085C[this->unk14](this);
}


void sub_080518D8(struct Entity *this)
{
    this->unk14++;
    this->unk60 = sub_08013D20(this->form);
    this->unk7C.h = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                  | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    if ((u8)(this->parameter & 2))
        this->unk48 = gUnknown_0814088C;
    else
        this->unk48 = gUnknown_08140884;
}


void sub_0805197C(struct Entity *this)
{
    u32 unused;  // allocated but not used; the frame is 8 bytes

    if (this->unk60 == (this->unk60 & gUnknown_0201F000[this->unk52]))
        this->unk14++;
}


void sub_080519CC(struct Entity *this)
{
    switch (this->parameter)
    {
    case 0:
    case 1:
        sub_08014658(0x107, this->unk7C.h, this->unk50);
        break;
    }
    play_sound(16);
    sub_0804C9C8(this);
    if ((u8)(this->parameter & 1) == 0)
        DeleteThisEntity(this);
    this->unk14++;
    this->unk7C.s.unk7E = this->unk17 * 60;
}


void sub_08051A6C(struct Entity *this)
{
    u16 v;

    switch (this->parameter)
    {
    case 1:
        v = sub_08009308(this);
        if (v == 0x108)
        {
            DeleteThisEntity(this);
        }
        else if (this->unk60 != (this->unk60 & gUnknown_0201F000[this->unk52]))
        {
            if (this->unk7C.s.unk7E != 0)
            {
                this->unk7C.s.unk7E--;
                return;
            }
            this->unk14 = 1;
            sub_0801478C(this->unk7C.h, this->unk50);
            sub_0804C9C8(this);
        }
        break;
    default:
        break;
    }
}


void sub_08051B30(struct Entity *this)
{
    gUnknown_08428AE8[this->form](this);
}


void sub_08051B58(struct Entity *this)
{
    gUnknown_08428B18[this->unk14](this);
}


void sub_08051B80(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1D_6 = 3;
    this->unk1F_6 = 3;
    this->unk1E_0 = this->parameter + 8;
    this->unk1D_2 = 1;
    this->x.HALF_U.HI = gUnknown_03006A30[this->parameter].unk28->x.HALF_U.HI;
    this->y.HALF_U.HI = gUnknown_03006A30[this->parameter].unk28->y.HALF_U.HI + 24;
    BITU16_AT(this, 0x60) = this->y.HALF_U.HI + 32;
    sub_08003870(this, 0);
}


void sub_08051C8C(struct Entity *this)
{
    struct Entity *e;

    if (this->unk16 == 0 && this->y.HALF.HI < ((struct { u8 pad[0x60]; u16 v; } *)this)->v - 56)
    {
        this->unk16 = 1;
        e = sub_0804C8A8(13, 1, 0);
        if (e != NULL)
        {
            e->x.HALF_U.HI = this->x.HALF_U.HI;
            e->y.HALF_U.HI = this->y.HALF_U.HI + 64;
            e->unk54 = this;
        }
    }
}


void sub_08051D18(struct Entity *this)
{
    this->x.HALF.HI = gUnknown_03006A30[this->parameter].unk28->x.HALF_U.HI;
    this->y.HALF.HI = gUnknown_03006A30[this->parameter].unk28->y.HALF_U.HI + 24;
    sub_08051C8C(this);
}


void sub_08051D88(struct Entity *this)
{
    gUnknown_08428B20[this->unk14](this);
}


void sub_08051DB0(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1D_6 = 3;
    this->unk1F_6 = 3;
    this->unk1D_2 = 1;
    this->unk1E_0 = this->unk54->unk1E_0;
    BITU16_AT(this, 0x60) = this->y.HALF_U.HI;
    sub_08003870(this, 1);
}


void sub_08051E60(struct Entity *this)
{
    this->x.HALF.HI = this->unk54->x.HALF_U.HI;
    this->y.HALF.HI = this->unk54->y.HALF_U.HI + 64;
    sub_08051C8C(this);
}


void sub_08051EAC(struct Entity *this)
{
    gUnknown_08428B28[this->unk14](this);
}


void sub_08051ED4(struct Entity *this)
{
    s16 v;

    v = this->unk54->y.HALF_U.HI - gUnknown_03000450.unk22;
    if (v <= 15)
    {
        this->y.HALF_U.HI = 16;
        if (this->unk23 <= 6)
            sub_08003870(this, this->unk23 + 5);
        return;
    }
    else
    {
        this->y.HALF_U.HI = v - 40;
    }
    if (this->y.HALF.HI <= 15)
        this->y.HALF_U.HI = 16;
    if (this->y.HALF.HI > 144)
        this->y.HALF_U.HI = 144;
}


void sub_08051F94(struct Entity *this)
{
    struct Entity *e;

    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1D_6 = 1;
    this->unk1F_6 = 0;
    this->unk54 = gUnknown_03006A30[this->parameter].unk28;
    this->x.HALF_U.HI = this->unk54->x.HALF_U.HI;
    sub_08051ED4(this);
    if (this->unk54->form == gLCDRegisterBuffer)
    {
        sub_08003870(this, 6);
        this->unk1E_0 = gLCDRegisterBuffer + 8;
    }
    else
    {
        sub_08003870(this, this->unk54->form + 2);
    }
    this->unk60 = gUnknown_03006C80.unkC[this->parameter];
    this->unk64 = 0;
    e = sub_0804C8A8(13, 3, 0);
    e->unk54 = this;
    e = sub_0804C8A8(13, 4, 0);
    e->unk54 = this;
    e = sub_0804C8A8(13, 5, 0);
    e->unk54 = this;
    e = sub_0804C8A8(13, 6, 0);
    e->unk54 = this;
    e = sub_0804C8A8(13, 7, 0);
    e->unk54 = this;
}


void sub_080520F8(struct Entity *this)
{
    sub_08051ED4(this);
    if (gSubState == 1)
    {
        if (this->unk64 < this->unk60)
            this->unk64++;
    }
    else if (gSubState > 1)
    {
        this->unk64 = this->unk60;
    }
    if (gUnknown_02016D60_fsb.unk27 != 0)
        DeleteThisEntity(this);
}


void sub_08052160(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 0;
    this->unk1F_6 = 0;
}


void sub_080521A4(struct Entity *this, s8 a, u32 b)
{
    this->unk1C_0 = 2;
    this->x.HALF_U.HI = this->unk54->x.HALF_U.HI + a - 1;
    this->y.HALF_U.HI = this->unk54->y.HALF_U.HI + 4;
    if (this->unk54->unk23 > 6)
        this->y.HALF_U.HI = this->y.HALF_U.HI + 5;
    sub_08003870(this, (this->unk54->unk64 / b) % 10 + 12);
    if (gUnknown_02016D60_fsb.unk27 != 0)
        DeleteThisEntity(this);
}


void sub_08052274(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_08052160(this);
    sub_080521A4(this, 12, 1);
}


void sub_0805229C(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_08052160(this);
    sub_080521A4(this, 6, 10);
}


void sub_080522C4(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_08052160(this);
    sub_080521A4(this, 0, 100);
}


void sub_080522EC(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_08052160(this);
    sub_080521A4(this, -6, 1000);
}


void sub_08052318(struct Entity *this)
{
    if (this->unk14 == 0)
        sub_08052160(this);
    sub_080521A4(this, -12, 10000);
}


void sub_08052348(struct Entity *this)
{
    gUnknown_08428B30[this->unk14](this);
}


void sub_08052370(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1B = 147;
    this->unk1F_6 = 0;
    this->unk1D_6 = 0;
    this->unk5E_0 = 2;
    this->direction = 16;
    this->speed = 64;
    this->unk20 = 128;
    this->unk1C_6 = 1;
    this->x.HALF_U.HI = gUnknown_03006A30[this->parameter].unk28->x.HALF_U.HI;
    this->y.HALF_U.HI = 0xFFF0;
    sub_08003870(this, 0);
    play_sound(0x215);
}


void sub_08052494(struct Entity *this)
{
    struct Entity *e;

    if ((u16)(gUnknown_03000948.unk0 & 7) == 0)
    {
        e = sub_0804C8A8(13, 10, 0);
        if (e != NULL)
        {
            e->x.HALF_U.HI = this->x.HALF_U.HI + (sub_0800099C() & 7) - 3;
            e->y.HALF_U.HI = this->y.HALF_U.HI + (sub_0800099C() & 7) - 3;
        }
    }
}


void sub_0805251C(struct Entity *this)
{
    GetNextFrame(this);
    sub_0803CC20(this);
    if (this->y.HALF.HI > 52)
    {
        this->unk14++;
        sub_08003870(this, 1);
        gUnknown_03006A30[this->parameter].unkC = 4;
        gUnknown_03006A30[this->parameter].unk38 = 255;
        play_sound(0x216);
        play_sound(0x1A3);
    }
    sub_08052494(this);
    this->unk1E_0 = (u16)(gUnknown_03000948.unk0 & 2) ? 3 : 0;
}


void sub_080525FC(struct Entity *this)
{
    sub_08052494(this);
    this->unk1E_0 = (u16)(gUnknown_03000948.unk0 & 2) ? 3 : 0;
}


void sub_08052648(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk16 = (this->parameter >> 4) & 3;
        this->parameter = this->parameter & 3;
        this->frameIdx = this->unk16 + 22;
        this->x.HALF_U.HI = gUnknown_03006A30[this->parameter].unk28->x.HALF_U.HI;
        this->y.HALF_U.HI = gUnknown_03006A30[this->parameter].unk28->y.HALF_U.HI - gUnknown_03000450.unk22 + 20;
        this->unk17 = (this->unk16 + 1) * 30;
    }
    if (this->unk17 != 0 && --this->unk17 == 0)
    {
        this->unk1C_0 = 2;
        play_sound(0x217);
    }
}


void sub_080527AC(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 2;
        this->unk1B = 42;
        this->unk1F_6 = 0;
        this->unk1D_6 = 0;
        this->unk5E_0 = 3;
        this->direction = 16;
        this->speed = 32;
        this->unk20 = 60;
        this->unk1C_6 = 3;
        this->unk1E_0 = 1;
        sub_08003870(this, 7);
    }
    GetNextFrame(this);
    sub_0803CC20(this);
    if ((u8)(this->unk29 & 0x80))
        DeleteThisEntity(this);
}


void sub_080528B4(struct Entity *this)
{
    this->unk14 = 1;
    this->x.HALF_U.HI = 152;
    if (gUnknown_0201F000[0] != 0)
    {
        if (this->y.HALF.HI > 104)
            this->y.HALF_U.HI--;
    }
    else
    {
        this->y.HALF_U.HI = gUnknown_03006A30[0].unk28->y.HALF_U.HI;
    }
}


void sub_0805293C(struct Entity *this)
{
    struct Entity *e;

    switch (this->unk14)
    {
    case 0:
        this->unk14++;
        this->unk60 = sub_08013D20(this->form);
        break;
    case 1:
        if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
        {
            switch (this->unk17)
            {
            case 0:
            default:
                sub_0804C9C8(this);
                e = sub_0804CABC(this, this->parameter);
                if (e != NULL && this->parameter != 5)
                {
                    e->parameter = e->parameter | 1;
                    e->unk17 = 8;
                }
                break;
            case 1:
                e = sub_0804CABC(this, this->parameter);
                if (e != NULL)
                {
                    e->parameter = e->parameter | 128;
                    e->unk10 = 1;
                    if (this->parameter != 5)
                    {
                        e->parameter = e->parameter | 1;
                        e->unk17 = 8;
                    }
                }
                break;
            }
            play_sound(16);
            DeleteThisEntity(this);
        }
        break;
    }
}


void sub_08052A88(void)
{
    u8 i;
    u8 j;

    if (gUnknown_03000420[0] == 0)
        return;
    if ((u16)(gUnknown_03000E20.unk0 & 31) == 0)
        gUnknown_03006C80.unk6C = (gUnknown_03006C80.unk6C + 1) & 3;
    for (i = 0; i <= 3; i++)
    {
        j = (gUnknown_03006C80.unk6C + i) & 3;
        if (gUnknown_03006C80.unk70[j] != NULL && !((gUnknown_03006C80.unk6D >> j) & 1))
        {
            gUnknown_03006C80.unk70[j]->unk1C_0 = 2;
            sub_08003688(gUnknown_03006C80.unk70[j]);
        }
    }
}


void sub_08052B88(struct Entity *this)
{
    if (this->form == 0)
    {
        sub_08052BE4(this);
    }
    else
    {
        sub_08053028(this);
        gUnknown_03006C80.unk70[this->unk18] = this->unk1C_0 ? this : NULL;
        this->unk1C_0 = 0;
    }
}


void sub_08052BE4(struct Entity *this)
{
    gUnknown_08428C20[this->unk14](this);
}


void sub_08052C0C(struct Entity *this)
{
    s32 i;
    s32 n;
    struct Entity *e;

    for (i = 0; i <= 3; i++)
        gUnknown_03006C80.unk70[i] = NULL;
    n = 0;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        if (i != gLCDRegisterBuffer)
        {
            e = CreateObject(16, 1, (u8)i);
            if (e != NULL)
            {
                e->unk54 = this;
                e->unk58 = gUnknown_03006A30[i].unk28;
                e->unk18 = n++;
            }
        }
    }
    this->unk14++;
}

asm(".include \"asm/non_matching/fs_game/sub_08052CE4.inc\"");

void sub_08053028(struct Entity *this)
{
    gUnknown_08428C28[this->unk14](this);
    this->unk1D_6 = 0;
    this->unk5E_0 = 3;
    this->unk1F_6 = 1;
}


void sub_08053080(struct Entity *this)
{
    this->unk1B = 21;
    this->unk1E_0 = this->parameter + 7;
    this->unk14++;
    this->unk17 = 8;
    this->x.HALF.HI = 6;
    this->y.HALF.HI = 6;
    sub_08003870(this, this->parameter);
}

asm(".include \"asm/non_matching/fs_game/sub_08053124.inc\"");

void sub_080533EC(struct Entity *this)
{
    gUnknown_0814094C[this->unk14](this);
}


void sub_08053414(struct Entity *this)
{
}


void sub_08053424(struct Entity *this)
{
}


void sub_08053434(struct Entity *this)
{
    gUnknown_08428C30[this->unk14](this);
}


void sub_0805345C(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk2E = 0;
    this->unk14++;
    this->unk3C = 140;
    this->unk40 = 54;
    this->unk48 = gUnknown_08428C38;
    this->unk5C = 0x200;
    sub_080005F0(this);
    sub_08003870(this, 7);
    play_sound(29);
}


void sub_08053514(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk29 != 0)
    {
        if ((u8)(this->unk29 & 0x80))
        {
            sub_08000620(this);
            DeleteThisEntity(this);
        }
        else
        {
            sub_08053564(this, 5);
        }
    }
}


void sub_08053564(struct Entity *this, u16 a)
{
    s32 x;
    s32 y;
    u8 i;
    u8 j;

    y = 16;
    for (i = 3; i != 0; i--)
    {
        x = 16;
        for (j = 3; j != 0; j--)
        {
            sub_08001B70(this, a, this->x.HALF_U.HI + x, this->y.HALF_U.HI + y);
            x -= 16;
        }
        y -= 16;
    }
}


void sub_08053610(struct Entity *this)
{
    gUnknown_08428C40[this->unk14](this);
}


void sub_08053638(struct Entity *this)
{
    u16 *map;

    this->unk14++;
    map = sub_08015DC0(this->unk50);
    this->unk7C.p = &map[(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                          | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6)) + 2];
    this->unk18 = this->form & 0x80;
    this->form = this->form & 31;
    this->unk60 = this->unk18 ? sub_08013D20(this->parameter) : 0;
}


void sub_080536F8(struct Entity *this)
{
    u16 *map;

    map = sub_08015DC0(this->unk50);
    if (((struct MapData *)map)->unk5004[*this->unk7C.p] == 270)
    {
        gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->form];
        if (this->unk17 != 0)
        {
            this->unk14++;
            this->unk78.h = this->unk17 * 30;
        }
        else
        {
            DeleteThisEntity(this);
        }
    }
}


void sub_080537C4(struct Entity *this)
{
    if (this->unk18 != 0 && (gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        DeleteThisEntity(this);
    }
    else if (--this->unk78.h == 0)
    {
        sub_08014658(0x10D, ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
        gUnknown_0201F000[this->unk52] &= ~gUnknown_08137B10[this->form];
        this->unk14--;
    }
}


void sub_080538D8(struct Entity *this)
{
    gUnknown_08140984[this->unk14](this);
}


void sub_08053900(struct Entity *this)
{
    u16 *map;

    this->unk14++;
    map = sub_08015DC0(this->unk50);
    this->unk7C.p = &map[(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                          | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6)) + 2];
    this->unk78.h = *this->unk7C.p;
}


void sub_08053988(struct Entity *this)
{
    if (this->unk78.h != *this->unk7C.p)
    {
        this->unk14++;
        this->unk17 = 15;
    }
}


void sub_080539D8(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->form];
        if (this->parameter != 0)
            sub_08013C8C(sub_08012F84(this->unk52, this->parameter), gUnknown_0201EFF8[this->unk52][0],
                         gUnknown_0201EFF8[this->unk52][1], this->unk52);
        DeleteThisEntity(this);
    }
}


void sub_08053AA4(struct Entity *this)
{
    gUnknown_081409A4[this->unk14](this);
}


void sub_08053ACC(struct Entity *this)
{
}


void sub_08053ADC(struct Entity *this)
{
}


void sub_08053AEC(struct Entity *this)
{
}


void sub_08053AFC(struct Entity *this)
{
    gUnknown_08428C4C[this->form](this);
}


// Whether all of bits start..start+count-1 of mask are set
u8 sub_08053B24(u32 mask, u8 start, u8 count)
{
    u8 i;
    u8 all;

    all = 1;
    for (i = start; i < start + count; i++)
    {
        if (!((mask >> i) & 1))
            all = 0;
    }
    return all;
}


// Whether any of bits start..start+count-1 of mask is set
u8 sub_08053B90(u32 mask, u8 start, u8 count)
{
    u8 i;

    for (i = start; i < start + count; i++)
    {
        if ((mask >> i) & 1)
            return 1;
    }
    return 0;
}


void sub_08053BF0(struct Entity *this)
{
    gUnknown_08428C58[this->unk14](this);
}


void sub_08053C18(struct Entity *this)
{
    this->unk17 = 20;
    this->unk18 = 3;
    this->unk14++;
}


void sub_08053C6C(struct Entity *this)
{
    if (this->unk17 != 0)
        this->unk17--;
    else if ((u8)sub_08053B24(gUnknown_0201F000[this->unk52], 0, 3))
        this->unk14++;
}


void sub_08053CE4(struct Entity *this)
{
    if ((u8)sub_08053B90(gUnknown_0201F000[this->unk52], this->unk18, 3))
    {
        this->unk17 = 20;
        this->unk14++;
    }
}


void sub_08053D4C(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 0;
        play_sound(64);
    }
    else if (sub_08053B24(gUnknown_0201F000[this->unk52], this->unk18, 3))
    {
        this->unk14++;
        this->unk18 += 3;
        play_sound(8);
    }
}


void sub_08053DFC(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 0;
        play_sound(64);
    }
    else if (sub_08053B24(gUnknown_0201F000[this->unk52], 12, 3))
    {
        gUnknown_0201F000[this->unk52] |= 0x8000;
        play_sound(16);
        DeleteThisEntity(this);
    }
}


void sub_08053EA8(struct Entity *this)
{
    gUnknown_08428C80[this->unk14](this);
}


void sub_08053ED0(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 0;
        play_sound(64);
    }
    else if (sub_08053B24(gUnknown_0201F000[this->unk52], 9, 3))
    {
        gUnknown_0201F000[this->unk52] |= 0x1000;
        play_sound(16);
        DeleteThisEntity(this);
    }
}


void sub_08053F7C(struct Entity *this)
{
    gUnknown_08428CA0[this->unk14](this);
}


void sub_08053FA4(struct Entity *this)
{
    this->unk17 = 20;
    this->unk18 = 2;
    this->unk14++;
}


void sub_08053FF8(struct Entity *this)
{
    if (this->unk17 != 0)
        this->unk17--;
    else if ((u8)sub_08053B24(gUnknown_0201F000[this->unk52], 0, 2))
        this->unk14++;
}


void sub_08054070(struct Entity *this)
{
    if ((u8)sub_08053B90(gUnknown_0201F000[this->unk52], this->unk18, 2))
    {
        this->unk17 = 20;
        this->unk14++;
    }
}


void sub_080540D8(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 0;
        play_sound(64);
    }
    else if (sub_08053B24(gUnknown_0201F000[this->unk52], this->unk18, 2))
    {
        this->unk14++;
        this->unk18 += 2;
        play_sound(8);
    }
}


void sub_08054188(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 0;
        play_sound(64);
    }
    else if (sub_08053B24(gUnknown_0201F000[this->unk52], 8, 2))
    {
        gUnknown_0201F000[this->unk52] |= 0x400;
        play_sound(16);
        DeleteThisEntity(this);
    }
}


void sub_08054234(struct Entity *this)
{
    gUnknown_08428CC8[this->form](this);
}


void sub_0805425C(struct Entity *this)
{
    gUnknown_08428CD0[this->unk14](this);
}


void sub_08054284(struct Entity *this)
{
    u8 i;
    struct Entity *e;

    for (i = 0; i <= 11; i++)
        ((struct { u8 pad[0x60]; struct BitU16A v[12]; } *)this)->v[i].v = ((gUnknown_081409F0[i * 2] + gUnknown_0201EFF8[this->unk52][0]) >> 4) | (((gUnknown_081409F0[i * 2 + 1] + gUnknown_0201EFF8[this->unk52][1]) >> 4) << 6);
    e = sub_080124EC(this, 1, 0);
    if (e != NULL)
    {
        this->unk4C = e;
        e->unk4C = this;
    }
    this->unk14++;
}


void sub_08054370(struct Entity *this)
{
    u32 v;

    v = gUnknown_0201F000[this->unk52];
    if ((v & 20) == 20)
    {
        DeleteThisEntity(this);
    }
    else
    {
        if (v & 8)
        {
            if (!(v & 16))
            {
                gUnknown_0201F000[this->unk52] |= 16;
            }
            else if (!(v & 32))
            {
                gUnknown_0201F000[this->unk52] |= 32;
            }
            else if (!(v & 64))
            {
                gUnknown_0201F000[this->unk52] |= 64;
                DeleteThisEntity(this);
                return;
            }
            gUnknown_0201F000[this->unk52] &= ~8;
        }
        if ((v & 3) == 3)
        {
            gUnknown_0201F000[this->unk52] &= ~4;
            sub_08054A38(this);
            sub_0805485C(this);
            this->unk4C->unk14 = 1;
            this->unk14++;
        }
    }
}


void sub_08054508(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & 3) != 3)
        this->unk14--;
}


void sub_08054554(struct Entity *this)
{
    gUnknown_08428CDC[this->unk14](this);
}


void sub_0805457C(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & 20) == 20 || (gUnknown_0201F000[this->unk52] & 64))
        DeleteThisEntity(this);
}


void sub_080545D4(struct Entity *this)
{
    this->unk17 = 60;
    this->unk18 = 0;
    this->unk14++;
}


void sub_08054620(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk17 = 60;
        play_sound(42);
        sub_08014658(0x10E, ((struct { u8 pad[0x60]; struct BitU16A v[12]; } *)this->unk4C)->v[this->unk18].v, this->unk50);
        if (++this->unk18 > 5)
        {
            this->unk17 = sub_08054974(this);
            if (this->unk17 != 0)
            {
                play_sound(3);
                gUnknown_0201F000[this->unk52] |= 4;
                sub_08054A38(this);
                this->unk14 = 0;
            }
            else
            {
                this->unk14++;
            }
        }
    }
}


void sub_08054744(struct Entity *this)
{
    u8 v;
    u16 *p;

    v = sub_08054974(this);
    if (v != this->unk17)
    {
        p = (u16 *)this->unk4C->unk6C;
        while (this->unk17 != v)
        {
            if (sub_0800932C(p[this->unk17], this->unk50) == 0x10E)
            {
                play_sound(9);
                this->unk17++;
            }
            else
            {
                play_sound(3);
                gUnknown_0201F000[this->unk52] |= 4;
                sub_08054A38(this->unk4C);
                this->unk14 = 0;
                return;
            }
        }
    }
    if (this->unk17 == 6)
    {
        play_sound(16);
        gUnknown_0201F000[this->unk52] |= 8;
        this->unk14 = 0;
    }
}


#define ARR60(i) (((struct { u8 pad[0x60]; struct BitU16A v[12]; } *)this)->v[i].v)
void sub_0805485C(struct Entity *this)
{
    u32 n;
    u32 r;
    u16 t;

    n = 5;
    while (n != 0)
    {
        r = sub_0800099C() % n;
        t = ARR60(n);
        ARR60(n) = ARR60(r);
        ARR60(r) = t;
        t = ARR60(n + 6);
        ARR60(n + 6) = ARR60(r + 6);
        ARR60(r + 6) = t;
        n--;
    }
}
#undef ARR60


u8 sub_08054974(struct Entity *this)
{
    u16 *p;
    u8 n;
    u8 i;

    n = 0;
    p = (u16 *)this->unk4C->unk6C;
    this->parameter = 0;
    for (i = 0; i <= 5; i++)
    {
        if (sub_0800932C(p[i], this->unk50) == 0x10E)
        {
            this->parameter |= 1 << i;
            n++;
        }
    }
    return n;
}


asm(".include \"asm/non_matching/fs_game/sub_08054A38.inc\"");


void sub_08054A8C(struct Entity *this)
{
    gUnknown_08428CEC[this->unk14](this);
}


void sub_08054AB4(struct Entity *this)
{
    u32 unused;
    u32 v;

    this->unk60 = sub_08013D20(this->form);
    this->unk14++;
    v = sub_08012F84(this->unk52, this->unk17);
    BITU16_AT(this, 0x68) = ((v & 255) << 4) + gUnknown_0201EFF8[this->unk52][0];
    v >>= 8;
    BITU16_AT(this, 0x6A) = ((v & 255) << 4) + gUnknown_0201EFF8[this->unk52][1];
    v >>= 8;
    BITU16_AT(this, 0x6C) = v & 255;
    v >>= 8;
    BITU16_AT(this, 0x6E) = v & 255;
    if (this->y.HALF.HI == 0)
        this->y.HALF_U.HI = 2;
    BITU16_AT(this, 0x70) = this->x.HALF.HI * 60;
}


void sub_08054C04(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        play_sound(0x800D01A7);
        this->unk14++;
        this->unk17 = 60;
    }
}


void sub_08054C74(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14++;
        this->unk17 = 60;
    }
}


void sub_08054CDC(struct Entity *this)
{
    if (--this->unk17 == 0)
        this->unk14++;
}

asm(".include \"asm/non_matching/fs_game/sub_08054D30.inc\"");

void sub_08054EE0(struct Entity *this)
{
    gUnknown_08428D20[this->form](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08054F08.inc\"");

void sub_080550C0(struct Entity *this)
{
    struct Entity *e;

    if ((gUnknown_03006C80.unk4C >> (this->unk52 - 1)) & 1)
    {
        e = sub_0804C8A8(0, 5, 0);
        if (e != NULL)
        {
            e->unk52 = this->unk52;
            e->unk50 = this->unk50;
            e->x.HALF_U.HI = this->x.HALF_U.HI;
            e->y.HALF_U.HI = this->y.HALF_U.HI;
        }
    }
    DeleteThisEntity(this);
}


void sub_08055170(struct Entity *this)
{
    gUnknown_08428D2C[this->unk14](this);
}


void sub_08055198(struct Entity *this)
{
    this->unk60 = sub_08013D20(this->parameter);
    this->unk14++;
}


void sub_080551D0(struct Entity *this)
{
    struct Entity *e;

    if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        e = sub_080123E8();
        if (e != NULL && sub_0800A148(e, gUnknown_08428D38[this->unk17], this->unk52))
            e->unk52 = this->unk52;
        this->unk14++;
    }
}


void sub_08055270(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & this->unk60) != this->unk60)
        this->unk14--;
}


void sub_080552C0(struct Entity *this)
{
    gUnknown_08428D84[this->unk14](this);
}


void sub_080552E8(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk2E = 1;
    this->unk1C_4 = 1;
    this->unk1E_0 = sub_0802C3E0(this->form);
    this->unk20 = this->unk20 + gUnknown_08428D70[this->form];
    this->z.HALF.HI = -4;
}


void sub_080553BC(struct Entity *this)
{
    if ((u16)(gUnknown_03000948.unk0 & 7) == 0)
        this->z.HALF.HI = gUnknown_08428D8C[(u8)(++this->unk17 & 7)] - 8;
}


void sub_08055438(struct Entity *this)
{
    gUnknown_08428DB8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08055460.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055688.inc\"");

void sub_08055A08(struct Entity *this)
{
    struct Struct03006A30 *p = &gUnknown_03006A30[this->form];

    if (gLCDRegisterBuffer == this->form && (gUnknown_0202D0D0 & (1 << p->unk1C)) == 0)
    {
        gUnknown_0202D0D0 |= 1 << p->unk1C;
        sub_0800D67C(gUnknown_08428D94[p->unk1C]);
    }
}


void sub_08055A84(struct Entity *this)
{
    gUnknown_08428DD0[this->unk14](this);
}


void sub_08055AAC(struct Entity *this)
{
    this->unk14++;
    this->unk48 = gUnknown_08428DC8;
    this->unk10 = 0x1C000;
    this->direction = sub_0800099C() & 31;
    this->speed = 0x100;
    this->unk17 = 10;
}


void sub_08055B24(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        sub_0803CC20(this);
        this->unk17--;
    }
    else
    {
        sub_08002E64(this);
    }
    if (sub_08003594(this, 0x2400))
    {
        this->unk4C->unk1D_6 = 0;
    }
    else
    {
        this->unk4C->unk1D_6 = 3;
        DeleteThisEntity(this);
    }
    this->unk4C->x.WORD = this->x.WORD;
    this->unk4C->y.WORD = this->y.WORD;
    this->unk4C->z.WORD = this->z.WORD;
}


void sub_08055BB4(struct Entity *this)
{
    gUnknown_08428DD8[this->form](this);
}


void sub_08055BDC(struct Entity *this)
{
    this->unk14 = 1;
    if (gUnknown_0201F000[0] & (1 << this->parameter))
    {
        gUnknown_0201F000[4] |= 1 << this->parameter;
        sub_0804C9C8(this);
        sub_0804CABC(this, gUnknown_08428DF8[sub_08000A40(gUnknown_0201F000[4] & gUnknown_08428DE8[(u8)(this->parameter >> 2)])]);
        DeleteThisEntity(this);
    }
}


void sub_08055C78(struct Entity *this)
{
    gUnknown_08428E00[this->unk14](this);
}


void sub_08055CA0(struct Entity *this)
{
    this->unk14 = 1;
    this->unk18 = sub_080093C8(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                               | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
}


void sub_08055D10(struct Entity *this)
{
    u8 v;

    v = sub_080093C8(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
    if (this->unk18 != v)
    {
        this->unk60 = v == 15 ? this->parameter : this->unk17;
        this->unk14 = 2;
        this->unk16 = 0;
    }
}


void sub_08055DA4(struct Entity *this)
{
    u32 unused;

    if (--this->unk16 == 0)
    {
        this->unk14 = 1;
        this->unk18 = sub_080093C8(((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
        sub_08013C8C(sub_08012F84(this->unk52, this->unk60), gUnknown_0201EFF8[this->unk52][0], gUnknown_0201EFF8[this->unk52][1], this->unk52);
    }
}


void sub_08055E88(struct Entity *this)
{
    gUnknown_08428E0C[this->form](this);
}


void sub_08055EB0(struct Entity *this)
{
    gUnknown_08428E3C[this->unk14](this);
}


void sub_08055ED8(struct Entity *this)
{
    this->unk1C_0 = 2;
    this->unk1D_6 = this->form == 0 ? 2 : 1;
    this->unk1F_6 = 1;
    this->unk14++;
    this->unk1D_4 = 1;
    this->unk17 = 7;
    this->x.HALF.HI = 112;
    this->y.HALF.HI = 64;
    sub_08003870(this, this->form);
}

asm(".include \"asm/non_matching/fs_game/sub_08055FA0.inc\"");

void sub_08056048(struct Entity *this)
{
    if (gSubState == 3)
    {
        if ((sub_0800099C() & 0x7F) == 0)
            CreateObject(40, 9, (u8)(sub_0800099C() & 3));
        if ((sub_0800099C() & 0xFF) == 0)
            CreateObject(40, 10, 0);
    }
}


void sub_080560A0(struct Entity *this)
{
    gUnknown_08428E48[this->unk14](this);
}


void sub_080560C8(struct Entity *this)
{
    this->unk1C_0 = 2;
    this->unk1D_6 = 0;
    this->unk1F_6 = 1;
    this->unk14++;
    this->x.HALF.HI = 240;
    this->y.HALF.HI = 232;
    this->speed = 0xC00;
    this->direction = 29;
    sub_08003870(this, this->form);
}


void sub_08056178(struct Entity *this)
{
    sub_0803CC20(this);
    if (this->y.HALF.HI <= 80)
    {
        this->y.HALF.HI = 80;
        this->unk17 = 30;
        this->unk14++;
        sub_0800C0B0(2, 16);
        play_sound(0x208);
    }
}


void sub_080561EC(struct Entity *this)
{
    if (--this->unk17 == 0xFF)
    {
        this->unk14++;
        this->direction = 8;
        this->speed = 0x200;
    }
}


void sub_08056260(struct Entity *this)
{
    sub_0803CC20(this);
    this->speed -= 16;
    if (this->speed <= 0)
    {
        this->unk14++;
        this->unk17 = 0;
    }
}


void sub_080562B0(struct Entity *this)
{
    struct Entity *e;

    if (--this->unk17 == 255)
    {
        this->unk14++;
        this->direction = 24;
        this->speed = 0x800;
        e = sub_0804C8A8(40, 2, 0);
        e->x.HALF_U.HI = this->x.HALF_U.HI;
        e->y.HALF_U.HI = this->y.HALF_U.HI;
        e = sub_0804C8A8(40, 2, 1);
        e->x.HALF_U.HI = this->x.HALF_U.HI;
        e->y.HALF_U.HI = this->y.HALF_U.HI;
        e = sub_0804C8A8(40, 2, 2);
        e->x.HALF_U.HI = this->x.HALF_U.HI;
        e->y.HALF_U.HI = this->y.HALF_U.HI;
        play_sound(0x209);
    }
}


void sub_080563D8(struct Entity *this)
{
    sub_0803CC20(this);
    if (this->x.HALF.HI < 72)
    {
        this->x.HALF.HI = 72;
        this->unk14++;
        this->unk17 = 5;
    }
}


void sub_0805643C(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        sub_0800C0B0(2, 8);
        CreateObject(40, 0, 0);
        CreateObject(40, 3, 0);
        DeleteThisEntity(this);
        gSubState++;
        play_sound(0x20A);
        play_sound(0x1B2);
    }
}


void sub_080564C0(struct Entity *this)
{
    gUnknown_08428E64[this->unk14](this);
}


void sub_080564E8(struct Entity *this)
{
    this->unk1C_0 = 2;
    this->unk1D_6 = this->parameter + 1;
    this->unk1F_6 = 1;
    this->speed = (6 - this->parameter * 2) << 8;
    this->direction = 24;
    this->unk14++;
    sub_08003870(this, this->parameter + 12);
}


void sub_08056594(struct Entity *this)
{
    sub_0803CC20(this);
    if (this->x.HALF.HI < (this->parameter + 1) * 26 + 72)
        this->x.HALF.HI = (this->parameter + 1) * 26 + 72;
    if (gUnknown_03000520.unk0 != 0)
        DeleteThisEntity(this);
}


void sub_080565F8(struct Entity *this)
{
    gUnknown_08428E6C[this->unk14](this);
}


void sub_08056620(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1D_6 = 0;
    this->unk5E_0 = 3 - this->parameter;
    this->unk1F_6 = 0;
    this->direction = 24;
    this->x.HALF.HI = 0x100;
    this->y.HALF.HI = 112;
    sub_08003870(this, this->parameter + 4);
}


void sub_080566EC(struct Entity *this)
{
    if (gSubState == 4 && (gUnknown_02016D60_fs.unk8 >> this->parameter) & 1)
    {
        this->unk14++;
        this->x.HALF.HI = this->parameter * 40 + 252;
        this->speed = 0x800;
        this->unk17 = 0;
        sub_08056988(this);
    }
}


void sub_08056778(struct Entity *this)
{
    if (gSubState != 4 || !((gUnknown_02016D60_fs.unk8 >> this->parameter) & 1))
    {
        if (gSubState != 4 || ++this->unk17 > 59)
        {
            this->unk14 = 1;
            this->x.HALF_U.HI = 256;
        }
    }
    else
    {
        this->unk17 = 0;
        if (this->x.HALF.HI > 228 - (3 - this->parameter) * 24)
        {
            sub_0803CC20(this);
            if (this->speed > 256)
                this->speed -= 32;
        }
        if (this->x.HALF.HI <= 228 - (3 - this->parameter) * 24)
            this->x.HALF_U.HI = 228 - (3 - this->parameter) * 24;
    }
    sub_08056988(this);
}


void sub_080568A4(struct Entity *this)
{
    gUnknown_08428E78[this->unk14](this);
}


void sub_080568CC(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 0;
    this->unk1F_6 = 0;
    this->x.HALF.HI = 0x100;
    this->y.HALF.HI = 96;
    gUnknown_02016D60_fs.unk20 = this;
    sub_08003870(this, 8);
}


void sub_0805694C(struct Entity *this)
{
    this->unk1C_0 = gSubState == 4 ? 2 : 0;
}


void sub_08056988(struct Entity *this)
{
    struct Entity *e;

    if (this->parameter == gLCDRegisterBuffer)
    {
        e = gUnknown_02016D60_fs.unk20;
        if (e != NULL)
        {
            e->x.HALF.HI = this->x.HALF.HI;
            e->unk1E_0 = this->parameter + 8;
        }
    }
}


void sub_080569F0(struct Entity *this)
{
    gUnknown_08428E80[this->unk14](this);
}


void sub_08056A18(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 0;
    this->unk1F_6 = 0;
    this->x.HALF.HI = 228;
    this->y.HALF.HI = 88;
    this->unk1B = 107;
    this->unk20 = 128;
    this->unk1C_6 = 2;
    this->unk1E_0 = 7;
    sub_08003870(this, 0);
}


void sub_08056AE0(struct Entity *this)
{
    if (gLCDRegisterBuffer == 0)
    {
        this->unk1C_0 = ((u8)(gUnknown_02016D60_fs.unk8 & 0x80) && gSubState == 4) ? 2 : 0;
        GetNextFrame(this);
    }
    else
    {
        this->unk1C_0 = 0;
    }
}


void sub_08056B54(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk1D_6 = 0;
        this->unk1F_6 = 0;
        this->x.HALF_U.HI = 120;
        this->y.HALF_U.HI = 80;
        this->unk1B = 78;
        this->unk20 = 160;
        this->unk1C_6 = 2;
        this->unk1E_0 = 7;
    }
    else
    {
        this->unk1C_0 = 0;
        if (gSubState == 4)
        {
            if (gLCDRegisterBuffer != 0 || !(u8)(gUnknown_02016D60_fs.unk8 & 0x80))
            {
                if ((u16)(gUnknown_03000948.unk0 & 16))
                    this->unk1C_0 = 2;
            }
        }
    }
}


void sub_08056C80(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk1D_6 = 0;
        this->unk1F_6 = 0;
        this->unk14++;
        this->x.HALF.HI = 120;
        this->y.HALF.HI = 136;
        sub_08003870(this, 9);
    }
    else
    {
        this->unk1C_0 = ((u16)(gUnknown_03000948.unk0 & 16) && gSubState == 3) ? 2 : 0;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08056D40.inc\"");

void sub_08056DCC(struct Entity *this, u8 b)
{
    if (this->unk17 == 0)
    {
        load_palette((u16 *)(((this->parameter * 3 + b) * 32 + 0x2820) + gUnknown_03000030), this->parameter + 24, 1);
        this->unk17 = 8;
        this->unk14++;
    }
    else
    {
        this->unk17--;
    }
}


void sub_08056E6C(struct Entity *this)
{
    if (gSubState != 3)
    {
        DeleteThisEntity(this);
        return;
    }
    switch (this->unk14)
    {
    case 0:
        sub_08056DCC(this, 0);
        break;
    case 1:
        sub_08056DCC(this, 1);
        break;
    case 2:
        sub_08056DCC(this, 2);
        break;
    case 3:
        sub_08056DCC(this, 1);
        break;
    case 4:
        sub_08056DCC(this, 0);
        break;
    default:
        DeleteThisEntity(this);
    }
}


void sub_08056EF4(struct Entity *this)
{
    gUnknown_08428E88[this->unk14](this);
}


void sub_08056F1C(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1B = 146;
    this->unk20 = 64;
    this->unk1C_6 = 2;
    this->unk1D_6 = 0;
    this->unk1F_6 = 0;
    this->unk1E_0 = 15;
    this->x.HALF_U.HI = 46;
    this->y.HALF_U.HI = 42;
    this->direction = 29;
    this->speed = 256;
    sub_08003870(this, 0);
}


void sub_08057010(struct Entity *this)
{
    sub_0803CC20(this);
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
        DeleteThisEntity(this);
}


void sub_08057048(struct Entity *this)
{
    gUnknown_08140C28[this->unk14](this);
}


void sub_08057070(struct Entity *this)
{
    struct MapData *m;
    u16 t;

    m = (struct MapData *)sub_08015DC0(this->unk50);
    t = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    if (gUnknown_03006C80.unk2 == 0 && sub_0805722C(this, t, m->unk5004[m->unk4[t]]))
    {
        DeleteThisEntity(this);
    }
    else
    {
        this->unk78.p = &m->unk4[t];
        this->unk7C.h = *this->unk78.p;
        this->unk1E_0 = gUnknown_08140C34[this->form];
        this->unk14++;
        this->unk1C_0 = 1;
        this->unk2E = 0;
        this->unk5E_0 = 0;
        sub_08003870(this, 0);
    }
}


void sub_080571BC(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        sub_08003870(this, 0);
        this->frameTimer = (sub_0800099C() & 0xF0) + 1;
    }
    if (*this->unk78.p != this->unk7C.h)
        DeleteThisEntity(this);
}


u8 sub_0805722C(struct Entity *this, u16 a, u16 b)
{
    struct Entity *e;

    if ((sub_0800099C() & 63) <= 1)
    {
        e = sub_08012468(9);
        if (e != NULL)
        {
            sub_0803D3D0(this, e);
            e->form = this->form;
            if (b <= 36)
                sub_080144F0(79, a, 0x4000);
            else
                sub_080144F0(120, a, 0x8000);
        }
        return TRUE;
    }
    return FALSE;
}


void sub_080572AC(struct Entity *this)
{
    gUnknown_08140C44[this->unk14](this);
}


void sub_080572D4(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk2E = 0;
    if (this->form == 1)
    {
        this->y.HALF.HI -= 8;
        this->unk17 = 40;
    }
    sub_08003870(this, 0);
    sub_08003DFC(42);
}


void sub_08057368(struct Entity *this)
{
    GetNextFrame(this);
    if (this->form == 1 && --this->unk17 == 0xFF)
        DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_080573B8.inc\"");

void sub_080576CC(struct Entity *this)
{
    gUnknown_08428E90[this->unk14](this);
}


void sub_080576F4(struct Entity *this)
{
    this->unk14++;
    this->unk60 = sub_08013D20(this->parameter);
    this->unk64 = gUnknown_08137B10[this->form];
    this->unk18 = 30;
}


void sub_08057758(struct Entity *this)
{
    if (this->unk18 != 0)
    {
        this->unk18--;
    }
    else if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        gUnknown_0201F000[this->unk52] &= ~this->unk64;
    }
    else
    {
        gUnknown_0201F000[this->unk52] |= this->unk64;
        if (this->unk17 == 0)
            DeleteThisEntity(this);
    }
}


void sub_0805781C(struct Entity *this)
{
    struct Entity *e;

    switch (this->unk14)
    {
    case 0:
        this->unk14++;
        this->unk60 = sub_08013D20(this->form);
        break;
    case 1:
        if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
        {
            sub_0804C9C8(this);
            e = sub_0804C8A8(33, this->parameter, 0);
            if (e != NULL)
            {
                e->x.WORD = this->x.WORD;
                e->y.WORD = this->y.WORD;
                sub_08008D90(e);
            }
            sub_08014658(this->unk17 + 0x109, (this->x.HALF.HI >> 4) | ((this->y.HALF.HI >> 4) << 6), this->unk50);
            play_sound(16);
            DeleteThisEntity(this);
        }
        break;
    }
}


void sub_08057904(struct Entity *this)
{
    gUnknown_08428E98[this->unk14](this);
}


void sub_0805792C(struct Entity *this)
{
    if (this->form == 0)
    {
        this->unk1C_0 = 1;
        this->unk1E_0 = gUnknown_03006730->unk28->form + 7;
        this->unk4C = gUnknown_03006730->unk28;
    }
    else
    {
        this->unk1C_0 = 2;
    }
    this->unk1D_6 = 0;
    this->unk1F_6 = 1;
    this->unk17 = this->parameter;
    this->unk14++;
    sub_08003870(this, 0);
    sub_08057A00(this);
}


void sub_08057A00(struct Entity *this)
{
    this->x.HALF_U.HI = this->unk4C->x.HALF_U.HI;
    this->y.HALF_U.HI = this->unk4C->y.HALF_U.HI;
    this->z.HALF_U.HI = this->unk4C->z.HALF_U.HI + gUnknown_08140C88[(u8)(this->unk18 & 7)];
    if (this->form == 1)
        this->z.HALF_U.HI -= 8;
    if ((u16)(gUnknown_03000948.unk0 & 1))
        this->unk18++;
    if (this->parameter != 0)
    {
        if (--this->unk17 == 0)
            DeleteThisEntity(this);
        else if (gUnknown_03006C80.unk6D != 0)
            DeleteThisEntity(this);
    }
}


void sub_08057B20(struct Entity *this)
{
    gUnknown_08428EA0[this->form](this);
}


void sub_08057B48(struct Entity *this)
{
    u8 i;
    struct Entity *e;

    this->unk14++;
    sub_0802E5E0();
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        e = sub_0804C8A8(81, 1, sub_0802E750(i));
        if (e != NULL)
            e->unk4C = gUnknown_03006A30[i].unk28;
    }
    DeleteThisEntity(this);
}


void sub_08057BE4(struct Entity *this)
{
    gUnknown_08428EC0[this->unk14](this);
}


void sub_08057C0C(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 0;
    this->unk5E_0 = 3;
    this->unk1F_6 = 0;
    this->unk1E_0 = this->unk4C->form + 7;
    this->unk17 = (4 - this->parameter) * 20;
    sub_08003870(this, this->parameter);
    sub_08057CB0(this);
}


void sub_08057CB0(struct Entity *this)
{
    if (this->unk17 == 0)
    {
        this->unk1C_0 = 1;
        this->x.HALF_U.HI = this->unk4C->x.HALF_U.HI;
        this->y.HALF_U.HI = this->unk4C->y.HALF_U.HI;
        this->z.HALF_U.HI = this->unk4C->z.HALF_U.HI + gUnknown_08140C88[(u8)(this->unk18 & 7)];
        if ((u16)(gUnknown_03000948.unk0 & 1))
            this->unk18++;
    }
    else
    {
        this->unk17--;
    }
}


void sub_08057D94(struct Entity *this)
{
    gUnknown_08428EC8[this->form](this);
}


void sub_08057DBC(struct Entity *this)
{
    gUnknown_08428F60[this->unk14](this);
}


void sub_08057DE4(struct Entity *this)
{
    const u16 *p;

    this->unk14++;
    this->unk1F_6 = 2;
    this->unk1D_6 = 2;
    this->unk1C_0 = 2;
    p = &gUnknown_08428F04[this->form * 3];
    this->x.HALF_U.HI = *p++;
    this->y.HALF_U.HI = *p++;
    this->frameIdx = *p;
}


void sub_08057EB0(struct Entity *this)
{
    if (gUnknown_02016D60_fs.unk8 > 2 && gUnknown_02016D60_fs.unk2 == this->parameter)
    {
        this->unk14++;
        this->unk1D_2 = 1;
        BITU16_AT(&gUnknown_030004A0, 0x66) = 0x3F40;
        BITU16_AT(&gUnknown_030004A0, 0x68) = 16;
        this->unk17 = 16;
        play_sound(127);
    }
}


void sub_08057F58(struct Entity *this)
{
    BITU16_AT(&gUnknown_030004A0, 0x68) = ((16 - this->unk17) << 8) | this->unk17;
    if (--this->unk17 == 0)
    {
        this->unk14++;
        this->unk1D_2 = 0;
        this->unk1C_0 = 0;
        this->x.HALF_U.HI = gUnknown_08428F70[this->parameter * 2];
        this->y.HALF_U.HI = gUnknown_08428F70[this->parameter * 2 + 1];
        gUnknown_02016D60_fs.unk8 = 4;
    }
}


void sub_08058058(struct Entity *this)
{
    if (gUnknown_02016D60_fs.unk8 == 5)
    {
        sub_080599A8(this, 0);
        gUnknown_02016D60_fs.unk8++;
    }
}


void sub_08058098(struct Entity *this)
{
}


void sub_080580A8(struct Entity *this)
{
}


void sub_080580B8(struct Entity *this)
{
    gUnknown_08428F78[this->unk14](this);
}


void sub_080580E0(struct Entity *this)
{
    const u8 *p;

    this->unk14++;
    this->unk1F_6 = 0;
    this->unk1D_6 = 0;
    p = &gUnknown_08428F88[this->parameter * 3];
    this->x.HALF_U.HI = *p++;
    this->y.HALF_U.HI = *p++;
    sub_08003870(this, *p);
}


void sub_08058178(struct Entity *this)
{
    this->unk1C_0 = gUnknown_02016D60_fs.unk2 == this->parameter ? 2 : 0;
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 == 1)
    {
        if (gUnknown_02016D60_fs.unk2 == this->parameter)
        {
            this->unk14++;
            this->unk15 = 0;
        }
        else
        {
            DeleteThisEntity(this);
        }
    }
}


void sub_08058204(struct Entity *this)
{
    GetNextFrame(this);
    switch (this->unk15)
    {
    case 0:
        sub_0800CA84(31, 63);
        sub_0800CAD4(this->x.HALF.HI, this->y.HALF.HI, 0);
        BITU16_AT(this, 0x60) = 0;
        sub_0800C0B0(2, 8);
        this->unk15++;
        break;
    case 1:
        if (BITU16_AT(this, 0x60) <= 299)
        {
            BITU16_AT(this, 0x60) += 4;
            sub_0800CAD4(this->x.HALF.HI, this->y.HALF.HI, BITU16_AT(this, 0x60));
        }
        else
        {
            this->unk14++;
            this->unk15 = 0;
            sub_0800CA3C();
        }
        break;
    }
}


void sub_080582F0(struct Entity *this)
{
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 > 1)
        DeleteThisEntity(this);
}


void sub_08058318(struct Entity *this)
{
    const u16 *p;

    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 2;
        this->unk1F_6 = 0;
        this->unk1D_6 = 1;
        p = &gUnknown_08428F04[this->form * 3];
        this->x.HALF_U.HI = *p++;
        this->y.HALF_U.HI = *p++;
        this->frameIdx = *p;
    }
}


void sub_080583E4(struct Entity *this)
{
}


void sub_080583F4(struct Entity *this)
{
}


void sub_08058404(struct Entity *this)
{
    gUnknown_08428F94[this->unk14](this);
}


void sub_0805842C(struct Entity *this)
{
    const u16 *p;

    this->unk14++;
    this->unk1F_6 = 0;
    this->unk1D_6 = 0;
    this->unk1C_0 = 2;
    p = &gUnknown_08428F04[this->form * 3];
    this->x.HALF_U.HI = *p++;
    this->y.HALF_U.HI = *p++;
    this->frameIdx = *p;
}


void sub_080584E8(struct Entity *this)
{
    this->y.HALF.HI += 4;
    if (this->y.HALF.HI > 7)
    {
        this->y.HALF.HI = 8;
        this->unk14++;
        this->unk17 = 90;
    }
}


void sub_0805855C(struct Entity *this)
{
    if (--this->unk17 == 0)
        this->unk14++;
}


void sub_080585B0(struct Entity *this)
{
    this->y.HALF.HI -= 4;
    if (this->y.HALF.HI < -32)
        DeleteThisEntity(this);
}


void sub_080585EC(struct Entity *this)
{
    gUnknown_08428FA4[this->unk14](this);
}


void sub_08058614(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1F_6 = 3;
    this->unk1D_6 = 3;
    this->direction = 8;
    this->speed = (sub_0800099C() & 63) + 64;
    this->frameIdx = *(this->form * 3 + gUnknown_08428F08);
}


void sub_080586C0(struct Entity *this)
{
    sub_0803CC20(this);
    if (this->x.HALF.HI > 304)
        this->x.HALF.HI = -120;
}


void sub_080586FC(struct Entity *this)
{
}


void sub_0805870C(struct Entity *this)
{
    gUnknown_08428FAC[this->unk14](this);
}


void sub_08058734(struct Entity *this)
{
    s32 x;
    s32 y;

    x = (gUnknown_02016D60_fs.unk9 * gUnknown_0813E4CC[((struct { u8 pad[0x60]; u8 v; } *)this)->v + 64] >> 8) + 120;
    y = (gUnknown_02016D60_fs.unk9 * gUnknown_0813E4CC[((struct { u8 pad[0x60]; u8 v; } *)this)->v] >> 8) + 104;
    this->x.HALF_U.HI = x;
    this->y.HALF_U.HI = y;
}


void sub_080587BC(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1F_6 = 0;
    this->unk1D_6 = 0;
    this->unk1B = 141;
    this->frameIdx = gUnknown_08428FB4[this->parameter];
    this->unk20 = 48;
    this->unk1C_6 = 2;
    switch (gUnknown_02016D60_fs.unk2)
    {
    case 0:
        this->unk1E_0 = 11;
        break;
    case 2:
        this->unk1E_0 = 12;
        break;
    case 1:
        load_palette_from_gfx_group(36);
        this->unk1E_0 = this->parameter + 11;
        break;
    }
    this->unk17 = this->parameter * 21 + 60;
    BITU8_AT(this, 0x60) = 106 - this->parameter * 42;
    sub_08058734(this);
}


void sub_0805893C(struct Entity *this)
{
    if (gUnknown_02016D60_fs.unk8 > 1)
    {
        play_sound(0x200);
        DeleteThisEntity(this);
    }
    else if (this->unk17 != 0)
    {
        this->unk17--;
        if (this->parameter == 0)
            play_sound(126);
    }
    else
    {
        ((struct { u8 pad[0x60]; u8 v : 8; } *)this)->v = ((struct { u8 pad[0x60]; u8 v : 8; } *)this)->v + gUnknown_02016D60_fs.unkA;
        sub_08058734(this);
    }
}


void sub_080589CC(struct Entity *this)
{
    const u16 *p;

    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1F_6 = 0;
        this->unk1D_6 = 0;
        this->unk1C_0 = 2;
        this->unk1E_0 = 5;
        p = &gUnknown_08428F04[this->form * 3];
        this->x.HALF_U.HI = *p++;
        this->y.HALF_U.HI = *p++;
        sub_08003870(this, 2);
    }
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 != 0)
        DeleteThisEntity(this);
}


void sub_08058AA8(struct Entity *this)
{
    const u16 *p;

    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1F_6 = 0;
        this->unk1D_6 = 0;
        this->unk1C_0 = 2;
        this->unk1B = 107;
        this->unk20 = 64;
        this->unk1C_6 = 2;
        this->unk1E_0 = 5;
        p = &gUnknown_08428F04[this->form * 3];
        this->x.HALF_U.HI = *p++;
        this->y.HALF_U.HI = *p++;
        sub_08003870(this, 0);
    }
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 != 0)
        DeleteThisEntity(this);
}


void sub_08058BC4(struct Entity *this)
{
    const u16 *p;

    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1F_6 = 0;
        this->unk1D_6 = 0;
        this->unk5E_0 = 3;
        this->unk1B = 78;
        this->unk20 = 96;
        this->unk1C_6 = 2;
        this->unk1E_0 = 5;
        p = &gUnknown_08428F04[this->form * 3];
        this->x.HALF_U.HI = *p++;
        this->y.HALF_U.HI = *p++;
    }
    this->unk1C_0 = (u16)(gUnknown_03000948.unk0 & 16) ? 2 : 0;
    if (gUnknown_02016D60_fs.unk8 != 0)
        DeleteThisEntity(this);
}


void sub_08058D04(void)
{
    u8 i;
    struct Entity *a;
    struct Entity *b;

    sub_0804C938(50, 1, 0);
    sub_0804C938(50, 3, 0);
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        a = sub_0804C938(50, 2, i);
        if (a != NULL && i == gLCDRegisterBuffer)
        {
            b = sub_0804C938(50, 0, 0);
            if (b != NULL)
                b->unk58 = a;
        }
    }
}


void sub_08058D8C(struct Entity *this)
{
    if (gUnknown_03000420[5] == 0)
        DeleteThisEntity(this);
    else
        gUnknown_08428FE0[this->form](this);
}


void sub_08058DC8(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 2;
        this->unk1E_0 = 0;
        this->unk1D_6 = 1;
        this->unk1F_6 = 0;
        sub_08003870(this, this->form);
    }
    this->x.HALF_U.HI = this->unk58->x.HALF_U.HI;
    this->y.HALF_U.HI = this->unk58->y.HALF_U.HI;
}


void sub_08058E74(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1E_0 = this->unk1D_6 = this->unk1F_6 = 0;
        sub_08003870(this, this->form);
    }
    this->unk1C_0 = 0;
    if (gUnknown_03000200 != NULL && gUnknown_03000200->unk14 != 3)
    {
        this->unk1C_0 = 2;
        this->x.HALF_U.HI = ((gUnknown_03000200->x.HALF.HI >> 4) & 63) + 88;
        this->y.HALF_U.HI = ((gUnknown_03000200->y.HALF.HI >> 4) & 63) + 48;
    }
}


void sub_08058F60(struct Entity *this)
{
    struct Entity *e;

    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 2;
        this->unk1E_0 = this->parameter + 7;
        this->unk1D_6 = 1;
        this->unk1F_6 = 0;
        sub_08003870(this, this->form);
    }
    e = gUnknown_03006A30[this->parameter].unk28;
    this->x.HALF_U.HI = ((e->x.HALF.HI >> 4) & 63) + 88;
    this->y.HALF_U.HI = ((e->y.HALF.HI >> 4) & 63) + 48;
    GetNextFrame(this);
}


void sub_08059060(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1E_0 = 0;
        this->unk1D_6 = 1;
        this->unk1F_6 = 0;
        this->x.HALF_U.HI = ((S16_AT(&gUnknown_03006C80, 0x80) >> 4) & 63) + 88;
        this->y.HALF_U.HI = ((S16_AT(&gUnknown_03006C80, 0x82) >> 4) & 63) + 48;
        sub_08003870(this, this->form);
    }
    if (S16_AT(&gUnknown_03006C80, 0x80) != 0)
    {
        this->unk1C_0 = 2;
        this->x.HALF_U.HI = ((S16_AT(&gUnknown_03006C80, 0x80) >> 4) & 63) + 88;
        this->y.HALF_U.HI = ((S16_AT(&gUnknown_03006C80, 0x82) >> 4) & 63) + 48;
    }
    else
    {
        this->unk1C_0 = 0;
    }
    GetNextFrame(this);
}


void sub_080591AC(struct Entity *this)
{
    gUnknown_08140DB0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080591D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805950C.inc\"");

// Whether this entity touches any player's entity
bool32 sub_080597A8(struct Entity *this)
{
    u16 i;

    for (i = 0; i < (u16)gUnknown_03006C80.unk0; i++)
    {
        if ((u8)sub_08000358(this, gUnknown_03006A30[i].unk28))
            return TRUE;
    }
    return FALSE;
}


void sub_08059818(struct Entity *this)
{
    struct Entity *e;
    u16 pos;

    e = CreateObject(57, 0, 0);
    if (e != NULL)
    {
        pos = gUnknown_03006A30[this->form].unk22 >> 1;
        e->x.HALF.HI = ((pos & 63) << 4) | 8;
        e->y.HALF.HI = ((u16)(pos & 0xFC0) >> 2) | 8;
        e->unk50 = this->unk50;
    }
}


void sub_080598D0(struct Entity *this)
{
    gUnknown_08428FFC[this->unk14](this);
}


void sub_080598F8(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk1D_6 = 3;
    this->unk14++;
    this->unk17 = 7;
    sub_08003870(this, 0);
}


void sub_08059960(struct Entity *this)
{
    GetNextFrame(this);
    if (--this->unk17 == 0)
        DeleteThisEntity(this);
}


void sub_080599A8(struct Entity *this, u32 n)
{
    struct Entity *e;
    const u16 *t = (const u16 *)&gUnknown_08429004[n];

    e = CreateObject(58, (u8)n, 0);
    if (e != NULL)
    {
        e->unk54 = this;
        gUnknown_0202E1E4 = 0;
    }
    else
    {
        gUnknown_0202E1E4 = 1;
    }
    gUnknown_03000520.unk4 = 0;
    sub_0800C0B0((u8)t[0], (u8)t[1]);
}


u32 sub_08059A2C(void)
{
    return gUnknown_0202E1E4;
}


void sub_08059A44(void)
{
    sub_0800CA3C();
    gUnknown_0202E1E4 = 1;
    gUnknown_03000520.unk4 = 1;
    gUnknown_03000520.unk0 = 0;
}


void sub_08059A80(struct Entity *this)
{
    gUnknown_08429040[this->unk14](this);
}


void sub_08059AA8(struct Entity *this)
{
    const u16 *p;
    u16 v;

    p = (const u16 *)&gUnknown_08429004[this->form];
    this->unk7C.s.unk7E = p[2];
    BITU8_AT(this, 0x7D) = p[3];
    BITU8_AT(this, 0x7C) = p[4];
    BITU8_AT(this, 0x7B) = p[5];
    BITU8_AT(this, 0x7A) = p[6];
    BITU8_AT(this, 0x79) = p[7];
    v = (((struct { u8 pad[0x60]; u16 v; } *)&gUnknown_030004A0)->v & 0xFF00) | p[8];
    sub_0800CA84(v, p[9]);
    this->unk14++;
}

asm(".include \"asm/non_matching/fs_game/sub_08059BD0.inc\"");

void sub_08059E34(struct Entity *this)
{
    if ((u8)sub_08003B64(this))
    {
        if (this->parameter != 0xFF)
            gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->parameter];
    }
    else
    {
        gUnknown_08140E44[this->unk14](this);
    }
}


void sub_08059EB0(struct Entity *this)
{
    if (this->form == 255)
    {
        this->unk14 = 2;
        this->unk1C_0 = 1;
        this->unk3C = 137;
    }
    else
    {
        this->unk14 = 1;
        this->unk3C = 9;
        this->unk60 = sub_08013D20(this->form);
    }
    this->unk3F = 42;
    this->unk46 = 8;
    this->unk40 = 56;
    this->unk5C = 0x21FF;
    this->unk48 = gUnknown_08140E84;
    sub_08003870(this, 0);
}


void sub_08059FBC(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        this->unk14 = 2;
        this->unk1C_0 = 1;
        this->unk3C = this->unk3C | 0x80;
        sub_0804C9F4(this);
    }
}


void sub_0805A040(struct Entity *this)
{
    if ((u8)(this->unk41 & 0x80))
    {
        if (this->unk41 != 128)
            BITU8_AT(this, 0x42) = (sub_0800099C() & 7) + 64;
        this->direction = this->unk3E;
        this->unk3D = 0;
        this->speed = 0x400;
        sub_08003DFC(140);
    }
    if (BITU8_AT(this, 0x42) != 0)
    {
        BITU8_AT(this, 0x42)--;
        if (BITU8_AT(this, 0x42) <= 11)
            this->speed -= 64;
        if (sub_08009678(this))
            sub_08003DFC(140);
        if (sub_0805A148(this))
            return;
    }
    GetNextFrame(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805A148.inc\"");

void sub_0805A3E8(struct Entity *this)
{
    gUnknown_08140E8C[this->unk14](this);
    if (this->form == 0 && this->unk14 != 1 && this->unk14 != 5)
    {
        sub_0805ADF8(this);
        if (--this->unk68.w == -1)
        {
            play_sound(76);
            this->unk17 = 64;
            this->unk14 = 5;
            this->unk1C_0 = 1;
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0805A484.inc\"");

void sub_0805A64C(struct Entity *this)
{
    if (this->z.HALF.HI != -32)
    {
        this->z.WORD -= 0x8000;
    }
    else
    {
        sub_0800D6A4(0x101);
        this->unk68.w = 0xA8C;
        this->unk14 = 4;
    }
    sub_0805AD74(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805A6AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A9BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805AC94.inc\"");

void sub_0805AD20(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
        sub_0805AD74(this);
    }
    else
    {
        gUnknown_03000200 = NULL;
        sub_0800D6A4(0x102);
        DeleteThisEntity(this);
    }
}


struct Entity *sub_0805AD74(struct Entity *this)
{
    struct Entity *e = NULL;

    if (--this->unk18 == 255)
    {
        this->unk18 = 3;
        e = sub_0804C8A8(61, 1, 0);
        if (e != NULL)
        {
            e->x.WORD = this->x.WORD;
            e->y.WORD = this->y.WORD;
            e->z.WORD = this->z.WORD;
        }
    }
    return e;
}


void sub_0805ADF8(struct Entity *this)
{
    s32 d;

    switch (this->unk17)
    {
    case 0:
        if ((s32)this->unk10 < -0x8000)
            this->unk17++;
        d = 0x800;
        break;
    case 1:
        if ((s32)this->unk10 > 0x8000)
            this->unk17 = 0;
        d = -0x800;
    }
    this->unk10 -= d;
    this->z.WORD -= this->unk10;
    if (this->direction - 1 <= 14)
        this->unk1C_2 = 1;
    else
        this->unk1C_2 = 0;
}


void sub_0805AEAC(struct Entity *this)
{
    gUnknown_08140EC4[this->unk14](this);
}


void sub_0805AED4(struct Entity *this)
{
    struct MapDataB *m;

    this->unk14 = 1;
    this->unk1B = 11;
    this->unk1C_6 = 2;
    this->unk20 = 224;
    this->unk48 = gUnknown_08429054;
    this->unk1C_0 = 1;
    sub_08008D90(this);
    this->speed = 384;
    m = (struct MapDataB *)sub_08015DC0(this->unk50);
    BITU16_AT(this, 0x64) = sub_08009308(this);
    m->unk4[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4 << 6)].v = 0x400E;
    m->unk2004[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4 << 6)].v = 29;
    sub_08003870(this, 0);
}

asm(".include \"asm/non_matching/fs_game/sub_0805B01C.inc\"");

void sub_0805B1CC(struct Entity *this)
{
    u8 tile;

    if (this->speed <= 0x2FF)
        this->speed += 16;
    sub_08002E64(this);
    tile = sub_0800935C(this);
    switch (tile)
    {
    case 66:
        sub_0804CB38(this, 0, 0);
        DeleteThisEntity(this);
        break;
    case 33:
        break;
    default:
        sub_0804CB38(this, 4, 0);
        DeleteThisEntity(this);
    }
}


void sub_0805B23C(struct Entity *this)
{
    gUnknown_08140EF0[this->unk14](this);
}


void sub_0805B264(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk5E_0 = 0;
    sub_08008DD8(this);
    sub_08003870(this, this->form);
}


void sub_0805B2BC(struct Entity *this)
{
}


void sub_0805B2CC(struct Entity *this)
{
    switch (this->unk7C.s.unk7E)
    {
    case 0:
        gUnknown_08140F14[this->unk14](this);
        sub_08003C10(this);
        gUnknown_0201EDB0[this->unk74.b.unk74].v = this->unk7C.h;
        break;
    case 1:
        gUnknown_08140F20[this->unk14](this);
        break;
    case 2:
        if (this->unk14 == 0)
            sub_0805BA18(this);
        break;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0805B370.inc\"");

void sub_0805B5FC(struct Entity *this)
{
    sub_080077D0(this);
    if (this->unk7C.h != 0)
    {
        this->direction = this->form << 3;
        sub_0803CC20(this);
        sub_0805BC44(this);
    }
}


void sub_0805B648(struct Entity *this)
{
    sub_0803DB4C(this);
    gUnknown_08140F50[this->unk15 - 5](this);
}


void sub_0805B678(struct Entity *this)
{
    struct Entity *p;
    u8 v;
    s16 x;
    s16 y;

    p = gUnknown_03006A30[this->parameter].unk28;
    if (this->unk74.b.unk75 == 0)
    {
        if (this->form << 1 == p->unk2A)
        {
            x = this->x.HALF_U.HI + gUnknown_08140F5C[p->unk2A];
            y = this->y.HALF_U.HI + gUnknown_08140F5C[p->unk2A + 1];
            v = sub_080093AC(x, y, p->unk50);
            if (v == 0 || (u8)(v - 15) > 16)
            {
                p->x.HALF_U.HI = x;
                p->y.HALF_U.HI = y;
            }
        }
        this->unk74.b.unk75 = 1;
        this->unk18 = 2;
    }
    if ((u8)(p->unk2A >> 1) == this->form && p->unk29 != 0)
    {
        sub_0805BA68(this);
        if (this->unk74.b.unk75 == 1)
        {
            this->unk74.b.unk75 = 2;
            sub_08003DFC(164);
        }
    }
}


void sub_0805B7FC(struct Entity *this)
{
    this->unk14--;
    this->unk74.b.unk75 = 0;
}


void sub_0805B838(struct Entity *this)
{
    this->unk14 = 1;
    this->unk5E_0 = 0;
    this->y.HALF.HI--;
    sub_08003870(this, this->unk54->form + 8);
    sub_08008DD8(this);
}


void sub_0805B8A4(struct Entity *this)
{
    u16 v;

    if (this->unk54->unk7C.h <= 7)
    {
        this->unk1C_0 = 0;
    }
    else
    {
        this->unk1C_0 = 1;
        v = (this->unk54->unk7C.h - 8) & 7;
        switch (this->form)
        {
        case 0:
            this->y.HALF_U.HI = this->unk54->y.HALF_U.HI - v - 16;
            break;
        case 1:
            this->x.HALF_U.HI = this->unk54->x.HALF_U.HI + v + 17;
            break;
        case 2:
            this->y.HALF_U.HI = this->unk54->y.HALF_U.HI + v + 16;
            break;
        case 3:
            this->x.HALF_U.HI = this->unk54->x.HALF_U.HI - v - 17;
            break;
        }
        v = (this->unk54->unk7C.h - 8) >> 4;
        if (v != (u16)this->unk2A)
        {
            this->unk2A = v;
            sub_08003870(this, v * 4 + this->form + 8);
        }
    }
}


void sub_0805BA18(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    sub_08003870(this, this->form + 4);
    sub_08008DD8(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805BA68.inc\"");

void sub_0805BC44(struct Entity *this)
{
    switch (this->form)
    {
    case 0:
        this->unk7C.h = this->y.HALF_U.HI - this->unk78.s2.unk7A;
        break;
    case 1:
        this->unk7C.h = this->unk78.h - this->x.HALF_U.HI;
        break;
    case 2:
        this->unk7C.h = this->unk78.s2.unk7A - this->y.HALF_U.HI;
        break;
    case 3:
        this->unk7C.h = this->x.HALF_U.HI - this->unk78.h;
        break;
    }
}


void sub_0805BD08(struct Entity *this)
{
    gUnknown_084290AC[this->unk14](this);
}


void sub_0805BD30(struct Entity *this)
{
    this->unk16 = (this->form >> 3) & 31;
    this->form = this->form & 7;
    if ((u8)(this->form & 7) == 0)
    {
        this->unk1C_0 = 1;
        sub_08003E24(this);
        this->unk14 = 3;
    }
    else
    {
        this->unk14 = 1;
    }
    this->unk1C_4 = 1;
    this->unk2E = 4;
    this->z.HALF_U.HI = this->z.HALF_U.HI - 1;
    this->unk48 = gUnknown_084290A4;
    this->unk60 = sub_08013D20(this->parameter);
    BITU16_AT(this, 0x64) = this->unk17 | 0x600;
    sub_08003870(this, 0);
}


void sub_0805BE5C(struct Entity *this)
{
    this->unk14++;
    this->unk17 = 20;
    sub_0804C9C8(this);
}


void sub_0805BEA0(struct Entity *this)
{
    u8 i;

    if (this->form == 1)
    {
        for (i = 0; i < 4; i++)
        {
            if (gUnknown_03006C80.unk5C[i] != 0)
            {
                sub_0805BE5C(this);
                break;
            }
        }
    }
    else if (this->form == 2)
    {
        if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
            sub_0805BE5C(this);
    }
}


void sub_0805BF2C(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 1;
        sub_08003E24(this);
    }
}


void sub_0805BF9C(struct Entity *this)
{
    struct Entity *e;
    u32 unused;
    u16 v;

    GetNextFrame(this);
    if (BITU8_AT(this, 0x47) == 0)
        return;
    e = gUnknown_03006A30[BITU8_AT(this, 0x47) - 1].unk28;
    gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->unk16];
    v = sub_0803CECC(this, e);
    if ((u16)(v & 15))
    {
        if (v <= 15)
            this->unk1C_2 = 1;
        else
            this->unk1C_2 = 0;
    }
    if (gLCDRegisterBuffer == e->form)
    {
        sub_0800D67C(BITU16_AT(this, 0x64));
        this->unk18 = 1;
    }
    BITU8_AT(this, 0x47) = 0;
    e->unk3D = 248;
}


void sub_0805C0C8(struct Entity *this)
{
    gUnknown_084290D0[this->unk14](this);
}


void sub_0805C0F0(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1D_6 = 0;
    this->unk5E_0 = 0;
    this->unk1F_6 = 0;
    this->unk17 = 252;
    sub_08003B94(this);
    gUnknown_03000488.unk0 = gUnknown_03000488.unk2 = 0x200;
    gUnknown_03000488.unk4 = 0;
    sub_0803D770(&gUnknown_03000488, this);
    this->z.HALF_U.HI = 16;
    load_palette_from_gfx_group(27);
    if (this->form == 0)
    {
        sub_08003840(this, 0, 3);
        play_sound(25);
    }
    else
    {
        sub_08003870(this, 0);
    }
}


asm(".include \"asm/non_matching/fs_game/sub_0805C1F4.inc\"");


void sub_0805C2D8(struct Entity *this)
{
    if (this->unk17 == 0)
        gUnknown_03006C80.unk6E = 4;
    else
        this->unk17--;
    if (this->form == 0)
        sub_080037EC(this, 3);
    else
        GetNextFrame(this);
}


void sub_0805C344(struct Entity *this)
{
    gUnknown_081410B4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805C36C.inc\"");

void sub_0805C61C(struct Entity *this)
{
    if ((u8)sub_0805CDA4(this))
    {
        this->unk14 = 2;
        if (this->unk68.b != 0)
            this->unk60 = 0;
    }
}


void sub_0805C660(struct Entity *this)
{
    if (BITU16_AT(this, 0x64) != 0)
    {
        BITU16_AT(this, 0x64)--;
    }
    else
    {
        this->unk17--;
        if (this->unk17 == 0)
        {
            this->unk17 = 16;
            if ((u16)this->unk18 < this->unk70.s2.lo)
            {
                this->unk18++;
                sub_08003870(this, (this->form << 2) + this->unk18);
            }
            else
            {
                this->unk14 = 3;
                this->unk18 = this->unk70.s2.lo;
            }
        }
        GetNextFrame(this);
    }
}


void sub_0805C758(struct Entity *this)
{
    if ((u16)(gUnknown_03000E20.unk0 & 63) == 0)
        sub_0805CE18(this);
    if (this->unk60 != 0 && !(u8)sub_0805CDA4(this))
        this->unk14 = 4;
    sub_0805CA84(this);
    GetNextFrame(this);
}


void sub_0805C7BC(struct Entity *this)
{
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk17 = 16;
        if (this->unk18 != 0)
        {
            this->unk18--;
            sub_08003870(this, (this->form << 2) + this->unk18);
        }
        else
        {
            this->unk14 = 1;
            BITU16_AT(this, 0x64) = ((struct { u8 pad[0x66]; u16 v; } *)this)->v;
        }
    }
    GetNextFrame(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805C878.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805CA84.inc\"");

u8 sub_0805CDA4(struct Entity *this)
{
    if (this->unk70.s.unk72 != 0)
    {
        if ((gUnknown_0201F000[this->unk52] & this->unk60) != this->unk60)
            return 1;
    }
    else if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        return 1;
    }
    return 0;
}


void sub_0805CE18(struct Entity *this)
{
    struct Entity *e = sub_0804C8A8(74, 0, 0);

    if (e != NULL)
    {
        sub_0803D4A4(this, e, gUnknown_081410F0[this->form << 1] << 16, gUnknown_081410F0[(this->form << 1) + 1] << 16);
        e->direction = (this->form ^ 2) << 3;
        e->speed = gUnknown_081410F8[this->unk18];
    }
}


void sub_0805CEA4(struct Entity *this)
{
    gUnknown_08141268[this->unk14](this);
}


void sub_0805CECC(struct Entity *this)
{
    if (gUnknown_08137B10[gUnknown_03006C80.unk0 - 1] & this->parameter)
    {
        DeleteThisEntity(this);
    }
    else
    {
        this->unk14 = 1;
        this->speed = 128;
        this->unk1C_0 = 1;
        this->unk48 = gUnknown_081412CC;
        sub_0805D3DC(this);
        sub_08003870(this, 0);
        sub_0802C070(this, gUnknown_0814127C[gUnknown_03006C80.unk1]);
    }
}


void sub_0805CF6C(struct Entity *this)
{
    struct Entity *e;
    u16 v;

    if (sub_08003B64(this))
        return;
    if ((v = sub_0800932C(this->unk7C.h, this->unk50)) != 0x4009)
    {
        if ((u16)(v - 0x400A) <= 3)
        {
            this->direction = ((v - 10) & 3) << 3;
            this->unk14 = 2;
            this->unk17 = 32;
            sub_08003DFC(21);
            sub_0805D4B0(this);
            v = sub_0800932C(this->unk7C.h + gUnknown_08137B90[(u8)(this->direction >> 3)], this->unk50);
            if (v == 328 || v == 330)
                this->z.HALF_U.HI = 0xFFFE;
        }
        else
        {
            e = sub_0804C8A8(15, 4, 0);
            if (e != NULL)
                sub_0803D3D0(this, e);
            DeleteThisEntity(this);
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_0805D0C8.inc\"");

void sub_0805D340(struct Entity *this)
{
    this->unk17--;
    if (this->unk17 != 0)
    {
        this->unk1C_0 ^= 1;
    }
    else
    {
        this->unk1C_0 = 1;
        this->unk14 = 1;
        sub_08008F48(0x4009, this->unk7C.h, this->unk50);
    }
}


void sub_0805D3DC(struct Entity *this)
{
    this->unk7C.h = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4)
                  | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    this->unk78.h = sub_08008F58(this->unk7C.h, this->unk50);
    this->unk78.s.unk7A = sub_080093C8(this->unk7C.h, this->unk50);
    sub_08008F48(0x4009, this->unk7C.h, this->unk50);
    sub_08008F3C(15, this->unk7C.h, this->unk50);
}


void sub_0805D4B0(struct Entity *this)
{
    sub_08008F48(this->unk78.h, this->unk7C.h, this->unk50);
    sub_08008F3C(this->unk78.s.unk7A, this->unk7C.h, this->unk50);
}


void sub_0805D4F8(struct Entity *this)
{
    gUnknown_081412D4[this->unk14](this);
}


void sub_0805D520(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 60;
    this->unk1C_0 = 1;
    this->unk7C.h = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    if ((u16)(this->unk50 >> 14) != 2)
    {
        sub_08014658(47, this->unk7C.h, 0x4000);
        sub_08008F48(1, this->unk7C.h, 0x4000);
    }
    else
    {
        sub_08014658(88, this->unk7C.h, 0x8000);
        sub_08008F48(1, this->unk7C.h, 0x8000);
    }
    sub_08003870(this, this->form & 3);
    sub_08003DFC(136);
}


void sub_0805D62C(struct Entity *this)
{
    u16 v;

    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        v = sub_0800932C(this->unk7C.h, this->unk50);
        if (v == 47 || v == 88)
        {
            this->unk14 = 3;
            this->unk17 = 30;
        }
        else
        {
            this->unk14 = 2;
            sub_08003870(this, 4);
        }
    }
}


void sub_0805D6D4(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        if (this->form > 4)
            this->form = 4;
        sub_08014658(gUnknown_081412EC[this->form], this->unk7C.h, this->unk50);
        DeleteThisEntity(this);
    }
}


void sub_0805D748(struct Entity *this)
{
    this->unk1C_0 ^= 1;
    this->unk17--;
    if (this->unk17 == 0)
        DeleteThisEntity(this);
}


void sub_0805D7A8(struct Entity *this)
{
    gUnknown_08429200[this->form](this);
}


void sub_0805D7D0(struct Entity *this)
{
    this->x.HALF.HI = gUnknown_081413CC[this->form * 2];
    this->y.HALF.HI = gUnknown_081413CC[this->form * 2 + 1];
}


void sub_0805D82C(struct Entity *this)
{
    gUnknown_08429258[this->unk14](this);
}


void sub_0805D854(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 2;
    this->unk1D_6 = 0;
    this->unk1F_6 = 1;
    this->unk17 = 30;
    sub_0805D7D0(this);
    sub_08003870(this, this->form);
}


void sub_0805D8D8(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else
    {
        this->x.HALF.HI -= 2;
        if (this->x.HALF.HI <= -120)
            DeleteThisEntity(this);
    }
}


void sub_0805D938(struct Entity *this)
{
    gUnknown_08429260[this->unk14](this);
}


void sub_0805D960(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else
    {
        this->x.HALF.HI += 2;
        if (this->x.HALF.HI > 407)
            DeleteThisEntity(this);
    }
}


void sub_0805D9C4(struct Entity *this)
{
    gUnknown_08429268[this->unk14](this);
}


void sub_0805D9EC(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1D_6 = 2;
    this->unk1F_6 = 2;
    if (this->form != 4)
        this->unk1D_2 = 1;
    sub_0805D7D0(this);
    this->x.HALF_U.HI = this->x.HALF_U.HI + gUnknown_02016D60_fs.unk26;
    sub_08003870(this, this->form);
}


void sub_0805DAA0(struct Entity *this)
{
    sub_0805D7D0(this);
    this->x.HALF.HI = this->x.HALF_U.HI + gUnknown_02016D60_fs.unk26;
    if (sub_08059A2C() == 0)
        this->unk1D_2 = 0;
}


void sub_0805DAEC(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1B = 78;
        this->unk1F_6 = 0;
        this->unk1D_6 = 0;
        this->unk5E_0 = 3;
        this->unk1E_0 = 8;
        this->unk20 = 128;
    }
    this->unk1C_0 = (u16)(gUnknown_03000948.unk0 & 16) ? 2 : 0;
}


void sub_0805DBBC(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk1C_0 = 2;
        this->unk1D_6 = 0;
        this->unk1F_6 = 0;
        sub_0805D7D0(this);
        sub_08003870(this, this->form);
    }
    else
    {
        GetNextFrame(this);
    }
}


void sub_0805DC34(struct Entity *this)
{
}


void sub_0805DC44(struct Entity *this)
{
    gUnknown_08429270[this->unk14](this);
}


void sub_0805DC6C(struct Entity *this)
{
    this->unk14++;
    this->unk1C_0 = 1;
    this->unk1D_6 = 1;
    this->unk1F_6 = 1;
    this->unk16 = 0xFF;
    sub_0805D7D0(this);
    sub_08003870(this, this->form);
    this->unk58 = CreateObject(70, 20, 0);
    this->unk58->unk54 = this;
}


void sub_0805DD04(struct Entity *this)
{
    GetNextFrame(this);
    if (this->unk16 != gUnknown_02016D60_fs.unk8)
    {
        this->unk16 = gUnknown_02016D60_fs.unk8;
        sub_0803D7E8(this, gUnknown_08429278[gUnknown_02016D60_fs.unk8], 15);
        this->unk58->unk1C_0 = 0;
    }
    if (sub_0803D8AC(this) && gUnknown_02016D60_fs.unk8 != 0 && gUnknown_02016D60_fs.unk8 != 4)
        this->unk58->unk1C_0 = 1;
}


void sub_0805DD98(struct Entity *this)
{
    gUnknown_0842928C[this->unk14](this);
}


void sub_0805DDC0(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 3;
    this->unk1F_6 = 1;
    this->unk17 = 120;
    this->unk18 = 8;
    if (this->form == 10)
        this->unk1F_6 = 2;
    sub_0805D7D0(this);
    sub_08003870(this, this->form);
}


void sub_0805DE60(struct Entity *this)
{
    if (this->unk18 == 0)
    {
        this->unk1C_0 = 1;
    }
    else
    {
        this->unk18--;
        return;
    }
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805DEC8(struct Entity *this)
{
    gUnknown_08429294[this->unk14](this);
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805DF08(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 1;
    this->unk1F_6 = 1;
    this->unk1C_0 = 1;
    this->unk17 = 240;
    sub_08003870(this, this->form);
}


void sub_0805DF8C(struct Entity *this)
{
    sub_0803CC20(this);
    GetNextFrame(this);
    if (--this->unk17 == 0xFF)
        this->parameter = 0xFF;
}


void sub_0805DFE0(struct Entity *this)
{
    gUnknown_0842929C[this->unk14](this);
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805E020(struct Entity *this)
{
    this->unk14++;
    this->unk1D_6 = 2;
    this->unk1F_6 = 1;
    this->unk17 = 1;
    this->unk18 = 8;
    sub_0805D7D0(this);
    sub_08003870(this, this->form);
}


void sub_0805E0AC(struct Entity *this)
{
    if (this->unk18 == 0)
    {
        this->unk1C_0 = 1;
    }
    else
    {
        this->unk18--;
        return;
    }
    if (--this->unk17 == 0xFF)
    {
        this->unk17 = 16;
        this->unk14++;
        sub_0805E154(this);
    }
}


void sub_0805E154(struct Entity *this)
{
    const u16 *p;
    struct Entity *e;

    p = &gUnknown_084292A8[(sub_0800099C() & 3) * 4];
    e = sub_0804C8A8(70, 11, this->parameter);
    if (e != NULL)
    {
        e->x.HALF_U.HI = *p++;
        e->y.HALF_U.HI = *p++;
        e->direction = *p++;
        e->speed = *p++;
        switch (sub_0800099C() & 15)
        {
        case 0:
            e->direction = e->direction + 1;
            break;
        case 1:
            e->direction = e->direction - 1;
            break;
        case 2:
            e->direction = e->direction + 2;
            break;
        case 3:
            e->direction = e->direction - 2;
            break;
        }
        e->direction = e->direction & 31;
    }
}


void sub_0805E2B8(struct Entity *this)
{
    if (--this->unk17 == 0xFF)
    {
        this->unk17 = (sub_0800099C() & 15) << 3;
        this->unk14--;
    }
    GetNextFrame(this);
}


void sub_0805E334(struct Entity *this)
{
    gUnknown_084292C8[this->unk14](this);
}


void sub_0805E35C(struct Entity *this)
{
    if (this->unk18 == 0)
    {
        this->unk1C_0 = 1;
    }
    else
    {
        this->unk18--;
        return;
    }
    GetNextFrame(this);
    if (--this->unk17 == 0xFF)
    {
        this->unk17 = 120;
        sub_08003870(this, this->form);
    }
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805E40C(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14 = 1;
        this->unk17 = 0;
    }
    BITU16_AT(&gUnknown_030004A0, 0x16) += gUnknown_084292D0[this->unk17 * 2];
    BITU16_AT(&gUnknown_030004A0, 0x18) += gUnknown_084292D0[this->unk17 * 2 + 1];
    if ((u16)(gUnknown_03000948.unk0 & 15) == 0)
        this->unk17 = this->unk17 != 23 ? this->unk17 + 1 : 0;
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805E4F8(struct Entity *this)
{
    if (this->unk14 == 0)
    {
        this->unk14++;
        this->unk17 = 12;
        this->unk18 = 0;
    }
    if (--this->unk17 == 255)
    {
        load_palette((u16 *)(gUnknown_08429300[this->unk18] + 0x1FC0 + gUnknown_03000030), 15, 1);
        this->unk17 = 12;
        this->unk18 = this->unk18 != 5 ? this->unk18 + 1 : 0;
    }
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
    {
        load_palette((u16 *)(gUnknown_03000030 + 0x1FA0), 15, 1);
        DeleteThisEntity(this);
    }
}


void sub_0805E608(struct Entity *this)
{
    gUnknown_0842930C[this->unk14](this);
}


void sub_0805E630(struct Entity *this)
{
    if (this->unk18 == 0)
    {
        this->unk1C_0 = 1;
    }
    else
    {
        this->unk18--;
        return;
    }
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 != this->parameter)
        DeleteThisEntity(this);
}


void sub_0805E698(struct Entity *this)
{
    switch (this->unk14)
    {
    case 0:
        this->unk14++;
        this->unk1D_6 = 1;
        this->unk5E_0 = 0;
        this->unk1F_6 = 1;
        sub_0805E86C(this);
        // fall through
    case 1:
        this->frameIdx = gUnknown_08429314[gUnknown_02016D60_fs.unk8] + gUnknown_03006C80.unk0 - 2;
        this->x.HALF.HI = this->unk54->x.HALF_U.HI + 28;
        this->y.HALF.HI = this->unk54->y.HALF_U.HI - 8;
        break;
    }
}


void sub_0805E780(struct Entity *this)
{
    switch (this->unk14)
    {
    case 0:
        this->unk14++;
        this->unk1D_6 = 1;
        this->unk5E_0 = 1;
        this->unk1F_6 = 1;
    case 1:
        this->unk1C_0 = this->unk54->unk1C_0;
        this->x.HALF_U.HI = this->unk54->x.HALF_U.HI + (this->parameter * 11 + 10);
        this->y.HALF_U.HI = this->unk54->y.HALF_U.HI + 16;
        sub_0805E8C0(this);
        break;
    }
}


void sub_0805E86C(struct Entity *this)
{
    u8 i;
    struct Entity *e;

    for (i = 0; i < gUnknown_03006C80.unk0; i++)
    {
        e = CreateObject(70, 21, i);
        if (e != NULL)
            e->unk54 = this;
    }
}


void sub_0805E8C0(struct Entity *this)
{
    u8 v = gUnknown_03006C80.unk28[this->parameter].unk5 & gUnknown_08429319[gUnknown_02016D60_fs.unk8];

    if (v == 0)
    {
        this->unk1C_0 = 0;
    }
    else
    {
        v >>= gUnknown_0842931E[gUnknown_02016D60_fs.unk8];
        this->frameIdx = gUnknown_08429323[gUnknown_02016D60_fs.unk8];
        this->unk1E_0 = v == 3 ? gUnknown_08429328[gUnknown_02016D60_fs.unk8 + 4] : gUnknown_08429328[v];
    }
}


void sub_0805E99C(struct Entity *this)
{
}


void sub_0805E9AC(struct Entity *this)
{
    gUnknown_081414B4[this->unk14](this);
}


void sub_0805E9D4(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk60 = gUnknown_08137B10[this->form];
    if (this->parameter != 255)
    {
        this->unk7C.w = sub_08013D20(this->parameter);
        this->unk14 = 2;
    }
    this->unk1E_0 = (gUnknown_0201F000[this->unk52] & this->unk60) ? 0x8001 : 0x8000;
    this->unk48 = gUnknown_081414E4;
    this->unk3F = 57;
    this->unk5C = 0x21AA;
    this->unk3C = 153;
    sub_08003870(this, 0);
    sub_08008F48(0, ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
    sub_08008F3C(15, ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
}


void sub_0805EB68(struct Entity *this)
{
    if ((u8)(this->unk41 & 0x80))
    {
        gUnknown_0201F000[this->unk52] ^= this->unk60;
        this->unk1E_0 = (gUnknown_0201F000[this->unk52] & this->unk60) ? 0x8001 : 0x8000;
        this->unk3D = 232;
        sub_08003DFC(22);
    }
}


void sub_0805EC1C(struct Entity *this)
{
    if ((u8)(this->unk41 & 0x80))
    {
        gUnknown_0201F000[this->unk52] = (gUnknown_0201F000[this->unk52] & ~(this->unk7C.w ^ this->unk60)) ^ this->unk60;
        this->unk78.w = gUnknown_0201F000[this->unk52];
        this->unk1E_0 = (gUnknown_0201F000[this->unk52] & this->unk60) ? 0x8001 : 0x8000;
        this->unk3D = 232;
        sub_08003DFC(22);
    }
    if ((this->unk78.w ^ gUnknown_0201F000[this->unk52]) & this->unk60)
    {
        this->unk1E_0 = (gUnknown_0201F000[this->unk52] & this->unk60) ? 0x8001 : 0x8000;
        this->unk78.w = gUnknown_0201F000[this->unk52];
        sub_08003DFC(22);
    }
}


void sub_0805ED78(struct Entity *this)
{
    gUnknown_081414F0[this->unk14](this);
}


void sub_0805EDA0(struct Entity *this)
{
    const u16 *p;
    u16 unused;
    u16 v;

    this->unk14 = 1;
    this->unk7C.h = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    v = sub_0800932C(this->unk7C.h, this->unk50);
    for (p = gUnknown_081414FC; *p != 0xFFFF; p++)
    {
        if (v == *p)
        {
            this->form = ((u32)p - (u32)gUnknown_081414FC) >> 1;
            if (this->form > 7)
                play_sound(16);
            sub_0805F938(this);
            return;
        }
    }
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805EE88.inc\"");

void sub_0805F938(struct Entity *this)
{
    u32 unused;
    u16 a;
    u16 b;
    u16 i;
    u16 step;

    this->unk7C.s.unk7E = 0xFFFF;
    step = gUnknown_08137B90[(u8)(this->form & 3)];
    a = this->unk7C.h + step;
    b = gUnknown_081414FC[((this->form + 2) & 3) + (u8)(this->form & 12)];
    for (i = 0; i <= 7; i++, a = a + step)
    {
        if (sub_0800932C(a, this->unk50) == b)
        {
            this->unk7C.s.unk7E = a;
            break;
        }
    }
}


void sub_0805FA48(struct Entity *this)
{
    gUnknown_08141798[this->unk14](this);
}


void sub_0805FA70(struct Entity *this)
{
    this->unk14 = 1;
    this->unk2A = this->direction >> 2;
    sub_08003870(this, this->unk2A >> 1);
    this->unk5E_0 = 3;
    this->unk1C_0 = 1;
    sub_08003E10(this, 137);
}


void sub_0805FAF8(struct Entity *this)
{
    u8 v;

    v = sub_08009394(this, gUnknown_081417A4[this->unk2A], gUnknown_081417A4[this->unk2A + 1]);
    if (v != 0 && v <= 31)
    {
        DeleteThisEntity(this);
    }
    else
    {
        sub_0803CC20(this);
        GetNextFrame(this);
        if ((u16)(gUnknown_03000E20.unk0 & 2))
            this->unk1E_0 = 6;
        else
            this->unk1E_0 = 3;
    }
}


void sub_0805FBA0(struct Entity *this)
{
    gUnknown_0842934C[this->unk14](this);
}


void sub_0805FBC8(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk14++;
    this->unk1D_6 = 0;
    this->unk5E_0 = 3;
    this->unk1F_6 = 1;
    this->unk17 = gUnknown_03006C80.unk5C[this->unk4C->form];
    sub_08003870(this, this->unk17 - 1);
}


void sub_0805FC70(struct Entity *this)
{
    this->x.HALF_U.HI = this->unk4C->x.HALF_U.HI;
    this->y.HALF_U.HI = this->unk4C->y.HALF_U.HI;
    this->z.HALF_U.HI = this->unk4C->z.HALF_U.HI - 18;
    this->unk1C_0 = this->unk4C->unk23 != 165 && this->unk4C->unk23 != 169;
    if (this->unk17 != gUnknown_03006C80.unk5C[this->unk4C->form])
    {
        this->unk17 = gUnknown_03006C80.unk5C[this->unk4C->form];
        switch (this->unk17)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            sub_08003870(this, this->unk17 - 1);
            break;
        case 0:
        default:
            DeleteThisEntity(this);
            break;
        }
    }
}


void sub_0805FD70(struct Entity *this)
{
    gUnknown_08141828[this->unk14](this);
}


void sub_0805FD98(struct Entity *this)
{
    this->unk14 = 1;
    this->unk3C = 25;
    this->unk3F = 23;
    this->unk5C = 85;
    this->unk40 = 36;
    this->unk46 = 6;
    this->unk44 = 4;
    this->unk48 = gUnknown_081419A4[this->form];
    this->unk78.s2.unk7A = gUnknown_08141838[(u8)(this->parameter & 15) * 2];
    this->unk78.h = gUnknown_08141838[(u8)(this->parameter & 15) * 2 + 1];
    this->unk7C.s.unk7E = (u8)(this->parameter >> 4) * 60;
    if (this->unk7C.s.unk7E == 0)
        this->unk7C.s.unk7E = 1;
    sub_08003870(this, this->form);
}


void sub_0805FF24(struct Entity *this)
{
    this->unk7C.s.unk7E--;
    if (this->unk7C.s.unk7E == 0)
    {
        this->unk7C.s.unk7E = this->unk78.h;
        this->unk7C.h = this->unk78.s2.unk7A;
        this->unk14 = 2;
        this->unk1C_0 = 1;
        this->unk3C = this->unk3C | 0x80;
    }
}


void sub_0805FFEC(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 1))
    {
        BITU8_AT(this, 0x29) = 0;
        sub_08003DFC(123);
    }
    if (this->unk7C.h != 0)
    {
        this->unk7C.h--;
    }
    else if ((u8)(this->unk29 & 0x80))
    {
        this->unk14 = 1;
        this->unk1C_0 = 0;
        this->unk3C = this->unk3C & 0x7F;
    }
}


void sub_080600BC(struct Entity *this)
{
    gUnknown_08429354[this->unk14](this);
}


void sub_080600E4(struct Entity *this)
{
    this->unk60 = sub_08012F84(this->unk52, this->form);
    this->unk14++;
}


void sub_08060124(struct Entity *this)
{
    u16 *p;
    u16 a;
    u16 b;
    u16 c;
    u32 m;

    p = (u16 *)this->unk60;
    do
    {
        a = gUnknown_0201EDB0[(u16)(*p & 15)].v;
        m = gUnknown_08137B10[(u16)((*p >> 8) & 31)];
        p++;
        b = *p++;
        c = *p++;
        if (a >= b)
        {
            if (a <= c || c == 0)
                gUnknown_0201F000[this->unk52] |= m;
        }
        else
        {
            gUnknown_0201F000[this->unk52] &= ~m;
        }
    } while (*p != 0xFFFF);
}


void sub_08060248(struct Entity *this)
{
    gUnknown_0842935C[this->unk14](this);
}


void sub_08060270(struct Entity *this)
{
    this->unk50 = 0x8000;
    this->unk1C_0 = 1;
    this->unk1F_6 = 1;
    this->unk14++;
    switch (sub_08009308(this))
    {
    case 205:
        this->x.HALF_U.HI = this->x.HALF_U.HI + 16;
        this->y.HALF_U.HI = this->y.HALF_U.HI + 16;
        break;
    case 206:
        this->y.HALF_U.HI = this->y.HALF_U.HI + 16;
        break;
    case 207:
        this->x.HALF_U.HI = this->x.HALF_U.HI + 16;
        break;
    case 208:
        break;
    default:
        DeleteThisEntity(this);
        return;
    }
    this->x.HALF.HI = this->x.HALF.HI & ~15;
    this->y.HALF.HI = this->y.HALF.HI & ~15;
    sub_08003870(this, 0);
    sub_0806041C(this, 209);
    sub_080603C4(this);
}


void sub_080603C4(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        sub_0806041C(this, 205);
        DeleteThisEntity(this);
    }
    else if ((u8)(this->unk29 & 1))
    {
        sub_08003DFC(145);
    }
}


asm(".include \"asm/non_matching/fs_game/sub_0806041C.inc\"");


void sub_08060538(struct Entity *this)
{
    gUnknown_081419D4[this->unk14](this);
}


void sub_08060560(struct Entity *this)
{
    u8 *p;

    this->unk14 = 1;
    p = (u8 *)sub_08015DC0(this->unk50);
    this->unk78.s2.unk7A = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    this->unk7C.w = (u32)&p[this->unk78.s2.unk7A + 0x2004];
}


void sub_080605EC(struct Entity *this)
{
    if (*this->unk7C.pb != 0)
    {
        this->unk78.b = *this->unk7C.pb;
        this->unk14 = 2;
    }
}


void sub_08060638(struct Entity *this)
{
    u16 v;

    v = sub_0800932C(this->unk78.s2.unk7A, this->unk50);
    if (v == 1)
    {
        if ((u16)(this->unk50 >> 14) != 2)
            sub_08008F78(47, this->unk78.s2.unk7A, this->unk50);
        else
            sub_08008F78(88, this->unk78.s2.unk7A, this->unk50);
        DeleteThisEntity(this);
    }
    else if (this->unk78.s3.unk79 != 0)
    {
        if (*this->unk7C.pb != 0)
            this->unk78.s3.unk79 = 0;
    }
    else if (this->unk78.b != *this->unk7C.pb)
    {
        this->unk78.s3.unk79 = 1;
        sub_08014658(gUnknown_081419E8[this->form], this->unk78.s2.unk7A, this->unk50);
    }
}


void sub_08060734(struct Entity *this)
{
    gUnknown_084293A4[this->unk14](this);
}


void sub_0806075C(struct Entity *this)
{
    struct Entity *e;

    e = gUnknown_03006A30[this->form].unk28;
    this->unk5E_0 = 3;
    this->unk1F_6 = e->unk1F_6;
    this->unk14++;
    this->unk2A = e->unk2A >> 1;
    this->direction = ((this->unk2A + 1) & 3) << 3;
    this->unk18 = 6;
    BITU16_AT(this, 0x6A) = BITU16_AT(this, 0x64) = 0;
    this->speed = 320;
    this->unk20 = 60;
    this->unk1C_6 = 3;
    this->unk1E_0 = 6;
    this->unk1B = 42;
    sub_08003870(this, 7);
    if (this->parameter != 0)
    {
        this->unk17 = 40;
    }
    else
    {
        this->unk1C_0 = 1;
        this->unk17 = 40;
        sub_080608F8(this);
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080608F8.inc\"");

void sub_08060CF0(struct Entity *this)
{
    struct Entity *e;

    e = gUnknown_03006A30[this->form].unk28;
    this->unk1C_0 = 1;
    this->unk14++;
    sub_0800238C(this, e);
    this->unk2A = e->unk2A;
    this->unk1B = 127;
    this->unk20 = 0;
    this->unk1C_6 = 3;
    this->unk1E_0 = 1;
    if ((u8)(gUnknown_03006A30[this->form].unk1B & 16))
        sub_08003870(this, (this->unk2A >> 1) + 4);
    else
        sub_08003870(this, this->unk2A >> 1);
}


void sub_08060E08(struct Entity *this)
{
    sub_0800238C(this, gUnknown_03006A30[this->form].unk28);
    GetNextFrame(this);
    if (gUnknown_03006A30[this->form].unk1B != 0)
    {
        if ((u16)(gUnknown_03000E20.unk0 & 3) == 0)
            this->unk1E_0 ^= 7;
    }
    else if ((u8)(this->unk29 & 0x80))
    {
        this->unk14++;
        sub_08003870(this, (this->unk2A >> 1) + 8);
    }
    else
    {
        DeleteThisEntity(this);
    }
}


void sub_08060EE8(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
        DeleteThisEntity(this);
}


void sub_08060F1C(struct Entity *this)
{
    gUnknown_084293B8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08060F44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080610F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08061364.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080618B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062020.inc\"");

void sub_08062B0C(struct Entity *this)
{
    GetNextFrame(this);
    if ((u8)(this->unk29 & 0x80))
    {
        this->unk17 = this->unk18 = 255;
        this->unk23 = 255;
        this->unk14 = 1;
        this->unk7C.w = 0;
        this->x.HALF_U.HI = this->unk70.s2.lo;
        this->y.HALF_U.HI = this->unk70.s2.unk72;
        this->unk2A = this->unk78.b;
        if ((u8)(this->unk2A & 251))
            this->unk48 = gUnknown_08141DFC;
        else
            this->unk48 = gUnknown_08141E04;
    }
}


u8 sub_08062BFC(struct Entity *this, struct Entity *other, u8 flag)
{
    u8 d;

    if (flag != 0)
        d = (this->unk2A + 2) & 6;
    else
        d = ((this->unk2A ^ 4) + 2) & 6;
    while (sub_08009394(other, gUnknown_08141D38[d], gUnknown_08141D38[d + 1]))
        d = (d + 2) & 6;
    return d << 2;
}

asm(".include \"asm/non_matching/fs_game/sub_08062CB8.inc\"");

void sub_08062D10(struct Entity *this)
{
    gUnknown_08141E0C[this->unk14](this);
}


void sub_08062D38(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 4;
    this->parameter = sub_08050338(this) * 24;
    sub_08008F48(0, ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6), this->unk50);
}


void sub_08062DD4(struct Entity *this)
{
    const u16 *p;

    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk17 = 4;
        this->unk14 = 2;
        if (gUnknown_03006C80.unk1 == 1)
            p = &gUnknown_08141FC4[this->parameter + (u8)(this->form & 3) * 6];
        else
            p = &gUnknown_08141EA4[this->parameter + (u8)(this->form & 3) * 6];
        sub_08062FD8(this, p);
        sub_08003E10(this, 17);
    }
}


void sub_08062EA4(struct Entity *this)
{
    const u16 *p;

    this->unk17--;
    if (this->unk17 != 0)
        return;
    if (gUnknown_03006C80.unk1 == 1)
    {
        if ((u8)(this->form & 4))
            p = &gUnknown_08142024[this->parameter + (u8)(this->form & 3) * 6];
        else
            p = &gUnknown_08141F64[this->parameter + (u8)(this->form & 3) * 6];
    }
    else
    {
        if ((u8)(this->form & 4))
            p = &gUnknown_08141F04[this->parameter + (u8)(this->form & 3) * 6];
        else
            p = &gUnknown_08141E44[this->parameter + (u8)(this->form & 3) * 6];
    }
    sub_08062FD8(this, p);
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08062FD8.inc\"");

void sub_08063338(struct Entity *this)
{
    if (this->form != 0)
        gUnknown_084293D8[this->unk14](this);
    else
        gUnknown_084293D0[this->unk14](this);
}


void sub_08063384(struct Entity *this)
{
    this->unk14++;
    this->unk48 = gUnknown_081420BC;
    this->unk3C = this->unk58->unk3C | 0x80;
    this->unk5C = this->unk58->unk5C;
    this->unk3F = 1;
    this->unk40 = 63;
    if (this->form != 0)
    {
        this->unk17 = 120;
        BITU16_AT(this, 0x64) = 480;
        this->unk1C_0 = 1;
        sub_08003870(this, 0);
        sub_080637F4(this);
    }
    else
    {
        this->x.WORD = this->unk58->x.WORD;
        this->y.WORD = this->unk58->y.WORD;
        this->unk50 = this->unk58->unk50;
        this->unk1D_6 = this->unk58->unk1D_6;
        this->unk5E_0 = this->unk58->unk5E_0;
        if (gLCDRegisterBuffer == this->unk58->form)
            gUnknown_03000450.unk0 = this;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08063524.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080637F4.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_08063C5C.inc\"");


void sub_08063D28(u8 a, u8 b, u8 c)
{
    gUnknown_03006A30[a].unkC = 3;
    gUnknown_03006A30[a].unk38 = b;
    gUnknown_03006A30[a].unk39 = c;
}


void sub_08063DBC(struct Entity *this)
{
    sub_08063DF0(this);
    gUnknown_084293E0[this->unk14](this);
    sub_08063E88(this);
}


void sub_08063DF0(struct Entity *this)
{
    struct Struct03006A30 *p = &gUnknown_03006A30[this->form];

    if (this->unk14 != 0 && p->unkC != 0)
    {
        this->unk14 = p->unkC;
        this->unk15 = 0;
        this->unk17 = p->unk38;
        this->unk18 = p->unk39;
        p->unkC = 0;
    }
}


asm(".include \"asm/non_matching/fs_game/sub_08063E88.inc\"");


void sub_08063F64(struct Entity *this)
{
    this->unk14++;
    this->unk1B = 0;
    if (gUnknown_03006A30[this->form].unkC != 0)
        sub_08063DF0(this);
    this->unk23 = 0xFF;
    if (gUnknown_03006A30[this->form].unk8 == 0)
        gUnknown_03006A30[this->form].unk8 = 0;
}


void sub_08063FFC(struct Entity *this)
{
}


void sub_0806400C(struct Entity *this)
{
    gUnknown_03006A30[this->form].unk8 = 0;
}


void sub_0806403C(struct Entity *this)
{
    gUnknown_08429414[this->unk15](this);
}


void sub_08064064(struct Entity *this)
{
    this->unk15++;
    gUnknown_03006A30[this->form].unk8 = 4;
}


void sub_080640B4(struct Entity *this)
{
    if (this->unk17 != 0xFF)
    {
        if (this->unk18 != 0)
        {
            this->unk18--;
        }
        else
        {
            this->direction = this->unk2A << 2;
            this->speed = 0x100;
            sub_0803CC20(this);
            if (--this->unk17 == 0)
                gUnknown_03006A30[this->form].unkC = 2;
        }
    }
    sub_080037EC(this, this->unk1B);
}


void sub_08064178(struct Entity *this)
{
    gUnknown_0842941C[this->unk15](this);
}


void sub_080641A0(struct Entity *this)
{
    this->unk15++;
    gUnknown_03006A30[this->form].unk8 = 169;
}


void sub_080641F0(struct Entity *this)
{
    if (this->unk17 != 255)
    {
        if (--this->unk17 == 0)
            gUnknown_03006A30[this->form].unkC = 2;
    }
    if ((u8)(this->unk29 & 0x80) == 0)
        sub_080037EC(this, this->unk1B);
}


void sub_08064278(struct Entity *this)
{
}


void sub_08064288(struct Entity *this)
{
    gUnknown_08429424[this->unk15](this);
}


void sub_080642B0(struct Entity *this)
{
    this->unk15++;
    gUnknown_03006A30[this->form].unk8 = 0x1AB;
}


void sub_08064304(struct Entity *this)
{
    if (gUnknown_03006A30[this->form].unk38 != 0)
    {
        while ((u8)(this->unk29 & 0x80) == 0)
            GetNextFrame(this);
        sub_080037EC(this, this->unk1B);
        gUnknown_03006A30[this->form].unk38 = 0;
    }
    else if ((u8)(this->unk29 & 0x80) == 0)
    {
        sub_080037EC(this, this->unk1B);
    }
}


void sub_080643A4(struct Entity *this)
{
    gUnknown_0842942C[this->unk15](this);
}


void sub_080643CC(struct Entity *this)
{
    this->unk15++;
    gUnknown_03006A30[this->form].unk8 = 0x250;
}


void sub_08064420(struct Entity *this)
{
    sub_080037EC(this, this->unk1B);
}


void sub_0806443C(struct Entity *this)
{
    gUnknown_08429434[this->unk15](this);
}


void sub_08064464(struct Entity *this)
{
    this->unk15++;
    this->direction = ((this->unk2A + 4) & 7) << 2;
    this->speed = 128;
    gUnknown_03006A30[this->form].unk8 = 4;
}


void sub_080644E4(struct Entity *this)
{
    sub_0803CC20(this);
    sub_080037EC(this, this->unk1B);
    if (--this->unk17 == 0)
        gUnknown_03006A30[this->form].unkC = 2;
}


void sub_08064554(struct Entity *this)
{
    gUnknown_0842943C[this->unk15](this);
}


void sub_0806457C(struct Entity *this)
{
    this->unk15++;
    gUnknown_03006A30[this->form].unk8 = 170;
    this->direction = 9;
    this->speed = 0x400;
}


void sub_080645EC(struct Entity *this)
{
    sub_0803CC20(this);
    sub_080037EC(this, this->unk1B);
    this->speed -= 20;
    if (this->x.HALF.HI > 176)
    {
        this->x.HALF_U.HI = 176;
        this->unk15++;
        gUnknown_03006A30[this->form].unk8 = 0x1AB;
        this->unk2A = 2;
        play_sound(0x1FC);
    }
}


void sub_0806469C(struct Entity *this)
{
    if (!(u8)(this->unk29 & 0x80))
        sub_080037EC(this, this->unk1B);
}


void sub_080646CC(struct Entity *this)
{
    gUnknown_08429448[this->unk15](this);
}


void sub_080646F4(struct Entity *this)
{
    this->unk15++;
    this->unk10 = 0x20000;
    gUnknown_03006A30[this->form].unk8 = 12;
    play_sound(13);
}


void sub_08064754(struct Entity *this)
{
    sub_080037EC(this, this->unk1B);
    if (!sub_08003594(this, 0x4000))
    {
        play_sound(14);
        gUnknown_03006A30[this->form].unkC = 2;
    }
}


void sub_080647A8(struct Entity *this)
{
    gUnknown_08429450[this->unk15](this);
}


void sub_080647D0(struct Entity *this)
{
    if (this->form == 0)
    {
        this->unk15++;
        this->direction = 30;
        this->speed = 320;
        this->unk2A = 0;
        this->unk17 = 30;
        gUnknown_03006A30[this->form].unk8 = 4;
    }
    else
    {
        this->unk15 = 4;
        this->unk2A = 4;
        gUnknown_03006A30[this->form].unk8 = 0x1AD;
        this->unk1F_6 = gUnknown_03006A30[0].unk28->unk1F_6;
        this->unk1D_6 = gUnknown_03006A30[0].unk28->unk1D_6;
        this->unk1C_0 = 0;
    }
    this->unk5E_0 = 3 - this->form;
    this->unk2E = 3;
    this->unk5E_2 = 1;
}


void sub_08064964(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else
    {
        sub_080037EC(this, this->unk1B);
        sub_0803CC20(this);
        if (this->y.HALF.HI <= 209)
        {
            this->y.HALF_U.HI = 210;
            this->direction = 24;
            this->unk2A = 6;
            this->unk15++;
        }
    }
}


void sub_08064A10(struct Entity *this)
{
    sub_080037EC(this, this->unk1B);
    sub_0803CC20(this);
    if (this->x.HALF.HI <= 119)
    {
        this->x.HALF_U.HI = 120;
        this->unk2A = 4;
        gUnknown_03006A30[this->form].unk8 = 0;
        this->unk17 = 60;
        this->unk15++;
    }
}


void sub_08064AB4(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        if (--this->unk17 == 0)
        {
            gUnknown_03006A30[this->form].unk8 = 0x1AD;
            play_sound(28);
            gUnknown_0202A4F8 |= 2;
        }
    }
    else if ((u8)(this->unk29 & 0x80) == 0)
    {
        sub_080037EC(this, this->unk1B);
    }
    else
    {
        play_sound(0x80040008);
        play_sound(32);
        gUnknown_0202A4F8 |= 4;
        this->unk15++;
    }
}


void sub_08064B98(struct Entity *this)
{
    if (this->form != 0)
    {
        if ((u8)(this->unk29 & 0x80) == 0)
            sub_080037EC(this, this->unk1B);
        this->x.HALF_U.HI = gUnknown_03006A30[0].unk28->x.HALF_U.HI;
        this->y.HALF_U.HI = gUnknown_03006A30[0].unk28->y.HALF_U.HI;
    }
    if (gUnknown_0202A4F8 & 8)
        this->unk15++;
}


void sub_08064C30(struct Entity *this)
{
    this->unk1C_0 = 1;
    sub_0803D8AC(this);
    if (gUnknown_0202A4F8 & 16)
    {
        gUnknown_03006A30[this->form].unk8 = 0;
        this->unk15++;
        this->unk1C_0 = 1;
    }
}


void sub_08064CB8(struct Entity *this)
{
    if (gUnknown_0202A4F8 & 32)
    {
        this->unk2A = this->form <= 1 ? 6 : 2;
        this->direction = this->unk2A << 2;
        this->speed = 256;
        this->unk17 = 12;
        this->unk15++;
        gUnknown_03006A30[this->form].unk8 = 4;
    }
}


void sub_08064D78(struct Entity *this)
{
    sub_080037EC(this, this->unk1B);
    sub_0803CC20(this);
    if (this->unk17 != 0 && --this->unk17 == 0)
    {
        this->unk2A = 4;
        this->direction = 16;
    }
    if (this->y.HALF.HI > 300)
        DeleteThisEntity(this);
}


void sub_08064E10(struct Entity *this)
{
    gUnknown_08429470[this->unk15](this);
}


void sub_08064E38(struct Entity *this)
{
    sub_0803D7E8(this, gUnknown_0842947C, 120);
    this->unk15++;
    this->unk17 = 120;
}


void sub_08064E84(struct Entity *this)
{
    this->unk1C_0 = 1;
    sub_0803D8AC(this);
    if (--this->unk17 == 0)
    {
        this->unk15++;
        this->unk17 = 60;
        if (this->form == 0)
        {
            this->unk1C_0 = 1;
            play_sound(0x208);
        }
        else
        {
            DeleteThisEntity(this);
        }
    }
}


void sub_08064F34(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        gUnknown_0201F000[0] |= 8;
        gUnknown_03006A30[this->form].unkC = 2;
    }
}


void sub_08064FA4(struct Entity *this)
{
    gUnknown_0814216C[this->unk14](this);
}


void sub_08064FCC(struct Entity *this)
{
    struct MapData *m;
    u16 t;

    this->unk14 = 1;
    this->unk5E_0 = 0;
    this->unk1E_0 = gUnknown_08142178[this->form];
    if (gUnknown_03006C80.unk1 == 2)
    {
        this->unk1C_0 = 1;
        this->x.HALF_U.HI = this->x.HALF_U.HI + 4;
        this->y.HALF_U.HI = this->y.HALF_U.HI - 2;
    }
    sub_08003870(this, 0);
    this->frameTimer = (sub_0800099C() & 240) + 1;
    m = (struct MapData *)sub_08015DC0(this->unk50);
    t = ((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) | (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6);
    this->unk7C.p = &m->unk4[t];
    this->unk78.h = gUnknown_0814217C[this->form];
    sub_08008F48(this->unk78.h, t, this->unk50);
}


void sub_08065138(struct Entity *this)
{
    struct Entity *e;

    if (this->unk78.h == *this->unk7C.p)
    {
        GetNextFrame(this);
        if ((u8)(this->unk29 & 0x80))
        {
            sub_08003870(this, 0);
            this->frameTimer = (sub_0800099C() & 240) + 1;
        }
    }
    else
    {
        e = sub_0804CABC(this, gUnknown_08142194[this->form]);
        if (e != NULL)
        {
            e->parameter = 4;
            e->y.HALF_U.HI += 8;
            e->z.HALF_U.HI -= 8;
            e->direction = 144;
        }
        DeleteThisEntity(this);
    }
}


void sub_08065228(struct Entity *this)
{
    gUnknown_0814219C[this->form](this);
}


void sub_08065250(struct Entity *this)
{
    gUnknown_081421AC[this->unk14](this);
    sub_0803DF84();
}


void sub_0806527C(struct Entity *this)
{
    struct Entity *e = sub_0804C8A8(95, 1, 0);

    if (e != NULL)
    {
        sub_0803D3D0(this, e);
        this->unk58 = e;
        this->unk14 = 1;
        this->unk17 = 180;
        this->unk1C_0 = 1;
        this->z.HALF_U.HI = 0xFF90;
        this->unk5E_0 = 3;
        this->unk7C.h = 0x901;
        sub_08003870(this, 0);
        sub_08065E44(this);
        gUnknown_03000450.unk0 = this;
        sub_0802D970();
        sub_0802C8E4();
        sub_0801624C(this->x.HALF_U.HI, this->y.HALF_U.HI);
    }
}


void sub_0806535C(struct Entity *this)
{
    u8 i;

    sub_080660BC(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 2;
        for (i = 0; i < gUnknown_03006C80.unk0; i++)
        {
            gUnknown_03006A30[i].unkC = 15;
            gUnknown_03006A30[i].unk8 = 4;
            gUnknown_03006A30[i].unk38 = 255;
            gUnknown_03006A30[i].unk28->direction = 0;
            gUnknown_03006A30[i].unk28->unk2A = 0;
        }
    }
}


void sub_0806547C(struct Entity *this)
{
    u8 i;

    sub_080660BC(this);
    if (gUnknown_03006A30[0].unk28->y.HALF.HI <= 540)
    {
        this->unk14 = 3;
        this->unk17 = 60;
        for (i = 0; i < gUnknown_03006C80.unk0; i++)
            gUnknown_03006A30[i].unk28->unk17 = 1;
    }
}


void sub_08065524(struct Entity *this)
{
    u16 i;

    GetNextFrame(this);
    sub_080660BC(this);
    if (this->unk17 != 0)
    {
        this->unk17--;
        if (this->unk17 == 5)
        {
            this->unk15 = 0;
            sub_0800D67C(this->unk7C.h);
            if (this->unk14 == 3)
            {
                ((struct { u8 pad[3]; u8 a : 5; u8 a5 : 3; u8 b : 5; } *)&gUnknown_02000010)->a = 1;
                ((struct { u8 pad[3]; u8 a : 5; u8 a5 : 3; u8 b : 5; } *)&gUnknown_02000010)->b = 5;
            }
            play_sound(0x203);
        }
    }
    else if (this->unk15 == 0)
    {
        if ((u8)(((u8 *)&gUnknown_02000010)[0] & 127) != 6)
            return;
        sub_0800D644();
        this->unk15 = 1;
    }
    else
    {
        for (i = 0; i < (u16)gUnknown_03006C80.unk0; i++)
        {
            if ((u16)(gUnknown_03000940[i] & 0x400))
                return;
        }
        this->unk14++;
    }
}


void sub_08065678(struct Entity *this)
{
    GetNextFrame(this);
    sub_080660BC(this);
    this->z.WORD += 0x8000;
    if (this->z.HALF.HI >= -32)
    {
        this->unk14 = 5;
        this->unk17 = 60;
        this->unk7C.h = 0x902;
    }
}

asm(".include \"asm/non_matching/fs_game/sub_080656F4.inc\"");

void sub_08065958(struct Entity *this)
{
    struct Entity *e;

    if (this->unk17 == 0)
    {
        this->unk14 = 8;
        this->unk17 = 8;
    }
    else
    {
        this->unk17--;
        if (this->unk17 <= 120)
        {
            if ((u8)(this->unk17 & 1))
                this->unk58->x.HALF_U.HI = this->unk58->x.HALF_U.HI + gUnknown_081421FC[(u8)((u8)(this->unk17 & 6) >> 1)];
            if ((u8)(this->unk17 & 7) == 0)
            {
                e = sub_0804C8A8(15, 15, 0);
                if (e != NULL)
                    sub_0803D4A4(this, e, gUnknown_08142200[(u8)(this->unk17 >> 2)] << 16, gUnknown_08142200[(u8)(this->unk17 >> 2) + 1] << 16);
            }
        }
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08065A74.inc\"");

void sub_08065CEC(struct Entity *this)
{
    struct Entity *e;

    if (this->unk14 != 0)
    {
        if (this->unk45 == 0)
        {
            this->unk58->unk45 = 0;
            DeleteThisEntity(this);
        }
    }
    else
    {
        e = sub_0804C8A8(95, 2, 0);
        if (e != NULL)
        {
            sub_0803D3D0(this, e);
            e->unk54 = this;
            this->unk58 = e;
            this->unk14 = 1;
            this->unk1C_0 = 1;
            this->unk45 = 1;
            this->unk5E_0 = 2;
            sub_08003870(this, 0);
        }
    }
}


void sub_08065DB4(struct Entity *this)
{
    if (this->unk14 != 0)
    {
        sub_0803D3D0(this->unk54, this);
        if (this->unk45 == 0)
            DeleteThisEntity(this);
    }
    else
    {
        this->unk14 = 1;
        this->unk1C_0 = 1;
        this->unk45 = 1;
        this->unk5E_0 = 0;
        sub_08003870(this, 1);
    }
}

asm(".include \"asm/non_matching/fs_game/sub_08065E44.inc\"");

void sub_080660BC(struct Entity *this)
{
    if (this->unk7C.s3.unk7F != 0)
    {
        this->unk7C.s3.unk7F--;
    }
    else
    {
        this->unk7C.s3.unk7F = 60;
        sub_08003DFC(175);
    }
}


void sub_08066120(struct Entity *this)
{
    gUnknown_08142310[this->form](this);
}


void sub_08066148(struct Entity *this)
{
    gUnknown_0814231C[this->unk14](this);
}


void sub_08066170(struct Entity *this)
{
    struct Entity *e;
    const s16 *p;
    u16 i;

    p = gUnknown_0813FD90[gUnknown_03006C80.unk0 - 1];
    for (i = 0; i < (u16)gUnknown_03006C80.unk0; i++)
    {
        e = sub_0804C8A8(102, 1, i);
        if (e != NULL)
        {
            e->unk54 = this;
            sub_0803D4A4(this, e, p[0] << 16, p[1] << 16);
            p += 2;
        }
    }
    this->unk14 = 1;
}

asm(".include \"asm/non_matching/fs_game/sub_08066224.inc\"");

void sub_080663C4(struct Entity *this)
{
    u32 unused;  // the frame is 8 bytes

    sub_0803DF84();
    if ((u8)sub_08000A40(this->unk60) == 16 - gUnknown_03006C80.unk0)
        this->unk14 = 3;
}


void sub_0806640C(struct Entity *this)
{
    struct Entity *found;

    sub_0803DF84();
    found = sub_08012468(47);
    if (found != NULL)
        DeleteThisEntity(this);
}


void sub_08066434(struct Entity *this)
{
    gUnknown_08142348[this->unk14](this);
}


void sub_0806645C(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 30;
    this->unk1D_6 = 3;
    sub_08003870(this, 0);
}


void sub_080664A8(struct Entity *this)
{
    if (this->unk17 != 0)
    {
        this->unk17--;
    }
    else if (!sub_0802C12C_int(this))
    {
        sub_080009F4((void *)(0x06010000 + (this->unk53 + 1) * 0x200), gUnknown_03000030 + 0x42320, 0x100);
        this->unk14 = 2;
        this->unk1C_0 = 1;
    }
}


void sub_0806653C(struct Entity *this)
{
    u8 v;

    GetNextFrame(this);
    if ((v = sub_08000580(this)) != 0)
    {
        if ((u8)(v & 1))
            this->unk58 = gUnknown_03006A30[0].unk28;
        if ((u8)(v & 2))
            this->unk58 = gUnknown_03006A30[1].unk28;
        if ((u8)(v & 4))
            this->unk58 = gUnknown_03006A30[2].unk28;
        if ((u8)(v & 8))
            this->unk58 = gUnknown_03006A30[3].unk28;
        if (!(this->unk54->unk60 & gUnknown_08137B10[this->parameter]))
        {
            this->unk54->unk60 = this->unk54->unk60 | gUnknown_08137B10[this->parameter];
            this->unk1E_0 = 1;
            sub_08003DFC(24);
        }
        else if (this->unk54->unk60 == 0xFFFF)
        {
            this->unk14 = 3;
            this->unk17 = 60;
            sub_08066808(this, this->unk58);
        }
    }
    else
    {
        this->unk54->unk60 &= ~gUnknown_08137B10[this->parameter];
        this->unk1E_0 = 0;
    }
}


void sub_080666B8(struct Entity *this)
{
    struct Entity *e;

    GetNextFrame(this);
    this->unk17--;
    if (this->unk17 == 0)
    {
        this->unk14 = 4;
        this->unk7C.h = 360;
        e = sub_0804C8A8(107, 0, 0);
        if (e != NULL)
        {
            e->form = this->parameter;
            sub_0803D3D0(gUnknown_03006A30[this->parameter].unk28, e);
        }
    }
}


void sub_08066764(struct Entity *this)
{
    GetNextFrame(this);
    this->unk7C.h--;
    if (this->unk7C.h == 0)
    {
        this->unk54->unk60 ^= gUnknown_08137B10[this->parameter];
        DeleteThisEntity(this);
    }
    else if (this->unk7C.h < 60)
    {
        this->unk1C_0 ^= 1;
    }
}


void sub_08066808(struct Entity *a, struct Entity *b)
{
    b->x.WORD = a->x.WORD;
    b->y.WORD = a->y.WORD;
}

asm(".include \"asm/non_matching/fs_game/sub_0806682C.inc\"");

void sub_080668A4(struct Entity *this)
{
}


void sub_080668B4(struct Entity *this)
{
}


void sub_080668C4(struct Entity *this)
{
}


void sub_080668D4(struct Entity *this)
{
}


void sub_080668E4(struct Entity *this)
{
}

