	THUMB_FUNC_START Sprite_InvertVertSpeed
Sprite_InvertVertSpeed: @ 0x080C3908
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080C3920  @ =gRam
	ldr r2, _080C3924  @ =0x00000F12
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	mvn r1, r1
	add r1, r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080C3920:
	.4byte gRam
_080C3924:
	.4byte 0x00000F12
	THUMB_FUNC_END Sprite_InvertVertSpeed

