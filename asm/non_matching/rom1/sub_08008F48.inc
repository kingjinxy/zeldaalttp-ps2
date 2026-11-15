	thumb_func_start sub_08008F48
sub_08008F48: @ 0x08008F48
	lsrs r2, r2, #0xe
	lsls r2, r2, #3
	ldr r3, _08008F94 @ =0x08009280
	ldr r2, [r3, r2]
	lsls r1, r1, #1
	strh r0, [r2, r1]
	mov pc, lr
	.align 2, 0

