	THUMB_FUNC_START sub_080A08B0
sub_080A08B0: @ 0x080A08B0
	ldr r1, _080A08C4  @ =gRam
	ldr r0, _080A08C8  @ =0x00001784
	add r2, r1, r0
	ldr r0, _080A08CC  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A08C4:
	.4byte gRam
_080A08C8:
	.4byte 0x00001784
_080A08CC:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A08B0

