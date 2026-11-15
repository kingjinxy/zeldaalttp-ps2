	thumb_func_start sub_080093C8
sub_080093C8: @ 0x080093C8
	ldr r2, _08009518 @ =0x080092A0
	lsrs r1, r1, #0xe
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	ldrb r0, [r1, r0]
	mov pc, lr

