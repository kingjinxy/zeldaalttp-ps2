	THUMB_FUNC_START sub_0803C2EC
sub_0803C2EC: @ 0x0803C2EC
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	mov r3, #16
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r1, #0
	add r1, r2, #0
	sub r1, r1, #12
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	sub r0, r0, r2
	mov r1, #31
	and r0, r0, r1
	cmp r0, #24
	ble _0803C33A
	b _0803C45C
_0803C33A:
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
	beq _0803C392
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
	bge _0803C388
	add r2, r2, #3
_0803C388:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803C3B4
_0803C392:
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
	bge _0803C3AE
	add r3, r3, #3
_0803C3AE:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803C3B4:
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
	beq _0803C41E
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
	bge _0803C414
	add r2, r2, #3
_0803C414:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803C440
_0803C41E:
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
	bge _0803C43A
	add r3, r3, #3
_0803C43A:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803C440:
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
	b _0803C500
_0803C45C:
	ldr r1, [r7, #4]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803A5DC
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #69
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
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
	beq _0803C4C4
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	neg r2, r1
	add r1, r2, #0
	add r2, r1, #0
	sub r2, r2, #16
	add r1, r2, #0
	b _0803C4D2
_0803C4C4:
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #70
	ldrb r2, [r3]
	add r3, r2, #0
	add r3, r3, #16
	add r1, r3, #0
_0803C4D2:
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803C500
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0803C500:
	mov r0, #1
	b _0803C504
_0803C504:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803C2EC

