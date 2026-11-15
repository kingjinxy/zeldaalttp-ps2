	THUMB_FUNC_START sub_080B34B4
sub_080B34B4: @ 0x080B34B4
	ldr r1, _080B34C4  @ =gRam
	ldr r0, _080B34C8  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080B34C4:
	.4byte gRam
_080B34C8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B34B4

