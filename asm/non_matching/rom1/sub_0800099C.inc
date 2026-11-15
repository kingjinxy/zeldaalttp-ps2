	thumb_func_start sub_0800099C
sub_0800099C: @ 0x0800099C
	ldr r2, _08000AC0 @ =0x03000F40
	ldr r0, [r2]
	lsls r1, r0, #1
	adds r0, r0, r1
	movs r3, #0xd
	rors r0, r3
	str r0, [r2]
	mov pc, lr

