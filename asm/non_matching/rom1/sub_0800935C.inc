	thumb_func_start sub_0800935C
sub_0800935C: @ 0x0800935C
	movs r2, #0x50
	ldrh r2, [r0, r2]
	ldrh r1, [r0, #0x36]
	ldrh r0, [r0, #0x32]
_08009364:
	ldr r3, _08009504 @ =0x03000468
	ldrh r3, [r3]
	subs r0, r0, r3
	ldr r3, _08009508 @ =0x0300046A
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
	.global sub_08009380  @ second entry point: the tile at position r0, layer r1 (a real label, not a linker alias,
	.thumb_func           @ so the PS2 build gives it a C entry: an alias pointed into sub_0800935C's MIPS code)
sub_08009380:
	push {lr}
	bl sub_0800932C
	ldr r1, _08009500 @ =0x00004000
	tst r0, r1
	bne _08009392
	ldr r1, _0800950C @ =0x0814791C
	lsls r0, r0, #1
	ldrh r0, [r1, r0]
_08009392:
	pop {pc}

