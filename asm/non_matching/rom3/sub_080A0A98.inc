	THUMB_FUNC_START sub_080A0A98
sub_080A0A98: @ 0x080A0A98
	ldr r1, _080A0AAC  @ =gRam
	ldr r0, _080A0AB0  @ =0x000017D2
	add r2, r1, r0
	ldr r0, _080A0AB4  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0AAC:
	.4byte gRam
_080A0AB0:
	.4byte 0x000017D2
_080A0AB4:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0A98

