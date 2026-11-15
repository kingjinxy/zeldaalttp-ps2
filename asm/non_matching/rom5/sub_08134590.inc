	THUMB_FUNC_START sub_08134590
sub_08134590: @ 0x08134590
	mov r2, #0
	strb r2, [r1, #22]
	strb r2, [r1, #26]
	ldrb r2, [r1, #24]
	cmp r2, #0
	bne _081345A0
	mov r2, #12
	b _081345A2
_081345A0:
	mov r2, #3
_081345A2:
	ldrb r3, [r1]
	orr r3, r3, r2
	strb r3, [r1]
	bx lr
	THUMB_FUNC_END sub_08134590

	.byte 0x00
	.byte 0x00
