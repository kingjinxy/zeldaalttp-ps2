	.syntax unified
	THUMB_FUNC_START sub_080047F4
sub_080047F4: @ 0X080047F4
	bl sub_08001D5C
	movs r2, #255
	movs r3, #60
	strb r2, [r1, r3]
	eors r2, r2
	movs r3, #62
	strb r2, [r1, r3]
	movs r3, #60
	ldrb r2, [r0, r3]
	lsls r2, r2, #29
	lsrs r2, r2, #29
	strb r2, [r0, r3]
	movs r2, #10
	bl sub_08001290
	.syntax unified
	.thumb
