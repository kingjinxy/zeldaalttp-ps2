	THUMB_FUNC_START sub_08063DF0
sub_08063DF0: @ 0x08063DF0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r1, _08063E84  @ =gUnknown_03006A30
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _08063E7C
	ldr r0, [r7, #4]
	ldrb r1, [r0, #12]
	cmp r1, #0
	beq _08063E7C
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #12]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #56
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #57
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #12]
_08063E7C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_08063E84:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08063DF0

