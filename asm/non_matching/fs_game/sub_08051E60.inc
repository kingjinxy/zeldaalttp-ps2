	THUMB_FUNC_START sub_08051E60
sub_08051E60: @ 0x08051E60
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r3, [r2, #54]
	add r1, r3, #0
	add r1, r1, #64
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl sub_08051C8C
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08051E60

	.byte 0x00
	.byte 0x00
