	THUMB_FUNC_START sub_08011778
sub_08011778: @ 0x08011778
	push {r4,lr}
	mov r4, #0
	mov r3, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r1, [r0, #31]
	mov r2, #192
	orr r1, r1, r2
	strb r1, [r0, #31]
	ldrb r1, [r0, #29]
	orr r1, r1, r2
	strb r1, [r0, #29]
	mov r1, #94
	add r1, r1, r0
	mov r12, r1
	ldrb r2, [r1]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	orr r1, r1, r3
	mov r2, r12
	strb r1, [r2]
	strb r4, [r0, #24]
	add r2, r0, #0
	add r2, r2, #33
	mov r1, #17
	strb r1, [r2]
	bl sub_08011870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011778

