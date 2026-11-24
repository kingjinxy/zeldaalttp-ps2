// PS2: draws each game instance's GBA screen with mGBA's software renderer (src/ps2/mgba, MPL-2.0) and shows them (one
// above the other for 2 players, 2x2 for 3-4; ps2_video_mode picks 240p/480i/480p/16:9/720p) through the Graphics Synthesizer with gsKit. The renderer reads VRAM straight from the mapped GBA video
// memory (main.c maps the instance first); registers, palette and OAM are handed to it each frame, then the 160 lines
// are drawn into a 256-wide buffer that goes up as a CT32 texture.
#include <kernel.h>
#include <stdio.h>
#include <string.h>
#include <gsKit.h>
#include <dmaKit.h>
#include <mgba/internal/gba/renderers/video-software.h>

#define GBA_W 240
#define GBA_H 160
#define TEX_W 256  // texture width (power of two); the renderer writes rows of this stride
#define MAX_INSTANCES 4

void ps2_log(const char *fmt, ...);
extern u32 ps2_frame;

static GSGLOBAL *sGs;
static struct {
    GSTEXTURE tex;
    struct GBAVideoSoftwareRenderer renderer;
} sView[MAX_INSTANCES];
static u32 sPixels[MAX_INSTANCES][TEX_W * GBA_H] __attribute__((aligned(128)));  // what each renderer draws

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
#ifndef VIDEO_MODE
#define VIDEO_MODE VIDEO_AUTO
#endif
// shortcut: set at build time (VIDEO_MODE=0-4) until there's a menu. Auto: 240p for one player; 480p for more, as
// two players need the height (one above the other).
int ps2_video_mode = VIDEO_MODE;
static const struct Mode *sMode;

void ps2_video_init(int instances)
{
    int i, magh, dw, dx, dy;
    if (ps2_video_mode < 0 || ps2_video_mode > VIDEO_720P)
        ps2_video_mode = instances > 1 ? VIDEO_480P : VIDEO_240P;
    sMode = &sModes[ps2_video_mode];
    dmaKit_init(D_CTRL_RELE_OFF, D_CTRL_MFD_OFF, D_CTRL_STS_UNSPEC, D_CTRL_STD_OFF, D_CTRL_RCYC_8,
                1 << DMA_CHANNEL_GIF);
    dmaKit_chan_init(DMA_CHANNEL_GIF);
    sGs = gsKit_init_global();
    sGs->Mode = sMode->gs;
    sGs->Interlace = sMode->interlace ? GS_INTERLACED : GS_NONINTERLACED;
    sGs->Field = sMode->interlace ? GS_FIELD : GS_FRAME;
    sGs->Width = sMode->fbw;
    sGs->Height = sMode->fbh;
    sGs->PSM = sMode->psm;
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
        t->Width = TEX_W;
        t->Height = GBA_H;
        t->PSM = GS_PSM_CT32;
        t->Mem = sPixels[i];
        t->Filter = GS_FILTER_NEAREST;
        t->Vram = gsKit_vram_alloc(sGs, gsKit_texture_size(TEX_W, GBA_H, GS_PSM_CT32), GSKIT_ALLOC_USERBUFFER);
        GBAVideoSoftwareRendererCreate(&sView[i].renderer);
        sView[i].renderer.outputBuffer = (color_t *)sPixels[i];
        sView[i].renderer.outputBufferStride = TEX_W;
        r->palette = (uint16_t *)0x05000000;  // every instance's video memory is mapped here when it's drawn
        r->vram = (uint16_t *)0x06000000;
        r->oam = (union GBAOAM *)0x07000000;
        r->cache = NULL;
        r->init(r);
    }
    ps2_log("video: %s, %dx%d buffer (DW %d DH %d MAGH %d), %d GBA screens", sMode->name, sGs->Width, sGs->Height,
            sGs->DW, sGs->DH, magh, instances);
}

// frames written to host: (the ELF's folder) as PPM, to check output without a window
static void dump_frame(int inst, u32 n)
{
    char name[64];
    FILE *f;
    int x, y;
    snprintf(name, sizeof(name), "host:frame_p%d_%05u.ppm", inst, n);
    if (!(f = fopen(name, "wb")))
        return;
    fprintf(f, "P6\n%d %d\n255\n", GBA_W, GBA_H);
    for (y = 0; y < GBA_H; y++)
        for (x = 0; x < GBA_W; x++) {
            u32 c = sPixels[inst][y * TEX_W + x];
            fputc(c & 0xFF, f), fputc((c >> 8) & 0xFF, f), fputc((c >> 16) & 0xFF, f);
        }
    fclose(f);
}

// draw the mapped instance's frame: feed the renderer the current state, draw 160 lines
void ps2_video_render(int inst)
{
    struct GBAVideoRenderer *r = &sView[inst].renderer.d;
    const u16 *io = (const u16 *)0x04000000, *pal = (const u16 *)0x05000000;
    u32 a, t0 = count(), n = ps2_frame + 1;
    int y;

    for (a = 0; a < 0x56; a += 2)
        r->writeVideoRegister(r, a, io[a / 2]);
    for (a = 0; a < 0x400; a += 2)
        r->writePalette(r, a, pal[a / 2]);
    for (a = 0; a < 0x200; a++)
        r->writeOAM(r, a);
    r->writeVRAM(r, 0);  // VRAM changed: no scanline is clean
    for (y = 0; y < GBA_H; y++)
        r->drawScanline(r, y);
    r->finishFrame(r);
    sFrameRender += count() - t0;
    if (n == 1300 || n == 1600 || n == 2000 || n == 2400 || n == 2800)
        dump_frame(inst, n);
}

// Where screen i goes, in square pixels of the aw x fbh screen. One player: centred at the mode's scale. Two: one above
// the other, each centred in its half at the largest size that fits (1.5x in 480p). Three or four: a 2x2 grid.
static void place(int i, int instances, float *x, float *y, float *w, float *h)
{
    float aw = sMode->aw, ah = sMode->fbh, cw = aw, ch = ah, s;
    if (instances == 1)
        s = sMode->scale;
    else {
        if (instances == 2)
            ch = ah / 2;
        else
            cw = aw / 2, ch = ah / 2;
        s = cw / GBA_W < ch / GBA_H ? cw / GBA_W : ch / GBA_H;
    }
    *w = GBA_W * s, *h = GBA_H * s;
    *x = (instances > 2 ? (i % 2) * cw : 0) + (cw - *w) / 2;
    *y = (instances > 1 ? (instances > 2 ? i / 2 : i) * ch : 0) + (ch - *h) / 2;
}

// show every instance's screen; wait for vsync
void ps2_video_present(int instances)
{
    int i;
    u32 n = ps2_frame + 1;
    float kx = (float)sMode->fbw / sMode->aw;  // square pixels to buffer pixels (16:9: 640 of 854)
    if (sLastEnd)  // the game's share of this frame: everything since the last present but drawing (memory switches too)
        sOtherCycles += count() - sLastEnd - sFrameRender;
    sRenderCycles += sFrameRender, sFrameRender = 0;
    if (n % 600 == 0)  // every 10 s, averaged over the last 60 frames (EE cycles; 4.9 M per 60 Hz frame)
        ps2_log("cost: render %u cycles/frame (all screens), game %u cycles/frame (all instances) of 4915200",
                sRenderCycles / 60, sOtherCycles / 60);
    if (n % 600 == 540)
        sRenderCycles = sOtherCycles = 0;
    FlushCache(0);
    gsKit_clear(sGs, GS_SETREG_RGBAQ(0, 0, 0, 0x80, 0));
    for (i = 0; i < instances; i++) {
        float x, y, w, h;
        place(i, instances, &x, &y, &w, &h);
        x *= kx, w *= kx;
        // whole multiples stay sharp; other sizes (1.5x, the 16:9 squeeze) are smoothed so pixels don't vary in size
        sView[i].tex.Filter = (w == (int)w && (int)w % GBA_W == 0 && (int)h % GBA_H == 0) ? GS_FILTER_NEAREST
                                                                                            : GS_FILTER_LINEAR;
        gsKit_texture_upload(sGs, &sView[i].tex);
        gsKit_prim_sprite_texture(sGs, &sView[i].tex, x, y, 0, 0, x + w, y + h, GBA_W, GBA_H, 1,
                                  GS_SETREG_RGBAQ(0x80, 0x80, 0x80, 0x80, 0));
    }
    gsKit_queue_exec(sGs);
    gsKit_sync_flip(sGs);
    sLastEnd = count();
}
