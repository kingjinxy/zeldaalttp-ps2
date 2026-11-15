	THUMB_FUNC_START sub_0801EC9C
sub_0801EC9C: @ 0x0801EC9C
	push {lr}
	mov r12, r0
	mov r3, #0
	mov r2, #1
	mov r0, #1
	mov r1, r12
	strb r0, [r1, #20]
	ldrb r1, [r1, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	mov r1, r12
	strb r0, [r1, #28]
	add r1, r1, #46
	mov r0, #4
	strb r0, [r1]
	mov r0, r12
	add r0, r0, #60
	strb r3, [r0]
	mov r0, #128
	lsl r0, r0, #1
	mov r1, r12
	str r0, [r1, #12]
	mov r0, #144
	lsl r0, r0, #9
	str r0, [r1, #16]
	mov r0, r12
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #3
	sub r0, r0, #1
	strb r1, [r0]
	add r1, r1, #8
	mov r0, r12
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EC9C

