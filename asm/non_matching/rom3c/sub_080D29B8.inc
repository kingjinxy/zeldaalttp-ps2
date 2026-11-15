	THUMB_FUNC_START sub_080D29B8
sub_080D29B8: @ 0x080D29B8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D29D8  @ =gRam
	ldr r3, _080D29DC  @ =0x00000F92
	add r1, r2, r3
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	ldr r0, _080D29E0  @ =0x00001662
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #8
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080D29D8:
	.4byte gRam
_080D29DC:
	.4byte 0x00000F92
_080D29E0:
	.4byte 0x00001662
	THUMB_FUNC_END sub_080D29B8

