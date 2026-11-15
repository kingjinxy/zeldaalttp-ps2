	.syntax unified
	THUMB_FUNC_START sub_080027E0
sub_080027E0: @ 0X080027E0
	ldrh r2, [r0, #50]
	movs r3, #15
	ands r2, r3
	cmp r2, #12
	bcs.n _08002820
	b.n _080027F6
	.syntax unified
	.thumb
