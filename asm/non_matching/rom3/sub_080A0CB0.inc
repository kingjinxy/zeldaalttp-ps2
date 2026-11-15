	THUMB_FUNC_START sub_080A0CB0
sub_080A0CB0: @ 0x080A0CB0
	ldr r1, _080A0CD0  @ =gRam
	ldr r0, _080A0CD4  @ =0x00001774
	add r3, r1, r0
	ldr r0, _080A0CD8  @ =0x00000974
	add r2, r1, r0
	ldrh r0, [r3]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r3]
	ldr r0, _080A0CDC  @ =0x0000097C
	add r1, r1, r0
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080A0CD0:
	.4byte gRam
_080A0CD4:
	.4byte 0x00001774
_080A0CD8:
	.4byte 0x00000974
_080A0CDC:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A0CB0

