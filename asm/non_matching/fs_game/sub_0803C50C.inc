	THUMB_FUNC_START sub_0803C50C
sub_0803C50C: @ 0x0803C50C
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
	ble _0803C55A
	b _0803C640
_0803C55A:
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
	beq _0803C594
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
	bge _0803C58A
	add r2, r2, #3
_0803C58A:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803C5B6
_0803C594:
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
	bge _0803C5B0
	add r3, r3, #3
_0803C5B0:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803C5B6:
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
	beq _0803C602
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
	bge _0803C5F8
	add r2, r2, #3
_0803C5F8:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803C624
_0803C602:
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
	bge _0803C61E
	add r3, r3, #3
_0803C61E:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803C624:
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
	b _0803C71E
_0803C640:
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
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #70
	add r2, r0, #0
	add r0, r0, #61
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
	beq _0803C6B6
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
	bge _0803C6AC
	add r2, r2, #3
_0803C6AC:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803C6D8
_0803C6B6:
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
	bge _0803C6D2
	add r3, r3, #3
_0803C6D2:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803C6D8:
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
	add r1, r0, #0
	add r0, r0, #67
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803C71E
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0803C71E:
	mov r0, #1
	b _0803C722
_0803C722:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803C50C

	.byte 0x00
	.byte 0x00
