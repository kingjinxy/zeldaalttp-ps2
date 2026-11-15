	THUMB_FUNC_START sub_0802C4F8
sub_0802C4F8: @ 0x0802C4F8
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	ldr r2, _0802C524  @ =gUnknown_03006C80
	add r2, r2, #100
	add r2, r0, r2
	lsr r1, r1, #24
	ldrb r0, [r2]
	add r1, r1, r0
	strb r1, [r2]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #20
	bls _0802C518
	mov r0, #20
	strb r0, [r2]
_0802C518:
	ldrb r0, [r2]
	cmp r0, #5
	bhi _0802C522
	mov r0, #3
	strb r0, [r2]
_0802C522:
	bx lr
_0802C524:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802C4F8

