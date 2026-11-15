	THUMB_FUNC_START sub_080A06D8
sub_080A06D8: @ 0x080A06D8
	ldr r0, _080A06EC  @ =gRam
	ldr r1, _080A06F0  @ =0x00001713
	add r2, r0, r1
	ldr r1, _080A06F4  @ =0x00000974
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
_080A06EC:
	.4byte gRam
_080A06F0:
	.4byte 0x00001713
_080A06F4:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A06D8

