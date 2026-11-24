// PS2: draws the GBA screen with mGBA's software renderer (src/ps2/mgba, MPL-2.0) and shows it through the Graphics
// Synthesizer with gsKit. The renderer reads VRAM straight from the mapped GBA video memory; registers, palette and
// OAM are handed to it each frame, then the 160 lines are drawn into a 256-wide buffer that goes up as a CT32 texture.
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

void ps2_log(const char *fmt, ...);

static GSGLOBAL *sGs;
static GSTEXTURE sTex;
static struct GBAVideoSoftwareRenderer sRenderer;
static u32 *sPixels;
static u32 sFrames;

void ps2_video_init(void)
{
    struct GBAVideoRenderer *r = &sRenderer.d;

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

    sPixels = memalign(128, TEX_W * GBA_H * 4);
    memset(sPixels, 0, TEX_W * GBA_H * 4);
    sTex.Width = TEX_W;
    sTex.Height = GBA_H;
    sTex.PSM = GS_PSM_CT32;
    sTex.Mem = sPixels;
    sTex.Filter = GS_FILTER_NEAREST;
    sTex.Vram = gsKit_vram_alloc(sGs, gsKit_texture_size(TEX_W, GBA_H, GS_PSM_CT32), GSKIT_ALLOC_USERBUFFER);

    GBAVideoSoftwareRendererCreate(&sRenderer);
    sRenderer.outputBuffer = (color_t *)sPixels;
    sRenderer.outputBufferStride = TEX_W;
    r->palette = (uint16_t *)0x05000000;
    r->vram = (uint16_t *)0x06000000;
    r->oam = (union GBAOAM *)0x07000000;
    r->cache = NULL;
    r->init(r);
    ps2_log("video: %dx%d screen, GBA frame as a %dx%d texture", sGs->Width, sGs->Height, TEX_W, GBA_H);
}

// frames written to host: (the ELF's folder) as PPM, to check output without a window
static void dump_frame(u32 n)
{
    char name[64];
    FILE *f;
    int x, y;
    snprintf(name, sizeof(name), "host:frame_%05u.ppm", n);
    if (!(f = fopen(name, "wb")))
        return;
    fprintf(f, "P6\n%d %d\n255\n", GBA_W, GBA_H);
    for (y = 0; y < GBA_H; y++)
        for (x = 0; x < GBA_W; x++) {
            u32 c = sPixels[y * TEX_W + x];
            fputc(c & 0xFF, f), fputc((c >> 8) & 0xFF, f), fputc((c >> 16) & 0xFF, f);
        }
    fclose(f);
}

// one GBA frame: feed the renderer the current state, draw, show, wait for vsync
void ps2_video_frame(void)
{
    struct GBAVideoRenderer *r = &sRenderer.d;
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
    for (y = 0; y < GBA_H; y++)
        r->drawScanline(r, y);
    r->finishFrame(r);

    sFrames++;
    if (sFrames == 60 || sFrames == 600 || sFrames == 900 || sFrames == 1500)
    {
        dump_frame(sFrames);
        ps2_log("video %u: DISPCNT %04x BG0-3CNT %04x %04x %04x %04x BLDCNT %04x BLDY %04x vram %08x pal %04x %04x", sFrames,
                io[0], io[4], io[5], io[6], io[7], io[0x28], io[0x2A], ((u32 *)0x06000000)[16], pal[0], pal[1]);
        ps2_log("video: vblank handler %08x, game dispcnt buffer %04x, main state %02x sub %02x", *(u32 *)0x03000B74,
                *(u16 *)0x030004A0, *(u8 *)0x03006D10, *(u8 *)0x03000BFC);
    }

    FlushCache(0);
    gsKit_texture_upload(sGs, &sTex);
    gsKit_prim_sprite_texture(sGs, &sTex, 0, 0, 0, 0, sGs->Width, sGs->Height, GBA_W, GBA_H, 1,
                              GS_SETREG_RGBAQ(0x80, 0x80, 0x80, 0x80, 0));
    gsKit_queue_exec(sGs);
    gsKit_sync_flip(sGs);
}
