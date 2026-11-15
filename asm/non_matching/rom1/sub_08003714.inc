	thumb_func_start sub_08003714
sub_08003714: @ 0x08003714
	ldrh r2, [r0, #0x32]
	ldr r1, _080039F4 @ =0x03000462
	ldrh r3, [r1, #0xe]
	subs r2, r2, r3
	adds r2, #0x40
	ldr r3, _080039F8 @ =0x00000171
	cmp r2, r3
	bhs _08003742
	ldrh r2, [r0, #0x36]
	ldrh r3, [r1, #0x10]
	subs r2, r2, r3
	adds r2, #0x40
	ldr r3, _080039FC @ =0x00000121
	cmp r2, r3
	bhs _08003742
	movs r3, #0x3a
	ldrsh r3, [r0, r3]
	adds r2, r2, r3
	ldr r3, _080039FC @ =0x00000121
	cmp r2, r3
	bhs _08003742
_0800373E:
	movs r1, #1
	mov pc, lr
_08003742:
	movs r1, #0
	mov pc, lr
	.align 2, 0

