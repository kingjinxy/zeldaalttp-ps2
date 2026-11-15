	THUMB_FUNC_START sub_080A09C0
sub_080A09C0: @ 0x080A09C0
	ldr r0, _080A09D8  @ =gRam
	ldr r1, _080A09DC  @ =0x00001888
	add r2, r0, r1
	ldr r1, _080A09E0  @ =0x00000974
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #4
	ldrh r1, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080A09D8:
	.4byte gRam
_080A09DC:
	.4byte 0x00001888
_080A09E0:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A09C0

