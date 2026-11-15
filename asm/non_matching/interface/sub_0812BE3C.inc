	THUMB_FUNC_START sub_0812BE3C
sub_0812BE3C: @ 0x0812BE3C
	push {r4,lr}
	add r4, r0, #0
	cmp r4, #0
	beq _0812BE4C
	bl sub_0812BE0C
	mov r0, #0
	str r0, [r4, #8]
_0812BE4C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812BE3C

	.byte 0x00
	.byte 0x00
