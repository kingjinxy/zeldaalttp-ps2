	THUMB_FUNC_START sub_080FEE70
sub_080FEE70: @ 0x080FEE70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080FE1FC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FEE8E
	add r0, r4, #0
	bl sub_080FEBB8
_080FEE8E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080FEE70

