	THUMB_FUNC_START sub_080C99DC
sub_080C99DC: @ 0x080C99DC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl Sprite3_Move
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C99DC

	.byte 0x00
	.byte 0x00
