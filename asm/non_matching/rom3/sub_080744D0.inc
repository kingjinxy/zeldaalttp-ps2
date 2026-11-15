	THUMB_FUNC_START sub_080744D0
sub_080744D0: @ 0x080744D0
	ldr r1, _080744E0  @ =gRam
	ldr r0, _080744E4  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080744E0:
	.4byte gRam
_080744E4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080744D0

