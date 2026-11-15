	THUMB_FUNC_START sub_08026DB4
sub_08026DB4: @ 0x08026DB4
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #24]
	sub r0, r0, #1
	strb r0, [r1, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08026DCA
	add r0, r1, #0
	bl sub_08026E24
_08026DCA:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026DB4

	.byte 0x00
	.byte 0x00
