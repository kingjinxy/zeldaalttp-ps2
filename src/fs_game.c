// Four Swords game code (0x0803668C-0x080668E4), compiled without optimization (-O0, see Makefile).
// Exceptions, -O2: sub_08039288, sub_0803E518, sub_0804721C, sub_0804BD9C; they need their own file when
// decompiled. Functions not decompiled yet are in asm/non_matching/fs_game/.

#include "global.h"
#include "entity.h"

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/fs_game/sub_0803668C.inc\"");

void sub_080366D0(u8 a)
{
    sub_08036704(a);
    sub_0800C4E8();
}

asm(".include \"asm/non_matching/fs_game/sub_080366F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036704.inc\"");


void sub_08036760(void)
{
    sub_08036770(0);
}

asm(".include \"asm/non_matching/fs_game/sub_08036770.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080367B4.inc\"");

u32 sub_080367CC(void)
{
    return gUnknown_03000FC0.unk8;
}


u8 sub_080367E4(void)
{
    return gUnknown_03000FC0.unk3;
}

asm(".include \"asm/non_matching/fs_game/sub_080367FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036834.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036864.inc\"");

void sub_080368A0(void)
{
    sub_0800C658(gUnknown_03000FD0);
    zero_memory(gUnknown_03000FD0, 20);
}


void sub_080368C0(void)
{
}

asm(".include \"asm/non_matching/fs_game/sub_080368CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080368D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036948.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080369B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036DEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036E24.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036F28.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036F9C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08036FC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080370C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803719C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037300.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037414.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037424.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037554.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037574.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037750.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803781C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080378F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080379BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037A94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037B5C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037C58.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037D64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037DE8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037E0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08037EEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038094.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803815C.inc\"");

void sub_08038168(void)
{
    gUnknown_08427BCC[gUnknown_03005050]();
}


void sub_0803818C(void)
{
    gUnknown_03005050++;
}

asm(".include \"asm/non_matching/fs_game/sub_080381A8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038238.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038358.inc\"");

void sub_080383CC(void)
{
    gUnknown_08427BFC[gSubState]();
}

asm(".include \"asm/non_matching/fs_game/sub_080383F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038508.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038570.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803857C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080386C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803883C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038A30.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038CA8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038D50.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038DB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08038E44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039288.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039650.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039744.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080397F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080398F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080399CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039A40.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039A70.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039AA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039CD4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039D1C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08039D64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A030.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A20C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A2E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A320.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A544.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A5DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A6DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A788.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A838.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A858.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A880.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803A940.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AA04.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AB30.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AC00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803ACC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AE00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AEB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803AFB8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B0D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B1F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B338.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B360.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B3C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B550.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B644.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B73C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B834.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803B8D8.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0803CC20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CC9C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CD8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE04.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CE68.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CECC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CEF0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803CF58.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D010.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D134.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D224.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D310.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D350.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D398.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D3D0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D440.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D4A4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D520.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D65C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D770.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D7E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D8AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803D9F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DB4C.inc\"");

void DoPlayerEntity(struct Entity *this)
{
    gUnknown_08427C28[this->subtype](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0803DBD4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DC68.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DD0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DD94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DE94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DF84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803DFC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803E048.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803E114.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803E518.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F0E4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F284.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F3C4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F550.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F594.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F628.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F638.inc\"");
asm(".include \"asm/non_matching/fs_game/DoManagerEntity.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F6F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0803F710.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08040FB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08040FDC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08041030.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08042268.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042298.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080422D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042490.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080425A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08042A78.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08043EE0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08043F20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044018.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804411C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044198.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044240.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044594.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804469C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080447C8.inc\"");

void sub_0804482C(struct Entity *this)
{
    gUnknown_0813EDA0[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08044854.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044870.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044910.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080449F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044AE0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044B78.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044BC4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08044C24.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_080456E0.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08046D24.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08048F70.inc\"");

void sub_08048F8C(struct Entity *this)
{
    gUnknown_0813F578[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08048FB4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049140.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080492B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804930C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080494B8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080496DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049708.inc\"");

void sub_08049A00(struct Entity *this)
{
    gUnknown_0813F654[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08049A28.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08049A38.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0804A154.inc\"");
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
asm(".include \"asm/non_matching/fs_game/DoObjectEntity.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C200.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C410.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C448.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C808.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C8A8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C938.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C9C8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804C9F4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CA20.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CA4C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CA78.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CABC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CB38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CB7C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CCBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CCE4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CD94.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CE00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CE38.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CE64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CE7C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF00.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF14.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF4C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CF84.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804CFE8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D024.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D0B8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D0E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D118.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D15C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D1A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D1D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D214.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D224.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D274.inc\"");

void sub_0804D298(struct Entity *this)
{
    gUnknown_0813FB8C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0804D2C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804D448.inc\"");
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

asm(".include \"asm/non_matching/fs_game/sub_0804E0E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E198.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E248.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E364.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E394.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804E434.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_0804EB2C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804EB3C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804ED44.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804ED74.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0804FB34.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804FB80.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0804FF80.inc\"");

void sub_0805002C(struct Entity *this)
{
    gUnknown_0813FEBC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08050054.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080500E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08050160.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080501C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080501DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08050338.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805039C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08050444.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08050B50.inc\"");

void sub_080515C0(struct Entity *this)
{
    gUnknown_084289E4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080515E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051600.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080516C8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051744.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051760.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08051870.inc\"");

void sub_080518B0(struct Entity *this)
{
    gUnknown_0814085C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080518D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805197C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080519CC.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08052274.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805229C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080522C4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080522EC.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08052B88.inc\"");

void sub_08052BE4(struct Entity *this)
{
    gUnknown_08428C20[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08052C0C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08052CE4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053028.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053080.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053124.inc\"");

void sub_080533EC(struct Entity *this)
{
    gUnknown_0814094C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053414.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053424.inc\"");

void sub_08053434(struct Entity *this)
{
    gUnknown_08428C30[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805345C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053514.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053564.inc\"");

void sub_08053610(struct Entity *this)
{
    gUnknown_08428C40[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053638.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080536F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080537C4.inc\"");

void sub_080538D8(struct Entity *this)
{
    gUnknown_08140984[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053900.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053988.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080539D8.inc\"");

void sub_08053AA4(struct Entity *this)
{
    gUnknown_081409A4[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08053ACC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053ADC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08053AEC.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_080552E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080553BC.inc\"");

void sub_08055438(struct Entity *this)
{
    gUnknown_08428DB8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08055460.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055688.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055A08.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08055ED8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08055FA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056048.inc\"");

void sub_080560A0(struct Entity *this)
{
    gUnknown_08428E48[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080560C8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056178.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080561EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056260.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080562B0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080563D8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805643C.inc\"");

void sub_080564C0(struct Entity *this)
{
    gUnknown_08428E64[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080564E8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056594.inc\"");

void sub_080565F8(struct Entity *this)
{
    gUnknown_08428E6C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08056620.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080566EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056778.inc\"");

void sub_080568A4(struct Entity *this)
{
    gUnknown_08428E78[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080568CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805694C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056988.inc\"");

void sub_080569F0(struct Entity *this)
{
    gUnknown_08428E80[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08056A18.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056AE0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056B54.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08056C80.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_080571BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805722C.inc\"");

void sub_080572AC(struct Entity *this)
{
    gUnknown_08140C44[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080572D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08057368.inc\"");
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

asm(".include \"asm/non_matching/fs_game/sub_0805792C.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08058098.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080580A8.inc\"");

void sub_080580B8(struct Entity *this)
{
    gUnknown_08428F78[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080580E0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058178.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058204.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080582F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08058318.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080583E4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080583F4.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_080586FC.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_08059818.inc\"");

void sub_080598D0(struct Entity *this)
{
    gUnknown_08428FFC[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080598F8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08059960.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080599A8.inc\"");

u32 sub_08059A2C(void)
{
    return gUnknown_0202E1E4;
}

asm(".include \"asm/non_matching/fs_game/sub_08059A44.inc\"");

void sub_08059A80(struct Entity *this)
{
    gUnknown_08429040[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08059AA8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08059BD0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08059E34.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0805B2BC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B2CC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B370.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B5FC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805B648.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0805C2D8.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805CECC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805CF6C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D0C8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D340.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D3DC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D4B0.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805D7D0.inc\"");

void sub_0805D82C(struct Entity *this)
{
    gUnknown_08429258[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805D854.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805D8D8.inc\"");

void sub_0805D938(struct Entity *this)
{
    gUnknown_08429260[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805D960.inc\"");

void sub_0805D9C4(struct Entity *this)
{
    gUnknown_08429268[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805D9EC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DAA0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DAEC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DBBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DC34.inc\"");

void sub_0805DC44(struct Entity *this)
{
    gUnknown_08429270[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805DC6C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DD04.inc\"");

void sub_0805DD98(struct Entity *this)
{
    gUnknown_0842928C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805DDC0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DE60.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DEC8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DF08.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DF8C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805DFE0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E020.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E0AC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E154.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E2B8.inc\"");

void sub_0805E334(struct Entity *this)
{
    gUnknown_084292C8[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805E35C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E40C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E4F8.inc\"");

void sub_0805E608(struct Entity *this)
{
    gUnknown_0842930C[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0805E630.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E698.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E780.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E86C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E8C0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0805E99C.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_0805FBC8.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08060E08.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_08063DBC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063DF0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063E88.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063F64.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08063FFC.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806400C.inc\"");

void sub_0806403C(struct Entity *this)
{
    gUnknown_08429414[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_08064064.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080640B4.inc\"");

void sub_08064178(struct Entity *this)
{
    gUnknown_0842941C[this->unk15](this);
}

asm(".include \"asm/non_matching/fs_game/sub_080641A0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080641F0.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08064278.inc\"");

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
asm(".include \"asm/non_matching/fs_game/sub_08064420.inc\"");

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

asm(".include \"asm/non_matching/fs_game/sub_08065250.inc\"");
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
asm(".include \"asm/non_matching/fs_game/sub_0806640C.inc\"");

void sub_08066434(struct Entity *this)
{
    gUnknown_08142348[this->unk14](this);
}

asm(".include \"asm/non_matching/fs_game/sub_0806645C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080664A8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806653C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080666B8.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08066764.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_08066808.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_0806682C.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080668A4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080668B4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080668C4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080668D4.inc\"");
asm(".include \"asm/non_matching/fs_game/sub_080668E4.inc\"");
