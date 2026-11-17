	THUMB_FUNC_START sub_0801D1E0
sub_0801D1E0: @ 0x0801D1E0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _0801D1EE
	sub r0, r0, #1
	b _0801D202
_0801D1EE:
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _0801D204
	mov r0, #9
	strb r0, [r4, #20]
	mov r0, #1
_0801D202:
	strb r0, [r4, #23]
_0801D204:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D1E0

	.byte 0x00
	.byte 0x00
