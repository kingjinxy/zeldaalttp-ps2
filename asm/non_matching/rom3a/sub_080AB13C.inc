	THUMB_FUNC_START sub_080AB13C
sub_080AB13C: @ 0x080AB13C
	ldr r0, _080AB158  @ =gUnknown_0200B270
	mov r1, #127
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	sub r0, r0, #62
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	sub r0, r0, #62
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	bx lr
_080AB158:
	.4byte gUnknown_0200B270
	THUMB_FUNC_END sub_080AB13C

