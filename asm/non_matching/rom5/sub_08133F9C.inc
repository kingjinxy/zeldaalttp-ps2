	.syntax unified
	THUMB_FUNC_START sub_08133F9C
sub_08133F9C: @ 0X08133F9C
	mov ip, lr
	bl sub_08133E98
	subs r3, #64
	strb r3, [r1, #20]
	ldrb r3, [r1, #0]
	movs r2, #3
	orrs r3, r2
	strb r3, [r1, #0]
	bx ip
	.syntax divided
	.thumb
