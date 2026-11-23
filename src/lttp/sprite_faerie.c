#include "global.h"

void Sprite_Faerie(u8 r0)
{
    u8 temp;

    gRam.unk1172[r0] = 1;
    if (gRam.unkF52[r0] == 0)
    {
        if (gRam.unk9B2 == 0)
        {
            gRam.unkD94[r0] = 0x30;
        }
        temp = sub_080C6208(r0);
        if (temp != 0)
        {
            return;
        }
    }
    sub_080CFE3C(r0);
    temp = Sprite3_CheckIfActive(r0);
    if (temp == 0)
    {
        gUnknown_08174A08[gRam.unkF52[r0]](r0);
    }
}

void sub_080CFA30(u8 r0)
{
    u8 uVar1;
    struct Sprite sp;

    if (gRam.unk10E2[r0] == 0)
    {
        uVar1 = sub_080C4F98(r0);
        if (uVar1 == 0)
        {
            sub_080C4948(&sp, r0);
            if (sp.unk0 != 0)
            {
                gRam.unkF52[r0]++;
                sub_080C9564(r0, 0xcc, &sp.unk1);
                return;
            }
        }
        else
        {
            sub_080CF418(r0);
        }
    }
    uVar1 = sub_080D0820(r0);
    if (uVar1 == 0)
    {
        sub_080CFAA8(r0);
    }
}

// Too hard
#ifdef NONMATCHING_LTTP  // upstream LttP drafts that no longer compile
void sub_080CFAA8(u8 r0)
{
    s8 temp;
    u8 uVar2;
    u8 uVar4;
    u8 temp2;
    u8 *puVar7;

    gRam.unkF92[r0] = gRam.unk996 >> 3 & 1;
    if ((gRam.unk9B2 != 0) && gRam.unkFD2[r0] == 0)
    {
        if ((sub_080C7A20(r0) & 3) != 0)
        {
            gRam.unkF22[r0] = ~gRam.unkF22[r0] + 1;
            gRam.unkFB2[r0] = ~gRam.unkFB2[r0] + 1;
            *puVar7 = 0x20;
        }
        if (gRam.unk1042[r0] != 0xc)
        {
            gRam.unkF12[r0] = ~gRam.unkF12[r0] + 1;
            gRam.unkF62[r0] = ~gRam.unkF62[r0] + 1;
            *puVar7 = 0x20;
        }
    }
    if (gRam.unkF22[r0] != 0)
    {
        if (gRam.unkF22[r0] * 0x1000000 >= 0)
        {
            temp2 = gRam.unk1122[r0] | 0x40;
        }
        else
        {
            temp2 = gRam.unk1122[r0] & 0xbf;
        }
        gRam.unk1122[r0] = temp2;
    }
    Sprite3_Move(r0);
    if ((gRam.unk996 & 0x3f) == 0)
    {
        gRam.unk968 = GetRandomInt();
        gRam.unk969 = gRam.unk16C5;
        gRam.unk96C = GetRandomInt();
        gRam.unk96D = gRam.unk16C1;
        sub_080C2DCC(r0, 0x10);
        gRam.unkF62[r0] = gRam.unk960;
        gRam.unkFB2[r0] = gRam.unk961;
    }
    temp2 = gRam.unk996;
    if ((gRam.unk996 & 0xf) == 0)
    {
        u8 t;

        gRam.unk960 = gRam.unkF62[r0];
        if ((gRam.unkF62[r0] << 0x18) > 0)
        {
            gRam.unk960 = temp2 + gRam.unkF62[r0];
        }

        gRam.unk964.half = gRam.unkF12[r0];
        if ((gRam.unkF12[r0] << 0x18) > 0)
        {
            gRam.unk964.half = temp2 + gRam.unkF12[r0];
        }
        gRam.unkF12[r0] = (*(s16 *)&gRam.unk964.half + *(s16 *)&gRam.unk960) >> 1;

        gRam.unk960 = gRam.unkFB2[r0];
        if ((gRam.unkFB2[r0] << 0x18) > 0)
        {
            gRam.unk960 = temp2 + gRam.unkFB2[r0];
        }

        gRam.unk964.half = gRam.unkF22[r0];
        if ((gRam.unkF22[r0] << 0x18) > 0)
        {
            gRam.unk964.half += temp2;
        }
        gRam.unkF22[r0] = (*(s16 *)&gRam.unk960 + *(s16 *)&gRam.unk964.half) >> 1;
    }

    sub_080C2C4C(r0);

    gRam.unk1152[r0] += gUnknown_08174A10[GetRandomInt() & 1];
    gRam.unk1152[r0] = gRam.unk1152[r0] + temp2 + 1;
    if (gRam.unk1142[r0] < 8)
    {
        gRam.unk1142[r0] = 8;
        temp2 = 5;
    }
    else
    {
        if (gRam.unk1142[r0] < 0x19)
        {
            return;
        }
        gRam.unk1142[r0] = 0x18;
        temp2 = 0xfb;
    }
    gRam.unk1152[r0] = temp2;
}
#else
asm(".include \"asm/non_matching/lttp/sprite_faerie/sub_080CFAA8.inc\"");
#endif

s8 sub_080CFD60(void)
{
    s8 temp;
    s8 temp3;
    u16 temp2;

    temp = sub_080CA538(0xe3, 0);
    temp3 = temp;

    if (temp == -1)
        return temp;

    gRam.unk10F2[temp3] = gRam.unkA10;

    temp2 = gRam.unk16C4.half;
    temp2 += 8;
    gRam.unkEE2[temp3] = temp2;
    gRam.unkF02[temp3] = temp2 >> 8;

    temp2 = gRam.unk16C0.half;
    temp2 += 16;
    gRam.unkED2[temp3] = temp2;
    gRam.unkEF2[temp3] = temp2 >> 8;

    gRam.unkFB2[temp3] = 0;
    gRam.unk10E2[temp3] = 0x60;

    return temp3;
}

void sub_080CFDFC(u8 r0)
{
    u8 temp;

    temp = GetRandomInt() & 1;
    gRam.unkF62[r0] = temp;

    temp ^= 1;
    gRam.unkFB2[r0] = temp;

    sub_080D09F4(r0);
}

void sub_080CFE3C(u8 r0)
{
    if ((gRam.unk9AD == 2) && (u16)((gRam.unk1AE8 | gRam.unk1AE9 << 8) + 0xFF34) < 2)
    {
        gRam.unk10E2[r0] = 0x28;
    }
}

void sub_080CFE88(u8 r0)
{
    s8 cVar1;
    struct Sprite sp;

    if (gRam.unk1AE2 == 0) {
        cVar1 = sub_080C99F8();
        if (cVar1 > -1) {
            *gUnknown_0817276C[cVar1] = 6;
            sub_080AA724();
            gRam.unkFA2[r0] = 0;
            return;
        }
        sub_080C9564(r0, 0xcd, &sp);
    }
    gRam.unk10E2[r0] = 0x30;
    gRam.unkF52[r0] = 0;
}