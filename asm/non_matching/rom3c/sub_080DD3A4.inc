	THUMB_FUNC_START sub_080DD3A4
sub_080DD3A4: @ 0x080DD3A4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DD3C4  @ =gRam
	ldr r3, _080DD3C8  @ =0x00000FA2
	add r1, r2, r3
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080DD3CC  @ =0x00001770
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _080DD3D0  @ =0x0000180D
	add r2, r2, r0
	strb r1, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080DD3C4:
	.4byte gRam
_080DD3C8:
	.4byte 0x00000FA2
_080DD3CC:
	.4byte 0x00001770
_080DD3D0:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_080DD3A4

