	thumb_func_start sub_08002E70
sub_08002E70: @ 0x08002E70
	push {r4, r5, r6, r7, lr}
	push {r1, r2}
	adds r6, r2, #0
	bl sub_08002EE4
	pop {r1, r2}
	adds r0, #0x2c
	ldrh r3, [r0]
	b _08003050
	.align 2, 0

