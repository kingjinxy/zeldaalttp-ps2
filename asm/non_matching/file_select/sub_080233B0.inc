	THUMB_FUNC_START sub_080233B0
sub_080233B0: @ 0x080233B0
	add r2, r0, #0
	ldrb r0, [r2, #23]
	sub r0, r0, #1
	strb r0, [r2, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080233D0
	add r1, r2, #0
	add r1, r1, #69
	strb r0, [r1]
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
_080233D0:
	bx lr
	THUMB_FUNC_END sub_080233B0

	.byte 0x00
	.byte 0x00
