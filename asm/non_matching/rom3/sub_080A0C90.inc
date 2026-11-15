	THUMB_FUNC_START sub_080A0C90
sub_080A0C90: @ 0x080A0C90
	ldr r0, _080A0CA4  @ =gRam
	ldr r2, _080A0CA8  @ =0x00000974
	add r1, r0, r2
	ldrh r1, [r1]
	lsl r1, r1, #4
	ldr r2, _080A0CAC  @ =0x000017E8
	add r0, r0, r2
	strh r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080A0CA4:
	.4byte gRam
_080A0CA8:
	.4byte 0x00000974
_080A0CAC:
	.4byte 0x000017E8
	THUMB_FUNC_END sub_080A0C90

