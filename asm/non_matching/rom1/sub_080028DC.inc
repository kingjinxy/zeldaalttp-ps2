	.syntax unified
	THUMB_FUNC_START sub_080028DC
sub_080028DC: @ 0X080028DC
	bl _08002424
	bl sub_080025F4
	movs r2, #24
	b.n _080028B8
	.syntax unified
	.thumb
