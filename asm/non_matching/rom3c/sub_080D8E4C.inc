	THUMB_FUNC_START sub_080D8E4C
sub_080D8E4C: @ 0x080D8E4C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C3758
	add r0, r4, #0
	bl sub_080C35C0
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D8E4C

	.byte 0x00
	.byte 0x00
