	THUMB_FUNC_START sub_0801EC54
sub_0801EC54: @ 0x0801EC54
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800963C
	add r0, r4, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801EC94
	mov r0, #30
	strb r0, [r4, #23]
	bl sub_0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	ldrb r2, [r1]
	cmp r0, r2
	beq _0801EC94
	strb r0, [r1]
	add r1, r0, #4
	add r0, r4, #0
	bl sub_08003870
_0801EC94:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EC54

	.byte 0x00
	.byte 0x00
