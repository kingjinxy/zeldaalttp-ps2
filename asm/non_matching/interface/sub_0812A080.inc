	THUMB_FUNC_START sub_0812A080
sub_0812A080: @ 0x0812A080
	ldr r2, _0812A08C  @ =gUnknown_030000C0
	mov r1, #1
	strb r1, [r2]
	ldr r1, _0812A090  @ =gUnknown_030000BE
	strh r0, [r1]
	bx lr
_0812A08C:
	.4byte gUnknown_030000C0
_0812A090:
	.4byte gUnknown_030000BE
	THUMB_FUNC_END sub_0812A080

