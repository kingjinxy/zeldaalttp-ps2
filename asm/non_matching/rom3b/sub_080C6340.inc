	THUMB_FUNC_START sub_080C6340
sub_080C6340: @ 0x080C6340
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C5D18
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6340

	.byte 0x00
	.byte 0x00
