	thumb_func_start sub_0800390C
sub_0800390C: @ 0x0800390C
	push {lr}
	bl sub_08003920
	beq _08003918
	movs r0, #1
	b _0800391A
_08003918:
	eors r0, r0
_0800391A:
	pop {pc}

