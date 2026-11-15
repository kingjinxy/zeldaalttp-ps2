	THUMB_FUNC_START sub_080C967C
sub_080C967C: @ 0x080C967C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080C8E7C
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C967C

	.byte 0x00
	.byte 0x00
