	THUMB_FUNC_START sub_080803A0
sub_080803A0: @ 0x080803A0
	push {r4,lr}
	add r4, r0, #0
	mov r3, #63
	and r3, r3, r4
	mov r2, #128
	lsl r2, r2, #4
	and r2, r2, r4
	asr r2, r2, #5
	mov r0, #248
	lsl r0, r0, #3
	and r0, r0, r4
	lsl r0, r0, #1
	mov r1, #128
	lsl r1, r1, #5
	and r1, r1, r4
	orr r3, r3, r1
	orr r2, r2, r3
	orr r0, r0, r2
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080803A0

	.byte 0x00
	.byte 0x00
