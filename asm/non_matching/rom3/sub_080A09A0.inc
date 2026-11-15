	THUMB_FUNC_START sub_080A09A0
sub_080A09A0: @ 0x080A09A0
	ldr r1, _080A09B4  @ =gRam
	ldr r0, _080A09B8  @ =0x00001888
	add r2, r1, r0
	ldr r0, _080A09BC  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A09B4:
	.4byte gRam
_080A09B8:
	.4byte 0x00001888
_080A09BC:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A09A0

