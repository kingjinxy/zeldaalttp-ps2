	THUMB_FUNC_START sub_0803A838
sub_0803A838: @ 0x0803A838
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	mov r0, #0
	b _0803A84E
_0803A84E:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803A838

	.byte 0x00
	.byte 0x00
