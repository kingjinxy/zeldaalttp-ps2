	THUMB_FUNC_START sub_08102C28
sub_08102C28: @ 0x08102C28
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08102C44  @ =gRam
	ldr r3, _08102C48  @ =0x00000F82
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #1
	strb r3, [r1]
	ldr r1, _08102C4C  @ =0x00000F92
	add r2, r2, r1
	add r0, r0, r2
	strb r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08102C44:
	.4byte gRam
_08102C48:
	.4byte 0x00000F82
_08102C4C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08102C28

