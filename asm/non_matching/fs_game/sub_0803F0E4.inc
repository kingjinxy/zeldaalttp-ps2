	THUMB_FUNC_START sub_0803F0E4
sub_0803F0E4: @ 0x0803F0E4
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0803F104
	b _0803F27A
_0803F104:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #12
	bne _0803F11C
	b _0803F27A
_0803F11C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #3
	bhi _0803F134
	b _0803F27A
_0803F134:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #21
	bls _0803F14C
	b _0803F27A
_0803F14C:
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	add r1, r2, #0
	add r2, r2, #65
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #65
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #63
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #14
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #14
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldr r0, [r0, #48]
	ldr r1, [r2, #48]
	sub r0, r0, r1
	asr r1, r0, #1
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldr r0, [r0, #52]
	ldr r1, [r2, #52]
	sub r0, r0, r1
	asr r1, r0, #1
	str r1, [r7, #12]
	bl sub_080123E8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0803F27A
	ldr r0, [r7, #4]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #23
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
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
	ldr r1, [r7]
	ldr r2, [r1, #48]
	ldr r1, [r7, #8]
	sub r2, r2, r1
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	ldr r1, [r7, #12]
	sub r2, r2, r1
	str r2, [r0, #52]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #4]
	mov r0, #6
	bl sub_08012728
_0803F27A:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F0E4

	.byte 0x00
	.byte 0x00
