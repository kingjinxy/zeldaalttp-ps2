#include "global.h"

#ifdef PLATFORM_PS2  // called before their definitions: implicit int declarations conflict in modern GCC
u16 sub_080CF370(u8);
u16 sub_080CF400(u8, u8);
#endif

void Sprite_LoadPalette(u8 r0)
{
    u8 temp = gRam.unkFF2[r0];
    u8 temp2 = gUnknown_0822788F[temp];

    gRam.unk1032[r0] = temp2;
    gRam.unk1122[r0] = temp2 & 0xf;
}

u8 GetRandomInt(void)
{
    u8 temp = REG_VCOUNT;
    temp += (u8)gRam.unk996;
    temp += (u8)gRam.unk15DE;
    gRam.unk15DE = temp;

	return temp;
}

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF018.inc\"");

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF0AC.inc\"");

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF140.inc\"");

asm(".include \"asm/non_matching/lttp/sprite2/Sound_SetSfxPanWithPlayerCoords.inc\"");

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF244.inc\"");

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF28C.inc\"");

void sub_080CF330(void)
{
    u8 i;
    for (i = 0; i < 6; i++)
    {
        gRam.unk162A[i] = gUnknown_08172FBC[i];
    }
}

u16 sub_080CF35C(u8 r0)
{
    return sub_080CF370(r0);
}

u16 sub_080CF370(u8 r0)
{
    return sub_080CF400(0, r0);
}

u16 sub_080CF388(u8 r0)
{
    return sub_080CF400(1, r0);
}

u16 sub_080CF3A0(u8 r0)
{
    return sub_080CF400(2, r0);
}

u16 sub_080CF3B8(u8 r0)
{
    return sub_080CF400(3, r0);
}

u16 sub_080CF3D0(u8 r0)
{
    return sub_080CF400(4, r0);
}

u16 sub_080CF3E8(u8 r0)
{
    return sub_080CF400(5, r0);
}

u16 sub_080CF400(u8 r0, u8 r1)
{
    return sub_080CF28C(r0, r1);
}

#ifdef NONMATCHING_LTTP  // upstream LttP drafts that no longer compile
#else
asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF418.inc\"");
#endif

// missing push {lr}
#ifdef NONMATCHING_LTTP  // upstream LttP drafts that no longer compile
void sub_080CF480(u8 r0)
{
    gShield = gRam.unk1002[r0];

    if (gRam.unk1002[r0] == 3)
    {
        if (gUnknown_020023F1 != 0)
        {
            gUnknown_020023F1 = 0;
        }
    }
}
#else
asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF480.inc\"");
#endif

void sub_080CF4BC(u8 r0)
{
    gRam.unk1776 = 0;
    sub_080A1588(0x32);
    sub_080CF504(r0);
}

void sub_080CF4E8(u8 r0)
{
    gKeyCount++;
    sub_080CF504(r0);
}

asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF504.inc\"");

void sub_080CF55C(u8 r0)
{
    sub_080CF0AC(r0, 0x27);
    sub_080BEA28(0x1d, 1);
    sub_080CF588(0x38);
}

void sub_080CF57C()
{
    sub_080CF588(8);
}

void sub_080CF588(u8 r0)
{
    gHeartsFiller += r0;
}

void sub_080CF59C(u8 r0)
{
    sub_080AA83C(gUnknown_08173080[gRam.unkFF2[r0] - 0xD9]);
}

void sub_080CF5C8(u8 r0)
{
    gBombFiller += gUnknown_08173083[gRam.unkFF2[r0] - 0xDC];
}

void sub_080CF600(void)
{
    sub_080CF624((gMagicMeterFiller + 0x10));
}

void sub_080CF618(void)
{
    sub_080CF624(0x80);
}

void sub_080CF624(u8 r0)
{
    gMagicMeterFiller = r0;
}

void sub_080CF630(u8 r0)
{
    u8 temp = gRam.unk1082[r0];

    if (temp != 0)
    {
        sub_080CF66C(temp);
    }
    else
    {
        sub_080CF66C(5);
    }
}

void sub_080CF660(void)
{
    sub_080CF66C(10);
}

void sub_080CF66C(u8 r0)
{
    gArrowFiller += r0;
}

// missing push {lr}
#ifdef NONMATCHING_LTTP  // upstream LttP drafts that no longer compile
bool8 sub_080CF680(u8 find)
{
    char cur;
    char *iter = gUnknown_08174900;
    register char i asm("r0");

    for (;;)
    {
        cur = *iter;

        i = cur;
        if (i == 0xFF)
            break;

        iter++;

        if (cur == find)
            return TRUE;
    }
    return FALSE;
}
#else
asm(".include \"asm/non_matching/lttp/sprite2/sub_080CF680.inc\"");
#endif
