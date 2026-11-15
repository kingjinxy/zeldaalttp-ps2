	THUMB_FUNC_START sub_080DB59C
sub_080DB59C: @ 0x080DB59C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080DB5B8  @ =gRam
	ldr r2, _080DB5BC  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	ldr r1, _080DB5C0  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #32
	strb r1, [r0]
	bx lr
_080DB5B8:
	.4byte gRam
_080DB5BC:
	.4byte 0x00000F52
_080DB5C0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DB59C

