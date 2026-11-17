	.syntax unified
	THUMB_FUNC_START sub_080017EC
sub_080017EC: @ 0X080017EC
	push {lr}
	bl sub_08001B70
	beq.n _080017F8
_080017F4:
	movs r0, #1
	b.n _080017FA
_080017F8:
	eors r0, r0
	.syntax unified
	.thumb

_080017FA:
	pop {pc}
