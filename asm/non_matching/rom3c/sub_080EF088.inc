	THUMB_FUNC_START sub_080EF088
sub_080EF088: @ 0x080EF088
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EEE94
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EF0A6
	add r0, r4, #0
	bl sub_080EEC64
_080EF0A6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EF088

