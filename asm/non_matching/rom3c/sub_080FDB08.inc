	THUMB_FUNC_START sub_080FDB08
sub_080FDB08: @ 0x080FDB08
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080FDB24  @ =gRam
	ldr r2, _080FDB28  @ =0x000009B5
	add r3, r1, r2
	mov r2, #1
	strb r2, [r3]
	ldr r2, _080FDB2C  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	bx lr
_080FDB24:
	.4byte gRam
_080FDB28:
	.4byte 0x000009B5
_080FDB2C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDB08

