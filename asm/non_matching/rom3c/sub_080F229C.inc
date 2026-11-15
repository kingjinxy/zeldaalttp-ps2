	THUMB_FUNC_START sub_080F229C
sub_080F229C: @ 0x080F229C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3734
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F229C

	.byte 0x00
	.byte 0x00
