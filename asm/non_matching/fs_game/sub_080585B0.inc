	THUMB_FUNC_START sub_080585B0
sub_080585B0: @ 0x080585B0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #4
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	mov r0, #32
	cmn r1, r0
	bge _080585E2
	ldr r0, [r7]
	bl DeleteThisEntity
_080585E2:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080585B0

	.byte 0x00
	.byte 0x00
