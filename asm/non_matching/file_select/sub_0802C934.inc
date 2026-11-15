	THUMB_FUNC_START sub_0802C934
sub_0802C934: @ 0x0802C934
	ldr r1, _0802C93C  @ =gUnknown_03000420
	mov r0, #1
	strb r0, [r1, #2]
	bx lr
_0802C93C:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C934

