	THUMB_FUNC_START sub_080244A8
sub_080244A8: @ 0x080244A8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080244D4
	sub r0, r0, #1
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024AE0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080244E8
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _080244E8
	add r0, r4, #0
	bl sub_08024EA0
	b _080244E8
_080244D4:
	add r0, r4, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _080244E8
	mov r0, #13
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024D10
_080244E8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080244A8

	.byte 0x00
	.byte 0x00
