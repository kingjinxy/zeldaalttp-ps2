	THUMB_FUNC_START sub_08034A18
sub_08034A18: @ 0x08034A18
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034A38
	ldr r1, [r4, #96]
	mov r0, #1
	strb r0, [r1, #4]
_08034A38:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034A18

	.byte 0x00
	.byte 0x00
