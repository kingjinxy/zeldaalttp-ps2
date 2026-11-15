	.syntax unified
	THUMB_FUNC_START sub_08002A8C
sub_08002A8C: @ 0X08002A8C
	bl sub_080025F4
	movs r2, #16
	eors r3, r3
	b.n _08002AA0
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
