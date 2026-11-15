	THUMB_FUNC_START sub_0813483C
sub_0813483C: @ 0x0813483C
	push {r4,r5,lr}
	ldr r0, _08134860  @ =0x00000020
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	beq _0813485A
	ldr r5, _08134864  @ =gUnknown_083C3A3C
	add r4, r0, #0
_0813484C:
	ldr r0, [r5]
	bl sub_08134F20
	add r5, r5, #12
	sub r4, r4, #1
	cmp r4, #0
	bne _0813484C
_0813485A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08134860:
	.4byte 0x00000020
_08134864:
	.4byte gUnknown_083C3A3C
	THUMB_FUNC_END sub_0813483C

