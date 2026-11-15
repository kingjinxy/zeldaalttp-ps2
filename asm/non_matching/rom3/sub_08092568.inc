	THUMB_FUNC_START sub_08092568
sub_08092568: @ 0x08092568
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r5
	lsl r0, r0, #1
	mov r4, #128
	lsl r4, r4, #4
	and r4, r4, r5
	mov r3, #64
	and r3, r3, r5
	lsl r3, r3, #6
	mov r2, #32
	and r2, r2, r5
	lsl r2, r2, #5
	mov r1, #240
	lsl r1, r1, #3
	and r1, r1, r5
	asr r1, r1, #1
	orr r0, r0, r4
	orr r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	mov r1, #31
	and r1, r1, r5
	orr r0, r0, r1
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08092568

	.byte 0x00
	.byte 0x00
