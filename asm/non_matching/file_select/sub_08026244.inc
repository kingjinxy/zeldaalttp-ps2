	THUMB_FUNC_START sub_08026244
sub_08026244: @ 0x08026244
	push {r4,r5,lr}
	mov r12, r0
	ldr r3, [r0, #84]
	mov r4, r12
	add r4, r4, #120
	ldrh r0, [r3, #50]
	ldrh r1, [r4]
	sub r0, r0, r1
	mov r1, r12
	ldrh r1, [r1, #50]
	add r0, r0, r1
	mov r2, r12
	strh r0, [r2, #50]
	mov r5, r12
	add r5, r5, #122
	ldrh r1, [r3, #54]
	ldrh r2, [r5]
	sub r1, r1, r2
	add r0, r0, r1
	mov r1, r12
	strh r0, [r1, #50]
	ldrh r0, [r3, #50]
	strh r0, [r4]
	ldr r0, [r1, #84]
	ldrh r0, [r0, #54]
	strh r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026244

	.byte 0x00
	.byte 0x00
