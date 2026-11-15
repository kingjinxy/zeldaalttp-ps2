	THUMB_FUNC_START sub_080A06F8
sub_080A06F8: @ 0x080A06F8
	ldr r0, _080A070C  @ =gRam
	ldr r1, _080A0710  @ =0x00001713
	add r2, r0, r1
	ldr r1, _080A0714  @ =0x00000974
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
_080A070C:
	.4byte gRam
_080A0710:
	.4byte 0x00001713
_080A0714:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A06F8

