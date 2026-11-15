	THUMB_FUNC_START sub_080EE3BC
sub_080EE3BC: @ 0x080EE3BC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080EE1D0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EE3BC

	.byte 0x00
	.byte 0x00
