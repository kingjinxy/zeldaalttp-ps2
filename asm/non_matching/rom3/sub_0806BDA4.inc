	THUMB_FUNC_START sub_0806BDA4
sub_0806BDA4: @ 0x0806BDA4
	ldr r0, _0806BDB0  @ =gRam
	ldr r1, _0806BDB4  @ =0x00000983
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	bx lr
_0806BDB0:
	.4byte gRam
_0806BDB4:
	.4byte 0x00000983
	THUMB_FUNC_END sub_0806BDA4

