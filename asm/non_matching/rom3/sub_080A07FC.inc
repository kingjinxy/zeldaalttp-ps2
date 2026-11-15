	THUMB_FUNC_START sub_080A07FC
sub_080A07FC: @ 0x080A07FC
	ldr r1, _080A0810  @ =gRam
	ldr r0, _080A0814  @ =0x000017D2
	add r2, r1, r0
	ldr r0, _080A0818  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0810:
	.4byte gRam
_080A0814:
	.4byte 0x000017D2
_080A0818:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A07FC

