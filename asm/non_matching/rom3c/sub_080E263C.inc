	THUMB_FUNC_START sub_080E263C
sub_080E263C: @ 0x080E263C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E2094
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E263C

	.byte 0x00
	.byte 0x00
