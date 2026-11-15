	THUMB_FUNC_START sub_08024914
sub_08024914: @ 0x08024914
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802492A
	add r0, r1, #0
	bl sub_08024EA0
_0802492A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024914

	.byte 0x00
	.byte 0x00
