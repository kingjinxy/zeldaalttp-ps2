	THUMB_FUNC_START sub_0804D274
sub_0804D274: @ 0x0804D274
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	bl sub_0800D644
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #2
	str r1, [r0, #16]
	mov r0, #0
	b _0804D28E
_0804D28E:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D274

	.byte 0x00
	.byte 0x00
