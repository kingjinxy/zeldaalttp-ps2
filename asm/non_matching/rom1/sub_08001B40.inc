	thumb_func_start sub_08001B40
sub_08001B40: @ 0x08001B40
	push {r4}
	movs r2, #0x2a
	ldrb r4, [r0, r2]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08001CC0 @ =0x0800174C
	ldrsb r2, [r3, r4]
	adds r4, #1
	ldrsb r3, [r3, r4]
	pop {r4}
	.thumb_func
	.global sub_08001B54
sub_08001B54: @ entry point: x and y from r2/r3 plus the entity position
	push {r4}
	movs r4, #0x32
	ldrh r4, [r0, r4]
	adds r2, r2, r4
	movs r4, #0x36
	ldrh r4, [r0, r4]
	adds r3, r3, r4
	pop {r4}
	b sub_08001B70
	.align 2, 0

