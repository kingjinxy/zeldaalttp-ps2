	THUMB_FUNC_START sub_0804C938
sub_0804C938: @ 0x0804C938
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r3, r0, #0
	add r0, r2, #0
	add r2, r7, #0
	strb r3, [r2]
	add r2, r7, #1
	strb r1, [r2]
	add r1, r7, #2
	strb r0, [r1]
	bl sub_08012440
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804C9B8
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #4]
	add r1, r7, #0
	ldrb r2, [r0, #9]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #9]
	ldr r0, [r7, #4]
	add r1, r7, #1
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7, #4]
	add r1, r7, #2
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r1, [r7, #4]
	mov r0, #6
	bl sub_08012728
_0804C9B8:
	ldr r1, [r7, #4]
	add r0, r1, #0
	b _0804C9BE
_0804C9BE:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804C938

	.byte 0x00
	.byte 0x00
