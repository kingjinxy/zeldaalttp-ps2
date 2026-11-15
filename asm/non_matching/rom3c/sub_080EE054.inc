	THUMB_FUNC_START sub_080EE054
sub_080EE054: @ 0x080EE054
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080EDB68
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EE054

	.byte 0x00
	.byte 0x00
