	THUMB_FUNC_START sub_08101B14
sub_08101B14: @ 0x08101B14
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C35E0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08101B14

	.byte 0x00
	.byte 0x00
