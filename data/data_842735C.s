	.INCLUDE "macro.inc"

	.SECTION .rodata

	.GLOBAL gUnknown_0842735C
gUnknown_0842735C:
	.INCBIN "baserom.gba", 0X42735C, 0X4
	.4byte sub_0800B700
	.4byte process_dma_request
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8
	.4byte sub_0800B6B8

	.GLOBAL gUnknown_08427390
gUnknown_08427390:
    .4byte sub_0800C140
    .4byte sub_0800C190
    .4byte sub_0800C140
    .4byte sub_0800C190

	.GLOBAL gUnknown_084273A0
gUnknown_084273A0:
	.INCBIN "baserom.gba", 0x4273A0, 0x4273C8-0x4273A0

	.GLOBAL gUnknown_084273C8
gUnknown_084273C8:
	.4byte sub_0800C940
	.4byte sub_0800C9AC
	.4byte sub_0800C9F8

	.GLOBAL gUnknown_084273D4
gUnknown_084273D4:
	.4byte sub_0800D87C
	.4byte sub_0800D894
	.4byte sub_0800DA30
	.4byte sub_0800DB84
	.4byte sub_0800DA90
	.4byte sub_0800DB08

	.GLOBAL gUnknown_084273EC
gUnknown_084273EC:
	.4byte sub_0800D890
	.4byte sub_0800D958
	.4byte sub_0800DA70
	.4byte sub_0800DB58
	.4byte sub_0800DAE8
	.4byte sub_0800DB30
	.4byte sub_0800DB54

	.GLOBAL gUnknown_08427408
gUnknown_08427408:
	.4byte sub_0800DBC0
	.4byte sub_0800DBE0
	.4byte sub_0800E324
	.4byte sub_0800E39C
	.4byte sub_0800E1D4
	.4byte sub_0800E240
	.4byte sub_0800E094

	.GLOBAL gUnknown_08427424
gUnknown_08427424:
	.INCBIN "baserom.gba", 0x427424, 0x427434-0x427424

	.GLOBAL gUnknown_08427434
gUnknown_08427434:
	.INCBIN "baserom.gba", 0x427434, 0x427444-0x427434

	.GLOBAL gUnknown_08427444
gUnknown_08427444:
	.INCBIN "baserom.gba", 0x427444, 0x427460-0x427444

	.GLOBAL gUnknown_08427460
gUnknown_08427460:
	.INCBIN "baserom.gba", 0x427460, 0x427474-0x427460

	.GLOBAL gUnknown_08427474
gUnknown_08427474:
	.INCBIN "baserom.gba", 0x427474, 0x42748C-0x427474
