	thumb_func_start sub_080093D4
sub_080093D4: @ 0x080093D4
	ldrh r1, [r0, #0x32]
	ldrh r2, [r0, #0x36]
	ldr r3, _0800951C @ =0x03000468
	ldrh r3, [r3]
	subs r1, r1, r3
	ldr r3, _08009520 @ =0x0300046A
	ldrh r3, [r3]
	subs r2, r2, r3
	movs r3, #0x50
	ldrh r3, [r0, r3]
	lsls r1, r1, #0x16
	lsls r2, r2, #0x16
	lsrs r1, r1, #0x1a
	lsrs r2, r2, #0x1a
	lsls r2, r2, #6
	adds r1, r1, r2
	ldr r2, _08009524 @ =0x080092B0
	b _0800932E

