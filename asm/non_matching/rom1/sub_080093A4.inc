	thumb_func_start sub_080093A4
sub_080093A4: @ 0x080093A4
	movs r2, #0x50
	ldrh r2, [r0, r2]
	ldrh r1, [r0, #0x36]
	ldrh r0, [r0, #0x32]
_080093AC:
	ldr r3, _08009510 @ =0x03000468
	ldrh r3, [r3]
	subs r0, r0, r3
	ldr r3, _08009514 @ =0x0300046A
	ldrh r3, [r3]
	subs r1, r1, r3
	lsls r0, r0, #0x16
	lsls r1, r1, #0x16
	lsrs r0, r0, #0x1a
	lsrs r1, r1, #0x1a
	lsls r1, r1, #6
	adds r0, r0, r1
	adds r1, r2, #0
	movs r0, r0

