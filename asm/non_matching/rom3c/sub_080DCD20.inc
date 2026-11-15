	THUMB_FUNC_START sub_080DCD20
sub_080DCD20: @ 0x080DCD20
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3734
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DCD20

	.byte 0x00
	.byte 0x00
