	THUMB_FUNC_START sub_08074304
sub_08074304: @ 0x08074304
	ldr r1, _08074314  @ =gRam
	ldr r0, _08074318  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08074314:
	.4byte gRam
_08074318:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074304

