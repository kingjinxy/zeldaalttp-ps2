	THUMB_FUNC_START sub_0801EBF4
sub_0801EBF4: @ 0x0801EBF4
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #23]
	cmp r1, #0
	beq _0801EC30
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _0801EC28
	add r2, r4, #0
	add r2, r2, #42
	ldrb r0, [r2]
	mov r1, #2
	eor r0, r0, r1
	strb r0, [r2]
	lsl r0, r0, #3
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r2]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
_0801EC28:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _0801EC4C
_0801EC30:
	mov r1, #224
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _0801EC4C
	mov r0, #8
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	mov r0, #144
	lsl r0, r0, #1
	str r0, [r4, #12]
_0801EC4C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EBF4

	.byte 0x00
	.byte 0x00
