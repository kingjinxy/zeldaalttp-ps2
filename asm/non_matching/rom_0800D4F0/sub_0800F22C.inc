	THUMB_FUNC_START sub_0800F22C
sub_0800F22C: @ 0x0800F22C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r5, r0, #0
_0800F236:
	mov r6, #0
	add r0, r5, #0
	bl sub_0800EE2C
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #15
	bls _0800F248
	b _0800F3EA
_0800F248:
	lsl r0, r4, #2
	ldr r1, _0800F254  @ =0x0800F258
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0800F254:
	.4byte 0x0800F258
	.4byte _0800F2A6
	.4byte _0800F3F4
	.4byte _0800F2B4
	.4byte _0800F2E4
	.4byte _0800F3F4
	.4byte _0800F3F4
	.4byte _0800F3F4
	.4byte _0800F298
	.4byte _0800F3F4
	.4byte _0800F3F4
	.4byte _0800F3F4
	.4byte _0800F3F4
	.4byte _0800F308
	.4byte _0800F398
	.4byte _0800F3B8
	.4byte _0800F3CC
_0800F298:
	add r0, r5, #0
	bl sub_0800EE2C
	mov r1, #127
	and r1, r1, r0
	strb r1, [r5, #4]
	b _0800F3F4
_0800F2A6:
	add r0, r5, #0
	bl sub_0800EDF0
	cmp r0, #0
	bne _0800F2B2
	b _0800F3F4
_0800F2B2:
	b _0800F236
_0800F2B4:
	add r0, r5, #0
	bl sub_0800EE2C
	mov r4, #127
	and r4, r4, r0
	strb r4, [r5, #4]
	cmp r4, #3
	bgt _0800F2E0
	cmp r4, #0
	blt _0800F2E0
	ldr r1, [r5, #12]
	cmp r1, #0
	beq _0800F236
	ldrb r0, [r5, #3]
	cmp r0, #0
	beq _0800F2D8
	lsl r0, r4, #3
	add r1, r1, r0
_0800F2D8:
	add r0, r5, #0
	bl sub_0800EDB8
	b _0800F236
_0800F2E0:
	mov r0, #2
	b _0800F3FC
_0800F2E4:
	add r0, r5, #0
	bl sub_0800EE2C
	mov r4, #127
	and r4, r4, r0
	ldrh r1, [r5, #6]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	orr r4, r4, r0
	mov r0, #0
	strb r0, [r5]
	strb r0, [r5, #2]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0800ED7C
	b _0800F236
_0800F308:
	add r0, r5, #0
	bl sub_0800EE2C
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsr r6, r0, #28
	mov r0, #15
	and r4, r4, r0
	mov r7, #0
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r0, _0800F390  @ =0x0000FFFF
	add r3, r5, #0
	add r3, r3, #16
	cmp r4, r0
	beq _0800F34C
	mov r8, r0
_0800F32C:
	add r0, r5, #0
	str r3, [sp]
	bl sub_0800EE2C
	add r2, r7, #0
	add r1, r2, #1
	lsl r1, r1, #24
	lsr r7, r1, #24
	ldr r3, [sp]
	add r2, r3, r2
	strb r0, [r2]
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, r8
	bne _0800F32C
_0800F34C:
	add r0, r3, r7
	mov r1, #0
	strb r1, [r0]
	ldrb r0, [r5, #1]
	cmp r0, #0
	bne _0800F35A
	b _0800F236
_0800F35A:
	lsl r0, r6, #16
	ldr r1, _0800F394  @ =0xFFFF0000
	add r0, r0, r1
	lsr r6, r0, #16
	asr r0, r0, #16
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	beq _0800F386
	add r4, r1, #0
_0800F36E:
	add r0, r5, #0
	str r3, [sp]
	bl sub_0800EE2C
	lsl r0, r6, #16
	ldr r2, _0800F394  @ =0xFFFF0000
	add r0, r0, r2
	lsr r6, r0, #16
	asr r0, r0, #16
	ldr r3, [sp]
	cmp r0, r4
	bne _0800F36E
_0800F386:
	add r0, r5, #0
	add r1, r3, #0
	bl sub_0800EDB8
	b _0800F236
_0800F390:
	.4byte 0x0000FFFF
_0800F394:
	.4byte 0xFFFF0000
_0800F398:
	add r0, r5, #0
	bl sub_0800EE2C
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #192
	and r0, r0, r4
	lsl r0, r0, #6
	mov r2, #128
	lsl r2, r2, #3
	add r1, r2, #0
	orr r0, r0, r1
	mov r1, #63
	and r4, r4, r1
	orr r4, r4, r0
	b _0800F3F4
_0800F3B8:
	add r0, r5, #0
	bl sub_0800EE2C
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #192
	lsl r1, r1, #2
	add r0, r1, #0
	orr r4, r4, r0
	b _0800F3F4
_0800F3CC:
	add r0, r5, #0
	bl sub_0800EE2C
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #128
	lsl r2, r2, #1
	add r0, r2, #0
	orr r4, r4, r0
	mov r0, #192
	lsl r0, r0, #1
	cmp r4, r0
	bls _0800F3EA
	mov r0, #127
	and r4, r4, r0
_0800F3EA:
	mov r1, #128
	lsl r1, r1, #1
	add r0, r4, r1
	lsl r0, r0, #16
	lsr r4, r0, #16
_0800F3F4:
	cmp r6, #0
	beq _0800F3FA
	b _0800F236
_0800F3FA:
	add r0, r4, #0
_0800F3FC:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F22C

