	THUMB_FUNC_START sub_080BDCA4
sub_080BDCA4: @ 0x080BDCA4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080B9454
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080BDCA4

	.byte 0x00
	.byte 0x00
