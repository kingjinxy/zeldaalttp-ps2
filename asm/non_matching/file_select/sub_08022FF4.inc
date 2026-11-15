	THUMB_FUNC_START sub_08022FF4
sub_08022FF4: @ 0x08022FF4
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802300A
	add r0, r1, #0
	bl sub_08023010
_0802300A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022FF4

	.byte 0x00
	.byte 0x00
