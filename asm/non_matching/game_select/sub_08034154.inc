	THUMB_FUNC_START sub_08034154
sub_08034154: @ 0x08034154
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r1, [r4, #31]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r2, r2, r0
	strb r2, [r4, #29]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #96
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #98
	strh r0, [r1]
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #32
	str r0, [r4, #12]
	add r0, r4, #0
	bl sub_08034238
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034154

