	THUMB_FUNC_START sub_080BDC74
sub_080BDC74: @ 0x080BDC74
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080B9454
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080BDC74

	.byte 0x00
	.byte 0x00
