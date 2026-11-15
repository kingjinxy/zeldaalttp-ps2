	THUMB_FUNC_START sub_080E5B38
sub_080E5B38: @ 0x080E5B38
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E5B60  @ =gRam
	ldr r2, _080E5B64  @ =0x00000FA2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	ldr r2, _080E5B68  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #31
	strb r2, [r1]
	ldr r1, _080E5B6C  @ =0x00001012
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #3
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080E5B60:
	.4byte gRam
_080E5B64:
	.4byte 0x00000FA2
_080E5B68:
	.4byte 0x00000FC2
_080E5B6C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080E5B38

