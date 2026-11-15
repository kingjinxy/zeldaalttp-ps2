	THUMB_FUNC_START sub_0804D1A0
sub_0804D1A0: @ 0x0804D1A0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #16]
	add r0, r1, #2
	ldrh r1, [r0]
	lsl r0, r1, #16
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	ldrh r2, [r1]
	orr r0, r0, r2
	str r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0804CE64
	mov r0, #0
	b _0804D1CA
_0804D1CA:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D1A0

	.byte 0x00
	.byte 0x00
