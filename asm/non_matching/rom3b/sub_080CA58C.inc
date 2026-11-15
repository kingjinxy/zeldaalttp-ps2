	THUMB_FUNC_START sub_080CA58C
sub_080CA58C: @ 0x080CA58C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl Sprite3_Move
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CA58C

	.byte 0x00
	.byte 0x00
