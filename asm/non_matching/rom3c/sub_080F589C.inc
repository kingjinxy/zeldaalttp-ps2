	THUMB_FUNC_START sub_080F589C
sub_080F589C: @ 0x080F589C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080D0524
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F589C

	.byte 0x00
	.byte 0x00
