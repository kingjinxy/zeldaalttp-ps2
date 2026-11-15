	THUMB_FUNC_START sub_08023D14
sub_08023D14: @ 0x08023D14
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r8, r0
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _08023E02
	bl sub_08012410
	add r6, r0, #0
	cmp r6, #0
	beq _08023E02
	bl sub_08012410
	add r4, r0, #0
	cmp r4, #0
	beq _08023E02
	bl sub_08012410
	add r7, r0, #0
	cmp r7, #0
	beq _08023E02
	mov r0, #0
	mov r10, r0
	mov r2, #3
	strb r2, [r5, #8]
	strb r2, [r6, #8]
	strb r2, [r4, #8]
	strb r2, [r7, #8]
	mov r1, #44
	strb r1, [r5, #9]
	strb r1, [r6, #9]
	mov r0, #45
	strb r0, [r4, #9]
	strb r1, [r7, #9]
	mov r1, #1
	mov r9, r1
	mov r0, r9
	strb r0, [r5, #10]
	strb r0, [r6, #10]
	strb r2, [r7, #10]
	mov r0, #2
	strb r0, [r4, #11]
	strb r0, [r7, #11]
	mov r1, r8
	str r1, [r5, #84]
	str r1, [r6, #84]
	str r1, [r4, #84]
	str r1, [r7, #84]
	str r7, [r5, #88]
	str r7, [r6, #88]
	str r7, [r4, #88]
	add r0, r5, #0
	add r0, r0, #117
	mov r1, r10
	strb r1, [r0]
	add r0, r6, #0
	add r0, r0, #117
	mov r1, r9
	strb r1, [r0]
	add r1, r5, #0
	add r1, r1, #118
	mov r0, #128
	strb r0, [r1]
	add r1, r6, #0
	add r1, r1, #118
	mov r0, #64
	strb r0, [r1]
	str r4, [r5, #124]
	str r4, [r6, #124]
	mov r0, r8
	add r1, r5, #0
	bl sub_0803D3D0
	mov r0, r8
	add r1, r6, #0
	bl sub_0803D3D0
	mov r0, r8
	add r1, r4, #0
	bl sub_0803D3D0
	mov r0, r8
	add r1, r7, #0
	bl sub_0803D3D0
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	mov r0, #4
	add r1, r6, #0
	bl sub_08012728
	mov r0, #4
	add r1, r4, #0
	bl sub_08012728
	mov r0, #5
	add r1, r7, #0
	bl sub_08012728
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #32
	strb r0, [r1]
	mov r0, r8
	add r0, r0, #124
	mov r1, r9
	strb r1, [r0]
	add r0, r0, #1
	mov r1, r10
	strb r1, [r0]
	mov r0, #1
	b _08023E04
_08023E02:
	mov r0, #0
_08023E04:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08023D14

	.byte 0x00
	.byte 0x00
