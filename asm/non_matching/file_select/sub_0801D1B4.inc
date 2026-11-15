	THUMB_FUNC_START sub_0801D1B4
sub_0801D1B4: @ 0x0801D1B4
	push {lr}
	mov r1, #8
	strb r1, [r0, #20]
	mov r1, #15
	strb r1, [r0, #23]
	ldrb r2, [r0, #28]
	sub r1, r1, #19
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #63
	mov r1, #6
	strb r1, [r2]
	sub r2, r2, #21
	mov r1, #2
	strb r1, [r2]
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D1B4

