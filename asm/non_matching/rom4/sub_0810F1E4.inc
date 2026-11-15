	THUMB_FUNC_START sub_0810F1E4
sub_0810F1E4: @ 0x0810F1E4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810F1F8  @ =gRam
	ldr r2, _0810F1FC  @ =0x00001052
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #5
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0810F1F8:
	.4byte gRam
_0810F1FC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810F1E4

