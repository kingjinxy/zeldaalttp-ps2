	THUMB_FUNC_START sub_08034920
sub_08034920: @ 0x08034920
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r4, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #31]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r0, r0, #253
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_0804CE00
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034920

	.byte 0x00
	.byte 0x00
