	THUMB_FUNC_START sub_0800EF14
sub_0800EF14: @ 0x0800EF14
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #2]
	ldrb r2, [r4, #3]
	cmp r0, r2
	bls _0800EF2C
	add r0, r4, #0
	bl sub_0800F0A0
	ldrb r0, [r4, #3]
	add r0, r0, #8
	strb r0, [r4, #3]
_0800EF2C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800EF14

	.byte 0x00
	.byte 0x00
