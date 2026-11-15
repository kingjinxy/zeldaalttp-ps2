	THUMB_FUNC_START sub_080D290C
sub_080D290C: @ 0x080D290C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D2920  @ =gRam
	ldr r2, _080D2924  @ =0x00000F92
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080D2920:
	.4byte gRam
_080D2924:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D290C

