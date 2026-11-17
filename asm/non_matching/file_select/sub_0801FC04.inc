	THUMB_FUNC_START sub_0801FC04
sub_0801FC04: @ 0x0801FC04
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #43
	ldrb r0, [r0]
	mov r2, #16
	eor r2, r2, r0
	add r0, r4, #0
	mov r1, #64
	bl sub_08002E70
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0801FC30
	mov r0, #7
	strb r0, [r4, #20]
_0801FC30:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FC04

	.byte 0x00
	.byte 0x00
