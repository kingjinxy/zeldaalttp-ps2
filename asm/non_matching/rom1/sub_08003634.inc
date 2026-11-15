	thumb_func_start sub_08003634
sub_08003634: @ 0x08003634
	push {lr}
	push {r2, r3}
	bl sub_08003920
	beq _08003642
	bl sub_08003660
_08003642:
	pop {r2, r3}
	pop {pc}

	.global sub_08003646
sub_08003646: @ 0x08003646
	movs r0, r0
