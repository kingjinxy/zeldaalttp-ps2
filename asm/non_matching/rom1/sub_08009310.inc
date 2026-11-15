	thumb_func_start sub_08009310
sub_08009310: @ 0x08009310
	ldr r3, _080094F0 @ =0x03000468
	ldrh r3, [r3]
	subs r0, r0, r3
	ldr r3, _080094F4 @ =0x0300046A
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

