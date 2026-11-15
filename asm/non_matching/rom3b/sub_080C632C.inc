	THUMB_FUNC_START sub_080C632C
sub_080C632C: @ 0x080C632C
	push {lr}
	lsl r2, r2, #24
	lsr r2, r2, #24
	bl sub_080C631C
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C632C

	.byte 0x00
	.byte 0x00
