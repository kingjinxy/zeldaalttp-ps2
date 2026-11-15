	THUMB_FUNC_START sub_080DD3D4
sub_080DD3D4: @ 0x080DD3D4
	ldr r0, _080DD3E8  @ =gRam
	ldr r2, _080DD3EC  @ =0x00001770
	add r1, r0, r2
	mov r2, #1
	strb r2, [r1]
	ldr r1, _080DD3F0  @ =0x0000180D
	add r0, r0, r1
	strb r2, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080DD3E8:
	.4byte gRam
_080DD3EC:
	.4byte 0x00001770
_080DD3F0:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_080DD3D4

