	THUMB_FUNC_START sub_080AA868
sub_080AA868: @ 0x080AA868
	ldr r0, _080AA870  @ =gRupeesCount
	ldrh r0, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080AA870:
	.4byte gRupeesCount
	THUMB_FUNC_END sub_080AA868

