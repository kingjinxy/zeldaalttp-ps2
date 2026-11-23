#include "global.h"

void sub_080D166C(u8 r0)
{
    u8 i;
    u8 temp;

    sub_080D17F4(r0);
    temp = Sprite3_CheckIfActive(r0);
    if (temp == 0)
    {
        u8 temp3 = gRam.unk1132[r0];
        gRam.unk1132[r0] = 2;
        if ((s8)sub_080C500C(r0) != 0)
        {
            sub_080AF16C();
            gRam.unk1719 = 0;
            sub_08093078();
        }
        gRam.unk1132[r0] = temp3;

        if (gRam.unk996 == 0)
        {
            gRam.unkF62[r0] = GetRandomInt();
            gRam.unkF62[r0] &= 1;
            gRam.unkF62[r0] += 2;
        }

        gRam.unk960 = gRam.unkF62[r0];

        for (i = gRam.unk996; (s8)gRam.unk960 >= 0; gRam.unk960--)
            i >>= 1;

        gRam.unkF92[r0] = i & 7;

        if (sub_0809E3CC() == 0)
        {
            gUnknown_08174A9C[gRam.unkF52[r0]](r0);
        }
    }
}

void sub_080D1754(u8 r0)
{
    struct Sprite sp;
    u8 temp;

    if ((((gRam.unk545 & 0x40) == 0) || (gRam.unkA4E != 5)) || (gMagicPowder != 1))
    {
        sub_080C9164(r0, 0x4f, &sp);
    }
    else
    {
        temp = sub_080C500C(r0);
        if ((temp != 0) && (gRam.unkA4E == 5) && (gMagicPowder == 1))
        {
            gMagicPowder = 0;
            gUnknown_02002212 |= 0x80;
            sub_080AA724();
            sub_080C9564(r0, 0x4e, &sp);
            sub_080CF018(r0, 0x3f);
            gRam.unkCB4 = 0;
        }
    }
}

asm(".include \"asm/non_matching/lttp/sprite_witch/sub_080D17F4.inc\"");

void sub_080D1A18(u8 r0)
{
    sub_080D166C(r0);
}

void sub_080D1A28(u8 r0)
{
    u8 temp;

    temp = 0;
    if (gMagicPowder == 1)
    {
        temp = 1;
    }
    gUnknown_08174AA4[temp](r0);
}

void sub_080D1A54(u8 r0)
{
    struct Sprite sp;

    if (gMagicPowder != 2)
    {
        if ((s8)gUnknown_02002212 >= 0)
        {
            sub_080C9164(r0, 0x4d, &sp);
        }
        else
        {
            sub_080C9164(r0, 0x4e, &sp);
        }
    }
    else
    {
        sub_080C9164(r0, 0x4d, &sp);
    }
}

void sub_080D1A9C(u8 r0)
{
    gRam.unkF52[r0] = 0;
    gRam.unk1776 = 0;
    sub_080A1588(0x18);
}
