	THUMB_FUNC_START sub_08049B30
sub_08049B30: @ 0x08049B30
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	ldr r1, [r7]
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08049C3A
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _08049C3A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08049B9C
	mov r0, #11
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08049B9A
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_08049B9A:
	b _08049C3A
_08049B9C:
	mov r0, #17
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08049C3A
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	str r2, [r0, #84]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	sub r1, r1, #26
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
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
	bl sub_08044594
	str r0, [r7, #8]
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803CECC
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	mov r0, #181
	bl sub_08003DFC
_08049C3A:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08049C56
	ldr r0, [r7]
	bl DeleteThisEntity
_08049C56:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08049B30

	.byte 0x00
	.byte 0x00
