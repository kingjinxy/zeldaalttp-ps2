	THUMB_FUNC_START sub_080679B0
sub_080679B0: @ 0x080679B0
	add r2, r0, #0
	mov r3, #0
	cmp r1, #0
	beq _080679C6
_080679B8:
	ldrh r0, [r2]
	eor r0, r0, r1
	add r3, r3, r0
	add r2, r2, #2
	sub r1, r1, #2
	cmp r1, #0
	bne _080679B8
_080679C6:
	lsl r0, r3, #16
	lsr r0, r0, #16
	bx lr
	THUMB_FUNC_END sub_080679B0

