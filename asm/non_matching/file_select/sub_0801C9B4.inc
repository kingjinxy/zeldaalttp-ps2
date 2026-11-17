	THUMB_FUNC_START sub_0801C9B4
sub_0801C9B4: @ 0x0801C9B4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0801CA04
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801C9CE
	add r0, r4, #0
	bl sub_080077D0
_0801C9CE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C9B4

