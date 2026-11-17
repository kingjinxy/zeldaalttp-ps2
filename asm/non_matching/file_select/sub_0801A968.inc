	THUMB_FUNC_START sub_0801A968
sub_0801A968: @ 0x0801A968
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801A988
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_0801A988:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A968

	.byte 0x00
	.byte 0x00
