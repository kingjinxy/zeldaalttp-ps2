	THUMB_FUNC_START sub_0806BEFC
sub_0806BEFC: @ 0x0806BEFC
	ldr r1, _0806BF0C  @ =gRam
	ldr r0, _0806BF10  @ =0x000009AC
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_0806BF0C:
	.4byte gRam
_0806BF10:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_0806BEFC

