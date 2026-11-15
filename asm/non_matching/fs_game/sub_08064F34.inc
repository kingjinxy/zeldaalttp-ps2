	THUMB_FUNC_START sub_08064F34
sub_08064F34: @ 0x08064F34
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08064F94
	ldr r0, _08064F9C  @ =gUnknown_0201F000
	ldr r1, _08064F9C  @ =gUnknown_0201F000
	ldr r2, [r1]
	mov r1, #8
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, _08064FA0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
_08064F94:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064F9C:
	.4byte gUnknown_0201F000
_08064FA0:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08064F34

