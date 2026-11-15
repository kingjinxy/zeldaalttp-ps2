	THUMB_FUNC_START sub_08080B4C
sub_08080B4C: @ 0x08080B4C
	ldr r1, _08080B5C  @ =gRam
	ldr r0, _08080B60  @ =0x0000188B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08080B5C:
	.4byte gRam
_08080B60:
	.4byte 0x0000188B
	THUMB_FUNC_END sub_08080B4C

