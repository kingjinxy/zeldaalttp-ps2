	THUMB_FUNC_START sub_08070CC8
sub_08070CC8: @ 0x08070CC8
	ldr r0, _08070CD8  @ =gRam
	ldr r2, _08070CDC  @ =0x00000D08
	add r1, r0, r2
	ldrh r1, [r1]
	ldr r2, _08070CE0  @ =0x00000999
	add r0, r0, r2
	strb r1, [r0]
	bx lr
_08070CD8:
	.4byte gRam
_08070CDC:
	.4byte 0x00000D08
_08070CE0:
	.4byte 0x00000999
	THUMB_FUNC_END sub_08070CC8

