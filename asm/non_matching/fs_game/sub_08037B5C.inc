	THUMB_FUNC_START sub_08037B5C
sub_08037B5C: @ 0x08037B5C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #1
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #2
	ldr r1, _08037C48  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08037C4C  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08037BAA
	ldr r1, _08037C48  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #56
	add r0, r7, #0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _08037BAA
	add r0, r7, #1
	add r1, r7, #1
	ldrb r2, [r1]
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08037BAA:
	ldr r0, _08037C4C  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08037BD8
	ldr r1, _08037C48  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #76
	add r0, r7, #0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _08037BD8
	add r0, r7, #1
	add r1, r7, #1
	ldrb r2, [r1]
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08037BD8:
	ldr r0, _08037C4C  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08037C06
	ldr r1, _08037C48  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #96
	add r0, r7, #0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _08037C06
	add r0, r7, #1
	add r1, r7, #1
	ldrb r2, [r1]
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08037C06:
	ldr r0, _08037C4C  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08037C34
	ldr r1, _08037C48  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #116
	add r0, r7, #0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _08037C34
	add r0, r7, #1
	add r1, r7, #1
	ldrb r2, [r1]
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08037C34:
	mov r0, #0
	add r1, r7, #1
	add r2, r7, #2
	ldrb r1, [r1]
	ldrb r2, [r2]
	cmp r1, r2
	bne _08037C44
	mov r0, #1
_08037C44:
	b _08037C50
	.byte 0x00
	.byte 0x00
_08037C48:
	.4byte gUnknown_03000FC0
_08037C4C:
	.4byte gUnknown_03000BF0
_08037C50:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08037B5C

