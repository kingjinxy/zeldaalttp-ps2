	THUMB_FUNC_START sub_081110F4
sub_081110F4: @ 0x081110F4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0811110C  @ =gRam
	ldr r2, _08111110  @ =0x00000FB2
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #3
	eor r1, r1, r2
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0811110C:
	.4byte gRam
_08111110:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_081110F4

