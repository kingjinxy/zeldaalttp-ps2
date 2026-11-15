	THUMB_FUNC_START sub_080FB318
sub_080FB318: @ 0x080FB318
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080FB334  @ =gRam
	ldr r2, _080FB338  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #16
	strb r2, [r1]
	ldr r1, _080FB33C  @ =0x00000F52
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #1
	strb r1, [r0]
	bx lr
_080FB334:
	.4byte gRam
_080FB338:
	.4byte 0x00000F62
_080FB33C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FB318

