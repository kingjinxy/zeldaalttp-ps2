	THUMB_FUNC_START sub_08048850
sub_08048850: @ 0x08048850
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	bl sub_080123E8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804893E
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl sub_08012410
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804893E
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #48
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #48
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	str r2, [r0, #84]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	str r2, [r0, #84]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #88]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	str r1, [r0, #88]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r1, [r7, #4]
	mov r0, #4
	bl sub_08012728
	ldr r1, [r7, #8]
	mov r0, #4
	bl sub_08012728
	ldr r0, [r7]
	ldr r1, [r7, #4]
	str r1, [r0, #120]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	str r1, [r0, #124]
	mov r0, #162
	bl sub_08003DFC
	mov r0, #1
	b _08048942
_0804893E:
	mov r0, #0
	b _08048942
_08048942:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08048850

	.byte 0x00
	.byte 0x00
