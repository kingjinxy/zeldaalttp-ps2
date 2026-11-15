	THUMB_FUNC_START sub_0812C628
sub_0812C628: @ 0x0812C628
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r3, _0812C648  @ =gUnknown_03001C88
	lsl r2, r0, #3
	add r2, r2, r0
	lsl r2, r2, #3
	add r2, r2, r3
	add r2, r2, #60
	mov r0, #1
	and r1, r1, r0
	ldrb r3, [r2]
	sub r0, r0, #3
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
_0812C648:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C628

