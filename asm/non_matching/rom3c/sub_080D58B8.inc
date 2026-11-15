	THUMB_FUNC_START sub_080D58B8
sub_080D58B8: @ 0x080D58B8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D58CC  @ =gRam
	ldr r2, _080D58D0  @ =0x00000F72
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080D58CC:
	.4byte gRam
_080D58D0:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080D58B8

