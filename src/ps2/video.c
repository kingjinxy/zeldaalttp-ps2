// PS2: draws each game instance's GBA screen with mGBA's software renderer (src/ps2/mgba, MPL-2.0) and shows them side
// by side through the Graphics Synthesizer with gsKit. The renderer reads VRAM straight from the mapped GBA video
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
#define TEX_W 256  // texture width (power of two); the renderer writes rows of this stride
#define MAX_INSTANCES 4

void ps2_log(const char *fmt, ...);
extern u32 ps2_frame;

static GSGLOBAL *sGs;
static struct {
    GSTEXTURE tex;
    struct GBAVideoSoftwareRenderer renderer;
    u32 *pixels;
} sView[MAX_INSTANCES];

static u32 count(void) { u32 c; __asm__ volatile("mfc0 %0, $9" : "=r"(c)); return c; }
static u32 sRenderCycles, sOtherCycles, sLastEnd, sFrameRender;

void ps2_video_init(int instances)
{
    int i;
    dmaKit_init(D_CTRL_RELE_OFF, D_CTRL_MFD_OFF, D_CTRL_STS_UNSPEC, D_CTRL_STD_OFF, D_CTRL_RCYC_8,
                1 << DMA_CHANNEL_GIF);
    dmaKit_chan_init(DMA_CHANNEL_GIF);
    sGs = gsKit_init_global();
    sGs->PSM = GS_PSM_CT32;
    sGs->ZBuffering = GS_SETTING_OFF;
    sGs->DoubleBuffering = GS_SETTING_ON;
    sGs->PrimAlphaEnable = GS_SETTING_OFF;
    gsKit_init_screen(sGs);
    gsKit_mode_switch(sGs, GS_ONESHOT);

    for (i = 0; i < instances; i++) {
        struct GBAVideoRenderer *r = &sView[i].renderer.d;
        GSTEXTURE *t = &sView[i].tex;
        sView[i].pixels = memalign(128, TEX_W * GBA_H * 4);
        memset(sView[i].pixels, 0, TEX_W * GBA_H * 4);
        t->Width = TEX_W;
        t->Height = GBA_H;
        t->PSM = GS_PSM_CT32;
        t->Mem = sView[i].pixels;
        t->Filter = GS_FILTER_NEAREST;
        t->Vram = gsKit_vram_alloc(sGs, gsKit_texture_size(TEX_W, GBA_H, GS_PSM_CT32), GSKIT_ALLOC_USERBUFFER);
        GBAVideoSoftwareRendererCreate(&sView[i].renderer);
        sView[i].renderer.outputBuffer = (color_t *)sView[i].pixels;
        sView[i].renderer.outputBufferStride = TEX_W;
        r->palette = (uint16_t *)0x05000000;  // every instance's video memory is mapped here when it's drawn
        r->vram = (uint16_t *)0x06000000;
        r->oam = (union GBAOAM *)0x07000000;
        r->cache = NULL;
        r->init(r);
    }
    ps2_log("video: %dx%d screen, %d GBA screens side by side", sGs->Width, sGs->Height, instances);
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
            u32 c = sView[inst].pixels[y * TEX_W + x];
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
    if (n == 60 || n == 600 || n == 900 || n == 1500)
        dump_frame(inst, n);
}

// show every instance's screen side by side, wait for vsync
void ps2_video_present(int instances)
{
    int i;
    u32 n = ps2_frame + 1;
    float w = sGs->Width / (float)instances, h = w * GBA_H / GBA_W, top = (sGs->Height - h) / 2;
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
        gsKit_texture_upload(sGs, &sView[i].tex);
        gsKit_prim_sprite_texture(sGs, &sView[i].tex, i * w, top, 0, 0, (i + 1) * w, top + h, GBA_W, GBA_H, 1,
                                  GS_SETREG_RGBAQ(0x80, 0x80, 0x80, 0x80, 0));
    }
    gsKit_queue_exec(sGs);
    gsKit_sync_flip(sGs);
    sLastEnd = count();
}
