	THUMB_FUNC_START sub_08024930
sub_08024930: @ 0x08024930
	add r3, r0, #0
	mov r0, #1
	strb r0, [r3, #20]
	add r1, r3, #0
	add r1, r1, #69
	mov r0, #255
	strb r0, [r1]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r1, r3, #0
	add r1, r1, #63
	mov r0, #63
	strb r0, [r1]
	ldr r0, _08024958  @ =gUnknown_0813C15C
	str r0, [r3, #72]
	bx lr
_08024958:
	.4byte gUnknown_0813C15C
	THUMB_FUNC_END sub_08024930

