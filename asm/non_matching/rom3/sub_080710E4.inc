	THUMB_FUNC_START sub_080710E4
sub_080710E4: @ 0x080710E4
	push {lr}
	bl sub_0808A014
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080710E4

	.byte 0x00
	.byte 0x00
