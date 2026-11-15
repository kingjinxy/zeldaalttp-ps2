	THUMB_FUNC_START sub_08034CEC
sub_08034CEC: @ 0x08034CEC
	push {lr}
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r1, r0, #0
	add r1, r1, #35
	ldrb r1, [r1]
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034CEC

