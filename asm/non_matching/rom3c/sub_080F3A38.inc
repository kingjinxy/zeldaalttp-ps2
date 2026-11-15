	THUMB_FUNC_START sub_080F3A38
sub_080F3A38: @ 0x080F3A38
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F3A4C  @ =gRam
	ldr r2, _080F3A50  @ =0x00000FA2
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080F3A4C:
	.4byte gRam
_080F3A50:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F3A38

