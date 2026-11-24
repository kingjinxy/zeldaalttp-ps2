// PS2: draws each game instance's GBA screen with mGBA's software renderer (src/ps2/mgba, MPL-2.0) and shows them (one
// above the other for 2 players, 2x2 for 3-4; ps2_video_mode picks 240p/480i/480p/16:9/720p) through the Graphics Synthesizer with gsKit. The renderer reads VRAM straight from the mapped GBA video
// memory (main.c maps the instance first); registers, palette and OAM are handed to it each frame, then the 160 lines
// are drawn into a 256-wide buffer that goes up as a CT32 texture.
#include <kernel.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <gsKit.h>
#include <dmaKit.h>
#include <mgba/internal/gba/renderers/video-software.h>

#define GBA_W 240
#define GBA_H 160
#define MAX_INSTANCES 4
#define IO16(o) (*(volatile u16 *)(0x04000000u + (o)))
#define IO32(o) (*(volatile u32 *)(0x04000000u + (o)))

// The view the renderer draws: the GBA's 240x160, or with WIDE_VIEW a bigger area of the same video memory (320x240
// for one player, 640x240 each for two; three or four keep 240x160 to fit the grid). The game isn't changed: the extra
// area shows whatever the background maps and sprites hold there (step 1 of a wider view, Running Walkthrough step 30).
int ps2_view_w = GBA_W, ps2_view_h = GBA_H;
#define VIEW_W ps2_view_w
#define VIEW_H ps2_view_h
static int sTexW;  // texture width: the view's, rounded up to 64 pixels (the GS buffer width unit); the renderer's stride

void ps2_log(const char *fmt, ...);
extern u32 ps2_frame;

static GSGLOBAL *sGs;
static struct {
    GSTEXTURE tex;
    struct GBAVideoSoftwareRenderer renderer;
} sView[MAX_INSTANCES];
// what the renderers draw, screen i at i * sTexW * 240 lines: room for two 640x240 or four 256x160 (the EE has no room for
// four wide ones: gsKit's allocations failed)
static u32 sPixelPool[2 * PS2_VIEW_MAX_W * PS2_VIEW_MAX_H] __attribute__((aligned(128)));
#define PIXELS(i) (sPixelPool + (i) * sTexW * PS2_VIEW_MAX_H)  // not VIEW_H: the wide check pass changes it

static u32 count(void) { u32 c; __asm__ volatile("mfc0 %0, $9" : "=r"(c)); return c; }
static u32 sRenderCycles, sOtherCycles, sLastEnd, sFrameRender;

// Video modes. Frame buffer fbw x fbh; the screen it fills is aw pixels wide in square pixels (854 for 16:9
// anamorphic), so a width in square pixels becomes aw/fbw times fewer buffer pixels. 720p: a 640-wide buffer
// doubled horizontally (as the HAL's display_ps2.c), 16-bit so two buffers fit in GS memory.
enum { VIDEO_AUTO = -1, VIDEO_240P, VIDEO_480I, VIDEO_480P, VIDEO_480P_WIDE, VIDEO_720P };
static const struct Mode {
    s16 gs, interlace, fbw, fbh, aw, scale, psm;  // scale: one player's GBA pixels per screen pixel
    const char *name;
} sModes[] = {
    [VIDEO_240P] = { GS_MODE_NTSC, 0, 320, 240, 320, 1, GS_PSM_CT32, "240p" },
    [VIDEO_480I] = { GS_MODE_NTSC, 1, 640, 480, 640, 2, GS_PSM_CT32, "480i" },
    [VIDEO_480P] = { GS_MODE_DTV_480P, 0, 640, 480, 640, 2, GS_PSM_CT32, "480p" },
    [VIDEO_480P_WIDE] = { GS_MODE_DTV_480P, 0, 640, 480, 854, 3, GS_PSM_CT32, "480p 16:9" },
    [VIDEO_720P] = { GS_MODE_DTV_720P, 0, 640, 720, 1280, 4, GS_PSM_CT16, "720p" },
};
#ifdef SCREENS  // the 3x3 grid (place()): 720p at its full 1280 width (the GS renderer draws no textures, so two
                // 1280x720 16-bit buffers fit)
#ifndef GS_RENDER
#error "SCREENS needs GS_RENDER=1"
#endif
#define NSCREENS SCREENS
#define CELL_W 426  // 1280 / 3, even
#define CELL_H 240
#else
#define NSCREENS sInstances
#endif
#ifndef VIDEO_MODE
#define VIDEO_MODE VIDEO_AUTO
#endif
// shortcut: set at build time (VIDEO_MODE=0-4) until there's a menu. Auto: 240p for one player; 480p for more, as
// two players need the height (one above the other).
int ps2_video_mode = VIDEO_MODE;
static const struct Mode *sMode;
static int sInstances;
static void screen_rect(int i, int *x, int *y, int *w, int *h);

void ps2_video_init(int instances)
{
    int i, magh, dw, dx, dy;
    if (ps2_video_mode < 0 || ps2_video_mode > VIDEO_720P)
        ps2_video_mode = instances > 1 ? VIDEO_480P : VIDEO_240P;
#ifdef SCREENS
    {
        static struct Mode m;
        m = sModes[VIDEO_720P];
        m.fbw = 1280;
        ps2_video_mode = VIDEO_720P;
        sMode = &m;
    }
#else
    sMode = &sModes[ps2_video_mode];
#endif
    sInstances = instances;
#ifdef WIDE_VIEW
    if (instances <= 2)
        ps2_view_w = instances == 1 ? 320 : 640, ps2_view_h = 240;
#if WIDE_VIEW == 2  // a vertical split: two 320x480 views side by side (taller than the software renderer's buffers)
#ifndef GS_RENDER
#error "WIDE_VIEW=2 needs GS_RENDER=1"
#endif
    if (instances == 2)
        ps2_view_w = 320, ps2_view_h = 480;
#endif
#endif
#if defined(SCREENS) && defined(WIDE_VIEW)  // the cell's shape at 1.5x: 284x160 of the GBA's pixels
    ps2_view_w = CELL_W * GBA_H / CELL_H & ~1, ps2_view_h = GBA_H;
#endif
    sTexW = (VIEW_W + 63) & ~63;
    dmaKit_init(D_CTRL_RELE_OFF, D_CTRL_MFD_OFF, D_CTRL_STS_UNSPEC, D_CTRL_STD_OFF, D_CTRL_RCYC_8,
                1 << DMA_CHANNEL_GIF);
    dmaKit_chan_init(DMA_CHANNEL_GIF);
    // small queues (a clear and a sprite per screen each frame): gsKit's default 1.25 MB pools don't fit beside the
    // wide view's pixel buffers in the ~2 MB heap (src/ps2/ps2.ld), and a failed allocation shows as stores near 0
    sGs = gsKit_init_global_custom(64 * 1024, 16 * 1024);
    sGs->Mode = sMode->gs;
    sGs->Interlace = sMode->interlace ? GS_INTERLACED : GS_NONINTERLACED;
    sGs->Field = sMode->interlace ? GS_FIELD : GS_FRAME;
    sGs->Width = sMode->fbw;
    sGs->Height = sMode->fbh;
    sGs->PSM = sMode->psm;
#ifdef GS_RENDER  // 16-bit frames everywhere: the GBA's colours are 15-bit, and it halves GS memory
    sGs->PSM = GS_PSM_CT16;
#endif
    sGs->ZBuffering = GS_SETTING_OFF;
    sGs->DoubleBuffering = GS_SETTING_ON;
    sGs->PrimAlphaEnable = GS_SETTING_OFF;
    gsKit_init_screen(sGs);
    gsKit_mode_switch(sGs, GS_ONESHOT);
    // the buffer's width over gsKit's display area, centred: MAGH from its clock count (2560 for NTSC; 480p's 27
    // MHz clocks; 1280 at 720p), as the HAL's display_ps2.c
    magh = sGs->DW / sMode->fbw - 1;
    dw = sMode->fbw * (magh + 1);
    dx = sGs->StartX + sGs->StartXOffset + (sGs->DW - dw) / 2;
    dy = sGs->StartY + sGs->StartYOffset;
    GS_SET_DISPLAY1(dx, dy, magh, 0, dw - 1, sGs->DH - 1);
    GS_SET_DISPLAY2(dx, dy, magh, 0, dw - 1, sGs->DH - 1);

    for (i = 0; i < instances; i++) {
        struct GBAVideoRenderer *r = &sView[i].renderer.d;
        GSTEXTURE *t = &sView[i].tex;
        t->Width = sTexW;
        t->Height = VIEW_H;
        t->PSM = GS_PSM_CT32;
        t->Mem = PIXELS(i);
        t->Filter = GS_FILTER_NEAREST;
#ifndef GS_RENDER  // the GS renderer's targets are the textures (below)
        t->Vram = gsKit_vram_alloc(sGs, gsKit_texture_size(sTexW, VIEW_H, GS_PSM_CT32), GSKIT_ALLOC_USERBUFFER);
        if (t->Vram == GSKIT_ALLOC_ERROR)
            ps2_log("video: out of GS memory for screen %d", i);
#endif
        GBAVideoSoftwareRendererCreate(&sView[i].renderer);
        sView[i].renderer.outputBuffer = (color_t *)PIXELS(i);
        sView[i].renderer.outputBufferStride = sTexW;
        r->palette = (uint16_t *)0x05000000;  // every instance's video memory is mapped here when it's drawn
        r->vram = (uint16_t *)0x06000000;
        r->oam = (union GBAOAM *)0x07000000;
        r->cache = NULL;
        r->init(r);
    }
#ifdef GS_RENDER  // the GS draws each screen straight into the frame buffer
    {
        void ps2_gsr_init(GSGLOBAL *gs);
        ps2_gsr_init(sGs);
        gsKit_clear(sGs, GS_SETREG_RGBAQ(0, 0, 0, 0x80, 0));  // the first frame's buffer (present clears the next ones)
        gsKit_queue_exec(sGs);
    }
#endif
    ps2_log("video: %s, %dx%d buffer (DW %d DH %d MAGH %d), %d screens of %dx%d", sMode->name, sGs->Width,
            sGs->Height, sGs->DW, sGs->DH, magh, instances, VIEW_W, VIEW_H);
}

// frames written to host: (the ELF's folder) as PPM, to check output without a window
static void dump_frame(int inst, u32 n, const char *tag)
{
    char name[64];
    FILE *f;
    int x, y;
    snprintf(name, sizeof(name), "host:frame_p%d_%05u%s.ppm", inst, n, tag);
    if (!(f = fopen(name, "wb")))
        return;
    fprintf(f, "P6\n%d %d\n255\n", VIEW_W, VIEW_H);
    for (y = 0; y < VIEW_H; y++)
        for (x = 0; x < VIEW_W; x++) {
            u32 c = PIXELS(inst)[y * sTexW + x];
            fputc(c & 0xFF, f), fputc((c >> 8) & 0xFF, f), fputc((c >> 16) & 0xFF, f);
        }
    fclose(f);
}

// draw the mapped instance's frame at the current view size: feed the renderer the current state, draw the lines
// HBlank DMAs (start timing 2): on the GBA each runs at the end of every visible line, copying the next entry of a table
// into a register, so the next line draws with it (the game uses them for a window wipe into the stages and a wavy BG
// scroll; docs Running Walkthrough step 31). The port draws after the frame, so it applies the table here instead:
// line y gets entry y - 1. y = 160 (after the last line): entry 159 goes into the I/O register itself, where the GBA's
// last transfer leaves it, so the next frame's line 0 uses it. Returns how many channels are active. Only video
// registers are handled (all the game uses).
static int hblank_dma(struct GBAVideoRenderer *r, int y)
{
    int n, active = 0;
    for (n = 0; n < 4; n++) {
        u32 base = 0xB0 + 12 * n, ctl = IO16(base + 10), count = IO16(base + 8), unit, i;
        u32 src = IO32(base), dst = IO32(base + 4);
        if ((ctl & 0xB000) != 0xA000)  // enabled, HBlank timing
            continue;
        active++;
        if (y == 0 || dst - 0x04000000u >= 0x56 || src < 0x02000000u)  // source 0 for a frame: the BIOS, unreadable
            continue;
        unit = (ctl & 0x400) ? 4 : 2;
        src += (u32)(y - 1) * count * unit * (((ctl >> 7) & 3) == 2 ? 0 : 1);  // fixed source: the same entry each line
        for (i = 0; i < count * unit; i += 2) {
            u32 o = dst - 0x04000000u + (((ctl >> 5) & 3) == 2 ? i % unit : i);
            u16 v = *(const u16 *)(src + (((ctl >> 7) & 3) == 2 ? i % unit : i));
            if (o >= 0x56)
                continue;
            if (y == GBA_H)
                IO16(o) = v;
            else
                r->writeVideoRegister(r, o, v);
        }
    }
    return active;
}

static int render(struct GBAVideoRenderer *r)
{
    int hdma = 0;
    const u16 *io = (const u16 *)0x04000000, *pal = (const u16 *)0x05000000;
    u32 a;
    int y;
    for (a = 0; a < 0x56; a += 2)
        r->writeVideoRegister(r, a, io[a / 2]);
    for (a = 0; a < 0x400; a += 2)
        r->writePalette(r, a, pal[a / 2]);
    for (a = 0; a < 0x200; a++)
        r->writeOAM(r, a);
    r->writeVRAM(r, 0);  // VRAM changed: no scanline is clean
    for (y = 0; y < VIEW_H; y++) {
        if (y < GBA_H)  // the GBA's lines only; a taller view keeps the last entry
            hdma = hblank_dma(r, y);
        r->drawScanline(r, y);
    }
    hblank_dma(r, GBA_H);
    r->finishFrame(r);
    return hdma;
}

void ps2_video_render(int inst)
{
    struct GBAVideoRenderer *r = &sView[inst].renderer.d;
    u32 t0 = count(), n = ps2_frame + 1;
    int dump = n == 1300 || n == 1600 || n == 2000 || n == 2400 || n == 2800;
    static int sHdmaDumps;  // the first frames drawn with an HBlank DMA, to compare with mGBA
    int y;
#ifndef GS_RENDER  // (the GS path's check below does this)
    if (dump && VIEW_W != GBA_W) {  // wide view check: the GBA's own 240x160 from the same state, as _gba.ppm
        int w = VIEW_W, h = VIEW_H;
        ps2_view_w = GBA_W, ps2_view_h = GBA_H;
        render(r);
        dump_frame(inst, n, "_gba");
        ps2_view_w = w, ps2_view_h = h;
    }
#endif
#ifdef GS_RENDER
    {
        void ps2_gsr_draw(u32 fb, int fbw, int x, int y, int w, int h);
        int ps2_gsr_read(u32 fb, int fbw, int x, int y, int w, int h, u32 *dst);
        u32 fb = sGs->ScreenBuffer[sGs->ActiveBuffer & 1];  // the buffer being drawn (gsKit_setactive's)
        int px, py, pw, ph;
        screen_rect(inst, &px, &py, &pw, &ph);
        ps2_gsr_draw(fb, sGs->Width / 64, px, py, pw, ph);
#ifdef SCREENS  // shortcut: screens past the players show them again (cost and layout test) until there are more players
        for (y = inst + sInstances; y < NSCREENS; y += sInstances) {
            int qx, qy, qw, qh;
            screen_rect(y, &qx, &qy, &qw, &qh);
            ps2_gsr_draw(fb, sGs->Width / 64, qx, qy, qw, qh);
        }
#endif
        sFrameRender += count() - t0;
        for (y = 0; y < 4; y++)  // frames with an HBlank DMA (the window wipes) are checked too, as in the software path
            if ((IO16(0xBA + 12 * y) & 0xB000) == 0xA000 && sHdmaDumps < 24 && n % 4 == 0) {
                sHdmaDumps++, dump = 1;
                break;
            }
        if (dump) {  // check: the software renderer's picture of the same state, pixel by pixel (a wider view: its
                     // middle 240x160, where the GBA screen is drawn)
            static u32 *gs;
            int x, diff = 0, far = 0, first = -1, w = VIEW_W, h = VIEW_H, ox = (w - GBA_W) / 2, oy = (h - GBA_H) / 2;
            if (pw != w || ph != h)  // drawn scaled: no pixel-for-pixel check
                return;
            if (!gs && !(gs = memalign(64, sTexW * VIEW_H * 4)))
                ps2_log("gsrender: no memory for the check");
            if (!gs)
                return;
            ps2_view_w = GBA_W, ps2_view_h = GBA_H;
            render(r);
            dump_frame(inst, n, "");
            ps2_view_w = w, ps2_view_h = h;
            if (!ps2_gsr_read(fb, sGs->Width / 64, px, py, w, h, gs))
                ps2_log("gsrender: readback stuck");
            for (y = 0; y < GBA_H; y++)
                for (x = 0; x < GBA_W; x++)
                {
                    // compared at the GBA's 5 bits a channel (the frame buffer's; mGBA blends and fades in 8)
                    u32 a = gs[(y + oy) * w + x + ox], b = PIXELS(inst)[y * sTexW + x], c, d = 0;
                    if (((a ^ b) & 0xF8F8F8) && !diff++)
                        first = y * 256 + x;
                    for (c = 3; c < 24; c += 8)  // more than one level off in a channel (blending may round once)
                        d |= ((a >> c) & 0x1F) - ((b >> c) & 0x1F) + 1 > 2;
                    far += d;
                }
            ps2_log("gsrender: frame %u screen %d: %d pixels differ from the software renderer, %d by more than one level (first at %d,%d: gs %06x sw %06x)",
                    n, inst, diff, far, first % 256, first / 256,
                    first < 0 ? 0 : gs[(first / 256 + oy) * w + first % 256 + ox] & 0xFFFFFF,
                    first < 0 ? 0 : PIXELS(inst)[(first / 256) * sTexW + first % 256] & 0xFFFFFF);
            for (y = 0; y < h; y++)  // as a view-sized picture (rows of sTexW)
                memcpy(PIXELS(inst) + y * sTexW, gs + y * w, w * 4);
            dump_frame(inst, n, "_gs");
        }
        return;
    }
#endif
    if (render(r) && sHdmaDumps < 24 && n % 4 == 0)
        sHdmaDumps++, dump = 1;
    sFrameRender += count() - t0;
    if (dump)
        dump_frame(inst, n, "");
}

// Where screen i goes, in square pixels of the aw x fbh screen. One player: centred at the mode's scale. Two: one above
// the other, each 1:1 (240x160), touching (side by side when the views are taller than wide),
// the pair centred in the frame. Three or four: a 2x2 grid of 1:1 screens, touching, centred as one block.
static void place(int i, int instances, float *x, float *y, float *w, float *h)
{
    float aw = sMode->aw, ah = sMode->fbh, cw = aw, ch = ah, s;
    if (instances == 1) {
        s = sMode->scale;  // the GBA screen's scale; a bigger view gets the largest that fits, up to it
        if (s * VIEW_W > aw)
            s = aw / VIEW_W;
        if (s * VIEW_H > ah)
            s = ah / VIEW_H;
    }
    else
        s = 1;
#ifdef SCREENS  // 3x3 cells of CELL_W x CELL_H, the centre one black: the view as large as fits, centred in its cell
    s = (float)CELL_H / VIEW_H;
    if (s * VIEW_W > CELL_W)
        s = (float)CELL_W / VIEW_W;
    *w = VIEW_W * s, *h = VIEW_H * s;
    i += i >= 4;  // skip the centre
    *x = (aw - 3 * CELL_W) / 2 + (i % 3) * CELL_W + (CELL_W - *w) / 2;
    *y = (ah - 3 * CELL_H) / 2 + (i / 3) * CELL_H + (CELL_H - *h) / 2;
    (void)cw, (void)ch, (void)instances;
    return;
#endif
    *w = VIEW_W * s, *h = VIEW_H * s;
    if (instances == 1)
        *x = (cw - *w) / 2, *y = (ch - *h) / 2;
    else if (instances == 2 && *h > *w)  // tall views: side by side, centred as one block
        *x = (aw - 2 * *w) / 2 + i * *w, *y = (ah - *h) / 2;
    else if (instances == 2)  // the pair stacked together, centred as one block
        *x = (aw - *w) / 2, *y = (ah - 2 * *h) / 2 + i * *h;
    else  // 2x2, P1 P2 on top, P3 P4 below
        *x = (aw - 2 * *w) / 2 + (i % 2) * *w, *y = (ah - 2 * *h) / 2 + (i / 2) * *h;
}

// screen i's rectangle in frame-buffer pixels
static void screen_rect(int i, int *x, int *y, int *w, int *h)
{
    float fx, fy, fw, fh, kx = (float)sMode->fbw / sMode->aw;
    place(i, NSCREENS, &fx, &fy, &fw, &fh);
    *x = (int)(fx * kx + 0.5f), *y = (int)(fy + 0.5f), *w = (int)(fw * kx + 0.5f), *h = (int)(fh + 0.5f);
}

// show every instance's screen; wait for vsync
extern u32 ps2_switch_cycles;  // tlb.c

void ps2_video_present(int instances)
{
    int i;
    u32 n = ps2_frame + 1;
    float kx = (float)sMode->fbw / sMode->aw;  // square pixels to buffer pixels (16:9: 640 of 854)
    if (sLastEnd)  // the game's share of this frame: everything since the last present but drawing (memory switches too)
        sOtherCycles += count() - sLastEnd - sFrameRender;
    sRenderCycles += sFrameRender, sFrameRender = 0;
    if (n % 600 == 0)  // every 10 s, averaged over the last 60 frames (EE cycles; 4.9 M per 60 Hz frame)
        ps2_log("cost: render %u cycles/frame (all screens), game %u cycles/frame (all instances, of which memory switches %u) of 4915200",
                sRenderCycles / 60, sOtherCycles / 60, ps2_switch_cycles / 60);
    if (n % 600 == 540)
        sRenderCycles = sOtherCycles = ps2_switch_cycles = 0;
    FlushCache(0);
#ifdef GS_RENDER  // the screens are drawn: show them, then clear the next buffer (gsrender.c changed the registers)
    gsKit_sync_flip(sGs);
    gsKit_set_scissor(sGs, GS_SCISSOR_RESET);
    gsKit_set_test(sGs, GS_ATEST_OFF);
    gsKit_clear(sGs, GS_SETREG_RGBAQ(0, 0, 0, 0x80, 0));
    gsKit_queue_exec(sGs);
    sLastEnd = count();
    (void)kx, (void)i;
    return;
#endif
    gsKit_clear(sGs, GS_SETREG_RGBAQ(0, 0, 0, 0x80, 0));
    for (i = 0; i < instances; i++) {
        float x, y, w, h;
        place(i, instances, &x, &y, &w, &h);
        x *= kx, w *= kx;
        // whole multiples stay sharp; other sizes (1.5x, the 16:9 squeeze) are smoothed so pixels don't vary in size
        sView[i].tex.Filter = (w == (int)w && (int)w % VIEW_W == 0 && (int)h % VIEW_H == 0) ? GS_FILTER_NEAREST
                                                                                            : GS_FILTER_LINEAR;
#ifndef GS_RENDER
        gsKit_texture_upload(sGs, &sView[i].tex);
#endif
        gsKit_prim_sprite_texture(sGs, &sView[i].tex, x, y, 0, 0, x + w, y + h, VIEW_W, VIEW_H, 1,
                                  GS_SETREG_RGBAQ(0x80, 0x80, 0x80, 0x80, 0));
    }
    gsKit_queue_exec(sGs);
    gsKit_sync_flip(sGs);
    sLastEnd = count();
}
