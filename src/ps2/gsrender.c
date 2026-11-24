// PS2: draws a GBA screen with the Graphics Synthesizer instead of mGBA's software renderer (make GS_RENDER=1).
// Covers what Four Swords uses (docs/Running Walkthrough.md step 31): mode 0 text BGs (16 colours), sprites (16
// colours, 1D or 2D tile mapping, rotating/scaling ones as textured triangles), window 0 (also with per-line edges
// from an HBlank DMA) and brighten/darken fades. Not yet: alpha blending between layers (menus only), mosaic,
// other per-line registers, 256-colour tiles, affine BGs, window 1 and the sprite window.
//
// Each frame the mapped instance's VRAM goes up as one 4-bit texture (256 wide, 32 tiles a row: BG tiles in rows
// 0-511, sprite tiles in 512-767) and its palettes as two 256-entry CLUTs (BG, sprites; a 16-colour palette is
// picked with CSA). Then the layers are drawn back to front into the instance's view-sized render target, which video.c
// shows like the software renderer's texture. Colour 0 of each palette is transparent through the alpha test.
#include <kernel.h>
#include <string.h>
#include <gsKit.h>
#include <dmaKit.h>

void ps2_log(const char *fmt, ...);

#define IO16(o) (*(volatile u16 *)(0x04000000u + (o)))
#define IO32(o) (*(volatile u32 *)(0x04000000u + (o)))
#define PAL ((const u16 *)0x05000000)
#define VRAM ((const u8 *)0x06000000)
#define OAM ((const u16 *)0x07000000)

static u32 sTexAddr, sClutAddr, sTarget[4];  // GS memory, in bytes; CLUTs: palette k (0-15 BG, 16-31 sprites) at + k * 256
static int sOffX, sOffY;                        // gsKit's XYOFFSET (12.4)
// The render target is the view (video.c's ps2_view_w x ps2_view_h: 240x160, or bigger with WIDE_VIEW), sTBW * 64
// pixels a row. Drawing uses GBA screen coordinates: the GBA's 240x160 sits in the middle of the view at (sGx, sGy),
// so the view spans -sGx .. sVW - sGx across. Outside the 240x160 only the backdrop, the room (BG1/BG2 from the
// room data, see room_entry), BG3 (its map repeating) and full-screen effects are drawn.
extern int ps2_view_w, ps2_view_h;
static int sVW, sVH, sTBW, sGx, sGy;
#define VX0 (-sGx)
#define VX1 (sVW - sGx)
#define VY0 (-sGy)
#define VY1 (sVH - sGy)

// ---- packets ---------------------------------------------------------------------------------------------------------

#define UPLOAD_QW (6144 + 32 * 10 + 16)
static u64 sUpload[UPLOAD_QW * 2] __attribute__((aligned(64)));  // tiles and CLUTs, with their GIF tags
#define DRAW_QW 28000
static u64 sDraw[DRAW_QW * 2] __attribute__((aligned(64)));
static u64 *sP;           // write pointer into sDraw
static u64 sPrim;         // the PRIM for tiles (sprite, textured; blended or not)
static int sBand[4];      // x0, x1, y0, y1 of the scissor rectangle being drawn: only what crosses it is sent
#define FULL() (sP - sDraw > (DRAW_QW - 64) * 2)  // packet nearly full: drop the rest (logged once a frame)
static int sDropped;
static u64 *sTag;         // the open REGLIST tag (count in NLOOP)

static void send(u64 *buf, u64 *end)
{
    u32 qwc = (end - buf) / 2;
    FlushCache(0);
    dmaKit_send(DMA_CHANNEL_GIF, buf, qwc);
    dmaKit_wait(DMA_CHANNEL_GIF, 0);
}

static void close_list(void) { sTag = NULL; }

static void ad(u64 reg, u64 v)
{
    close_list();
    *sP++ = GIF_TAG(1, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = v;
    *sP++ = reg;
}

static u64 xyz(int x16, int y16) { return GS_SETREG_XYZ2(sOffX + (sGx << 4) + x16, sOffY + (sGy << 4) + y16, 0); }

static void close_list(void);

// an untextured rectangle of one colour (alpha a), blended when abe (ALPHA_1): PRIM, RGBAQ, XYZ2, XYZ2 as A+D
static void flat(int abe, u32 r, u32 g, u32 b, u32 a, int x0, int y0, int x1, int y1)
{
    close_list();
    *sP++ = GIF_TAG(4, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = GS_SETREG_PRIM(GS_PRIM_PRIM_SPRITE, 0, 0, 0, abe, 0, 0, 0, 0), *sP++ = GS_PRIM;
    *sP++ = GS_SETREG_RGBAQ(r, g, b, a, 0), *sP++ = GS_RGBAQ;
    *sP++ = xyz(x0 << 4, y0 << 4), *sP++ = GS_XYZ2;
    *sP++ = xyz(x1 << 4, y1 << 4), *sP++ = GS_XYZ2;
}

// textured sprite (8x8 tile or a sprite's rectangle): TEX0 (palette), UV, XYZ2, UV, XYZ2, NOP as one REGLIST loop
static void tex_rect(u64 tex0, int x0, int y0, int x1, int y1, int u0, int v0, int u1, int v1)
{
    if (x1 <= sBand[0] || x0 >= sBand[1] || y1 <= sBand[2] || y0 >= sBand[3])
        return;
    if (FULL()) {
        sDropped++;
        return;
    }
    if (!sTag || ((*sTag) & 0x7FFF) == 0x7FFF) {
        sTag = sP;
        *sP++ = GIF_TAG(0, 0, 0, 0, GSKIT_GIF_FLG_REGLIST, 6);
        *sP++ = GS_TEX0_1 | (u64)GS_UV << 4 | (u64)GS_XYZ2 << 8 | (u64)GS_UV << 12 | (u64)GS_XYZ2 << 16 | 0xFull << 20;
    }
    (*sTag)++;
    *sP++ = tex0;
    // the GS samples at each pixel's top-left corner: a reversed (flipped) range starts 1/16 texel inside, or its
    // first pixel would read the next tile's first column (the end of the range: below)
    *sP++ = GS_SETREG_UV((u0 << 4) - (u0 > u1), (v0 << 4) - (v0 > v1));
    *sP++ = xyz(x0 << 4, y0 << 4);
    *sP++ = GS_SETREG_UV(u1 << 4, v1 << 4);  // the end isn't adjusted (u1 = 0 would wrap): 7 down to 0 either way
    *sP++ = xyz(x1 << 4, y1 << 4);
    *sP++ = 0;
}

// ---- state for one frame ---------------------------------------------------------------------------------------------

static u16 sDispcnt, sWin0H[160], sWin0V, sWinIn, sWinOut, sBldcnt, sBldy;

// GBA colour to 8 bits a channel, as mGBA's renderer: (c << 3) | (c >> 2)
static u32 c8(u32 c) { return (c << 3) | (c >> 2); }
static u32 rgb8(u16 c) { return c8(c & 0x1F) | c8((c >> 5) & 0x1F) << 8 | c8((c >> 10) & 0x1F) << 16; }

// one 16-colour palette as an 8x2 CT32 CLUT (CSM1) at addr; a 4-bit texture's CLUT load takes 16 entries
static void put_clut(u64 **p, u32 addr, const u16 *pal)
{
    u32 *d;
    int i;
    *(*p)++ = GIF_TAG(4, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *(*p)++ = GIF_AD;
    *(*p)++ = GS_SETREG_BITBLTBUF(0, 0, 0, addr / 256, 1, GS_PSM_CT32), *(*p)++ = GS_BITBLTBUF;
    *(*p)++ = GS_SETREG_TRXPOS(0, 0, 0, 0, 0), *(*p)++ = GS_TRXPOS;
    *(*p)++ = GS_SETREG_TRXREG(8, 2), *(*p)++ = GS_TRXREG;
    *(*p)++ = 0, *(*p)++ = GS_TRXDIR;
    *(*p)++ = GIF_TAG(4, 0, 0, 0, GSKIT_GIF_FLG_IMAGE, 0);
    *(*p)++ = 0;
    d = (u32 *)*p;
    for (i = 0; i < 16; i++) {
        u16 c = pal[i];
        d[i] = rgb8(c) | (i ? 0x80000000u : 0);  // colour 0: transparent
    }
    *p += 8;
}

static u8 sBlank[3072];  // tiles of colour 0 only, from this frame's upload

static void upload(void)
{
    u64 *p = sUpload;
    u32 *d, t, r;
    const u32 *src = (const u32 *)VRAM;
    *p++ = GIF_TAG(4, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *p++ = GIF_AD;
    *p++ = GS_SETREG_BITBLTBUF(0, 0, 0, sTexAddr / 256, 4, GS_PSM_T4), *p++ = GS_BITBLTBUF;
    *p++ = GS_SETREG_TRXPOS(0, 0, 0, 0, 0), *p++ = GS_TRXPOS;
    *p++ = GS_SETREG_TRXREG(256, 768), *p++ = GS_TRXREG;
    *p++ = 0, *p++ = GS_TRXDIR;
    *p++ = GIF_TAG(6144, 0, 0, 0, GSKIT_GIF_FLG_IMAGE, 0);
    *p++ = 0;
    d = (u32 *)p;
    // tile t (32 bytes, 8 rows of 4) to (t % 32 * 8, t / 32 * 8): a texture row is 128 bytes (32 words)
    for (t = 0; t < 3072; t++) {
        u32 *o = d + (t / 32) * 256 + t % 32, any = 0;
        for (r = 0; r < 8; r++)
            any |= o[r * 32] = src[t * 8 + r];
        sBlank[t] = !any;  // all colour 0: nothing to draw
    }
    p += 6144 * 2;
    for (t = 0; t < 32; t++)
        put_clut(&p, sClutAddr + t * 256, PAL + t * 16);
    *p++ = GIF_TAG(1, 1, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *p++ = GIF_AD;
    *p++ = 0, *p++ = GS_TEXFLUSH;
    send(sUpload, p);
}

// CLD 4: load the CLUT only when CBP differs from the last one loaded (consecutive tiles mostly share a palette).
// MODULATE with the vertex colour (0x80 = x1): colour unchanged, alpha = texture alpha x vertex alpha, which carries
// the second-target flag while blending (see blending below)
static u64 tex0(int obj, int pal, int load)
{
    (void)load;
    return GS_SETREG_TEX0(sTexAddr / 256, 4, GS_PSM_T4, 8, 10, 1, 0, (sClutAddr + (obj * 16 + pal) * 256) / 256,
                          GS_PSM_CT32, 0, 0, 4);
}

// ---- window 0 ------------------------------------------------------------------------------------------------------
// The window's shape goes into the render target's alpha (bit 7 set inside), drawn once a frame, line run by line run
// (its edges may change per line, from an HBlank DMA). Colour writes after that leave alpha alone (FBMSK), and a layer
// shown only inside or only outside is drawn once with the destination alpha test (DATE).

static void set_scissor(int x0, int x1, int y0, int y1)
{
    sBand[0] = x0, sBand[1] = x1, sBand[2] = y0, sBand[3] = y1;
    ad(GS_SCISSOR_1, GS_SETREG_SCISSOR(x0 + sGx, x1 - 1 + sGx, y0 + sGy, y1 - 1 + sGy));
}

static void flat_rect(int x0, int y0, int x1, int y1, u32 a) { flat(0, 0, 0, 0, a, x0, y0, x1, y1); }

static int win_inside_v(int y)
{
    int top = sWin0V >> 8, bot = sWin0V & 0xFF;
    if (top <= bot)
        return y >= top && y < (bot > 160 ? 160 : bot);
    return y >= top || y < bot;  // wraps
}

static void draw_mask(u32 fbp)
{
    int y, y0;
    ad(GS_FRAME_1, GS_SETREG_FRAME(fbp, sTBW, GS_PSM_CT32, 0x00FFFFFF));  // alpha only
    ad(GS_TEST_1, GS_SETREG_TEST(0, 1, 0, 0, 0, 0, 1, 1));
    flat_rect(VX0, VY0, VX1, VY1, 0);  // outside the GBA screen counts as outside the window
    for (y0 = 0; y0 < 160; y0 = y) {
        u16 h = sWin0H[y0];
        int in = win_inside_v(y0), l = h >> 8, r = h & 0xFF;
        for (y = y0 + 1; y < 160 && sWin0H[y] == h && win_inside_v(y) == in; y++)
            ;
        if (!in)
            continue;
        if (r > 240 || (l > r && r == 0))
            r = 240;
        if (l <= r) {
            if (l < r)
                flat_rect(l, y0, r, y, 0x80);
        } else {  // left > right: the window wraps around the screen edges
            flat_rect(l > 240 ? 240 : l, y0, 240, y, 0x80);
            flat_rect(0, y0, r, y, 0x80);
        }
    }
    ad(GS_FRAME_1, GS_SETREG_FRAME(fbp, sTBW, GS_PSM_CT32, 0xFF000000));  // colour only from here on
}

typedef void (*DrawFn)(int arg);
static int sAlphaTest = 1;  // layers: alpha test on (colour 0 isn't drawn); fades: off

// ---- blending ------------------------------------------------------------------------------------------------------
// Alpha blending (BLDCNT effect 1): where the top layer A is a first target and the layer under it B a second target,
// A * eva + B * evb (clamped). While it's on, the render target's alpha holds "the layer here is a second target"
// (bit 7: 0x80 yes, 0x40 no; vertex alpha through MODULATE), and a first-target layer is drawn in four passes:
// the frame buffer scaled by evb where the flag is set, plus the layer x eva there (the GS can't weight both in one
// pass: may differ from mGBA's (a * eva + b * evb) / 16 by one level), the layer as it is where the flag isn't set,
// then its own flag. Windows are scissor rectangles then (the alpha is taken): static window 0 only.

static int sBlend, sEva, sEvb;
static u32 sFbp;

static void frame_mask(u32 m) { ad(GS_FRAME_1, GS_SETREG_FRAME(sFbp, sTBW, GS_PSM_CT32, m)); }
static void test(int date, int datm) { ad(GS_TEST_1, GS_SETREG_TEST(sAlphaTest, 5, 0x40, 0, date, datm, 1, 1)); }
static void prim(int abe)
{
    sPrim = GS_SETREG_PRIM(GS_PRIM_PRIM_SPRITE, 0, 1, 0, abe, 0, 1, 0, 0);
    ad(GS_PRIM, sPrim);
}

static void draw_bg_fn(int b);

static void draw_layer(int bit, DrawFn fn, int arg, int effects)
{
    int first = sBldcnt >> bit & 1, second = sBldcnt >> (8 + bit) & 1;
    ad(GS_RGBAQ, GS_SETREG_RGBAQ(0x80, 0x80, 0x80, second || !sBlend ? 0x80 : 0x40, 0));
    if (!sBlend || !first || !effects) {
        fn(arg);
        return;
    }
    frame_mask(0xFF000000);  // colour only: the flag below stays for the passes
    test(1, 1);
    prim(1);
    ad(GS_ALPHA_1, GS_SETREG_ALPHA(2, 1, 2, 1, (16 - sEvb) * 8));  // Cd - Cd * (16 - evb) / 16
    u64 *start = sP;
    fn(arg);
    // a BG's packet sets no registers but TEX0: the next passes repeat it (sprites may switch PRIM: listed again)
    u32 len = fn == draw_bg_fn ? sP - start : 0;
#define AGAIN() (len && sP + len < sDraw + (DRAW_QW - 64) * 2 ? (memcpy(sP, start, len * 8), sP += len) : (fn(arg), sP))
    ad(GS_ALPHA_1, GS_SETREG_ALPHA(0, 2, 2, 1, sEva * 8));  // + Cs * eva / 16 (COLCLAMP clamps)
    AGAIN();
    prim(0);
    test(1, 0);  // where the layer under isn't a second target: drawn as it is
    AGAIN();
    frame_mask(0x00FFFFFF);  // and its own flag everywhere it's drawn
    test(0, 0);
    AGAIN();
#undef AGAIN
    frame_mask(0);
}

// draw fn(arg) where layer bit `bit` (0-3 BGs, 4 sprites, 5 effects) shows
static void in_regions(int bit, DrawFn fn, int arg)
{
    int in = sWinIn >> bit & 1, out = sWinOut >> bit & 1, masked = (sDispcnt & 0x2000) && in != out;
    if ((sDispcnt & 0x2000) && !in && !out)
        return;
    if (sBlend && (sDispcnt & 0x2000)) {  // static window: the inside rectangle and up to four around it
        int l = sWin0H[0] >> 8, rr = sWin0H[0] & 0xFF, t = sWin0V >> 8, bt = sWin0V & 0xFF, k;
        int rect[5][5] = { { l, rr, t, bt, 1 }, { 0, 240, 0, t, 0 }, { 0, 240, bt, 160, 0 }, { 0, l, t, bt, 0 },
                           { rr, 240, t, bt, 0 } };
        for (k = 0; k < 5; k++) {
            int ins = rect[k][4];
            if (rect[k][0] >= rect[k][1] || rect[k][2] >= rect[k][3] || !((ins ? sWinIn : sWinOut) >> bit & 1))
                continue;
            set_scissor(rect[k][0], rect[k][1], rect[k][2], rect[k][3]);
            draw_layer(bit, fn, arg, (ins ? sWinIn : sWinOut) >> 5 & 1);
        }
        return;
    }
    if (masked)
        ad(GS_TEST_1, GS_SETREG_TEST(sAlphaTest, 5, 0x40, 0, 1, in, 1, 1));
    if (bit == 0 || bit == 4)  // the HUD layer and sprites: the GBA screen only (they're laid out and culled for it)
        set_scissor(0, 240, 0, 160);
    else
        set_scissor(VX0, VX1, VY0, VY1);
    draw_layer(bit, fn, arg, !(sDispcnt & 0x2000) || (sWinOut >> 5 & 1));
    if (masked)
        ad(GS_TEST_1, GS_SETREG_TEST(sAlphaTest, 5, 0x40, 0, 0, 0, 1, 1));
}

// ---- layers --------------------------------------------------------------------------------------------------------

// ---- the room, for a view wider than the GBA's ----------------------------------------------------------------------
// The game keeps the whole room in EWRAM (walkthrough step 39): two layers (top 0x0201F020, bottom 0x0200B320), each a
// 64x64 map of metatile numbers at +4 and the metatiles' four tile entries at +0x7004. BG2 shows the top layer and BG1
// the bottom one, screen pixel x at room pixel camera - origin + x (`gUnknown_03000450` +0x20/+0x18, y +0x22/+0x1A),
// which is also the scroll register's value modulo 512. The game copies only the 256x192 around the camera into its
// background maps; outside that the renderer takes the room data. room_check: each frame, the GBA screen's 31x21
// tiles of BG1 and BG2 must equal the room data, else (menus, the lobby, a room change) the BGs are drawn as usual.
#define ROOM_TOP 0x0201F020u
#define ROOM_BOTTOM 0x0200B320u
#define CAM ((const u16 *)0x03000450)
static u32 sRoomLayer[4];  // per BG: the layer it shows (0: drawn from its own map)
static int sRoomX, sRoomY;  // room pixel at GBA screen (0, 0)

static int room_entry(u32 layer, int tx, int ty)  // the tile entry at room tile (tx, ty), -1 outside the room
{
    u16 mt;
    if ((u32)tx >= 128 || (u32)ty >= 128)
        return -1;
    mt = *(const u16 *)(layer + 4 + ((ty >> 1) * 64 + (tx >> 1)) * 2);
    return *(const u16 *)(layer + 0x7004 + (mt * 4 + (ty & 1) * 2 + (tx & 1)) * 2);
}

static void room_check(void)
{
    static const u32 layer[4] = { 0, ROOM_BOTTOM, ROOM_TOP, 0 };
    int b, tx, ty;
    sRoomX = (s16)(CAM[0x20 / 2] - CAM[0x18 / 2]), sRoomY = (s16)(CAM[0x22 / 2] - CAM[0x1A / 2]);
    for (b = 0; b < 4; b++) {
        u16 cnt = IO16(0x08 + 2 * b), hofs = IO16(0x10 + 4 * b) & 0x1FF, vofs = IO16(0x12 + 4 * b) & 0x1FF;
        const u16 *map = (const u16 *)(VRAM + ((cnt >> 8) & 0x1F) * 0x800);
        sRoomLayer[b] = 0;
        if (!layer[b] || sVW == 240 || !(sDispcnt & (0x100 << b)) || (cnt >> 14) || hofs != (sRoomX & 0x1FF) ||
            vofs != (sRoomY & 0x1FF) || !*(const u32 *)layer[b])
            continue;
        for (ty = 0; ty < 21; ty++)
            for (tx = 0; tx < 31; tx++)
                if (room_entry(layer[b], (sRoomX >> 3) + tx, (sRoomY >> 3) + ty) !=
                    map[(((vofs >> 3) + ty) & 31) * 32 + (((hofs >> 3) + tx) & 31)])
                    goto next;
        sRoomLayer[b] = layer[b];
    next:;
    }
}

static void draw_bg(int b)
{
    u16 cnt = IO16(0x08 + 2 * b), hofs = IO16(0x10 + 4 * b) & 0x1FF, vofs = IO16(0x12 + 4 * b) & 0x1FF;
    u32 cbase = ((cnt >> 2) & 3) * 512, sbb = (cnt >> 8) & 0x1F, size = cnt >> 14;
    int wide = size & 1, tall = size >> 1, tx, ty;
    // the screen tiles crossing the band being drawn (the GBA screen: 0-30 x 0-20)
    int tx0 = (sBand[0] + (hofs & 7)) >> 3, tx1 = (sBand[1] + (hofs & 7) + 7) >> 3;
    int ty0 = (sBand[2] + (vofs & 7)) >> 3, ty1 = (sBand[3] + (vofs & 7) + 7) >> 3;
    for (ty = ty0; ty < ty1; ty++)
        for (tx = tx0; tx < tx1; tx++) {
            int mx = ((hofs >> 3) + tx) & (wide ? 63 : 31), my = ((vofs >> 3) + ty) & (tall ? 63 : 31);
            u32 blk = (mx >> 5) + (my >> 5) * (wide ? 2 : 1);
            int re = sRoomLayer[b] ? room_entry(sRoomLayer[b], (sRoomX >> 3) + tx, (sRoomY >> 3) + ty) : 0;
            u16 e = sRoomLayer[b] ? (u16)re : *(const u16 *)(VRAM + sbb * 0x800 + blk * 0x800 + ((my & 31) * 32 + (mx & 31)) * 2);
            if (re < 0)  // outside the room: the backdrop
                continue;
            u32 t = cbase + (e & 0x3FF);
            int x = tx * 8 - (hofs & 7), y = ty * 8 - (vofs & 7), u = (t % 32) * 8, v = (t / 32) * 8;
            int pal = e >> 12;
            if (t >= 2048 || sBlank[t])  // past BG VRAM: nothing on the GBA in mode 0
                continue;
            tex_rect(tex0(0, pal, 0), x, y, x + 8, y + 8, (e & 0x400) ? u + 8 : u,
                     (e & 0x800) ? v + 8 : v, (e & 0x400) ? u : u + 8, (e & 0x800) ? v : v + 8);
        }
    close_list();
}

static const u8 sObjSize[3][4][2] = {
    { { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 } },
    { { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 } },
    { { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 } },
};

// one rotating/scaling sprite tile as two textured triangles, corners mapped through the inverse matrix
static void affine_tile(u64 t0, float m[4], float cx, float cy, float hw, float hh, int sx, int sy, int u, int v)
{
    static const int k[6][2] = { { 0, 0 }, { 8, 0 }, { 0, 8 }, { 8, 0 }, { 8, 8 }, { 0, 8 } };
    int i;
    close_list();
    if (FULL()) {
        sDropped++;
        return;
    }
    *sP++ = GIF_TAG(1, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = t0, *sP++ = GS_TEX0_1;
    *sP++ = GIF_TAG(6, 0, 1, GS_SETREG_PRIM(GS_PRIM_PRIM_TRIANGLE, 0, 1, 0, 0, 0, 1, 0, 0), GSKIT_GIF_FLG_REGLIST, 2);
    *sP++ = GS_UV | (u64)GS_XYZ2 << 4;
    for (i = 0; i < 6; i++) {
        float tx = sx + k[i][0] - hw, ty = sy + k[i][1] - hh;  // texture position relative to the sprite centre
        float px = cx + m[0] * tx + m[1] * ty, py = cy + m[2] * tx + m[3] * ty;
        *sP++ = GS_SETREG_UV((u + k[i][0]) << 4, (v + k[i][1]) << 4);
        *sP++ = xyz((int)(px * 16.0f + 0.5f), (int)(py * 16.0f + 0.5f));
    }
    // back to sprites for the next tex_rect
    *sP++ = GIF_TAG(1, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = sPrim, *sP++ = GS_PRIM;
}

static void draw_objs(int prio)
{
    int i, oneD = sDispcnt & 0x40;
    for (i = 127; i >= 0; i--) {
        u16 a0 = OAM[i * 4], a1 = OAM[i * 4 + 1], a2 = OAM[i * 4 + 2];
        int aff = a0 & 0x100, shape = a0 >> 14, w, h, bw, bh, x, y, tx, ty, pal = a2 >> 12, row;
        u32 base = a2 & 0x3FF;
        if ((!aff && (a0 & 0x200)) || shape == 3 || ((a2 >> 10) & 3) != prio || ((a0 >> 10) & 3) == 2)
            continue;
        w = sObjSize[shape][a1 >> 14][0], h = sObjSize[shape][a1 >> 14][1];
        bw = (aff && (a0 & 0x200)) ? 2 * w : w, bh = (aff && (a0 & 0x200)) ? 2 * h : h;
        x = a1 & 0x1FF, y = a0 & 0xFF;
        if (x + bw > 512)
            x -= 512;
        if (y + bh > 256)
            y -= 256;
        if (x >= 240 || y >= 160 || x + bw <= 0 || y + bh <= 0)
            continue;
        row = oneD ? w / 8 : 32;
        if (aff) {
            u32 g = (a1 >> 9) & 31;
            float pa = (s16)OAM[g * 16 + 3] / 256.0f, pb = (s16)OAM[g * 16 + 7] / 256.0f;
            float pc = (s16)OAM[g * 16 + 11] / 256.0f, pd = (s16)OAM[g * 16 + 15] / 256.0f, det = pa * pd - pb * pc;
            float m[4];
            if (det == 0)
                continue;
            m[0] = pd / det, m[1] = -pb / det, m[2] = -pc / det, m[3] = pa / det;  // texture -> screen
            for (ty = 0; ty < h / 8; ty++)
                for (tx = 0; tx < w / 8; tx++) {
                    u32 t = 2048 + ((base + ty * row + tx) & 1023);
                    affine_tile(tex0(1, pal, 0), m, x + bw / 2.0f, y + bh / 2.0f, w / 2.0f, h / 2.0f, tx * 8, ty * 8,
                                (t % 32) * 8, (t / 32) * 8);
                }
            continue;
        }
        for (ty = 0; ty < h / 8; ty++)
            for (tx = 0; tx < w / 8; tx++) {
                int stx = (a1 & 0x1000) ? w / 8 - 1 - tx : tx, sty = (a1 & 0x2000) ? h / 8 - 1 - ty : ty;
                u32 t = 2048 + ((base + sty * row + stx) & 1023);
                int u = (t % 32) * 8, v = (t / 32) * 8, px = x + tx * 8, py = y + ty * 8;
                tex_rect(tex0(1, pal, 0), px, py, px + 8, py + 8, (a1 & 0x1000) ? u + 8 : u, (a1 & 0x2000) ? v + 8 : v,
                         (a1 & 0x1000) ? u : u + 8, (a1 & 0x2000) ? v : v + 8);
            }
    }
    close_list();
}

static void draw_bg_fn(int b) { draw_bg(b); }
static void draw_obj_fn(int prio) { draw_objs(prio); }

// brighten/darken where the effects bit is on: a rectangle blended over what's there (every layer a first target
// only: the game's fades; see the file comment)
static int sEvy;
static void fade_fn(int brighten)
{
    close_list();
    *sP++ = GIF_TAG(1, 0, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = GS_SETREG_ALPHA(brighten ? 0 : 2, 1, 2, 1, sEvy * 8), *sP++ = GS_ALPHA_1;
    flat(1, 0xFF, 0xFF, 0xFF, 0x80, VX0, VY0, VX1, VY1);
}

// ---- per-line window edges from an HBlank DMA (video.c applies others in the software renderer) -----------------------

static void win0h_lines(void)
{
    int n, y;
    for (y = 0; y < 160; y++)
        sWin0H[y] = IO16(0x40);
    for (n = 0; n < 4; n++) {
        u32 base = 0xB0 + 12 * n, ctl = IO16(base + 10), count = IO16(base + 8), unit = (ctl & 0x400) ? 4 : 2;
        u32 src = IO32(base), dst = IO32(base + 4);
        if ((ctl & 0xB000) != 0xA000 || dst - 0x04000000u > 0x40 || dst + count * unit <= 0x04000040u)
            continue;
        if (src < 0x02000000u)  // the game starts DMA0 with source 0 for a frame (the BIOS: unreadable by DMA)
            continue;
        for (y = 1; y < 160; y++)
            sWin0H[y] = *(const u16 *)(src + (((ctl >> 7) & 3) == 2 ? 0 : (u32)(y - 1) * count * unit) +
                                       (0x04000040u - dst));
    }
}

// ---- entry points -----------------------------------------------------------------------------------------------------

static u32 vram_alloc_aligned(GSGLOBAL *gs, u32 size, u32 align)
{
    u32 a = gsKit_vram_alloc(gs, size + align, GSKIT_ALLOC_USERBUFFER);
    return (a + align - 1) & ~(align - 1);
}

// GS memory for the tiles, CLUTs and each instance's render target (returned: video.c draws it as the screen)
u32 ps2_gsr_init(GSGLOBAL *gs, int instances)
{
    int i;
    sOffX = gs->OffsetX, sOffY = gs->OffsetY;
    sVW = ps2_view_w, sVH = ps2_view_h, sTBW = (sVW + 63) / 64;
    sGx = (sVW - 240) / 2, sGy = (sVH - 160) / 2;
    sTexAddr = vram_alloc_aligned(gs, 256 * 1024 / 2, 8192);
    sClutAddr = vram_alloc_aligned(gs, 32 * 256, 256);
    for (i = 0; i < instances; i++)
        sTarget[i] = vram_alloc_aligned(gs, sTBW * 64 * sVH * 4, 8192);
    ps2_log("gsrender: tiles %x, CLUTs %x, targets %x %x", sTexAddr, sClutAddr, sTarget[0],
            sTarget[1]);
    return 0;
}

u32 ps2_gsr_target(int inst) { return sTarget[inst]; }

// draw the mapped instance's screen into its render target
void ps2_gsr_draw(int inst)
{
    int prio, b, eff;
    u16 bd = PAL[0];
    sDispcnt = IO16(0), sWin0V = IO16(0x44), sWinIn = IO16(0x48) & 0x3F, sWinOut = IO16(0x4A) & 0x3F;
    sBldcnt = IO16(0x50), sBldy = IO16(0x54) & 0x1F;
    win0h_lines();
    upload();
    sP = sDraw, sTag = NULL, sDropped = 0;
    sFbp = sTarget[inst] / 8192;
    room_check();
    sBlend = ((sBldcnt >> 6) & 3) == 1;
    sEva = IO16(0x52) & 0x1F, sEvb = (IO16(0x52) >> 8) & 0x1F;
    if (sEva > 16) sEva = 16;
    if (sEvb > 16) sEvb = 16;
    if (sBlend && (sDispcnt & 0x2000)) {  // blending needs a static, unwrapped window 0 (scissor rectangles)
        int y, ok = (sWin0H[0] >> 8) <= (sWin0H[0] & 0xFF) && (sWin0V >> 8) <= (sWin0V & 0xFF);
        for (y = 1; y < 160 && ok; y++)
            ok = sWin0H[y] == sWin0H[0];
        if (!ok) {
            static int logged;
            if (!logged++)
                ps2_log("gsrender: blending with a per-line or wrapping window isn't done: drawn without blending");
            sBlend = 0;
        }
    }
    frame_mask(0);
    ad(GS_TEST_1, GS_SETREG_TEST(1, 5, 0x40, 0, 0, 0, 1, 1));  // alpha >= 0x40: colour 0 (alpha 0) isn't drawn
    ad(GS_COLCLAMP, 1);
    ad(GS_TEX1_1, 0);
    ad(GS_CLAMP_1, 0);
    ad(GS_PABE, 0);
    ad(GS_FBA_1, 0);
    ad(GS_ZBUF_1, GS_SETREG_ZBUF(0, 0, 1));  // no depth writes
    set_scissor(VX0, VX1, VY0, VY1);
    // backdrop (palette entry 0); forced blank (DISPCNT bit 7) is white
    if (sDispcnt & 0x80)
        bd = 0x7FFF;
    flat(0, c8(bd & 0x1F), c8((bd >> 5) & 0x1F), c8((bd >> 10) & 0x1F), !sBlend || (sBldcnt & 0x2000) ? 0x80 : 0x40,
         VX0, VY0, VX1, VY1);  // backdrop's second-target flag while blending
    if ((sDispcnt & 0x2000) && !sBlend)
        draw_mask(sFbp);
    ad(GS_TEST_1, GS_SETREG_TEST(1, 5, 0x40, 0, 0, 0, 1, 1));
    sAlphaTest = 1;
    if (!(sDispcnt & 0x80) && (sDispcnt & 7) == 0) {
        prim(0);
        for (prio = 3; prio >= 0; prio--) {
            for (b = 3; b >= 0; b--)
                if ((sDispcnt & (0x100 << b)) && (IO16(0x08 + 2 * b) & 3) == prio) {
                    in_regions(b, draw_bg_fn, b);
                }
            if (sDispcnt & 0x1000) {
                in_regions(4, draw_obj_fn, prio);
            }
        }
        // fades: brighten (2) or darken (3), applied where the effects bit is on
        eff = (sBldcnt >> 6) & 3;
        if ((eff == 2 || eff == 3) && sBldy) {
            sEvy = sBldy > 16 ? 16 : sBldy;
            sAlphaTest = 0;
            ad(GS_TEST_1, GS_SETREG_TEST(0, 1, 0, 0, 0, 0, 1, 1));
            in_regions(5, fade_fn, eff == 2);
        }
    }
    close_list();
    *sP++ = GIF_TAG(1, 1, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    *sP++ = GIF_AD;
    *sP++ = 0, *sP++ = GS_TEXFLUSH;
    if (sDropped) {
        static int logged;
        if (logged++ < 8)
            ps2_log("gsrender: draw packet full, %d tiles dropped", sDropped);
    }
    send(sDraw, sP);
}

// ---- readback of a render target (from tp-ps2's gs.c, itself from psx-to-ps2-HAL's gpu_gs.c) --------------------------

#define RB_CSR ((volatile u64 *)0x12001000)
#define RB_BUSDIR ((volatile u64 *)0x12001040)
#define VIF1_STAT ((volatile u32 *)0x10003C00)
#define VIF1_FBRST ((volatile u32 *)0x10003C10)
#define D1_CHCR ((volatile u32 *)0x10009000)
#define D1_MADR ((volatile u32 *)0x10009010)
#define D1_QWC ((volatile u32 *)0x10009020)

static void gif_ad(u64 reg, u64 data)
{
    static u64 packet[4] __attribute__((aligned(64)));
    packet[0] = GIF_TAG(1, 1, 0, 0, GSKIT_GIF_FLG_PACKED, 1);
    packet[1] = GIF_AD;
    packet[2] = data;
    packet[3] = reg;
    send(packet, packet + 4);
}

// the instance's render target into dst (sTBW * 64 x view height, 64-byte aligned); 0 if the transfer got stuck
int ps2_gsr_read(int inst, u32 *dst)
{
    int spins, ok;
    *RB_CSR = 2;
    gif_ad(GS_BITBLTBUF, GS_SETREG_BITBLTBUF(sTarget[inst] / 256, sTBW, GS_PSM_CT32, 0, 0, 0));
    gif_ad(GS_TRXPOS, 0);
    gif_ad(GS_TRXREG, GS_SETREG_TRXREG(sTBW * 64, sVH));
    gif_ad(GS_FINISH, 0);
    gif_ad(GS_TRXDIR, 1);
    for (spins = 0; !(*RB_CSR & 2) && spins < 20000000; spins++)
        ;
    FlushCache(0);
    *VIF1_STAT = 0x00800000;  // VIF1 FIFO direction GS -> EE
    *RB_BUSDIR = 1;
    *D1_MADR = (u32)dst & 0x0FFFFFFF;
    *D1_QWC = sTBW * 64 * sVH * 4 / 16;
    *D1_CHCR = 0x100;
    for (spins = 0; (*D1_CHCR & 0x100) && spins < 20000000; spins++)
        ;
    ok = !(*D1_CHCR & 0x100);
    if (!ok) {
        *D1_CHCR = 0;
        *VIF1_FBRST = 1;
    }
    *RB_BUSDIR = 0;
    *VIF1_STAT = 0;
    *RB_CSR = 2;
    gif_ad(GS_FINISH, 0);  // leave FINISH set, as gsKit's queues expect (tp-ps2 walkthrough step 26)
    InvalidDCache(dst, (u8 *)dst + sTBW * 64 * sVH * 4 - 1);  // the DMA wrote memory behind the cache
    return ok;
}
