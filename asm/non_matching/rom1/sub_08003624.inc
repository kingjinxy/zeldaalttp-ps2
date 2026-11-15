	thumb_func_start sub_08003624
sub_08003624: @ 0x08003624
	push {lr}
	bl sub_08003634
	beq _08003630
	movs r0, #1
	pop {pc}
_08003630:
	movs r0, #0
	pop {pc}

