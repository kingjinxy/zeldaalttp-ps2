	THUMB_FUNC_START sub_080F7B54
sub_080F7B54: @ 0x080F7B54
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F7B74  @ =gRam
	ldr r1, _080F7B78  @ =0x00000F52
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r1, _080F7B7C  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #255
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080F7B74:
	.4byte gRam
_080F7B78:
	.4byte 0x00000F52
_080F7B7C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F7B54

