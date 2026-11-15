	THUMB_FUNC_START sub_080A0AD8
sub_080A0AD8: @ 0x080A0AD8
	ldr r1, _080A0AF8  @ =gRam
	ldr r0, _080A0AFC  @ =0x000017EC
	add r3, r1, r0
	ldr r0, _080A0B00  @ =0x00000974
	add r2, r1, r0
	ldrh r0, [r3]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r3]
	ldr r0, _080A0B04  @ =0x000017D2
	add r1, r1, r0
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080A0AF8:
	.4byte gRam
_080A0AFC:
	.4byte 0x000017EC
_080A0B00:
	.4byte 0x00000974
_080A0B04:
	.4byte 0x000017D2
	THUMB_FUNC_END sub_080A0AD8

