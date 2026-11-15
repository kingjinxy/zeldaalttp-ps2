	thumb_func_start sub_08003E10
sub_08003E10: @ 0x08003E10
	push {r4, lr}
	adds r4, r1, #0
	bl sub_08003714
	cmp r1, #0
	beq _08003E22
	adds r1, r4, #0
	bl sub_0800D1C0
_08003E22:
	pop {r4, pc}

