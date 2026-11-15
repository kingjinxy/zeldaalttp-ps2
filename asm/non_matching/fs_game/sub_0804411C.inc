	THUMB_FUNC_START sub_0804411C
sub_0804411C: @ 0x0804411C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r2, #0
	add r2, r7, #4
	strb r1, [r2]
	add r1, r7, #5
	strb r0, [r1]
	bl sub_080123E8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804418A
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #8]
	add r1, r7, #4
	ldrb r2, [r0, #9]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #9]
	ldr r0, [r7, #8]
	add r1, r7, #5
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r1, [r7, #8]
	mov r0, #5
	bl sub_08012728
_0804418A:
	ldr r1, [r7, #8]
	add r0, r1, #0
	b _08044190
_08044190:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804411C

