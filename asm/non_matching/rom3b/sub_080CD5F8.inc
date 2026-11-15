	THUMB_FUNC_START sub_080CD5F8
sub_080CD5F8: @ 0x080CD5F8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080CD098
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CD5F8

	.byte 0x00
	.byte 0x00
