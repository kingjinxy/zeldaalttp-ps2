	THUMB_FUNC_START sub_08125860
sub_08125860: @ 0x08125860
	push {lr}
	ldr r0, _08125870  @ =gUnknown_03003D38
	mov r1, #176
	bl sub_08069358
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125870:
	.4byte gUnknown_03003D38
	THUMB_FUNC_END sub_08125860

