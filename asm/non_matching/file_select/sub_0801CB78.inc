	THUMB_FUNC_START sub_0801CB78
sub_0801CB78: @ 0x0801CB78
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	bl sub_080123E8
	add r7, r0, #0
	cmp r7, #0
	beq _0801CC3C
	bl sub_08012410
	add r6, r0, #0
	cmp r6, #0
	beq _0801CC3C
	bl sub_08012410
	add r5, r0, #0
	cmp r5, #0
	beq _0801CC3C
	bl sub_08012410
	mov r8, r0
	cmp r0, #0
	beq _0801CC3C
	mov r0, #15
	strb r0, [r4, #11]
	add r2, r4, #0
	add r2, r2, #80
	ldrh r1, [r2]
	mov r3, #192
	lsl r3, r3, #8
	add r0, r3, #0
	mov r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0801CC48  @ =gUnknown_08139594
	str r0, [r4, #72]
	mov r1, #3
	strb r1, [r7, #8]
	strb r1, [r6, #8]
	strb r1, [r5, #8]
	mov r0, r8
	strb r1, [r0, #8]
	mov r0, #24
	strb r0, [r7, #9]
	strb r0, [r6, #9]
	strb r0, [r5, #9]
	mov r2, r8
	strb r0, [r2, #9]
	mov r0, #1
	strb r0, [r7, #10]
	strb r0, [r6, #10]
	strb r0, [r5, #10]
	strb r0, [r2, #10]
	strb r3, [r7, #11]
	strb r0, [r6, #11]
	mov r0, #2
	strb r0, [r5, #11]
	strb r1, [r2, #11]
	str r4, [r7, #84]
	str r4, [r6, #84]
	str r4, [r5, #84]
	str r4, [r2, #84]
	add r0, r4, #0
	add r1, r7, #0
	bl sub_08044018
	add r0, r4, #0
	add r1, r6, #0
	bl sub_08044018
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08044018
	add r0, r4, #0
	mov r1, r8
	bl sub_08044018
	mov r0, #4
	add r1, r7, #0
	bl sub_08012728
	mov r0, #4
	add r1, r6, #0
	bl sub_08012728
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	mov r0, #4
	mov r1, r8
	bl sub_08012728
	add r0, r4, #0
	bl sub_0801CE00
_0801CC3C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CC48:
	.4byte gUnknown_08139594
	THUMB_FUNC_END sub_0801CB78

