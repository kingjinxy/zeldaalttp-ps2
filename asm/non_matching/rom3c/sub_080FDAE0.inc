	THUMB_FUNC_START sub_080FDAE0
sub_080FDAE0: @ 0x080FDAE0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080FDAFC  @ =gRam
	ldr r2, _080FDB00  @ =0x000009B5
	add r3, r1, r2
	mov r2, #0
	strb r2, [r3]
	ldr r2, _080FDB04  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	bx lr
_080FDAFC:
	.4byte gRam
_080FDB00:
	.4byte 0x000009B5
_080FDB04:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDAE0

