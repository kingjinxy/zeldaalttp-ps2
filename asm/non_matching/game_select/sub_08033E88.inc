	THUMB_FUNC_START sub_08033E88
sub_08033E88: @ 0x08033E88
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08033EA4
	add r0, r4, #0
	bl DeleteThisEntity
_08033EA4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033E88

	.byte 0x00
	.byte 0x00
