	THUMB_FUNC_START sub_080D38FC
sub_080D38FC: @ 0x080D38FC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080D3384
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D38FC

	.byte 0x00
	.byte 0x00
