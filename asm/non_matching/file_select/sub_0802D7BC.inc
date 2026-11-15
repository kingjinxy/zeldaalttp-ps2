	THUMB_FUNC_START sub_0802D7BC
sub_0802D7BC: @ 0x0802D7BC
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #16
	lsr r2, r2, #16
	cmp r1, #1
	beq _0802D7DA
	cmp r1, #1
	bgt _0802D7E2
	cmp r1, #0
	bne _0802D7E2
	mov r0, #12
	strh r0, [r3]
	strh r0, [r3, #2]
	b _0802D7E6
_0802D7DA:
	strh r2, [r3]
	mov r0, #12
	strh r0, [r3, #2]
	b _0802D7E6
_0802D7E2:
	strh r2, [r3]
	strh r2, [r3, #2]
_0802D7E6:
	bx lr
	THUMB_FUNC_END sub_0802D7BC

