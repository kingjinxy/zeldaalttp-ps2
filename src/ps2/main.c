// PS2 entry: map the GBA address space, start one game instance (thread running the game's AgbMain) per player, then
// run the frame loop: each instance runs one game frame in turn (until its VBlankIntrWait, frame.c), then every
// instance's screen is drawn and shown together, and the controllers and saves are handled.
#include <kernel.h>
#include <stdio.h>
#include <string.h>

#ifndef INSTANCES  // players (make -f Makefile.ps2 INSTANCES=2)
#define INSTANCES 4
#endif
#define STACK_SIZE (256 * 1024)
#ifdef ONE_WORLD  // one game for everyone: players 2-N are viewports (shared.c), on the link as copies of player 1
#ifndef SHARED_WORLD
#error "ONE_WORLD needs SHARED_WORLD=1"
#endif
#define GAMES 1
#else
#define GAMES INSTANCES  // a game instance per player until a stage
#endif

void ps2_tlb_map(int instances);
void ps2_tlb_select(int inst);
void ps2_glue_init(void);
void ps2_watch_init(void);
void ps2_video_init(int instances);
void ps2_video_render(int inst);
void ps2_video_present(int instances);
void ps2_input_init(void);
void ps2_input_frame(int inst);
void ps2_save_load(int inst);
void ps2_save_vblank(int inst);
void ps2_log(const char *fmt, ...);
void ps2_fatal(const char *fmt, ...);
void AgbMain(void);
#ifdef SHARED_WORLD
extern int ps2_shared;
void ps2_shared_init(void);
void ps2_shared_views(int instances, void (*render)(int inst));
int ps2_shared_try_enter(int instances, void (*select)(int inst));
int ps2_shared_try_leave(int instances);
#endif

extern void *_gp;
int ps2_main_thread;
static int sThread[GAMES];
static u8 sStack[GAMES][STACK_SIZE] __attribute__((aligned(16)));
u32 ps2_frame;  // frames shown
int ps2_instances = INSTANCES;
int ps2_games = GAMES;  // instances that run the game themselves (link.c)
void ps2_link_exchange(void);

static void instance_main(void *arg)
{
    for (;;) {  // AgbMain returns to switch games (the game-select screen); crt0 then runs init, which calls it again
        ps2_log("instance %d: entering AgbMain", (int)arg);
        AgbMain();
    }
}

int main(void)
{
    ee_thread_t t;
    int i;
    ps2_log("zeldaalttp-ps2: start, %d instances", INSTANCES);
    ps2_tlb_map(INSTANCES);
    ps2_glue_init();
    ps2_video_init(INSTANCES);
    ps2_input_init();
    for (i = 0; i < GAMES; i++) {
        ps2_tlb_select(i);
        ps2_save_load(i);
    }
    ps2_watch_init();
    ps2_main_thread = GetThreadId();
    ChangeThreadPriority(ps2_main_thread, 64);
    for (i = 0; i < GAMES; i++) {
        memset(&t, 0, sizeof(t));
        t.func = (void *)instance_main;
        t.stack = sStack[i];
        t.stack_size = STACK_SIZE;
        t.gp_reg = &_gp;
        t.initial_priority = 64;
        if ((sThread[i] = CreateThread(&t)) < 0)
            ps2_fatal("CreateThread failed for instance %d", i);
    }
#ifdef SHARED_WORLD
    ps2_shared_init();
#endif
    for (;;) {
#ifdef SHARED_WORLD  // in a stage the world runs once, in instance 0; the others get a view pass each (shared.c)
        if (ps2_shared) {
            WakeupThread(sThread[0]);
            SleepThread();
            ps2_video_render(0);
            ps2_input_frame(0);
            ps2_save_vblank(0);
            // shortcut: on the frame instance 0 leaves the stage the others aren't drawn (one blank frame); they
            // run their own frames from the next one
            if (!ps2_shared_try_leave(INSTANCES)) {
                ps2_shared_views(INSTANCES, ps2_video_render);
                for (i = 1; i < INSTANCES; i++)
                    ps2_save_vblank(i);
            }
            ps2_link_exchange();
            ps2_video_present(INSTANCES);
            if (++ps2_frame % 600 == 0 || ps2_frame <= 5)
                ps2_log("frame %u", ps2_frame);
            continue;
        }
#endif
        for (i = 0; i < GAMES; i++) {  // one game frame each (the instance wakes us at its VBlankIntrWait), drawn
            ps2_tlb_select(i);             // while its memory is in place
            if (ps2_frame == 0)
                StartThread(sThread[i], (void *)i);
            else
                WakeupThread(sThread[i]);
            SleepThread();
            ps2_video_render(i);
            ps2_input_frame(i);
            ps2_save_vblank(i);
        }
        ps2_link_exchange();  // the packet the parent started this frame reaches everyone
#ifdef SHARED_WORLD
        ps2_shared_try_enter(INSTANCES, ps2_tlb_select);
#endif
        ps2_video_present(INSTANCES);  // waits for vsync: the game runs at the PS2's 60 Hz
        if (++ps2_frame % 600 == 0 || ps2_frame <= 5)
            ps2_log("frame %u", ps2_frame);
    }
    return 0;
}
