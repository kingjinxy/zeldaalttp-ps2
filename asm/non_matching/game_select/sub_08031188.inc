	THUMB_FUNC_START sub_08031188
sub_08031188: @ 0x08031188
	ldr r1, _08031198  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0803119C  @ =gSubState
	mov r0, #0
	strb r0, [r1]
	bx lr
_08031198:
	.4byte gUnknown_03005050
_0803119C:
	.4byte gSubState
	THUMB_FUNC_END sub_08031188

