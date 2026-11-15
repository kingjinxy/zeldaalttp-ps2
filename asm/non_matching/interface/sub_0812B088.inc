	THUMB_FUNC_START sub_0812B088
sub_0812B088: @ 0x0812B088
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r7, r1, #24
	mov r6, #0
	ldrb r4, [r5, #10]
	mov r0, #72
	add r0, r0, r5
	mov r8, r0
	ldrh r0, [r0]
	cmp r0, #0
	bne _0812B0A6
	mov r6, #1
_0812B0A6:
	add r0, r5, #0
	bl sub_0812AEEC
	cmp r6, #0
	bne _0812B0B4
	mov r0, #8
	b _0812B184
_0812B0B4:
	cmp r7, #0
	beq _0812B0BA
	lsl r4, r4, #1
_0812B0BA:
	lsl r4, r4, #15
	ldr r1, [r5, #4]
	add r0, r1, #0
	add r0, r0, #77
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #14
	add r0, r1, #0
	add r0, r0, #78
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #7
	ldr r1, [r1, #8]
	add r0, r1, #0
	add r0, r0, #64
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #7
	add r0, r1, #0
	add r0, r0, #65
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #8
	ldrh r0, [r1, #52]
	mul r4, r0, r4
	ldrb r0, [r5]
	cmp r0, #3
	bne _0812B108
	lsr r4, r4, #22
	str r4, [r5, #20]
	lsl r0, r4, #2
	add r4, r0, r4
	lsr r4, r4, #7
	cmp r4, #4
	bls _0812B102
	mov r4, #4
_0812B102:
	lsl r0, r4, #24
	lsr r0, r0, #24
	b _0812B184
_0812B108:
	lsr r4, r4, #15
	str r4, [r5, #20]
	ldr r0, [r5, #64]
	mul r4, r0, r4
	lsr r4, r4, #25
	mov r2, #16
	neg r2, r2
	add r0, r4, #0
	and r0, r0, r2
	cmp r0, #0
	beq _0812B120
	mov r4, #15
_0812B120:
	ldr r1, [r5, #20]
	ldr r0, [r5, #68]
	mul r0, r1, r0
	lsr r0, r0, #25
	str r0, [r5, #20]
	and r0, r0, r2
	cmp r0, #0
	beq _0812B134
	mov r0, #15
	str r0, [r5, #20]
_0812B134:
	ldr r5, [r5, #20]
	cmp r5, r4
	beq _0812B15C
	mov r1, r8
	ldrh r2, [r1]
	add r0, r2, #0
	add r0, r0, #15
	lsl r0, r0, #16
	lsr r2, r0, #16
	sub r1, r5, r4
	cmp r1, #0
	bge _0812B14E
	neg r1, r1
_0812B14E:
	add r0, r2, #0
	bl __divsi3
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #0
	bne _0812B168
_0812B15C:
	lsl r0, r4, #4
	mov r1, #8
	orr r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	b _0812B182
_0812B168:
	ldr r0, _0812B190  @ =0x0000FFF8
	and r0, r0, r2
	cmp r0, #0
	beq _0812B172
	mov r2, #7
_0812B172:
	lsl r0, r4, #4
	orr r0, r0, r2
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r4, r5
	bcs _0812B182
	mov r0, #8
	orr r6, r6, r0
_0812B182:
	add r0, r6, #0
_0812B184:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0812B190:
	.4byte 0x0000FFF8
	THUMB_FUNC_END sub_0812B088

