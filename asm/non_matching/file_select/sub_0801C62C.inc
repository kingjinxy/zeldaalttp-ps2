	THUMB_FUNC_START sub_0801C62C
sub_0801C62C: @ 0x0801C62C
	push {lr}
	mov r12, r0
	mov r3, #0
	mov r2, #1
	mov r0, #1
	mov r1, r12
	strb r0, [r1, #20]
	strb r0, [r1, #23]
	ldrb r1, [r1, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	mov r1, r12
	strb r0, [r1, #28]
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801C674  @ =gUnknown_0813A718
	mov r1, r12
	str r0, [r1, #72]
	strb r3, [r1, #26]
	mov r2, r12
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, r12
	add r0, r0, #42
	strb r3, [r0]
	mov r0, r12
	mov r1, #0
	bl 0x08003870
	pop {r0}
	bx r0
_0801C674:
	.4byte gUnknown_0813A718
	THUMB_FUNC_END sub_0801C62C

