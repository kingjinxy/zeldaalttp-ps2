	THUMB_FUNC_START sub_0801D190
sub_0801D190: @ 0x0801D190
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801D1AC
	add r0, r4, #0
	bl sub_0801D3C0
_0801D1AC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D190

	.byte 0x00
	.byte 0x00
