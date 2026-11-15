	THUMB_FUNC_START sub_080C8178
sub_080C8178: @ 0x080C8178
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C9704
	add r0, r4, #0
	bl sub_080C7EE8
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C8178

	.byte 0x00
	.byte 0x00
