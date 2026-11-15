	THUMB_FUNC_START sub_08019E58
sub_08019E58: @ 0x08019E58
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08019E82
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08019E7C
	add r0, r4, #0
	bl sub_0801A1B8
	b _08019E82
_08019E7C:
	add r0, r4, #0
	bl sub_0801A1E0
_08019E82:
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019E58

	.byte 0x00
	.byte 0x00
