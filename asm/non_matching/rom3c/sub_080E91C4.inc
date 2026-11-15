	THUMB_FUNC_START sub_080E91C4
sub_080E91C4: @ 0x080E91C4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E91D8  @ =gRam
	ldr r2, _080E91DC  @ =0x00000FC2
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #96
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080E91D8:
	.4byte gRam
_080E91DC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E91C4

