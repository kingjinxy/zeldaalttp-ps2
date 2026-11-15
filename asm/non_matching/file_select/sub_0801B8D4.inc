	THUMB_FUNC_START sub_0801B8D4
sub_0801B8D4: @ 0x0801B8D4
	push {lr}
	add r2, r0, #0
	add r1, r2, #0
	add r1, r1, #118
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801B8EE
	add r0, r2, #0
	bl sub_0801BAD8
_0801B8EE:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B8D4

	.byte 0x00
	.byte 0x00
