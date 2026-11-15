	THUMB_FUNC_START sub_0805B838
sub_0805B838: @ 0x0805B838
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #10]
	add r1, r0, #0
	add r1, r1, #8
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	ldr r0, [r7]
	bl 0x08008DD8
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B838

	.byte 0x00
	.byte 0x00
