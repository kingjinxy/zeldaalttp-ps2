	THUMB_FUNC_START sub_0801D748
sub_0801D748: @ 0x0801D748
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801D75E
	add r0, r1, #0
	bl sub_0801D764
_0801D75E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D748

	.byte 0x00
	.byte 0x00
