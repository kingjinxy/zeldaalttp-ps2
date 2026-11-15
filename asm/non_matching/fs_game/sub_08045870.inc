	THUMB_FUNC_START sub_08045870
sub_08045870: @ 0x08045870
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #0
	beq _080458F2
	mov r0, #11
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080458F2
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #4]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	str r1, [r0, #88]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_080458F2:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08045870

	.byte 0x00
	.byte 0x00
