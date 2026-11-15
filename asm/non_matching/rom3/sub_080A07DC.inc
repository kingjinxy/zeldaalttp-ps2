	THUMB_FUNC_START sub_080A07DC
sub_080A07DC: @ 0x080A07DC
	ldr r1, _080A07F0  @ =gRam
	ldr r0, _080A07F4  @ =0x000017D0
	add r2, r1, r0
	ldr r0, _080A07F8  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A07F0:
	.4byte gRam
_080A07F4:
	.4byte 0x000017D0
_080A07F8:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A07DC

