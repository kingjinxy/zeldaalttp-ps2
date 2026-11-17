	THUMB_FUNC_START sub_08017C88
sub_08017C88: @ 0x08017C88
	push {r4,lr}
	add r4, r0, #0
	mov r1, #128
	lsl r1, r1, #6
	bl sub_08003F1C
	add r0, r4, #0
	bl sub_08017EE4
	lsl r0, r0, #24
	cmp r0, #0
	beq _08017CA6
	add r0, r4, #0
	bl sub_080077D0
_08017CA6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017C88

