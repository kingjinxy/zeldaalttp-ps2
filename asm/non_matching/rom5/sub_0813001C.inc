	THUMB_FUNC_START sub_0813001C
sub_0813001C: @ 0x0813001C
	ldr r0, _08130028  @ =gRam
	ldr r1, _0813002C  @ =0x00000A4C
	add r0, r0, r1
	mov r1, #14
	strh r1, [r0]
	bx lr
_08130028:
	.4byte gRam
_0813002C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0813001C

