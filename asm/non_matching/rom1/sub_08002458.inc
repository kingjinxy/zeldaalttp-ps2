	.syntax unified
	THUMB_FUNC_START sub_08002458
sub_08002458: @ 0X08002458
	movs r3, #38
	ldrb r2, [r1, r3]
	orrs r2, r2
	beq.n _0800246C
	eors r2, r2
	strb r2, [r1, r3]
	movs r3, #60
	ldrb r2, [r0, r3]
	movs r4, #128
	strb r2, [r0, r3]
_0800246C:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
