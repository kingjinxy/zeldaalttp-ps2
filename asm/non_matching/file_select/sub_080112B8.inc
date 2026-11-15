	THUMB_FUNC_START sub_080112B8
sub_080112B8: @ 0x080112B8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_080113D8
	add r0, r4, #0
	bl sub_08067A70
	add r0, r4, #0
	bl sub_08011184
	bl sub_08011408
	add r0, r4, #0
	bl sub_08010D1C
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080112B8

