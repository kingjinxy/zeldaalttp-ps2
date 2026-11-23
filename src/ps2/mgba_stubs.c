// PS2: the mGBA functions and data the vendored software renderer (src/ps2/mgba) uses from elsewhere in mGBA.
// No tile cache (renderer->cache is NULL), no mGBA logging, no mapped-memory allocator.
#include <stdlib.h>
#include <mgba/internal/gba/video.h>
#include <mgba/core/log.h>
#include <mgba/core/cache-set.h>

// from mGBA's src/gba/video.c (MPL-2.0): sprite sizes by shape and size
const int GBAVideoObjSizes[16][2] = {
    { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 },
    { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 },
    { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
};

int _mLOG_CAT_GBA_VIDEO;
void mLog(int category, enum mLogLevel level, const char *format, ...) { (void)category, (void)level, (void)format; }
void mCacheSetWritePalette(struct mCacheSet *cache, uint32_t entry, color_t color) { (void)cache, (void)entry, (void)color; }
void mCacheSetWriteVRAM(struct mCacheSet *cache, uint32_t address) { (void)cache, (void)address; }
void GBAVideoCacheWriteVideoRegister(struct mCacheSet *cache, uint32_t address, uint16_t value) { (void)cache, (void)address, (void)value; }
void mappedMemoryFree(void *memory, size_t size) { (void)size; free(memory); }
