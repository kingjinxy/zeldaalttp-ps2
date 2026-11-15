	THUMB_FUNC_START sub_080D1BE4
sub_080D1BE4: @ 0x080D1BE4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080D1EE4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D1BE4

	.byte 0x00
	.byte 0x00
