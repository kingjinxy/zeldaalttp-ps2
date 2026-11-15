	.syntax unified
	THUMB_FUNC_START sub_08133FB0
sub_08133FB0: @ 0X08133FB0
	mov ip, lr
	bl sub_08133E98
	subs r3, #64
	strb r3, [r1, #14]
	ldrb r3, [r1, #0]
	movs r2, #12
	orrs r3, r2
	strb r3, [r1, #0]
	bx ip
	.syntax divided
	.thumb
