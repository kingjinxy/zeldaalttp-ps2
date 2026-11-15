	THUMB_FUNC_START sub_08034EB4
sub_08034EB4: @ 0x08034EB4
	push {lr}
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	mov r2, #2
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldrb r3, [r0, #31]
	mov r2, #63
	add r1, r2, #0
	and r1, r1, r3
	strb r1, [r0, #31]
	ldrb r3, [r0, #29]
	add r1, r2, #0
	and r1, r1, r3
	strb r1, [r0, #29]
	add r3, r0, #0
	add r3, r3, #32
	mov r1, #96
	strb r1, [r3]
	ldrb r1, [r0, #28]
	and r2, r2, r1
	mov r1, #64
	orr r2, r2, r1
	strb r2, [r0, #28]
	mov r1, #154
	strb r1, [r0, #27]
	mov r1, #0
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034EB4

