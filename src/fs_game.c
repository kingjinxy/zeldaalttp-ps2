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

asm(".include \"asm/non_matching/fs_game/sub_08036E24.inc\"");

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
                gRandom = gUnknown_03000FC0.unk3C;
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

asm(".include \"asm/non_matching/fs_game/sub_08036FC8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803719C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037300.inc\"");

u32 sub_08037414(void)
{
    return 1;
}

asm(".include \"asm/non_matching/fs_game/sub_08037424.inc\"");

bool32 sub_08037554(void)
{
    return gUnknown_03000FC0.unk8 == 2;
}

asm(".include \"asm/non_matching/fs_game/sub_08037574.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037750.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080378F4.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08037A94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037B5C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037C58.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08037E0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037EEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038094.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08038238.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080383F0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803857C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080386C0.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08039650.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080397F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080398F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080399CC.inc\"");

u32 sub_08039A40(struct Entity *this)
{
    return gUnknown_03006C80.unk28[this->form].unk0 & 2;
}


u32 sub_08039A70(struct Entity *this)
{
    return gUnknown_03006C80.unk28[this->form].unk0 & 1;
}

asm(".include \"asm/non_matching/fs_game/sub_08039AA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039CD4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039D1C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039D64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A030.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_0803A20C.inc\"");


void sub_0803A2E8(void)
{
    CpuFill32(0, &gUnknown_0201F020, 0xB004);
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

asm(".include \"asm/non_matching/fs_game/sub_0803AA04.inc\"");

bool32 sub_0803AB30(struct Entity *a, struct Entity *b, u8 c)
{
    a->unk42 = b->unk46;
    a->unk3D = (u8)(b->unk46 & 0x80) ? b->unk46 + (s8)b->unk46 / 4 : -b->unk46 - (s8)b->unk46 / 4;
    if (b->unk3D == 0)
        b->unk3D = 0xFF;
    sub_0803A6DC(a, b);
    return TRUE;
}

asm(".include \"asm/non_matching/fs_game/sub_0803AC00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803ACC8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803AEB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AFB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B0D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B1F8.inc\"");

u32 sub_0803B338(struct Entity *a, struct Entity *b, u8 c)
{
    sub_08003C84(a, b);
    return 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0803B360.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B3C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B550.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B644.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B73C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B834.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803B99C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BAAC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BB18.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BB84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BBF0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BC5C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BD78.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803BE8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C070.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C1A4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C2EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C50C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C72C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C810.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803C9FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CB7C.inc\"");

// tmc: ProcessMovement2
void sub_0803CC20(struct Entity *this)
{
    if ((u8)(this->direction & 0x80))
        return;
    this->x.WORD += gUnknown_0813E4CC[this->direction << 3] * this->speed;
    this->y.WORD -= gUnknown_0813E4CC[(this->direction << 3) + 64] * this->speed;
}

asm(".include \"asm/non_matching/fs_game/sub_0803CC9C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CD8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE04.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE68.inc\"");

u8 sub_0803CECC(struct Entity *a, struct Entity *b)
{
    return sub_08003F4C(a, b);
}

asm(".include \"asm/non_matching/fs_game/sub_0803CEF0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CF58.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D010.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D134.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D224.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803D398.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803D520.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D65C.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_0803D770.inc\"");


void sub_0803D7E8(struct Entity *this, const u16 *p, u8 n)
{
    if (n == 0)
        n = 1;
    this->unk76 = 0;
    this->unk77 = n;
    this->unk78.h = this->x.HALF_U.HI;
    this->unk78.s2.unk7A = this->y.HALF_U.HI;
    this->unk7C.h = p[0];
    this->unk7C.s.unk7E = p[1];
    return;
}

asm(".include \"asm/non_matching/fs_game/sub_0803D8AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D9F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DB4C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0803DD94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DE94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DF84.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_0803F0E4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F284.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F3C4.inc\"");

void sub_0803F550(struct Entity *a, struct Entity *b)
{
    sub_0800238C(b, a);
    if (a->unk2A == 0)
        b->y.WORD--;
    else
        b->y.WORD++;
}

asm(".include \"asm/non_matching/fs_game/sub_0803F594.inc\"");

void sub_0803F628(struct Entity *this)
{
}

asm(".include \"asm/non_matching/fs_game/sub_0803F638.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_080407E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040890.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040B10.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040D20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040D60.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040D90.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040F78.inc\"");

void sub_08040FB4(struct Entity *this)
{
    this->unk2E = 4;
}

asm(".include \"asm/non_matching/fs_game/sub_08040FDC.inc\"");

void sub_08041030(struct Entity *this)
{
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08041048.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041088.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041200.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041328.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804140C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041448.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804159C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041748.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041784.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041C3C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042208.inc\"");

void sub_08042268(struct Entity *this)
{
    GetNextFrame(this);
    sub_0803CC20(this);
    if (!sub_08003594(this, 0x2000))
        DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08042298.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080422D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042490.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080425A0.inc\"");

void sub_08042A78(struct Entity *this)
{
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08042A90.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042CB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042DB0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042F5C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080432FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043338.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080434D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043614.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080437F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043834.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043A34.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043B94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043EA4.inc\"");

u8 sub_08043EE0(u8 a)
{
    if ((u8)(a & 7) != 4)
        return ((a + 4) & 31) >> 3;
    return 0xFF;
}

asm(".include \"asm/non_matching/fs_game/sub_08043F20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044018.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08044198.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044240.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044594.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804469C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080447C8.inc\"");

void sub_0804482C(struct Entity *this)
{
    gUnknown_0813EDA0[this->unk14](this);
}


void sub_08044854(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813ED84);
}

asm(".include \"asm/non_matching/fs_game/sub_08044870.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044910.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080449F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044AE0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044B78.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044BC4.inc\"");

void sub_08044C24(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813EE1C);
}


void sub_08044C40(struct Entity *this)
{
    gUnknown_0813EE38[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08044C68.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044CBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044D64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044E10.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044ED8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044F64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044FD8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045068.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080451CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804521C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804533C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045524.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080455B4.inc\"");

void sub_080456E0(struct Entity *this)
{
}

asm(".include \"asm/non_matching/fs_game/sub_080456F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045780.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080457EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045870.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080458FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045ABC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045B9C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045C18.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045DC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045E98.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045F00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045F64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08045FDC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804605C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080460CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046154.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804618C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080461F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046258.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080462DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804639C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080463F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046440.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046490.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804659C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046658.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080466AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804679C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046828.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046918.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046A2C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046C7C.inc\"");

void sub_08046D24(struct Entity *this)
{
    GetNextFrame(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08046D3C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08046FB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080470C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047174.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804721C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080473AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047490.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047538.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080475D0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047678.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080476DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047740.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047804.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080478AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804799C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047A7C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047AF0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047B70.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047C0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047CE8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047D34.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047EA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08047FFC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08048074.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080480F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804831C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080483A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080483F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080484AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08048514.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804871C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08048850.inc\"");
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

asm(".include \"asm/non_matching/fs_game/sub_08048FB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049140.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080492B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804930C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080494B8.inc\"");

void sub_080496DC(struct Entity *this)
{
    this->unk70 = gUnknown_08147514[this->parameter];
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

asm(".include \"asm/non_matching/fs_game/sub_08049A48.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049A88.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049B30.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049C60.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049CAC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049DA8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049ED8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049F40.inc\"");

void sub_08049FA4(struct Entity *this)
{
    gUnknown_0813F7B0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08049FCC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A0DC.inc\"");

void sub_0804A154(struct Entity *this)
{
    DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804A16C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A218.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A2D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A38C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A3D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A438.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A498.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A584.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804A790.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804ABB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B15C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B208.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B300.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B5FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B708.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B744.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B788.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804B8B0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804BB08.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804BB58.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804BCA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804BD9C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804BFA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C088.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_0804C410.inc\"");
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

asm(".include \"asm/non_matching/fs_game/sub_0804CA78.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CABC.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804CB7C.inc\"");

void sub_0804CCBC(void)
{
    CpuFill16(0, gUnknown_0202A7E0, 0xA0);
}

asm(".include \"asm/non_matching/fs_game/sub_0804CCE4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CD94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CE00.inc\"");

u8 sub_0804CE38(u8 i)
{
    return gUnknown_0202A7E0[i].unk2;
}


void sub_0804CE64(struct Entity *this, u32 value)
{
    this->unk10 = value;
}

asm(".include \"asm/non_matching/fs_game/sub_0804CE7C.inc\"");

u32 sub_0804CF00(struct Entity *this)
{
    return 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0804CF14.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF4C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CFE8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D024.inc\"");

u32 sub_0804D0B8(struct Struct0202A7E0 *p)
{
    if (p->unk2 == 0)
        p->unk10 += 2;
    return 0;
}

asm(".include \"asm/non_matching/fs_game/sub_0804D0E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D118.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D15C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D1A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D1D4.inc\"");

u32 sub_0804D214(struct Entity *this)
{
}

asm(".include \"asm/non_matching/fs_game/sub_0804D224.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804D2C0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804D4FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D5E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D854.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D8A4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804DA24.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804DDC0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804DE58.inc\"");

void sub_0804DF14(struct Entity *this)
{
    gUnknown_0813FDA0[this->form](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804DF3C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804E198.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E248.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804E9DC.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0804ED8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804EDBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804EDEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804EF98.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804EFC8.inc\"");

void sub_0804F22C(struct Entity *this)
{
    gUnknown_084289D8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804F254.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804F458.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804F5B8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804F6EC.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080501DC.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08051760.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08051A6C.inc\"");

void sub_08051B30(struct Entity *this)
{
    gUnknown_08428AE8[this->form](this);
}


void sub_08051B58(struct Entity *this)
{
    gUnknown_08428B18[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08051B80.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051C8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051D18.inc\"");

void sub_08051D88(struct Entity *this)
{
    gUnknown_08428B20[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08051DB0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051E60.inc\"");

void sub_08051EAC(struct Entity *this)
{
    gUnknown_08428B28[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08051ED4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051F94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080520F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08052160.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080521A4.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08052318.inc\"");

void sub_08052348(struct Entity *this)
{
    gUnknown_08428B30[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08052370.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08052494.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805251C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080525FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08052648.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080527AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080528B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805293C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08052A88.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080537C4.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08053B24.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053B90.inc\"");

void sub_08053BF0(struct Entity *this)
{
    gUnknown_08428C58[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053C18.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053C6C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053CE4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053D4C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053DFC.inc\"");

void sub_08053EA8(struct Entity *this)
{
    gUnknown_08428C80[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053ED0.inc\"");

void sub_08053F7C(struct Entity *this)
{
    gUnknown_08428CA0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053FA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053FF8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054070.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080540D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054188.inc\"");

void sub_08054234(struct Entity *this)
{
    gUnknown_08428CC8[this->form](this);
}


void sub_0805425C(struct Entity *this)
{
    gUnknown_08428CD0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08054284.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054370.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054508.inc\"");

void sub_08054554(struct Entity *this)
{
    gUnknown_08428CDC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805457C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080545D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054620.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054744.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805485C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054974.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054A38.inc\"");

void sub_08054A8C(struct Entity *this)
{
    gUnknown_08428CEC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08054AB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054C04.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054C74.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054CDC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08054D30.inc\"");

void sub_08054EE0(struct Entity *this)
{
    gUnknown_08428D20[this->form](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08054F08.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080550C0.inc\"");

void sub_08055170(struct Entity *this)
{
    gUnknown_08428D2C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08055198.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080551D0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055270.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08055AAC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055B24.inc\"");

void sub_08055BB4(struct Entity *this)
{
    gUnknown_08428DD8[this->form](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08055BDC.inc\"");

void sub_08055C78(struct Entity *this)
{
    gUnknown_08428E00[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08055CA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055D10.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055DA4.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080562B0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08056778.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08056B54.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_08056DCC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056E6C.inc\"");

void sub_08056EF4(struct Entity *this)
{
    gUnknown_08428E88[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08056F1C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057010.inc\"");

void sub_08057048(struct Entity *this)
{
    gUnknown_08140C28[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08057070.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805722C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080576F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057758.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805781C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08057A00.inc\"");

void sub_08057B20(struct Entity *this)
{
    gUnknown_08428EA0[this->form](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08057B48.inc\"");

void sub_08057BE4(struct Entity *this)
{
    gUnknown_08428EC0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08057C0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057CB0.inc\"");

void sub_08057D94(struct Entity *this)
{
    gUnknown_08428EC8[this->form](this);
}


void sub_08057DBC(struct Entity *this)
{
    gUnknown_08428F60[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08057DE4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057EB0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057F58.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058058.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080580E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058178.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058204.inc\"");

void sub_080582F0(struct Entity *this)
{
    GetNextFrame(this);
    if (gUnknown_02016D60_fs.unk8 > 1)
        DeleteThisEntity(this);
}

asm(".include \"asm/non_matching/fs_game/sub_08058318.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805842C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080584E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805855C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080585B0.inc\"");

void sub_080585EC(struct Entity *this)
{
    gUnknown_08428FA4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08058614.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080586C0.inc\"");

void sub_080586FC(struct Entity *this)
{
}


void sub_0805870C(struct Entity *this)
{
    gUnknown_08428FAC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08058734.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080587BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805893C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080589CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058AA8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058BC4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058D04.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058D8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058DC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058E74.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058F60.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08059060.inc\"");

void sub_080591AC(struct Entity *this)
{
    gUnknown_08140DB0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080591D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805950C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080597A8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08059AA8.inc\"");
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

asm(".include \"asm/non_matching/fs_game/sub_08059EB0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08059FBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A040.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A148.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A3E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A484.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A64C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A6AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805A9BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805AC94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805AD20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805AD74.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805ADF8.inc\"");

void sub_0805AEAC(struct Entity *this)
{
    gUnknown_08140EC4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805AED4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B01C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B1CC.inc\"");

void sub_0805B23C(struct Entity *this)
{
    gUnknown_08140EF0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805B264.inc\"");

void sub_0805B2BC(struct Entity *this)
{
}

asm(".include \"asm/non_matching/fs_game/sub_0805B2CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B370.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B5FC.inc\"");

void sub_0805B648(struct Entity *this)
{
    sub_0803DB4C(this);
    gUnknown_08140F50[this->unk15 - 5](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805B678.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B7FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B838.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B8A4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BA18.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BA68.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BC44.inc\"");

void sub_0805BD08(struct Entity *this)
{
    gUnknown_084290AC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805BD30.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BE5C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BEA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BF2C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805BF9C.inc\"");

void sub_0805C0C8(struct Entity *this)
{
    gUnknown_084290D0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805C0F0.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_0805C61C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805C660.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805C758.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805C7BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805C878.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805CA84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805CDA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805CE18.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805CF6C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D0C8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D340.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805D520.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D62C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D6D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D748.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805D9EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DAA0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805E154.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805E40C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E4F8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805E780.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805E9D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805EB68.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805EC1C.inc\"");

void sub_0805ED78(struct Entity *this)
{
    gUnknown_081414F0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805EDA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805EE88.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805F938.inc\"");

void sub_0805FA48(struct Entity *this)
{
    gUnknown_08141798[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805FA70.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805FAF8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805FC70.inc\"");

void sub_0805FD70(struct Entity *this)
{
    gUnknown_08141828[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805FD98.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805FF24.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805FFEC.inc\"");

void sub_080600BC(struct Entity *this)
{
    gUnknown_08429354[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080600E4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08060124.inc\"");

void sub_08060248(struct Entity *this)
{
    gUnknown_0842935C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08060270.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080603C4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806041C.inc\"");

void sub_08060538(struct Entity *this)
{
    gUnknown_081419D4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08060560.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080605EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08060638.inc\"");

void sub_08060734(struct Entity *this)
{
    gUnknown_084293A4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0806075C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080608F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08060CF0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08060EE8.inc\"");

void sub_08060F1C(struct Entity *this)
{
    gUnknown_084293B8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08060F44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080610F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08061364.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080618B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062020.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062B0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062BFC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062CB8.inc\"");

void sub_08062D10(struct Entity *this)
{
    gUnknown_08141E0C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08062D38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062DD4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062EA4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08062FD8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063338.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063384.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063524.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080637F4.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_08063C5C.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_08063D28.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0806400C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080641A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080641F0.inc\"");

void sub_08064278(struct Entity *this)
{
}


void sub_08064288(struct Entity *this)
{
    gUnknown_08429424[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080642B0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064304.inc\"");

void sub_080643A4(struct Entity *this)
{
    gUnknown_0842942C[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080643CC.inc\"");

void sub_08064420(struct Entity *this)
{
    sub_080037EC(this, this->unk1B);
}


void sub_0806443C(struct Entity *this)
{
    gUnknown_08429434[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08064464.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080644E4.inc\"");

void sub_08064554(struct Entity *this)
{
    gUnknown_0842943C[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0806457C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080645EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806469C.inc\"");

void sub_080646CC(struct Entity *this)
{
    gUnknown_08429448[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080646F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064754.inc\"");

void sub_080647A8(struct Entity *this)
{
    gUnknown_08429450[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080647D0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064964.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064A10.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064AB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064B98.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064C30.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064CB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064D78.inc\"");

void sub_08064E10(struct Entity *this)
{
    gUnknown_08429470[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08064E38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064E84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064F34.inc\"");

void sub_08064FA4(struct Entity *this)
{
    gUnknown_0814216C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08064FCC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065138.inc\"");

void sub_08065228(struct Entity *this)
{
    gUnknown_0814219C[this->form](this);
}


void sub_08065250(struct Entity *this)
{
    gUnknown_081421AC[this->unk14](this);
    sub_0803DF84();
}

asm(".include \"asm/non_matching/fs_game/sub_0806527C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806535C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806547C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065524.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065678.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080656F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065958.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065A74.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065CEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065DB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08065E44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080660BC.inc\"");

void sub_08066120(struct Entity *this)
{
    gUnknown_08142310[this->form](this);
}


void sub_08066148(struct Entity *this)
{
    gUnknown_0814231C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08066170.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08066224.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080663C4.inc\"");

void sub_0806640C(struct Entity *this)
{
    u32 found;

    sub_0803DF84();
    found = sub_08012468(47);
    if (found != 0)
        DeleteThisEntity(this);
}


void sub_08066434(struct Entity *this)
{
    gUnknown_08142348[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0806645C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080664A8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806653C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080666B8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08066764.inc\"");

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

