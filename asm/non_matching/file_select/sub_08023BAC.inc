	THUMB_FUNC_START sub_08023BAC
sub_08023BAC: @ 0x08023BAC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r8, r0
	bl sub_080123E8
	add r6, r0, #0
	cmp r6, #0
	bne _08023BC4
	b _08023D04
_08023BC4:
	bl sub_08012410
	add r7, r0, #0
	cmp r7, #0
	bne _08023BD0
	b _08023D04
_08023BD0:
	bl sub_08012410
	mov r10, r0
	cmp r0, #0
	bne _08023BDC
	b _08023D04
_08023BDC:
	bl sub_08012410
	add r4, r0, #0
	cmp r4, #0
	bne _08023BE8
	b _08023D04
_08023BE8:
	bl sub_08012410
	add r5, r0, #0
	cmp r5, #0
	bne _08023BF4
	b _08023D04
_08023BF4:
	bl sub_08012410
	mov r9, r0
	cmp r0, #0
	bne _08023C00
	b _08023D04
_08023C00:
	mov r2, #3
	strb r2, [r6, #8]
	strb r2, [r7, #8]
	mov r0, r10
	strb r2, [r0, #8]
	strb r2, [r4, #8]
	strb r2, [r5, #8]
	mov r1, r9
	strb r2, [r1, #8]
	mov r1, #44
	strb r1, [r6, #9]
	strb r1, [r7, #9]
	mov r0, #45
	mov r3, r10
	strb r0, [r3, #9]
	strb r0, [r4, #9]
	strb r1, [r5, #9]
	mov r0, r9
	strb r1, [r0, #9]
	mov r1, #1
	strb r1, [r6, #10]
	strb r1, [r7, #10]
	strb r2, [r5, #10]
	strb r2, [r0, #10]
	strb r1, [r3, #11]
	strb r1, [r4, #11]
	strb r1, [r5, #11]
	strb r1, [r0, #11]
	mov r2, r8
	str r2, [r6, #84]
	str r2, [r7, #84]
	str r2, [r3, #84]
	str r2, [r4, #84]
	str r2, [r5, #84]
	str r2, [r0, #84]
	str r5, [r6, #88]
	str r0, [r7, #88]
	str r5, [r3, #88]
	str r0, [r4, #88]
	add r0, r6, #0
	add r0, r0, #117
	mov r3, #0
	strb r3, [r0]
	add r0, r7, #0
	add r0, r0, #117
	strb r1, [r0]
	add r2, r6, #0
	add r2, r2, #118
	mov r0, #128
	strb r0, [r2]
	add r2, r7, #0
	add r2, r2, #118
	strb r0, [r2]
	mov r0, r10
	str r0, [r6, #124]
	str r4, [r7, #124]
	add r0, r4, #0
	add r0, r0, #126
	strb r1, [r0]
	mov r0, r8
	add r1, r6, #0
	bl sub_0803D3D0
	mov r0, r8
	add r1, r7, #0
	bl sub_0803D3D0
	mov r0, r8
	mov r1, r10
	mov r2, #0
	ldr r3, _08023D00  @ =0xFFE80000
	bl sub_0803D4A4
	mov r0, r8
	add r1, r4, #0
	mov r2, #0
	mov r3, #192
	lsl r3, r3, #13
	bl sub_0803D4A4
	mov r0, r8
	add r1, r5, #0
	mov r2, #0
	ldr r3, _08023D00  @ =0xFFE80000
	bl sub_0803D4A4
	mov r0, r8
	mov r1, r9
	mov r2, #0
	mov r3, #192
	lsl r3, r3, #13
	bl sub_0803D4A4
	mov r0, #4
	add r1, r6, #0
	bl sub_08012728
	mov r0, #4
	add r1, r7, #0
	bl sub_08012728
	mov r0, #4
	mov r1, r10
	bl sub_08012728
	mov r0, #4
	add r1, r4, #0
	bl sub_08012728
	mov r0, #5
	add r1, r5, #0
	bl sub_08012728
	mov r0, #5
	mov r1, r9
	bl sub_08012728
	mov r1, r8
	add r1, r1, #124
	mov r0, #2
	strb r0, [r1]
	mov r0, r8
	add r0, r0, #125
	mov r1, #0
	strb r1, [r0]
	mov r0, #1
	b _08023D06
	.byte 0x00
	.byte 0x00
_08023D00:
	.4byte 0xFFE80000
_08023D04:
	mov r0, #0
_08023D06:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08023BAC

