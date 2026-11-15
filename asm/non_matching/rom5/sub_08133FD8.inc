	.syntax unified
	THUMB_FUNC_START sub_08133FD8
sub_08133FD8: @ 0X08133FD8
	mov ip, lr
	bl sub_08133E98
	strb r3, [r1, #27]
	bx ip
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
