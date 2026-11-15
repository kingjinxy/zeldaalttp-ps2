	.syntax unified
	THUMB_FUNC_START sub_080052A8
sub_080052A8: @ 0X080052A8
	ldrb r2, [r1, #2]
	movs r3, #7
	ands r2, r3
	lsls r2, r2, #2
	ldr r3, [pc, #640]
	ldr r2, [r3, r2]
	bx r2
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
