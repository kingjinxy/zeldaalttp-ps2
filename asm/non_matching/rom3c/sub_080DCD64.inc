	THUMB_FUNC_START sub_080DCD64
sub_080DCD64: @ 0x080DCD64
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080DCBCC
	add r0, r4, #0
	bl sub_080DCBCC
	add r0, r4, #0
	bl sub_080DCBCC
	add r0, r4, #0
	bl sub_080DCBCC
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DCD64

	.byte 0x00
	.byte 0x00
