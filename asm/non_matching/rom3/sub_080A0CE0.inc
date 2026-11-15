	THUMB_FUNC_START sub_080A0CE0
sub_080A0CE0: @ 0x080A0CE0
	ldr r1, _080A0D00  @ =gRam
	ldr r0, _080A0D04  @ =0x0000177C
	add r3, r1, r0
	ldr r0, _080A0D08  @ =0x00000974
	add r2, r1, r0
	ldrh r0, [r3]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r3]
	ldr r0, _080A0D0C  @ =0x0000097C
	add r1, r1, r0
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080A0D00:
	.4byte gRam
_080A0D04:
	.4byte 0x0000177C
_080A0D08:
	.4byte 0x00000974
_080A0D0C:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A0CE0

