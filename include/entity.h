#ifndef GUARD_ENTITY_H
#define GUARD_ENTITY_H

#include "global.h"

// Fields are named by offset until their meaning is known. ": 8" bitfields are bytes the -O0 Four Swords
// code writes with ldrb / and #0 / orr / strb; plain bytes there would be a single strb. Size not known yet.
typedef struct Entity {
    /* 0x00 */ struct Entity* prev;
    /* 0x04 */ struct Entity* next;
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 subtype;
    /* 0x0A */ u8 form;
    /* 0x0B */ u8 parameter;
    /* 0x0C */ s32 unkC;
    /* 0x10 */ u8 filler10[4];
    /* 0x14 */ u8 unk14 : 8;
    /* 0x15 */ u8 unk15 : 8;
    /* 0x16 */ u8 filler16;
    /* 0x17 */ u8 unk17 : 8;
    /* 0x18 */ u8 filler18[4];
    /* 0x1C */ u8 unk1C_0 : 2;
    /*      */ u8 unk1C_2 : 6;
    /* 0x1D */ u8 unk1D_0 : 6;
    /*      */ u8 unk1D_6 : 2;
    /* 0x1E */ u8 filler1E;
    /* 0x1F */ u8 unk1F_0 : 6;
    /*      */ u8 unk1F_6 : 2;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 frameIdx;
    /* 0x22 */ u8 lastFrameIdx;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ void* frame;
    /* 0x28 */ u8 frameTimer;
    /* 0x29 */ u8 filler29;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ u8 filler2B[7];
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ u8 filler38[0x26];
    /* 0x5E */ u8 unk5E_0 : 2;
    /*      */ u8 unk5E_2 : 6;
} Entity;

// Managers (DoManagerEntity): same list header as Entity, bigger body
struct Manager {
    /* 0x0 */ struct Manager* prev;
    /* 0x4 */ struct Manager* next;
    /* 0x8 */ u8 type;
    /* 0x9 */ u8 subtype;
    /* 0xA */ u8 fillerA[0x37];
    /* 0x41 */ u8 unk41 : 8;
};

#endif
