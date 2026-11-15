	THUMB_FUNC_START sub_0810B7D4
sub_0810B7D4: @ 0x0810B7D4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3758
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810B7D4

	.byte 0x00
	.byte 0x00
