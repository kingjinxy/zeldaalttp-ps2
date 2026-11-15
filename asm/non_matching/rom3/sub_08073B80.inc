	THUMB_FUNC_START sub_08073B80
sub_08073B80: @ 0x08073B80
	ldr r1, _08073B90  @ =gRam
	ldr r0, _08073B94  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08073B90:
	.4byte gRam
_08073B94:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073B80

