	THUMB_FUNC_START sub_08070AEC
sub_08070AEC: @ 0x08070AEC
	ldr r1, _08070AFC  @ =gRam
	ldr r0, _08070B00  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08070AFC:
	.4byte gRam
_08070B00:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070AEC

