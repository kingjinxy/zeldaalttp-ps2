	THUMB_FUNC_START sub_08029840
sub_08029840: @ 0x08029840
	add r2, r0, #0
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	add r1, r2, #0
	add r1, r1, #60
	mov r0, #137
	strb r0, [r1]
	add r1, r1, #4
	mov r0, #56
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #69
	strb r0, [r1]
	ldr r0, _08029868  @ =gUnknown_0813D270
	str r0, [r2, #72]
	add r1, r1, #29
	mov r0, #170
	strh r0, [r1]
	bx lr
_08029868:
	.4byte gUnknown_0813D270
	THUMB_FUNC_END sub_08029840

