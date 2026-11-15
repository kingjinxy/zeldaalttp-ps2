	THUMB_FUNC_START sub_08018E50
sub_08018E50: @ 0x08018E50
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r7, r0, #0
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _08018F08
	bl sub_08012410
	add r6, r0, #0
	cmp r6, #0
	beq _08018F08
	bl sub_08012410
	add r4, r0, #0
	cmp r4, #0
	beq _08018F08
	mov r0, #0
	mov r9, r0
	mov r1, #3
	strb r1, [r5, #8]
	strb r1, [r6, #8]
	strb r1, [r4, #8]
	mov r0, #14
	strb r0, [r5, #9]
	strb r0, [r6, #9]
	strb r0, [r4, #9]
	mov r0, #1
	mov r8, r0
	mov r0, r8
	strb r0, [r5, #10]
	mov r0, #2
	strb r0, [r6, #10]
	strb r1, [r4, #10]
	add r0, r7, #0
	add r1, r5, #0
	bl sub_0803D3D0
	add r0, r7, #0
	add r1, r6, #0
	bl sub_08044018
	str r7, [r6, #120]
	str r5, [r6, #124]
	str r4, [r6, #88]
	str r6, [r7, #84]
	str r6, [r5, #84]
	str r6, [r4, #84]
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	mov r0, #4
	add r1, r6, #0
	bl sub_08012728
	mov r0, #4
	add r1, r4, #0
	bl sub_08012728
	ldrb r1, [r7, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r7, #28]
	add r0, r7, #0
	add r0, r0, #46
	mov r1, r9
	strb r1, [r0]
	mov r0, #128
	str r0, [r7, #12]
	add r1, r7, #0
	add r1, r1, #43
	mov r0, #24
	strb r0, [r1]
	ldr r0, _08018F14  @ =gUnknown_08139AB0
	ldr r0, [r0, #8]
	str r0, [r7, #72]
	mov r0, r8
	strb r0, [r7, #26]
	mov r1, r9
	str r1, [r7, #96]
	ldrb r0, [r7, #20]
	add r0, r0, #1
	strb r0, [r7, #20]
	add r0, r7, #0
	mov r1, #3
	bl 0x08003870
_08018F08:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08018F14:
	.4byte gUnknown_08139AB0
	THUMB_FUNC_END sub_08018E50

