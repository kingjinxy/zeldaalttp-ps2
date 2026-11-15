	THUMB_FUNC_START sub_0805D4B0
sub_0805D4B0: @ 0x0805D4B0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F48
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #122
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805D4B0

