	THUMB_FUNC_START sub_0803B1F8
sub_0803B1F8: @ 0x0803B1F8
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #70
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	mov r2, #128
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0803B262
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #70
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #70
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	cmp r2, #0
	bge _0803B258
	add r2, r2, #3
_0803B258:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803B284
_0803B262:
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #70
	ldrb r4, [r3]
	neg r2, r4
	ldr r4, [r7, #4]
	add r3, r4, #0
	add r4, r4, #70
	mov r5, #0
	ldrsb r5, [r4, r5]
	add r3, r5, #0
	cmp r3, #0
	bge _0803B27E
	add r3, r3, #3
_0803B27E:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803B284:
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #70
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	mov r2, #128
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0803B2EE
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #70
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #70
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	cmp r2, #0
	bge _0803B2E4
	add r2, r2, #3
_0803B2E4:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803B310
_0803B2EE:
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #70
	ldrb r4, [r3]
	neg r2, r4
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #70
	mov r5, #0
	ldrsb r5, [r4, r5]
	add r3, r5, #0
	cmp r3, #0
	bge _0803B30A
	add r3, r3, #3
_0803B30A:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803B310:
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803A788
	mov r0, #1
	b _0803B32E
_0803B32E:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803B1F8

	.byte 0x00
	.byte 0x00
