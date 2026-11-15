	THUMB_FUNC_START sub_080E26C8
sub_080E26C8: @ 0x080E26C8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E26DC  @ =gRam
	ldr r2, _080E26E0  @ =0x00000FD2
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #12
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080E26DC:
	.4byte gRam
_080E26E0:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080E26C8

