	thumb_func_start sub_08008F3C
sub_08008F3C: @ 0x08008F3C
	lsrs r2, r2, #0xe
	lsls r2, r2, #2
	ldr r3, _08008F90 @ =0x080092A0
	ldr r2, [r3, r2]
	strb r0, [r2, r1]
	mov pc, lr

