	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08133E9A
sub_08133E9A: @ 0X08133E9A
	adds r3, r2, #1
	str r3, [r1, #64]
	ldrb r3, [r2, #0]
	b.n sub_08133E7E
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
