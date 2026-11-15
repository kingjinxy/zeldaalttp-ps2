	thumb_func_start sub_08009450
sub_08009450: @ 0x08009450
	ldrh r1, [r0, #0x32]
	ldrh r2, [r0, #0x36]
_08009454:
	ldr r3, _08009534 @ =0x03000468
	ldrh r3, [r3]
	subs r1, r1, r3
	ldr r3, _08009538 @ =0x0300046A
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
	push {lr}
	bl sub_08009424
	ldr r2, _08009500 @ =0x00004000
	tst r1, r2
	bne _08009482
	ldr r2, _0800953C @ =0x0814791C
	lsls r1, r1, #1
	ldrh r1, [r2, r1]
_08009482:
	pop {pc}

