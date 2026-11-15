	THUMB_FUNC_START sub_080E2D3C
sub_080E2D3C: @ 0x080E2D3C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E25A8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E2D3C

	.byte 0x00
	.byte 0x00
