	THUMB_FUNC_START sub_08025B84
sub_08025B84: @ 0x08025B84
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r7, r0, #0
	bl sub_080123E8
	add r6, r0, #0
	cmp r6, #0
	beq _08025C64
	bl sub_08012410
	add r5, r0, #0
	cmp r5, #0
	beq _08025C64
	bl sub_08012410
	add r4, r0, #0
	cmp r4, #0
	beq _08025C64
	mov r0, #4
	strb r0, [r6, #8]
	strb r0, [r5, #8]
	strb r0, [r4, #8]
	mov r0, #6
	strb r0, [r6, #9]
	strb r0, [r5, #9]
	strb r0, [r4, #9]
	mov r0, #1
	mov r9, r0
	mov r1, #1
	mov r8, r1
	mov r2, r8
	strb r2, [r6, #10]
	mov r0, #2
	strb r0, [r5, #10]
	mov r0, #3
	mov r10, r0
	mov r0, #3
	strb r0, [r4, #10]
	ldr r0, [r7, #84]
	str r0, [r6, #84]
	ldr r0, [r7, #84]
	str r0, [r5, #84]
	ldr r0, [r7, #84]
	str r0, [r4, #84]
	str r7, [r6, #88]
	str r7, [r5, #88]
	str r7, [r4, #88]
	str r6, [r5, #116]
	str r6, [r4, #116]
	add r0, r7, #0
	add r1, r6, #0
	bl sub_0803D3D0
	add r0, r7, #0
	add r1, r5, #0
	bl sub_0803D3D0
	add r0, r7, #0
	add r1, r4, #0
	bl sub_0803D3D0
	mov r0, #5
	add r1, r6, #0
	bl sub_08012728
	mov r0, #5
	add r1, r5, #0
	bl sub_08012728
	mov r0, #5
	add r1, r4, #0
	bl sub_08012728
	mov r1, r8
	strb r1, [r7, #20]
	ldrb r1, [r7, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, r9
	orr r0, r0, r1
	strb r0, [r7, #28]
	add r1, r7, #0
	add r1, r1, #46
	mov r0, #8
	strb r0, [r1]
	ldr r0, _08025C74  @ =gUnknown_0813C65C
	str r0, [r7, #72]
	strh r2, [r7, #58]
	add r2, r7, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r7, #0
	add r1, r1, #94
	ldrb r0, [r1]
	mov r2, r10
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r7, #0
	bl 0x08008DD8
	add r0, r7, #0
	mov r1, #0
	bl 0x08003870
_08025C64:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08025C74:
	.4byte gUnknown_0813C65C
	THUMB_FUNC_END sub_08025B84

