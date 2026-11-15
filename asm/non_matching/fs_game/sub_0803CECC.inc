	THUMB_FUNC_START sub_0803CECC
sub_0803CECC: @ 0x0803CECC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl 0x08003F4C
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0803CEE6
_0803CEE6:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CECC

	.byte 0x00
	.byte 0x00
