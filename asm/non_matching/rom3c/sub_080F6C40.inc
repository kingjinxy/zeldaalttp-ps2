	THUMB_FUNC_START sub_080F6C40
sub_080F6C40: @ 0x080F6C40
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080F6974
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F6C40

	.byte 0x00
	.byte 0x00
