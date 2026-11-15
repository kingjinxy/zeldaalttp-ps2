	THUMB_FUNC_START sub_0802C528
sub_0802C528: @ 0x0802C528
	add r0, r0, r1
	cmp r0, #0
	bge _0802C532
	mov r0, #0
	b _0802C538
_0802C532:
	cmp r0, r2
	ble _0802C538
	add r0, r2, #0
_0802C538:
	bx lr
	THUMB_FUNC_END sub_0802C528

	.byte 0x00
	.byte 0x00
