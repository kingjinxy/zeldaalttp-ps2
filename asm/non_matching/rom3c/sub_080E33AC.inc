	THUMB_FUNC_START sub_080E33AC
sub_080E33AC: @ 0x080E33AC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E2D4C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E33AC

	.byte 0x00
	.byte 0x00
