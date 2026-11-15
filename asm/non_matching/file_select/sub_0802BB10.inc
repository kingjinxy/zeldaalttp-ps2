	THUMB_FUNC_START sub_0802BB10
sub_0802BB10: @ 0x0802BB10
	mov r1, #0
	strh r1, [r0]
	strh r1, [r0, #2]
	ldr r1, _0802BB20  @ =gUnknown_0202A770
	mov r0, #1
	strh r0, [r1, #8]
	bx lr
	.byte 0x00
	.byte 0x00
_0802BB20:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802BB10

