	THUMB_FUNC_START sub_080B3490
sub_080B3490: @ 0x080B3490
	ldr r1, _080B34A8  @ =gRam
	ldr r0, _080B34AC  @ =0x00001A4E
	add r2, r1, r0
	ldrh r0, [r2]
	sub r0, r0, #4
	strh r0, [r2]
	ldr r0, _080B34B0  @ =0x00001A4C
	add r1, r1, r0
	ldrh r0, [r1]
	sub r0, r0, #4
	strh r0, [r1]
	bx lr
_080B34A8:
	.4byte gRam
_080B34AC:
	.4byte 0x00001A4E
_080B34B0:
	.4byte 0x00001A4C
	THUMB_FUNC_END sub_080B3490

