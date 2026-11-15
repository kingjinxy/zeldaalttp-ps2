	THUMB_FUNC_START sub_080D5928
sub_080D5928: @ 0x080D5928
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D593C  @ =gRam
	ldr r2, _080D5940  @ =0x00000F72
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #15
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080D593C:
	.4byte gRam
_080D5940:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080D5928

