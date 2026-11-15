	THUMB_FUNC_START sub_08101638
sub_08101638: @ 0x08101638
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08100624
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08101638

	.byte 0x00
	.byte 0x00
