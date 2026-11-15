	THUMB_FUNC_START sub_080EE044
sub_080EE044: @ 0x080EE044
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080EE074
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EE044

	.byte 0x00
	.byte 0x00
