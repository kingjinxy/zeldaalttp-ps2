	THUMB_FUNC_START sub_0803A858
sub_0803A858: @ 0x0803A858
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803A6DC
	mov r0, #1
	b _0803A876
_0803A876:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803A858

	.byte 0x00
	.byte 0x00
