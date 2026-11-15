	THUMB_FUNC_START sub_080D53B0
sub_080D53B0: @ 0x080D53B0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D53C4  @ =gRam
	ldr r2, _080D53C8  @ =0x00000FA2
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080D53C4:
	.4byte gRam
_080D53C8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D53B0

