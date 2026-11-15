	thumb_func_start sub_08003648
sub_08003648: @ 0x08003648
	push {lr}
	push {r0, r1}
	ldrh r1, [r0, #0x36]
	ldrh r0, [r0, #0x32]
	bl sub_08003F54
	adds r1, r0, #0
	bl sub_080039D4
	adds r2, r1, #0
	pop {r0, r1}
	b _08003674

