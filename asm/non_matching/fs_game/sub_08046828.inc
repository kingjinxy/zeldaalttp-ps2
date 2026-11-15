	THUMB_FUNC_START sub_08046828
sub_08046828: @ 0x08046828
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _080468BC
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldrh r0, [r1]
	cmp r0, #0
	bne _08046880
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #34
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	bl sub_080475D0
	b _080468BA
_08046880:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #110
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #110
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_080468BA:
	b _0804690E
_080468BC:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #120
	bne _0804690E
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldrh r0, [r1]
	cmp r0, #0
	bne _080468FA
	mov r0, #10
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080468F8
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
	ldr r1, [r7]
	str r1, [r0, #84]
_080468F8:
	b _0804690E
_080468FA:
	mov r0, #10
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804690E
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
_0804690E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046828

	.byte 0x00
	.byte 0x00
