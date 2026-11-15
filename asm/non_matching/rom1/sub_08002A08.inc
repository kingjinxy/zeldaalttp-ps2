	.syntax unified
	THUMB_FUNC_START sub_08002A08
sub_08002A08: @ 0X08002A08
	bl _08002424
	bl sub_080025F4
	ldrb r2, [r1, #15]
	movs r3, #192
	ands r2, r3
	bne.n _08002A22
	ldrb r2, [r1, #20]
	orrs r2, r2
	bne.n _08002A22
	movs r2, #17
	strb r2, [r1, #12]
_08002A22:
	pop {pc}
	.syntax unified
	.thumb
