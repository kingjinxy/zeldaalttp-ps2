	thumb_func_start sub_080093F8
sub_080093F8: @ 0x080093F8
	ldrh r3, [r0, #0x32]
	adds r1, r1, r3
	ldrh r3, [r0, #0x36]
	adds r2, r2, r3
	b _08009408
	.align 2, 0
_08009404:
	.byte 0x41, 0x8E, 0xC2, 0x8E
_08009408:
	ldr r3, _08009528 @ =0x03000468
	ldrh r3, [r3]
	subs r1, r1, r3
	ldr r3, _0800952C @ =0x0300046A
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
