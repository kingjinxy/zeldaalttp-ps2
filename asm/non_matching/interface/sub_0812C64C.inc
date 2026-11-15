	THUMB_FUNC_START sub_0812C64C
sub_0812C64C: @ 0x0812C64C
	ldr r2, _0812C65C  @ =gUnknown_03001C88
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #3
	add r2, r2, #66
	add r1, r1, r2
	ldrb r0, [r1]
	bx lr
_0812C65C:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C64C

