	THUMB_FUNC_START sub_08104040
sub_08104040: @ 0x08104040
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08104054  @ =gRam
	ldr r2, _08104058  @ =0x00001142
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #9
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08104054:
	.4byte gRam
_08104058:
	.4byte 0x00001142
	THUMB_FUNC_END sub_08104040

