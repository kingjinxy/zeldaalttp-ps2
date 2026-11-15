	THUMB_FUNC_START sub_0805AD74
sub_0805AD74: @ 0x0805AD74
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	mov r0, #0
	str r0, [r7, #4]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #24]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0805ADE8
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	mov r0, #61
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805ADE8
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
_0805ADE8:
	ldr r1, [r7, #4]
	add r0, r1, #0
	b _0805ADEE
_0805ADEE:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0805AD74

	.byte 0x00
	.byte 0x00
