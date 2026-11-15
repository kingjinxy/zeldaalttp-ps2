	THUMB_FUNC_START sub_08024D7C
sub_08024D7C: @ 0x08024D7C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	bl sub_080123E8
	mov r8, r0
	cmp r0, #0
	bne _08024D92
	b _08024E92
_08024D92:
	bl sub_08012410
	add r6, r0, #0
	cmp r6, #0
	beq _08024E92
	bl sub_08012410
	add r5, r0, #0
	cmp r5, #0
	beq _08024E92
	bl sub_08012410
	add r7, r0, #0
	cmp r7, #0
	beq _08024E92
	mov r3, #3
	mov r0, #3
	mov r1, r8
	strb r0, [r1, #8]
	strb r0, [r6, #8]
	strb r0, [r5, #8]
	strb r0, [r7, #8]
	mov r0, #45
	mov r9, r0
	mov r0, r9
	strb r0, [r1, #9]
	mov r0, #44
	strb r0, [r6, #9]
	strb r0, [r5, #9]
	strb r0, [r7, #9]
	mov r2, #1
	mov r0, #1
	strb r0, [r1, #10]
	mov r1, #2
	mov r0, #2
	strb r0, [r6, #10]
	strb r0, [r5, #10]
	strb r0, [r7, #10]
	ldrb r0, [r4, #11]
	lsl r0, r0, #4
	orr r0, r0, r3
	strb r0, [r6, #11]
	ldrb r0, [r4, #11]
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r5, #11]
	ldrb r0, [r4, #11]
	lsl r0, r0, #4
	orr r0, r0, r2
	strb r0, [r7, #11]
	mov r1, r8
	str r4, [r1, #84]
	str r4, [r6, #84]
	str r4, [r5, #84]
	str r4, [r7, #84]
	str r4, [r6, #88]
	str r6, [r5, #88]
	str r5, [r7, #88]
	add r0, r4, #0
	bl sub_0803D3D0
	add r0, r4, #0
	add r1, r6, #0
	bl sub_0803D3D0
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D3D0
	add r0, r4, #0
	add r1, r7, #0
	bl sub_0803D3D0
	mov r0, #4
	mov r1, r8
	bl sub_08012728
	mov r0, #4
	add r1, r6, #0
	bl sub_08012728
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	mov r0, #4
	add r1, r7, #0
	bl sub_08012728
	mov r0, r8
	str r0, [r4, #112]
	ldrb r0, [r4, #11]
	cmp r0, #2
	bne _08024E5C
	mov r0, #30
	strb r0, [r6, #23]
	mov r0, #60
	strb r0, [r5, #23]
	mov r0, #90
	strb r0, [r7, #23]
	b _08024E68
_08024E5C:
	mov r0, #15
	strb r0, [r6, #23]
	mov r0, #30
	strb r0, [r5, #23]
	mov r1, r9
	strb r1, [r7, #23]
_08024E68:
	ldr r1, [r4, #88]
	ldr r0, [r1, #112]
	cmp r0, #0
	bne _08024E78
	str r7, [r1, #112]
	ldr r0, [r4, #88]
	add r0, r0, #112
	b _08024E8C
_08024E78:
	ldr r0, [r1, #116]
	cmp r0, #0
	bne _08024E86
	str r7, [r1, #116]
	ldr r0, [r4, #88]
	add r0, r0, #116
	b _08024E8C
_08024E86:
	str r7, [r1, #120]
	ldr r0, [r4, #88]
	add r0, r0, #120
_08024E8C:
	str r0, [r4, #116]
	mov r0, #1
	b _08024E94
_08024E92:
	mov r0, #0
_08024E94:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08024D7C

