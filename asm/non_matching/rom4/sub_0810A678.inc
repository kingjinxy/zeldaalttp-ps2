	THUMB_FUNC_START sub_0810A678
sub_0810A678: @ 0x0810A678
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810A694  @ =gRam
	ldr r2, _0810A698  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r1, _0810A69C  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #128
	strb r1, [r0]
	bx lr
_0810A694:
	.4byte gRam
_0810A698:
	.4byte 0x00000F52
_0810A69C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810A678

