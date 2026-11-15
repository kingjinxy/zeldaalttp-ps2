	thumb_func_start sub_08009394
sub_08009394: @ 0x08009394
	ldrh r3, [r0, #0x32]
	adds r3, r3, r1
	ldrh r1, [r0, #0x36]
	adds r1, r1, r2
	movs r2, #0x50
	ldrh r2, [r0, r2]
	adds r0, r3, #0
	b _080093AC

