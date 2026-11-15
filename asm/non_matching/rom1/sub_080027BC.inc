	.syntax unified
	THUMB_FUNC_START sub_080027BC
sub_080027BC: @ 0X080027BC
	ldrh r2, [r0, #54]
	adds r2, #3
	movs r3, #15
	ands r2, r3
	cmp r2, #13
	bcs.n _08002820
	b.n _080027D8
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
