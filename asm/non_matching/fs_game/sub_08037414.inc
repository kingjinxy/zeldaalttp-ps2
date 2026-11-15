	THUMB_FUNC_START sub_08037414
sub_08037414: @ 0x08037414
	push {r7,lr}
	mov r7, sp
	mov r0, #1
	b _0803741C
_0803741C:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08037414

	.byte 0x00
	.byte 0x00
