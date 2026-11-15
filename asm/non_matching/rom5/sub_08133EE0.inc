	.syntax unified
	THUMB_FUNC_START sub_08133EE0
sub_08133EE0: @ 0X08133EE0
	ldrb r2, [r1, #2]
	cmp r2, #0
	beq.n _08133EF2
	subs r2, #1
	strb r2, [r1, #2]
	lsls r2, r2, #2
	adds r3, r1, r2
	ldr r2, [r3, #68]
	str r2, [r1, #64]
_08133EF2:
	bx lr
	.syntax divided
	.thumb
