	THUMB_FUNC_START sub_0810A538
sub_0810A538: @ 0x0810A538
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_0810A6A0
	add r0, r4, #0
	bl sub_0810A0B4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A538

	.byte 0x00
	.byte 0x00
