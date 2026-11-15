	THUMB_FUNC_START sub_0810B42C
sub_0810B42C: @ 0x0810B42C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810B440  @ =gRam
	ldr r2, _0810B444  @ =0x00000ED2
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #5
	strb r1, [r0]
	bx lr
_0810B440:
	.4byte gRam
_0810B444:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_0810B42C

