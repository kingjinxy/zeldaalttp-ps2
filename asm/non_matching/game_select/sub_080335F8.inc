	THUMB_FUNC_START sub_080335F8
sub_080335F8: @ 0x080335F8
	ldr r2, _08033610  @ =gUnknown_02016D60
	ldrh r0, [r2, #4]
	sub r0, r0, #1
	strh r0, [r2, #4]
	lsl r0, r0, #16
	ldr r1, _08033614  @ =0xFFFF0000
	cmp r0, r1
	bne _0803360C
	mov r0, #3
	strb r0, [r2]
_0803360C:
	bx lr
	.byte 0x00
	.byte 0x00
_08033610:
	.4byte gUnknown_02016D60
_08033614:
	.4byte 0xFFFF0000
	THUMB_FUNC_END sub_080335F8

