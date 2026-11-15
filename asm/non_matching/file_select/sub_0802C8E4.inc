	THUMB_FUNC_START sub_0802C8E4
sub_0802C8E4: @ 0x0802C8E4
	ldr r0, _0802C8F4  @ =gUnknown_03000420
	mov r2, #0
	strb r2, [r0]
	mov r1, #1
	strb r1, [r0, #2]
	strb r2, [r0, #1]
	bx lr
	.byte 0x00
	.byte 0x00
_0802C8F4:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C8E4

