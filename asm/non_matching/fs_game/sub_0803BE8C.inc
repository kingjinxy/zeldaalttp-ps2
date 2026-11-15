	THUMB_FUNC_START sub_0803BE8C
sub_0803BE8C: @ 0x0803BE8C
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
	beq _0803BEF6
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
	bge _0803BEEC
	add r2, r2, #3
_0803BEEC:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803BF18
_0803BEF6:
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
	bge _0803BF12
	add r3, r3, #3
_0803BF12:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803BF18:
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #8]
	cmp r1, #8
	bne _0803BF7C
	ldr r0, _0803BFD4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803BF7C
	ldr r0, _0803BFD4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0803BF7C:
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
	beq _0803BFD8
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
	bge _0803BFCA
	add r2, r2, #3
_0803BFCA:
	asr r2, r2, #2
	ldrb r1, [r1]
	add r3, r1, r2
	add r1, r3, #0
	b _0803BFFA
_0803BFD4:
	.4byte gUnknown_03006A30
_0803BFD8:
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
	bge _0803BFF4
	add r3, r3, #3
_0803BFF4:
	asr r3, r3, #2
	sub r2, r2, r3
	add r1, r2, #0
_0803BFFA:
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
	ldrb r1, [r0, #8]
	cmp r1, #8
	bne _0803C05E
	ldr r0, _0803C064  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803C05E
	ldr r0, _0803C064  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0803C05E:
	mov r0, #1
	b _0803C068
	.byte 0x00
	.byte 0x00
_0803C064:
	.4byte gUnknown_03006A30
_0803C068:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803BE8C

