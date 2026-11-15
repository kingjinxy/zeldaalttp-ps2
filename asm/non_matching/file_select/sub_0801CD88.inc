	THUMB_FUNC_START sub_0801CD88
sub_0801CD88: @ 0x0801CD88
	ldr r2, [r0, #84]
	ldr r1, _0801CD9C  @ =gUnknown_08137B10
	ldrb r0, [r0, #11]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrb r1, [r2, #11]
	eor r0, r0, r1
	strb r0, [r2, #11]
	bx lr
_0801CD9C:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0801CD88

