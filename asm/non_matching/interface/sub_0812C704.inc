	THUMB_FUNC_START sub_0812C704
sub_0812C704: @ 0x0812C704
	ldr r0, _0812C710  @ =gUnknown_030003C4
	ldr r1, _0812C714  @ =gUnknown_030003C0
	ldr r1, [r1]
	str r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0812C710:
	.4byte gUnknown_030003C4
_0812C714:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C704

