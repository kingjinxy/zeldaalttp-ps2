	THUMB_FUNC_START sub_080EF138
sub_080EF138: @ 0x080EF138
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080EF154  @ =gRam
	ldr r3, _080EF158  @ =0x00000F92
	add r2, r2, r3
	add r0, r0, r2
	mov r2, #4
	and r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #26
	strb r1, [r0]
	bx lr
_080EF154:
	.4byte gRam
_080EF158:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EF138

