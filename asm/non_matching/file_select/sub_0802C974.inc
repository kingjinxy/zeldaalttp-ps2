	THUMB_FUNC_START sub_0802C974
sub_0802C974: @ 0x0802C974
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _0802C99C  @ =gUnknown_03000420
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802C9B2
	cmp r2, #3
	bhi _0802C9A0
	bl sub_0802D514
	bl sub_0802D428
	bl sub_0802C934
	b _0802C9B2
	.byte 0x00
	.byte 0x00
_0802C99C:
	.4byte gUnknown_03000420
_0802C9A0:
	add r0, r3, r1
	cmp r0, #15
	ble _0802C9B2
	bl sub_0802D280
	bl sub_0802D354
	bl sub_0802C934
_0802C9B2:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802C974

	.byte 0x00
	.byte 0x00
