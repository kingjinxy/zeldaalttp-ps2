	.syntax unified
	THUMB_FUNC_START sub_0800244C
sub_0800244C: @ 0X0800244C
	eors r2, r2
	movs r3, #61
	strb r2, [r1, r3]
	bl sub_080012A4
	pop {pc}
	.syntax unified
	.thumb
