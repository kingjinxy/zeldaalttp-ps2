	THUMB_FUNC_START sub_08011990
sub_08011990: @ 0x08011990
	mov r1, #2
	strb r1, [r0, #20]
	ldr r1, _0801199C  @ =gUnknown_02016D60
	mov r0, #195
	strb r0, [r1, #28]
	bx lr
_0801199C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011990

