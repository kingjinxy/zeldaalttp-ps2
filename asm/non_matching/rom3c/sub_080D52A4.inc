	THUMB_FUNC_START sub_080D52A4
sub_080D52A4: @ 0x080D52A4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D52C4  @ =gRam
	ldr r1, _080D52C8  @ =0x00000EE2
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #6
	strb r1, [r2]
	ldr r1, _080D52CC  @ =0x00000ED2
	add r3, r3, r1
	add r0, r0, r3
	ldrb r1, [r0]
	add r1, r1, #6
	strb r1, [r0]
	bx lr
_080D52C4:
	.4byte gRam
_080D52C8:
	.4byte 0x00000EE2
_080D52CC:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080D52A4

