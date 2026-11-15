	THUMB_FUNC_START sub_0803072C
sub_0803072C: @ 0x0803072C
	ldr r1, _08030740  @ =gMainState
	mov r0, #6
	strb r0, [r1]
	ldr r0, _08030744  @ =gUnknown_03005050
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08030748  @ =gSubState
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08030740:
	.4byte gMainState
_08030744:
	.4byte gUnknown_03005050
_08030748:
	.4byte gSubState
	THUMB_FUNC_END sub_0803072C

	.ALIGN 2, 0
