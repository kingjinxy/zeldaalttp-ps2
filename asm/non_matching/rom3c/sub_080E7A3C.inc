	THUMB_FUNC_START sub_080E7A3C
sub_080E7A3C: @ 0x080E7A3C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E7A4C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E7A3C

	.byte 0x00
	.byte 0x00
