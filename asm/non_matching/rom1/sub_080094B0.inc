	thumb_func_start sub_080094B0
sub_080094B0: @ 0x080094B0
	ldr r2, _08009548 @ =0x080092A0
	lsrs r3, r3, #0xe
	lsls r3, r3, #2
	ldr r3, [r2, r3]
	ldrb r1, [r3, r1]
	mov pc, lr

