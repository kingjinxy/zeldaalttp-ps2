// PS2: the GBA save (EEPROM, emulated in io.c) as a file in mGBA's .sav layout: loaded at startup, written at the next
// vblank after the game changes it. shortcut: host: only (PCSX2 with HostFs, the ELF's folder); a memory card file
// (mc0:) for real hardware comes with the memory card code.
#include <kernel.h>
#include <stdio.h>
#include <string.h>

#define SAVE_PATH "host:zeldaalttp.sav"

extern u8 ps2_eeprom[8192];
extern int ps2_eeprom_dirty;
void ps2_log(const char *fmt, ...);

void ps2_save_load(void)
{
    FILE *f = fopen(SAVE_PATH, "rb");
    size_t n = 0;
    memset(ps2_eeprom, 0xFF, sizeof(ps2_eeprom));  // an erased EEPROM reads all ones
    if (f) {
        n = fread(ps2_eeprom, 1, sizeof(ps2_eeprom), f);
        fclose(f);
    }
    ps2_log("save: %s %s (%u bytes)", SAVE_PATH, f ? "loaded" : "not found, starting empty", (unsigned)n);
}

void ps2_save_vblank(void)
{
    FILE *f;
    if (!ps2_eeprom_dirty)
        return;
    ps2_eeprom_dirty = 0;
    if ((f = fopen(SAVE_PATH, "wb"))) {
        fwrite(ps2_eeprom, 1, sizeof(ps2_eeprom), f);
        fclose(f);
        ps2_log("save: written");
    } else {
        ps2_log("save: can't write %s", SAVE_PATH);
    }
}
