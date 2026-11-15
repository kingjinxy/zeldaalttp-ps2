	THUMB_FUNC_START sub_0802C3E0
sub_0802C3E0: @ 0x0802C3E0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0802C3EC  @ =gUnknown_0813D72C
	add r0, r0, r1
	ldrb r0, [r0]
	bx lr
_0802C3EC:
	.4byte gUnknown_0813D72C
	THUMB_FUNC_END sub_0802C3E0

