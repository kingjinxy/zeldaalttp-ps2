	.syntax unified
	THUMB_FUNC_START sub_08000AF4
sub_08000AF4: @ 0X08000AF4
	movs r0, #16
	ands r0, r4
	lsrs r0, r1, #32
	movs r0, #16
	movs r2, r0
	.4byte 0xfffcfff8
	asrs r0, r0, #32
	.syntax unified
	.thumb
