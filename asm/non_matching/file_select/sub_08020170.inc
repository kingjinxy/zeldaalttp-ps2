	THUMB_FUNC_START sub_08020170
sub_08020170: @ 0x08020170
	push {r4,lr}
	add r4, r0, #0
	mov r0, #38
	bl sub_08012468
	cmp r0, #0
	beq _08020184
	add r0, r4, #0
	bl sub_08020478
_08020184:
	add r0, r4, #0
	bl sub_08043F20
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020170

