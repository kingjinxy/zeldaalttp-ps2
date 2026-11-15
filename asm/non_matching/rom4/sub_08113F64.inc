	THUMB_FUNC_START sub_08113F64
sub_08113F64: @ 0x08113F64
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08113F78  @ =gRam
	ldr r2, _08113F7C  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08113F78:
	.4byte gRam
_08113F7C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08113F64

