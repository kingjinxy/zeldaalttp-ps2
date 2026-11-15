	THUMB_FUNC_START sub_080CD598
sub_080CD598: @ 0x080CD598
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080CCB58
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CD598

	.byte 0x00
	.byte 0x00
