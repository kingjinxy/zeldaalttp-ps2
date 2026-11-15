	THUMB_FUNC_START sub_0802519C
sub_0802519C: @ 0x0802519C
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x08009FDC
	ldrh r1, [r4, #44]
	cmp r1, #0
	beq _080251DA
	ldr r0, _080251C0  @ =0x0000FFFF
	cmp r1, r0
	bne _080251C4
	add r0, r4, #0
	bl DeleteThisEntity
	b _080251E0
	.byte 0x00
	.byte 0x00
_080251C0:
	.4byte 0x0000FFFF
_080251C4:
	ldrh r1, [r4, #44]
	add r0, r4, #0
	bl 0x080038E8
	add r0, r4, #0
	bl sub_08025210
	add r0, r4, #0
	bl 0x08008E50
	b _080251E0
_080251DA:
	add r0, r4, #0
	bl 0x08008E50
_080251E0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802519C

	.byte 0x00
	.byte 0x00
