	THUMB_FUNC_START sub_080F47EC
sub_080F47EC: @ 0x080F47EC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3758
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F47EC

	.byte 0x00
	.byte 0x00
