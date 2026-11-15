	.syntax unified
	THUMB_FUNC_START sub_08133E14
sub_08133E14: @ 0X08133E14
	ldr r3, [r0, #44]
	cmp r3, #0
	beq.n _08133E32
	ldr r1, [r0, #52]
	ldr r2, [r0, #48]
	cmp r2, #0
	beq.n _08133E26
	str r1, [r2, #52]
	b.n _08133E28
_08133E26:
	str r1, [r3, #32]
_08133E28:
	cmp r1, #0
	beq.n _08133E2E
	str r2, [r1, #48]
_08133E2E:
	movs r1, #0
	str r1, [r0, #44]
_08133E32:
	bx lr
	.syntax divided
	.thumb
