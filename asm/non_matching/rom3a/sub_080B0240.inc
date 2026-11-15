	THUMB_FUNC_START sub_080B0240
sub_080B0240: @ 0x080B0240
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08122390
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B0240

	.byte 0x00
	.byte 0x00
