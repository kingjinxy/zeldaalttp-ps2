	thumb_func_start sub_080037CC
sub_080037CC: @ 0x080037CC
	push {r4}
	ldrh r2, [r0, #0x32]
	ldr r3, _08003A08 @ =0xFFFFFFF0
	movs r4, #8
	ands r2, r3
	orrs r2, r4
	strh r2, [r0, #0x32]
	ldrh r2, [r0, #0x36]
	ldr r3, _08003A08 @ =0xFFFFFFF0
	movs r4, #8
	ands r2, r3
	orrs r2, r4
	strh r2, [r0, #0x36]
	pop {r4}
	mov pc, lr
	.align 2, 0

