	THUMB_FUNC_START sub_080A081C
sub_080A081C: @ 0x080A081C
	ldr r1, _080A0830  @ =gRam
	ldr r0, _080A0834  @ =0x000017DC
	add r2, r1, r0
	ldr r0, _080A0838  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0830:
	.4byte gRam
_080A0834:
	.4byte 0x000017DC
_080A0838:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A081C

