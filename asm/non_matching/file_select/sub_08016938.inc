	THUMB_FUNC_START sub_08016938
sub_08016938: @ 0x08016938
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08016952
	mov r0, #1
	strb r0, [r1, #20]
	add r0, r1, #0
	bl sub_080169F8
_08016952:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016938

	.byte 0x00
	.byte 0x00
