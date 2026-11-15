	THUMB_FUNC_START sub_0802576C
sub_0802576C: @ 0x0802576C
	push {lr}
	add r2, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _08025780
	add r0, r2, #0
	bl DeleteThisEntity
	b _08025792
_08025780:
	add r0, r2, #0
	add r0, r0, #62
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r2, #0
	bl sub_08025850
_08025792:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802576C

	.byte 0x00
	.byte 0x00
