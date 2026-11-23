// PS2 entry: map the GBA address space, then run the game's AgbMain.
#include <kernel.h>
#include <stdio.h>

void ps2_tlb_map(void);
void ps2_glue_init(void);
void ps2_watch_init(void);
void ps2_log(const char *fmt, ...);
void AgbMain(void);

int main(void)
{
    ps2_log("zeldaalttp-ps2: start");
    ps2_tlb_map();
    ps2_glue_init();
    ps2_watch_init();
    ps2_log("GBA memory mapped, entering AgbMain");
    AgbMain();
    return 0;
}
