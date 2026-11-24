// PS2: the shared world (make SHARED_WORLD=1; docs/Planning Doc.md Phase 5, step 5c). While every instance is in a
// stage, the world runs once, in instance 0, and the other players keep only their per-player bytes: an overlay of
// the ranges in overlay_ranges.h (what differed between linked GBAs in session 1's stage, tools/ps2/overlay_ranges.py)
// kept in their saved blocks (tlb.c, 0x01900000 + i MB). Each frame instance 0's thread runs its whole frame (the world
// and player 0's view); then for each other player its overlay is swapped into the live block and the view pass runs
// on the main thread: that player's keys and link packet, camera, the off-screen arrows, HUD, sprite list, text and the
// VBlank copies, the code the step 5b measurements found writing per-player state (walkthrough steps 43-46).
// Outside a stage (file select, lobby, the link setup, results) the players differ for real, so the instances run
// separately as before; leaving the stage rebuilds each saved block as the world plus that player's overlay.
// shortcut: the overlay comes from one recorded stage; scenes it doesn't cover may need more ranges (SHARED_CHECK logs
// world bytes a view pass changes).
#ifdef SHARED_WORLD
#include <kernel.h>
#include <string.h>
#include "overlay_ranges.h"

#define NOVERLAY (sizeof(sOverlay) / sizeof(sOverlay[0]))
#define SAVED(i) ((u8 *)(0x80000000u + 0x01900000u + (u32)(i) * 0x100000u))  // kseg0, as tlb.c
#define LIVE_SIZE 0x78000u

void ps2_log(const char *fmt, ...);
void ps2_vblank_run(void);
void ps2_input_frame(int inst);
extern int ps2_cur_instance;
extern u32 ps2_gstate_watch;

int ps2_shared;           // 1 while the world runs once
static int sHolder;       // whose per-player bytes are in the live block
static u8 sPerPlayer[LIVE_SIZE / 8];  // bit per live-block byte: in the overlay

// a live-block offset as the GBA address it's mapped at (tlb.c's layout)
static void *live(u32 off)
{
    if (off < 0x40000)
        return (void *)(0x02000000u + off);
    if (off < 0x48000)
        return (void *)(0x03000000u + off - 0x40000);
    if (off < 0x4A000)
        return (void *)(0x04000000u + off - 0x48000);
    if (off < 0x50000)
        return (void *)(0x05000000u + off - 0x4A000);
    if (off < 0x70000)
        return (void *)(0x06000000u + off - 0x50000);
    return (void *)(0x07000000u + off - 0x70000);
}

void ps2_shared_init(void)
{
    u32 r, o;
    for (r = 0; r < NOVERLAY; r++)
        for (o = sOverlay[r][0]; o < sOverlay[r][1]; o++)
            sPerPlayer[o / 8] |= 1 << (o % 8);
}

int ps2_shared_holder(void) { return sHolder; }

// where instance inst's byte at live-block offset off is while the world is shared (tlb.c's ps2_inst_ptr)
void *ps2_shared_ptr(int inst, u32 off)
{
    if (inst != sHolder && (sPerPlayer[off / 8] >> (off % 8) & 1))
        return SAVED(inst) + off;
    return live(off);
}

// put player inst's per-player bytes in the live block (the holder's go back to its saved block)
static void overlay_swap(int inst)
{
    u32 r;
    if (inst == sHolder)
        return;
    for (r = 0; r < NOVERLAY; r++) {
        u32 a = sOverlay[r][0], n = sOverlay[r][1] - a;
        memcpy(SAVED(sHolder) + a, live(a), n);
        memcpy(live(a), SAVED(inst) + a, n);
    }
    sHolder = ps2_cur_instance = inst;
}

// ---- the view pass ----------------------------------------------------------------------------------------------------

void rom2_read_keys(void);
u32 sub_0800C54C(u8 *);
void sub_08036864(void), sub_080368A0(void), sub_0800D788(void), sub_0802C940(void), sub_0800B524(void);
void sub_08015D9C(void), sub_0802CD3C(void), sub_08000BAC(void), sub_08037574(void), sub_0802D988(void);
int sub_08037554(void);
unsigned char sub_0803781C(unsigned short);
void DoObjectEntity(void *);
extern u32 gUnknown_03000BF0;
extern u8 gUnknown_03000FF8[];
#define E20_UNK11 (*(volatile u8 *)0x03000E31)  // gUnknown_03000E20.unk11: the stage is paused (world)
#define PAUSE_UI (*(volatile u8 *)0x0201EF18)   // this player's pause screen state (sub_0802D988's table index)

void sub_08003688(void *);
extern u8 sub_08003688__base[];

// the entities whose draw step ran in instance 0's frame, in order (ps2_gstate_seen: the gstate entry watch on
// sub_08003688). An entity draws only in some states (its handler decides), so the view pass replays this list rather
// than every entity in the lists.
static u32 sDrawn[512];
static int sNDrawn;

void ps2_gstate_seen(u32 r0)
{
    if (sHolder == 0 && ps2_cur_instance == 0 && sNDrawn < 512)  // instance 0's frame, not a view pass
        sDrawn[sNDrawn++] = r0;
}

// the draw steps of instance 0's frame again, for this player's screen: sub_08003688 puts a visible entity that's on
// this player's screen into the draw lists sub_08000BAC turns into sprites (instance 0's frame emptied them). The
// off-screen arrows (object 16, sub_08052B88) run their whole update instead, positioned from this player's camera; it
// ends in the same draw step. The sound queue sub_08003688 plays from is empty after instance 0's frame.
// shortcut: an arrow instance 0's frame didn't update isn't drawn; fine while every player has one (all Links in play).
static void draw_entities(void)
{
    int k;
    for (k = 0; k < sNDrawn; k++) {
        u8 *e = (u8 *)sDrawn[k];
        if (e[8] == 6 && e[9] == 16)
            DoObjectEntity(e);
        else
            sub_08003688(e);
    }
}

// the per-player part of a stage frame (main.c's loop around sub_08038A30, the stage's frame function), for the
// player whose overlay is live
static void view_pass(void)
{
    u32 cpu[20];  // gCpu (include/gstate.h): the main thread's game calls use it too
    memcpy(cpu, (void *)0x0203C000, sizeof(cpu));
    rom2_read_keys();
    gUnknown_03000BF0 = sub_0800C54C(gUnknown_03000FF8);
    sub_08036864();
    if (sub_08037554()) {
        // the pause path also while this player's pause screen is still up: the unpause clears the world's flag in
        // instance 0's frame, before this player's own last pause step (state 3 back to 0) has run
        if (E20_UNK11 || sub_0803781C(8) || PAUSE_UI) {
            sub_0802D988();
            sub_0802CD3C();
        } else {
            draw_entities();  // before the camera moves, as in the stage frame (UpdateAllEntities comes first)
            sub_08015D9C();  // camera
            sub_0802CD3C();  // HUD
            sub_08000BAC();  // sprite list
        }
        sub_08037574();
    }
    sub_080368A0();  // this player's link packet
    sub_0800D788();  // text
    sub_0802C940();
    sub_0800B524();  // the frame flip
    ps2_vblank_run();
    memcpy((void *)0x0203C000, cpu, sizeof(cpu));
}

#ifdef SHARED_CHECK  // the world bytes a view pass changes (it should change none), copied around it in block 5
static void check_before(void) { memcpy(SAVED(5), live(0), 0x40000); memcpy(SAVED(5) + 0x40000, live(0x40000), 0x8000); }
static void check_after(int inst)
{
    static u32 seen[64][2];
    static int nseen;
    u32 o, a = 0, n = 0;
    for (o = 0; o <= 0x48000; o++) {
        int ch = o < 0x48000 && !(o >= 0x3C000 && o < 0x40000) && !(sPerPlayer[o / 8] >> (o % 8) & 1) &&
                 SAVED(5)[o] != *(u8 *)live(o);
        if (ch && !n++)
            a = o;
        if (!ch && n && (o - a > n + 8 || o == 0x48000)) {  // a run (gaps up to 8) ended: log it once
            int k;
            for (k = 0; k < nseen && !(a >= seen[k][0] && a < seen[k][1]); k++)
                ;
            if (k == nseen && nseen < 64) {
                seen[nseen][0] = a, seen[nseen][1] = o, nseen++;
                ps2_log("shared: view pass %d changed world bytes %08x-%08x", inst, (u32)live(a), (u32)live(o - 1) + 1);
            }
            n = 0;
        }
    }
}
#else
#define check_before() ((void)0)
#define check_after(i) ((void)0)
#endif

// the other players' frames: each one's view pass and screen, with its overlay live; player 0's back at the end
void ps2_shared_views(int instances, void (*render)(int inst))
{
    int i;
    for (i = 1; i < instances; i++) {
        overlay_swap(i);
        check_before();
        view_pass();
        check_after(i);
        render(i);
        ps2_input_frame(i);  // keys for this player's next frame
    }
    overlay_swap(0);
    sNDrawn = 0;  // for instance 0's next frame
}

// ---- entering and leaving ----------------------------------------------------------------------------------------------

#define MAIN_STATE 0x46D10u  // live-block offsets: gMainState (2: Four Swords), gUnknown_03005050 (9: the stage loop)
#define STAGE_STATE 0x45050u

static int in_stage(int inst)
{
    u8 *m = inst == ps2_cur_instance ? (u8 *)live(MAIN_STATE) : SAVED(inst) + MAIN_STATE;
    u8 *s = inst == ps2_cur_instance ? (u8 *)live(STAGE_STATE) : SAVED(inst) + STAGE_STATE;
    return *m == 2 && *s == 9;
}

// after a frame of separate instances (ps2_cur_instance mapped, the others saved): share the world if all are in a
// stage. Returns 1 if it started.
int ps2_shared_try_enter(int instances, void (*select)(int inst))
{
    int i;
    for (i = 0; i < instances; i++)
        if (!in_stage(i))
            return 0;
    select(0);
    sHolder = 0;
    sNDrawn = 0;
    ps2_gstate_watch = (u32)sub_08003688__base;
    ps2_shared = 1;
    ps2_log("shared: the world runs once from here (%d players)", instances);
    return 1;
}

// after instance 0's frame: back to separate instances if it left the stage. Each other saved block becomes the
// live world with its own overlay. Returns 1 if it ended.
int ps2_shared_try_leave(int instances)
{
    static const u32 used[][2] = {  // the live block's used spans (tlb.c sRegions)
        { 0x00000, 0x40000 }, { 0x40000, 0x48000 }, { 0x48000, 0x48400 }, { 0x4A000, 0x4A400 }, { 0x50000, 0x68000 },
        { 0x70000, 0x70400 },
    };
    int i;
    u32 u, o, r, a, b;
    if (in_stage(0))
        return 0;
    for (i = 1; i < instances; i++)
        for (u = 0; u < sizeof(used) / sizeof(used[0]); u++)
            for (o = used[u][0], r = 0; o < used[u][1]; r++) {  // the gaps between overlay ranges: the world
                a = r < NOVERLAY ? sOverlay[r][0] : used[u][1];
                b = r < NOVERLAY ? sOverlay[r][1] : used[u][1];
                if (a > used[u][1])
                    a = used[u][1];
                if (a > o)
                    memcpy(SAVED(i) + o, live(o), a - o);
                if (b > o)
                    o = b;
            }
    ps2_shared = 0;
    ps2_gstate_watch = 0;
    ps2_log("shared: separate instances again");
    return 1;
}
#else
typedef unsigned int u32;
void ps2_gstate_seen(u32 r0) { (void)r0; }  // the gstate entry watch is never set without the shared world
#endif
