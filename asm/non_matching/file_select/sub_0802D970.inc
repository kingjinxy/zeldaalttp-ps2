	THUMB_FUNC_START sub_0802D970
sub_0802D970: @ 0x0802D970
	ldr r1, _0802D978  @ =gUnknown_0201EF18
	mov r0, #1
	strb r0, [r1, #5]
	bx lr
_0802D978:
	.4byte gUnknown_0201EF18
	THUMB_FUNC_END sub_0802D970

