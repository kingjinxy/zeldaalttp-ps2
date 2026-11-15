	THUMB_FUNC_START sub_080F036C
sub_080F036C: @ 0x080F036C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080F0338
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F036C

	.byte 0x00
	.byte 0x00
