	THUMB_FUNC_START sub_0804CE00
sub_0804CE00: @ 0x0804CE00
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strh r0, [r1]
	ldr r0, [r7]
	ldr r1, [r0, #96]
	str r1, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804CE30
	ldr r0, [r7, #8]
	add r1, r7, #4
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_0804CE30:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804CE00

