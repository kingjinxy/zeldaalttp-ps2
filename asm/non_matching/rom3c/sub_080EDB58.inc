	THUMB_FUNC_START sub_080EDB58
sub_080EDB58: @ 0x080EDB58
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080ED9A0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EDB58

	.byte 0x00
	.byte 0x00
