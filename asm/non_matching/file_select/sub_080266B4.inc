	THUMB_FUNC_START sub_080266B4
sub_080266B4: @ 0x080266B4
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl 0x08003828
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _080266D6
	add r0, r4, #0
	bl DeleteThisEntity
_080266D6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080266B4

