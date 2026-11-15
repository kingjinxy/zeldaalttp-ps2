	.syntax unified
	THUMB_FUNC_START sub_08133FC4
sub_08133FC4: @ 0X08133FC4
	mov ip, lr
	bl sub_08133E98
	strb r3, [r1, #15]
	ldrb r3, [r1, #0]
	movs r2, #12
	orrs r3, r2
	strb r3, [r1, #0]
	bx ip
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
