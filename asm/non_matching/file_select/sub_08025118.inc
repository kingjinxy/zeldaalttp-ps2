	THUMB_FUNC_START sub_08025118
sub_08025118: @ 0x08025118
	push {lr}
	add r2, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _0802512C
	add r0, r2, #0
	bl DeleteThisEntity
	b _0802513E
_0802512C:
	add r0, r2, #0
	add r0, r0, #62
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r2, #0
	bl sub_08025210
_0802513E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025118

	.byte 0x00
	.byte 0x00
