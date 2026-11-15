	THUMB_FUNC_START sub_080D886C
sub_080D886C: @ 0x080D886C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D8880  @ =gRam
	ldr r2, _080D8884  @ =0x00001002
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	bx lr
_080D8880:
	.4byte gRam
_080D8884:
	.4byte 0x00001002
	THUMB_FUNC_END sub_080D886C

