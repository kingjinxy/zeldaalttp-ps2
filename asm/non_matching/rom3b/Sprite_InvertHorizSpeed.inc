	THUMB_FUNC_START Sprite_InvertHorizSpeed
Sprite_InvertHorizSpeed: @ 0x080C38E8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080C3900  @ =gRam
	ldr r2, _080C3904  @ =0x00000F22
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	mvn r1, r1
	add r1, r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080C3900:
	.4byte gRam
_080C3904:
	.4byte 0x00000F22
	THUMB_FUNC_END Sprite_InvertHorizSpeed

