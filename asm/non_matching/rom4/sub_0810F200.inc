	THUMB_FUNC_START sub_0810F200
sub_0810F200: @ 0x0810F200
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810F214  @ =gRam
	ldr r2, _0810F218  @ =0x00001052
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #6
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0810F214:
	.4byte gRam
_0810F218:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810F200

