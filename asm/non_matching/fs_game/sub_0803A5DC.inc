	THUMB_FUNC_START sub_0803A5DC
sub_0803A5DC: @ 0x0803A5DC
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0803A64C
	add r0, r7, #0
	add r0, r0, #10
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #68
	ldrb r1, [r2]
	ldr r2, _0803A648  @ =gUnknown_03006A30
	ldr r4, [r7]
	ldrb r3, [r4, #10]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r4, r2, r3
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #62
	ldrb r2, [r3]
	lsl r3, r2, #28
	lsr r2, r3, #30
	lsl r3, r2, #24
	lsr r2, r3, #24
	sub r1, r1, r2
	cmp r1, #1
	bge _0803A622
	mov r1, #1
_0803A622:
	strb r1, [r0]
	add r4, r7, #0
	add r4, r4, #8
	add r0, r7, #0
	add r0, r0, #10
	mov r1, #0
	ldrsb r1, [r0, r1]
	neg r2, r1
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0802C3F0
	add r1, r0, #0
	strh r1, [r4]
	ldr r0, [r7]
	mov r1, #195
	bl 0x08003E10
	b _0803A690
_0803A648:
	.4byte gUnknown_03006A30
_0803A64C:
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r3, [r2]
	add r1, r3, #0
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #68
	ldrb r4, [r3]
	add r2, r4, #0
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #8]
	cmp r1, #3
	bne _0803A690
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #106
	ldrb r0, [r1]
	cmp r0, #0
	beq _0803A688
	ldr r0, [r7]
	mov r1, #45
	bl 0x08003E10
	b _0803A690
_0803A688:
	ldr r0, [r7]
	mov r1, #4
	bl 0x08003E10
_0803A690:
	add r0, r7, #0
	add r0, r0, #8
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bgt _0803A6C2
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	mov r0, #0
	b _0803A6D2
_0803A6C2:
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0803A6D2
_0803A6D2:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803A5DC

	.byte 0x00
	.byte 0x00
