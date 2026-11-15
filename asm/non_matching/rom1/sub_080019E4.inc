	thumb_func_start sub_080019E4
sub_080019E4: @ 0x080019E4
	push {lr}
	movs r2, #0x2a
	ldrb r2, [r0, r2]
	lsrs r2, r2, #1
	lsls r2, r2, #1
	ldr r3, _08001CA4 @ =0x0800174C
	ldrsb r1, [r3, r2]
	adds r2, #1
	ldrsb r2, [r3, r2]
	bl sub_08009484
	pop {pc}

