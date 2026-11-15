	THUMB_FUNC_START sub_0803D4A4
sub_0803D4A4: @ 0x0803D4A4
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	str r2, [r7, #8]
	str r3, [r7, #12]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	ldr r1, [r7, #8]
	add r2, r2, r1
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	ldr r1, [r7, #12]
	add r2, r2, r1
	str r2, [r0, #52]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #82
	add r2, r0, #0
	add r0, r0, #82
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl 0x08008DD8
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803D4A4

	.byte 0x00
	.byte 0x00
