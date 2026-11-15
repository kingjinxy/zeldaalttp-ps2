	THUMB_FUNC_START sub_0801C4C4
sub_0801C4C4: @ 0x0801C4C4
	push {lr}
	mov r2, #0
	mov r1, #1
	strb r1, [r0, #20]
	str r2, [r0, #100]
	add r1, r0, #0
	add r1, r1, #43
	ldrb r1, [r1]
	lsr r1, r1, #3
	add r2, r0, #0
	add r2, r2, #42
	strb r1, [r2]
	add r1, r1, #4
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C4C4

	.byte 0x00
	.byte 0x00
