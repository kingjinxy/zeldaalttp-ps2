#ifndef GUARD_ENTITY_H
#define GUARD_ENTITY_H

#include "global.h"

typedef struct Entity {
    /* 0x0 */ struct Entity* prev;
    /* 0x4 */ struct Entity* next;
    /* 0x8 */ u8 type;
    /* 0x9 */ u8 subtype;
    /* 0xA */ u8 form;
    /* 0xB */ u8 parameter;
    /* 0xC */ u8 fillerC[8];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 filler16[6];
    /* 0x1C */ u8 unk1C_0 : 2;
    /*      */ u8 unk1C_2 : 6;
    /* 0x1D */ u8 filler1D[3];
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 frameIdx;
    /* 0x22 */ u8 lastFrameIdx;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ void* frame;
    /* 0x28 */ u8 frameTimer;
    /* 0x29 */ u8 filler29[9];
    /* 0x32 */ s16 unk32;
} Entity;
static_assert(sizeof(Entity) == 0x34);

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
