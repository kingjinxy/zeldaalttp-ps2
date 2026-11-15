	THUMB_FUNC_START sub_080F27F8
sub_080F27F8: @ 0x080F27F8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080F29B8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F27F8

	.byte 0x00
	.byte 0x00
