	thumb_func_start sub_08001274
sub_08001274: @ 0x08001274
	ldrb r2, [r0, #0x15]
	adds r2, #1
	strb r2, [r0, #0x15]
	mov pc, lr

