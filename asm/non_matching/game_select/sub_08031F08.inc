	THUMB_FUNC_START sub_08031F08
sub_08031F08: @ 0x08031F08
	ldr r1, _08031F18  @ =gUnknown_03005050
	mov r0, #3
	strb r0, [r1]
	ldr r1, _08031F1C  @ =gSubState
	mov r0, #0
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08031F18:
	.4byte gUnknown_03005050
_08031F1C:
	.4byte gSubState
	THUMB_FUNC_END sub_08031F08

