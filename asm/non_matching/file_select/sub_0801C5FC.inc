	THUMB_FUNC_START sub_0801C5FC
sub_0801C5FC: @ 0x0801C5FC
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_08009624
	add r0, r4, #0
	add r0, r0, #63
	ldrb r0, [r0]
	cmp r0, #38
	bne _0801C626
	add r6, r4, #0
	add r6, r6, #62
	ldrb r0, [r6]
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	ldrh r1, [r4, #44]
	add r0, r4, #0
	bl sub_080038E8
	ldrb r0, [r5]
	strb r0, [r6]
_0801C626:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C5FC

