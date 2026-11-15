	.syntax unified
	THUMB_FUNC_START sub_080092F8
sub_080092F8: @ 0X080092F8
	ldrh r3, [r0, #50]
	adds r3, r3, r1
	ldrh r1, [r0, #54]
	adds r1, r1, r2
	movs r2, #80
	ldrh r2, [r0, r2]
	adds r0, r3, #0
	b.n 0x8009310
	.syntax unified
	.thumb
