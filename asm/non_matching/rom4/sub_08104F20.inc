	THUMB_FUNC_START sub_08104F20
sub_08104F20: @ 0x08104F20
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080ED830
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08104F20

	.byte 0x00
	.byte 0x00
