// PS2: the GBA save (EEPROM, emulated in io.c) as a file in mGBA's .sav layout: loaded at startup, written at the next
// vblank after the game changes it. One file per game instance. shortcut: host: only (PCSX2 with HostFs, the ELF's folder); a memory card file
// (mc0:) for real hardware comes with the memory card code.
#include <kernel.h>
#include <stdio.h>
#include <string.h>

// instance 0: host:zeldaalttp.sav, instance i: host:zeldaalttp_p<i+1>.sav
extern u8 ps2_eeprom[8][8192];
extern int ps2_eeprom_dirty[8];

static void path(int inst, char *buf, int n)
{
    if (inst)
        snprintf(buf, n, "host:zeldaalttp_p%d.sav", inst + 1);
    else
        snprintf(buf, n, "host:zeldaalttp.sav");
}
void ps2_log(const char *fmt, ...);

void ps2_save_load(int inst)
{
    char p[64];
    FILE *f;
    size_t n = 0;
    path(inst, p, sizeof(p));
    f = fopen(p, "rb");
    memset(ps2_eeprom[inst], 0xFF, sizeof(ps2_eeprom[inst]));  // an erased EEPROM reads all ones
    if (f) {
        n = fread(ps2_eeprom[inst], 1, sizeof(ps2_eeprom[inst]), f);
        fclose(f);
    }
    ps2_log("save: %s %s (%u bytes)", p, f ? "loaded" : "not found, starting empty", (unsigned)n);
}

void ps2_save_vblank(int inst)
{
    char p[64];
    FILE *f;
    if (!ps2_eeprom_dirty[inst])
        return;
    ps2_eeprom_dirty[inst] = 0;
    path(inst, p, sizeof(p));
    if ((f = fopen(p, "wb"))) {
        fwrite(ps2_eeprom[inst], 1, sizeof(ps2_eeprom[inst]), f);
        fclose(f);
        ps2_log("save: %s written", p);
    } else {
        ps2_log("save: can't write %s", p);
    }
}
