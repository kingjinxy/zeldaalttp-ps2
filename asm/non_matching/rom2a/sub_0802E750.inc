	THUMB_FUNC_START sub_0802E750
sub_0802E750: @ 0x0802E750
	lsl r0, r0, #24
	ldr r1, _0802E760  @ =gUnknown_02016D60
	ldr r1, [r1, #8]
	lsr r0, r0, #22
	add r0, r0, r1
	ldrb r0, [r0, #1]
	bx lr
	.byte 0x00
	.byte 0x00
_0802E760:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0802E750

