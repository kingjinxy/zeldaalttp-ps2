	.syntax unified
	THUMB_FUNC_START sub_080028D0
sub_080028D0: @ 0X080028D0
	bl _08002424
	bl sub_080025F4
	movs r2, #8
	b.n _080028B8
	.syntax unified
	.thumb
