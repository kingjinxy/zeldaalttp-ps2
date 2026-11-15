	THUMB_FUNC_START sub_0800C4E8
sub_0800C4E8: @ 0x0800C4E8
	ldr r1, _0800C4F8  @ =gUnknown_02030790
	ldrb r0, [r1]
	cmp r0, #0
	beq _0800C4F4
	mov r0, #1
	strb r0, [r1, #6]
_0800C4F4:
	bx lr
	.byte 0x00
	.byte 0x00
_0800C4F8:
	.4byte gUnknown_02030790
	THUMB_FUNC_END sub_0800C4E8

