	THUMB_FUNC_START sub_080E03A4
sub_080E03A4: @ 0x080E03A4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3758
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E03A4

	.byte 0x00
	.byte 0x00
