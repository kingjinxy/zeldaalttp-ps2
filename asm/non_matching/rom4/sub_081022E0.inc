	THUMB_FUNC_START sub_081022E0
sub_081022E0: @ 0x081022E0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08102308  @ =gRam
	ldr r1, _0810230C  @ =0x00000F52
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _08102310  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #128
	strb r2, [r1]
	ldr r1, _08102314  @ =0x00000F92
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #255
	strb r1, [r0]
	bx lr
_08102308:
	.4byte gRam
_0810230C:
	.4byte 0x00000F52
_08102310:
	.4byte 0x00000FC2
_08102314:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_081022E0

