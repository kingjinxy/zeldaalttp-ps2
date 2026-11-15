	THUMB_FUNC_START sub_080A0974
sub_080A0974: @ 0x080A0974
	ldr r2, _080A0994  @ =gRam
	ldr r0, _080A0998  @ =0x0000097C
	add r3, r2, r0
	sub r0, r0, #8
	add r1, r2, r0
	ldrh r0, [r3]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r3]
	ldr r0, _080A099C  @ =0x00001784
	add r2, r2, r0
	lsl r1, r1, #4
	ldrh r0, [r2]
	orr r1, r1, r0
	strh r1, [r2]
	bx lr
_080A0994:
	.4byte gRam
_080A0998:
	.4byte 0x0000097C
_080A099C:
	.4byte 0x00001784
	THUMB_FUNC_END sub_080A0974

