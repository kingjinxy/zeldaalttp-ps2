#include "gba/gba.h"
#include "global.h"

extern u16 gUnknown_08180BCC[];
extern u16 gUnknown_08180BD2[];
extern u8 gUnknown_02010470[];
extern u8 gUnknown_02005480[];
extern u32 gUnknown_083B5758[];
//extern u8 gUnknown_02010471[];
extern u8 gUnknown_0201046F[];
extern u32 gUnknown_02003080[];

extern const u8 gUnknown_08195D98[];
extern const u32 gUnknown_08180BD8[];
extern const u32 gUnknown_08180BF8[];

/*
void sub_08127E4C(void)
{
    u16 r2;
    u32 *r6;
    u32 *r1;
    u8 r5;
    int i;
    u32 r3;

    if (gRam.unk1AF0 != 0)
    {
        u16 r0 = gRam.unk1AF2 / 2;
        gRam.unk1AF6 = r0[gUnknown_08180BCC];
        //asm(""::"r"(r0 * 2));
        gRam.unk1AF4 = r0[gUnknown_08180BD2];
        gRam.unk1AF0 = 0;
        gUnknown_02010470[gRam.unk1AF4] = 0;
    }
    //_08127E9C
    if (gUnknown_02005480[gRam.unk1AD2] == 31)
    {
        gRam.unk1AD2++;
        r2 = gUnknown_02005480[gRam.unk1AD2];
        // to _08127F00
    }
    //_08127EE0
    else if (gUnknown_02005480[gRam.unk1AD2] < 128
     && gRam.unk98E <= 1)
    {
        r2 = gUnknown_02005480[gRam.unk1AD2] + 0x100;
    }
    //_08127F00
    r5 = gUnknown_08195D98[r2];
    r6 = &gUnknown_083B5758[((r2 & (248 * 2)) * 2 + (r2 & 0xF)) * 8];

    gUnknown_02010470[1 + gRam.unk1AF4] = r5 + gUnknown_02010470[gRam.unk1AF4];
    gRam.unk1AF4++;

    r3 = gUnknown_0201046F[gRam.unk1AF4] & 7;
    if (r3 == 0)
    {
        r1 = &gUnknown_02003080[gUnknown_0201046F[gRam.unk1AF4] + gRam.unk1AF6 / 2];
        for (i = 0; i < 16; i++)
        {
            *r1 = *r6;
            if (i == 7)
            {
                r1 += 160;
                r6 += 120;
            }
            r6++;
            r1++;
        }
    }
    //_08127FA4
    else
    {
        u32 *r4 = &gUnknown_02003080[(gUnknown_0201046F[gRam.unk1AF4] & 248) + gRam.unk1AF6 / 2];
        u32 r12 = r3 << 2;
        //r1 =
        // hmm
        if (r3 + r5 <= 8)
        {
            for (i = 0; i < 16; i++)
            {
                *r4 = (*r4 & r3) | ((*r6 << r12) & gUnknown_08180BD8[r3]);
                if (i == 7)
                {
                    r4 += 160;
                    r6 += 120;
                }
                r6++;
                r4++;
            }
        }
        // _0812801C
        else
        {
            // r0 shit
            u32 *r5_ = r4 + 8;
            u32 r0 = (r3 + r5 - 8) << 24;
            for (i = 0; i < 16; i++)
            {
                *r4 = (*r4 & gUnknown_08180BF8[r3]) | ((*r6 << r12) & gUnknown_08180BD8[r3]);
                *r5_ = (*r5_ & gUnknown_08180BD8[(u8)(r3 + r5 - 8)]) 
                    | ( (*r6 << (32 - (r3 << 2))) & gUnknown_08180BF8[(u8)(r3 + r5 - 8)]);
                if (i == 7)
                {
                    r4 += 160;
                    r6 += 120;
                }
                r6++;
                r4++;
                r5_++;
            }
        }
    }
    //_08128092
    gRam.unk1AD2++;
}
*/

// Functions not decompiled yet are in asm/non_matching/hud/, one .inc each (tools/asm_split.py from asm/hud.s).

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/hud/sub_08127E4C.inc\"");
asm(".include \"asm/non_matching/hud/sub_081280C0.inc\"");
asm(".include \"asm/non_matching/hud/sub_081283E4.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128520.inc\"");
asm(".include \"asm/non_matching/hud/sub_081285D4.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128634.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128694.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128748.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128780.inc\"");
asm(".include \"asm/non_matching/hud/sub_081288BC.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128A10.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128B4C.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128E58.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128F00.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128F68.inc\"");
asm(".include \"asm/non_matching/hud/sub_08128FBC.inc\"");
asm(".include \"asm/non_matching/hud/sub_0812904C.inc\"");
asm(".include \"asm/non_matching/hud/sub_081290B4.inc\"");
asm(".include \"asm/non_matching/hud/sub_081291C8.inc\"");
asm(".include \"asm/non_matching/hud/sub_08129258.inc\"");
