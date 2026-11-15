	THUMB_FUNC_START sub_080A0890
sub_080A0890: @ 0x080A0890
	ldr r1, _080A08A4  @ =gRam
	ldr r0, _080A08A8  @ =0x000017EA
	add r2, r1, r0
	ldr r0, _080A08AC  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A08A4:
	.4byte gRam
_080A08A8:
	.4byte 0x000017EA
_080A08AC:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0890

