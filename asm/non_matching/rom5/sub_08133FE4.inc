	.syntax unified
	THUMB_FUNC_START sub_08133FE4
sub_08133FE4: @ 0X08133FE4
	mov ip, lr
	bl sub_08133E98
	ldrb r0, [r1, #24]
	cmp r0, r3
	beq.n _08133FFA
	strb r3, [r1, #24]
	ldrb r3, [r1, #0]
	movs r2, #15
	orrs r3, r2
	strb r3, [r1, #0]
_08133FFA:
	bx ip
	.syntax divided
	.thumb
