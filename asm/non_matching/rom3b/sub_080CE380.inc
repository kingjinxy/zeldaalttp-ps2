	THUMB_FUNC_START sub_080CE380
sub_080CE380: @ 0x080CE380
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #240
	lsl r1, r1, #21
	add r0, r0, r1
	lsr r0, r0, #24
	bl sub_080CE3A0
	add r0, r4, #0
	bl sub_080CE3A0
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CE380

	.byte 0x00
	.byte 0x00
