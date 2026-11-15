	THUMB_FUNC_START sub_0801D8D4
sub_0801D8D4: @ 0x0801D8D4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r6, r0, #0
	mov r0, #60
	add r0, r0, r6
	mov r9, r0
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	mov r1, r9
	strb r0, [r1]
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _0801D9D6
	bl sub_08012410
	add r7, r0, #0
	cmp r7, #0
	beq _0801D9D6
	bl sub_08012410
	add r5, r0, #0
	cmp r5, #0
	beq _0801D9D6
	mov r1, #3
	mov r0, #3
	strh r0, [r6, #52]
	strb r1, [r4, #8]
	strb r1, [r7, #8]
	strb r1, [r5, #8]
	mov r0, #27
	strb r0, [r4, #9]
	strb r0, [r7, #9]
	strb r0, [r5, #9]
	mov r0, #1
	mov r10, r0
	mov r0, #1
	mov r8, r0
	mov r0, r8
	strb r0, [r4, #10]
	mov r0, #2
	strb r0, [r7, #10]
	strb r1, [r5, #10]
	str r6, [r4, #84]
	str r6, [r7, #84]
	str r6, [r5, #84]
	str r7, [r4, #88]
	str r5, [r7, #88]
	mov r0, #0
	str r0, [r5, #88]
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #0
	mov r3, #2
	bl sub_0803D4A4
	add r0, r6, #0
	add r1, r7, #0
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	add r0, r6, #0
	add r1, r5, #0
	mov r2, #0
	mov r3, #0
	bl sub_0803D4A4
	mov r0, #4
	add r1, r4, #0
	bl sub_08012728
	mov r0, #4
	add r1, r7, #0
	bl sub_08012728
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	mov r1, r8
	strb r1, [r6, #20]
	strb r1, [r6, #23]
	strb r1, [r6, #24]
	str r4, [r6, #88]
	str r7, [r6, #116]
	str r5, [r6, #120]
	ldr r0, [r6, #52]
	add r0, r0, #3
	str r0, [r6, #52]
	ldrb r1, [r6, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, r10
	orr r0, r0, r1
	strb r0, [r6, #28]
	mov r1, r9
	ldrb r0, [r1]
	mov r1, #128
	orr r0, r0, r1
	mov r1, r9
	strb r0, [r1]
	ldr r0, _0801D9E4  @ =gUnknown_0813AAB4
	str r0, [r6, #72]
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r0, [r1]
	add r0, r0, #4
	mov r1, #28
	and r0, r0, r1
	asr r0, r0, #2
	add r1, r6, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r6, #0
	bl 0x08003870
_0801D9D6:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0801D9E4:
	.4byte gUnknown_0813AAB4
	THUMB_FUNC_END sub_0801D8D4

