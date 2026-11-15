	THUMB_FUNC_START sub_0800E69C
sub_0800E69C: @ 0x0800E69C
	ldr r2, _0800E6A8  @ =gUnknown_02000010
	ldr r1, _0800E6AC  @ =gTextbox
	strb r0, [r1]
	strb r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_0800E6A8:
	.4byte gUnknown_02000010
_0800E6AC:
	.4byte gTextbox
	THUMB_FUNC_END sub_0800E69C

