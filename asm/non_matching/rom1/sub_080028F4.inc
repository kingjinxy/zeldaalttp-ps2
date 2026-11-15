	.syntax unified
	THUMB_FUNC_START sub_080028F4
sub_080028F4: @ 0X080028F4
	bl _08002424
	bl sub_080025F4
	movs r2, #16
	b.n _080028B8
	.syntax unified
	.thumb
