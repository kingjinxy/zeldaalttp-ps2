	THUMB_FUNC_START sub_0804F6EC
sub_0804F6EC: @ 0x0804F6EC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	ldrh r1, [r1, #54]
	ldrh r2, [r2, #2]
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804F6EC

	.byte 0x00
	.byte 0x00
