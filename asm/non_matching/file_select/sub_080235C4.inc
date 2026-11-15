	THUMB_FUNC_START sub_080235C4
sub_080235C4: @ 0x080235C4
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080235E4
	ldrb r2, [r3, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	b _080235EE
_080235E4:
	mov r0, #5
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	sub r0, r0, #9
	and r0, r0, r1
_080235EE:
	strb r0, [r3, #28]
	bx lr
	THUMB_FUNC_END sub_080235C4

	.byte 0x00
	.byte 0x00
