	THUMB_FUNC_START sub_080D9ED8
sub_080D9ED8: @ 0x080D9ED8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D9EEC  @ =gRam
	ldr r2, _080D9EF0  @ =0x00000ED2
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #7
	strb r1, [r0]
	bx lr
_080D9EEC:
	.4byte gRam
_080D9EF0:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080D9ED8

