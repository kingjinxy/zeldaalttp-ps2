	THUMB_FUNC_START sub_080C8168
sub_080C8168: @ 0x080C8168
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C811C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C8168

	.byte 0x00
	.byte 0x00
