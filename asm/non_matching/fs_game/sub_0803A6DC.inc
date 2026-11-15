	THUMB_FUNC_START sub_0803A6DC
sub_0803A6DC: @ 0x0803A6DC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #8]
	cmp r1, #8
	bne _0803A73C
	ldr r0, [r7]
	ldrb r1, [r0, #9]
	cmp r1, #9
	bne _0803A73C
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	mov r3, #0
	ldrsb r3, [r2, r3]
	asr r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #66
	mov r3, #0
	ldrsb r3, [r2, r3]
	asr r1, r3, #1
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0803A780
_0803A73C:
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #61
	mov r3, #0
	ldrsb r3, [r2, r3]
	asr r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #66
	mov r3, #0
	ldrsb r3, [r2, r3]
	asr r1, r3, #1
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0803A780:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803A6DC

