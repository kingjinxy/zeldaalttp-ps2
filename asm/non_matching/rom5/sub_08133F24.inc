	.syntax unified
	THUMB_FUNC_START sub_08133F24
sub_08133F24: @ 0X08133F24
	mov ip, lr
	bl sub_08133E98
	strb r3, [r1, #29]
	bx ip
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
