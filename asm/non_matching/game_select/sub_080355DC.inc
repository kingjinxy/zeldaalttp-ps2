	THUMB_FUNC_START sub_080355DC
sub_080355DC: @ 0x080355DC
	push {r4,lr}
	mov r4, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r3, [r0, #28]
	mov r2, #4
	neg r2, r2
	add r1, r2, #0
	and r1, r1, r3
	orr r1, r1, r4
	strb r1, [r0, #28]
	add r3, r0, #0
	add r3, r3, #94
	ldrb r1, [r3]
	and r2, r2, r1
	strb r2, [r3]
	ldrb r1, [r0, #29]
	mov r2, #192
	orr r1, r1, r2
	strb r1, [r0, #29]
	ldrb r1, [r0, #10]
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080355DC

