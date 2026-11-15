	THUMB_FUNC_START sub_080EE034
sub_080EE034: @ 0x080EE034
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080EE074
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EE034

	.byte 0x00
	.byte 0x00
