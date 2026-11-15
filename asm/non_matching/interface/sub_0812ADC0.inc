	THUMB_FUNC_START sub_0812ADC0
sub_0812ADC0: @ 0x0812ADC0
	push {lr}
	ldr r2, [r0, #104]
	ldr r0, [r0, #108]
	cmp r2, #0
	beq _0812ADCE
	str r0, [r2, #108]
	b _0812ADD0
_0812ADCE:
	str r0, [r1]
_0812ADD0:
	cmp r0, #0
	beq _0812ADD6
	str r2, [r0, #104]
_0812ADD6:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812ADC0

	.byte 0x00
	.byte 0x00
