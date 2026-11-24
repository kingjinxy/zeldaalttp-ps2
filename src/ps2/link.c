// PS2: the link cable between game instances, at the level of whole transfers instead of serial timing.
// The game's link layer (src/rom2.c: sub_0800C41C init, sub_0800C658 queues a packet, sub_0800C75C starts one
// on the parent at VBlank, sub_0800C54C/sub_0800C6A8 take received ones) talks to the cable through SIOCNT,
// SIOMLT_SEND and SIOMULTI0-3, and an interrupt handler (sub_0800C7E8, copied to EWRAM 0x02030590) that runs
// after each 16-bit transfer. A packet is 13 transfers: the parent's 0xFEFE sync word, then 12 halfwords
// from every player.
// Here the PS2 runs no serial or timer interrupts. After every instance has run its frame, if the parent
// (instance 0) has started a packet, ps2_link_exchange carries it out: per transfer, every instance's
// SIOMLT_SEND goes into every instance's SIOMULTI registers, then each instance's handler runs (a C port of
// sub_0800C7E8, on that instance's memory), which loads the next word and, on the parent, starts the next
// transfer. SIOCNT reads (io.c) give each instance the status the cable would: connected (SD high), parent or
// child (SI), its player number (ID).
// shortcut: whole packets land between frames, not partway through one as on hardware; a game that waits in
// one frame for a packet started in that frame would hang. The game only polls once per frame (sub_0800C54C).
#include <kernel.h>

#define LINK 0x02030790u       // the game's link state (struct Struct02030790, src/rom2.c)
#define BIOS_IF 0x03007FF8u    // interrupt flags for IntrWait
#define SIOCNT 0x04000128u
#define SIOMLT_SEND 0x0400012Au
#define SIOMULTI 0x04000120u
#define TM3CNT_H 0x0400010Eu

void *ps2_inst_ptr(int inst, u32 a);
void ps2_log(const char *fmt, ...);
extern int ps2_instances;

#define P8(i, a) (*(volatile u8 *)ps2_inst_ptr(i, a))
#define P16(i, a) (*(volatile u16 *)ps2_inst_ptr(i, a))
#define P32(i, a) (*(volatile u32 *)ps2_inst_ptr(i, a))
#define SWAP(i, a, b) do { u32 t_ = P32(i, a); P32(i, a) = P32(i, b); P32(i, b) = t_; } while (0)

// sub_0800C7E8 (the serial/timer 3 interrupt handler) on instance i, with SIOMULTI0-3 = m. The fields:
// +0 parent (8) or child (0), +4 a queued packet, +5 a packet received, +7 SIOCNT error bit, +9 cleared,
// +0x14 send index, +0x18 receive index (-1: before the first word), +0x1C/+0x20 queued and sending packet,
// +0x24/+0x28 receiving and last received buffers (4 players x 28 bytes)
static void handler(int i, const u16 *m)
{
    s32 send, recv;
    int k;
    for (k = 0; k < 4; k++)
        P16(i, SIOMULTI + 2 * k) = m[k];
    P8(i, LINK + 7) = (P16(i, SIOCNT) >> 6) & 1;
    if (m[0] == 0xFEFE && (s32)P32(i, LINK + 0x18) > 11) {  // a packet starts
        P32(i, LINK + 0x18) = (u32)-1;
        SWAP(i, LINK + 0x24, LINK + 0x28);
        if (P8(i, LINK + 4)) {
            SWAP(i, LINK + 0x1C, LINK + 0x20);
            P8(i, LINK + 4) = 0;
            P32(i, LINK + 0x14) = 0;
        }
        P16(i, BIOS_IF) |= 0x80;
    }
    send = P32(i, LINK + 0x14);
    if (send <= 11)
        P16(i, SIOMLT_SEND) = P16(i, P32(i, LINK + 0x20) + 2 * send);
    if (send <= 12)
        P32(i, LINK + 0x14) = ++send;
    recv = P32(i, LINK + 0x18);
    if (recv >= 0) {
        for (k = 0; k < 4; k++)
            P16(i, P32(i, LINK + 0x24) + 2 * recv + 28 * k) = m[k];
        if (recv == 11)
            P8(i, LINK + 5) = 1;
    }
    if (recv <= 11)
        P32(i, LINK + 0x18) = recv + 1;
    if (P8(i, LINK + 0)) {
        P16(i, TM3CNT_H) = 0;
        if (send <= 12) {
            P16(i, SIOCNT) |= 0x80;
            P16(i, TM3CNT_H) = 0xC0;
        }
    }
    P8(i, LINK + 9) = 0;
}

// the ARM routine at 0x08000318 that the game copies to EWRAM 0x02030950 (sub_0800C41C) and sub_0800C6A8 calls:
// with interrupts off, swap the last received and the read buffer (+0x28, +0x2C), return the "packet received"
// flag and clear it
u8 ps2_link_take(void)  // called by the running instance: its memory is mapped
{
    volatile u32 *w = (volatile u32 *)(LINK + 0x28);
    volatile u8 *done = (volatile u8 *)(LINK + 5);
    u32 t = w[0];
    u8 r = *done;
    w[0] = w[1], w[1] = t;
    *done = 0;
    return r;
}

void ps2_link_exchange(void)
{
    u16 m[4];
    int i, n;
    if (ps2_instances < 2)
        return;
    for (n = 0; n < 16 && (P16(0, SIOCNT) & 0x80); n++) {  // the parent started a transfer
        P16(0, SIOCNT) &= ~0x80;
        for (i = 0; i < 4; i++)
            m[i] = i < ps2_instances ? P16(i, SIOMLT_SEND) : 0xFFFF;  // no GBA there: the line stays high
        for (i = 0; i < ps2_instances; i++)
            handler(i, m);
    }
    if (n == 16)
        ps2_log("link: the parent kept transferring (16 transfers in one exchange)");
}

// SIOCNT as read by instance inst: the status bits are the cable's, not what the game wrote
u32 ps2_link_siocnt(int inst, u32 v)
{
    v &= ~0x7Cu;  // SI (2), SD (3), ID (4-5), error (6)
    if (ps2_instances > 1)
        v |= 8 | (inst ? 4 : 0) | (inst << 4);
    return v;
}
