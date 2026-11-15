	thumb_func_start sub_08008F58
sub_08008F58: @ 0x08008F58
	lsrs r1, r1, #0xe
	lsls r1, r1, #3
	ldr r2, _08008F98 @ =0x08009280
	ldr r1, [r2, r1]
	lsls r0, r0, #1
	ldrh r0, [r1, r0]
	mov pc, lr
	.align 2, 0

