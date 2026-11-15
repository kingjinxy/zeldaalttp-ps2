	.syntax unified
	THUMB_FUNC_START sub_080017E0
sub_080017E0: @ 0X080017E0
	push {lr}
	bl 0x8001b68
	beq.n _080017F8
	b.n _080017F4
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
