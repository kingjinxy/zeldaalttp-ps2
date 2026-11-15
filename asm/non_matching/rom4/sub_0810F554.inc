	THUMB_FUNC_START sub_0810F554
sub_0810F554: @ 0x0810F554
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810F568  @ =gRam
	ldr r2, _0810F56C  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0810F568:
	.4byte gRam
_0810F56C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F554

