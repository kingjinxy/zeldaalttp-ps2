	THUMB_FUNC_START sub_080F0990
sub_080F0990: @ 0x080F0990
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F09AC  @ =gRam
	ldr r2, _080F09B0  @ =0x000010C2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	ldr r1, _080F09B4  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #15
	strb r1, [r0]
	bx lr
_080F09AC:
	.4byte gRam
_080F09B0:
	.4byte 0x000010C2
_080F09B4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F0990

