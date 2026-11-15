	THUMB_FUNC_START sub_080DA6C8
sub_080DA6C8: @ 0x080DA6C8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080DA6D8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DA6C8

	.byte 0x00
	.byte 0x00
