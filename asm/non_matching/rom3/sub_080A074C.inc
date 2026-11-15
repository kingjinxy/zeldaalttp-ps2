	THUMB_FUNC_START sub_080A074C
sub_080A074C: @ 0x080A074C
	ldr r1, _080A0760  @ =gRam
	ldr r0, _080A0764  @ =0x000017AC
	add r2, r1, r0
	ldr r0, _080A0768  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0760:
	.4byte gRam
_080A0764:
	.4byte 0x000017AC
_080A0768:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A074C

