	thumb_func_start sub_08000AAC
sub_08000AAC: @ 0x08000AAC
	lsrs r2, r1, #5
	lsls r2, r2, #2
	ldr r0, [r0, r2]
	lsls r1, r1, #0x1b
	lsrs r1, r1, #0x1b
	lsrs r0, r1
	movs r1, #1
	ands r0, r1
	mov pc, lr
	.align 2, 0
_08000AC0: .4byte 0x03000F40
_08000AC4: .4byte 0xFFFFFFFF
_08000AC8: .4byte 0x030066B0
_08000ACC: .4byte 0x03000204
_08000AD0: .4byte 0x03006730
_08000AD4: .4byte 0x03000E34
_08000AD8: .4byte 0x03000E34
_08000ADC: .4byte 0x03000E34
_08000AE0: .4byte 0x55555555
_08000AE4: .4byte 0x33333333
_08000AE8: .4byte 0x0F0F0F0F
_08000AEC: .4byte 0x00FF00FF
_08000AF0: .4byte 0x0000FFFF

@ What is this?
	.INCBIN "baserom.gba", 0xAF4, 0xBAC-0xAF4

