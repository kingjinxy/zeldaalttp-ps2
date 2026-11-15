	THUMB_FUNC_START sub_080A0AB8
sub_080A0AB8: @ 0x080A0AB8
	ldr r1, _080A0ACC  @ =gRam
	ldr r0, _080A0AD0  @ =0x000017E8
	add r2, r1, r0
	ldr r0, _080A0AD4  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0ACC:
	.4byte gRam
_080A0AD0:
	.4byte 0x000017E8
_080A0AD4:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0AB8

