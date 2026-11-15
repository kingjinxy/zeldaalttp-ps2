	THUMB_FUNC_START sub_0812AF5C
sub_0812AF5C: @ 0x0812AF5C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0812AF68  @ =gUnknown_03000177
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_0812AF68:
	.4byte gUnknown_03000177
	THUMB_FUNC_END sub_0812AF5C

