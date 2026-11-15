	THUMB_FUNC_START sub_08080644
sub_08080644: @ 0x08080644
	ldr r1, _08080654  @ =gRam
	ldr r0, _08080658  @ =0x00000B02
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08080654:
	.4byte gRam
_08080658:
	.4byte 0x00000B02
	THUMB_FUNC_END sub_08080644

