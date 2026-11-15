	THUMB_FUNC_START sub_08067A04
sub_08067A04: @ 0x08067A04
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08067CBC
	lsl r0, r0, #24
	asr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067A04

	.byte 0x00
	.byte 0x00
