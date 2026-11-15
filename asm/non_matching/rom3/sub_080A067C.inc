	THUMB_FUNC_START sub_080A067C
sub_080A067C: @ 0x080A067C
	ldr r1, _080A0690  @ =gRam
	ldr r0, _080A0694  @ =0x0000097C
	add r2, r1, r0
	sub r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0690:
	.4byte gRam
_080A0694:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A067C

