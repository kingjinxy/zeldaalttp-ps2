	THUMB_FUNC_START sub_08031FC0
sub_08031FC0: @ 0x08031FC0
	push {lr}
	mov r0, #11
	bl set_main_state
	ldr r1, _08031FD4  @ =gUnknown_03005050
	mov r0, #2
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031FD4:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08031FC0

