	THUMB_FUNC_START sub_080BDC94
sub_080BDC94: @ 0x080BDC94
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080B9454
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080BDC94

	.byte 0x00
	.byte 0x00
