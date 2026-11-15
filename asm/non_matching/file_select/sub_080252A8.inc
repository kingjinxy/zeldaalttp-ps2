	THUMB_FUNC_START sub_080252A8
sub_080252A8: @ 0x080252A8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080252BE
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
_080252BE:
	add r0, r4, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080252E8
	mov r0, #0
	strb r0, [r2]
	ldrb r2, [r4, #30]
	lsl r1, r2, #28
	lsr r1, r1, #28
	eor r1, r1, r3
	sub r0, r0, #16
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
_080252E8:
	add r0, r4, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl 0x08008E50
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080252A8

	.byte 0x00
	.byte 0x00
