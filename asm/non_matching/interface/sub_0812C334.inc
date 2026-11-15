	THUMB_FUNC_START sub_0812C334
sub_0812C334: @ 0x0812C334
	add r3, r0, #0
	add r0, r0, #64
	mov r2, #0
	strh r1, [r0]
	add r0, r0, #2
	strh r2, [r0]
	ldr r0, _0812C364  @ =gUnknown_030003CC
	ldr r2, [r0]
	ldr r0, [r3, #8]
	ldr r0, [r0]
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
	ldr r1, [r2, #16]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r1, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r1, r0
	str r1, [r3, #4]
	bx lr
_0812C364:
	.4byte gUnknown_030003CC
	THUMB_FUNC_END sub_0812C334

