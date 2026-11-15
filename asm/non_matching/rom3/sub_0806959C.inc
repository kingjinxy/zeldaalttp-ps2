	THUMB_FUNC_START sub_0806959C
sub_0806959C: @ 0x0806959C
	ldr r1, _080695AC  @ =gRam
	ldr r0, _080695B0  @ =0x000009A4
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080695AC:
	.4byte gRam
_080695B0:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_0806959C

