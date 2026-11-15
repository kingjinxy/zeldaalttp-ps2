	THUMB_FUNC_START sub_0803A788
sub_0803A788: @ 0x0803A788
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	mov r0, #15
	mov r1, #16
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0803A830
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, [r7, #4]
	mov r4, #50
	ldrsh r3, [r2, r4]
	add r2, r1, r3
	asr r1, r2, #1
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, [r7, #4]
	mov r4, #54
	ldrsh r3, [r2, r4]
	add r2, r1, r3
	asr r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #58
	ldrsh r1, [r2, r3]
	ldr r2, [r7, #4]
	mov r4, #58
	ldrsh r3, [r2, r4]
	add r2, r1, r3
	asr r1, r2, #1
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7, #8]
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
	ldr r1, [r7, #8]
	add r0, r1, #0
	bl 0x08008DD8
_0803A830:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803A788

