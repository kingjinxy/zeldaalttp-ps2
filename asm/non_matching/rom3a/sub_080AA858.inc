	THUMB_FUNC_START sub_080AA858
sub_080AA858: @ 0x080AA858
	ldr r2, _080AA864  @ =gRupeesCount
	ldrh r1, [r2]
	add r1, r1, r0
	strh r1, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080AA864:
	.4byte gRupeesCount
	THUMB_FUNC_END sub_080AA858

