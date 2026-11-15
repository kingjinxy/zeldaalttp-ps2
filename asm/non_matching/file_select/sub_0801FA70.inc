	THUMB_FUNC_START sub_0801FA70
sub_0801FA70: @ 0x0801FA70
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FA86
	add r0, r1, #0
	bl sub_0801FD44
_0801FA86:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FA70

	.byte 0x00
	.byte 0x00
