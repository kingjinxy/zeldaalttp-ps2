	THUMB_FUNC_START sub_080A07B0
sub_080A07B0: @ 0x080A07B0
	ldr r1, _080A07D0  @ =gRam
	ldr r0, _080A07D4  @ =0x0000097C
	add r3, r1, r0
	sub r0, r0, #8
	add r2, r1, r0
	ldrh r0, [r3]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r3]
	ldr r0, _080A07D8  @ =0x00001784
	add r1, r1, r0
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080A07D0:
	.4byte gRam
_080A07D4:
	.4byte 0x0000097C
_080A07D8:
	.4byte 0x00001784
	THUMB_FUNC_END sub_080A07B0

