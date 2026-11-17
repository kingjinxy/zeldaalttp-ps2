// Functions not decompiled yet are in asm/non_matching/rom2a/, one .inc each (tools/asm_split.py from asm/rom2a.s).

#include "global.h"
#include "entity.h"

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/rom2a/sub_0802DC80.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DD50.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DDAC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DE48.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DEB8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DFD0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E02C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E1A8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E354.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E4B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E5E0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E750.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E764.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E78C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E904.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E9B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EA14.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EA98.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EDA0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F080.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F0B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F1BC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F304.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F364.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F688.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F6D4.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F9F8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FA3C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FA94.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FAEC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FB28.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FC84.inc\"");

void sub_0802FCC8(void)
{
}

asm(".include \"asm/non_matching/rom2a/sub_0802FCCC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FD88.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FE04.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FEE8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FFE4.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030018.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030054.inc\"");

void sub_0803006C(void)
{
    gUnknown_084278F8[gUnknown_03005050]();
}


void sub_0803008C(void)
{
    switch (gSubState) {
    case 0:
        sub_0800BED8();
        *(u16 *)0x05000000 = 0x6739;
        gPaletteBuf2[0] = 0x6739;
        sub_0801239C();
        sub_080123BC();
        sub_0800D6F4();
        gSubState++;
        gUnknown_02016D60.unk4 = 10;
        gUnknown_02016D60.unk6 = 0;
        sub_08036704(4);
        break;
    case 1:
        if (sub_080367CC() == 1) {
            gUnknown_03005050++;
            gSubState = 0;
        }
        break;
    }
}

asm(".include \"asm/non_matching/rom2a/sub_08030100.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030214.inc\"");

void sub_08030214(u8);
void sub_08030724(void);

void sub_08030314(void)
{
    struct Entity *e;

    sub_08030214(((struct { u8 pad[8]; u8 v; } *)&gUnknown_02016D60)->v);
    sub_0804C8A8(70, 6, ((struct { u8 pad[8]; u8 v; } *)&gUnknown_02016D60)->v);
    gUnknown_03000450.unk0 = sub_0804C8A8(70, 7, gLCDRegisterBuffer);
    sub_08036704(5);
    gUnknown_03005050 = 4;
    gSubState = 0;
    if (gLCDRegisterBuffer != 0) {
        e = sub_0804C8A8(70, 5, 0);
        e->x.HALF.HI = 120;
        e->y.HALF.HI = 80;
    }
    sub_08030724();
}


void sub_08030314(void);
void sub_08137AFC(void);

void sub_08030380(void)
{
    if (--gUnknown_02016D60.unk4 == 0) {
        sub_08059A44();
        if (((u8 *)&gUnknown_02016D60)[10] != 0) {
            gUnknown_030004A0.dispCnt |= 0x4200;
            gUnknown_030004A0.winin = 0x3D3F;
            gUnknown_030004A0.winout = 63;
            gUnknown_030004A0.win1h = 120;
            gUnknown_030004A0.win1v = 160;
            gUnknown_03000450.unk0 = sub_0804C8A8(70, 2, 0);
            sub_0804C8A8(70, 3, 0);
            sub_0804C8A8(70, 4, 0);
            gUnknown_03005050 = 3;
            gUnknown_02016D60.unk4 = 60;
        } else {
            sub_08030314();
        }
    }
    sub_08137AFC();
    sub_08000BAC();
}

asm(".include \"asm/non_matching/rom2a/sub_08030418.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_080304FC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_080305BC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030654.inc\"");

void sub_08030724(void)
{
}


void sub_08030728(void)
{
}

asm(".include \"asm/non_matching/rom2a/sub_0803072C.inc\"");
