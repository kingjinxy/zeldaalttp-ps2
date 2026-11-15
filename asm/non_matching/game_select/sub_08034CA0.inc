	THUMB_FUNC_START sub_08034CA0
sub_08034CA0: @ 0x08034CA0
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #120
	ldr r1, [r4, #124]
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	beq _08034CCC
	ldrb r1, [r4, #10]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08034CC6
	add r0, r4, #0
	bl sub_0803D3D0
_08034CC6:
	add r0, r4, #0
	bl DeleteThisEntity
_08034CCC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034CA0

	.byte 0x00
	.byte 0x00
