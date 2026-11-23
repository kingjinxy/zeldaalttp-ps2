/* GBA ROM bytes the PS2 build takes from the user's ROM: the code area (tables inside it are read as data) and two
   small C-data ranges between the data objects (src/ps2/ps2.ld). Built from baserom.gba; never committed. */
	.section .gba_code, "a"
	.incbin "baserom.gba", 0, 0x137B04
	.section .gba_gap0, "a"
	.incbin "baserom.gba", 0x42731C, 0x40
	.section .gba_gap1, "a"
	.incbin "baserom.gba", 0x42748C, 0x20
