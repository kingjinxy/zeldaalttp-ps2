	THUMB_FUNC_START sub_080356DC
sub_080356DC: @ 0x080356DC
	push {lr}
	mov r3, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r1, [r0, #11]
	strb r1, [r0, #24]
	mov r1, #160
	lsl r1, r1, #2
	str r1, [r0, #12]
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	orr r1, r1, r3
	strb r1, [r0, #28]
	add r3, r0, #0
	add r3, r3, #94
	ldrb r1, [r3]
	mov r2, #3
	orr r1, r1, r2
	strb r1, [r3]
	mov r1, #3
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080356DC

