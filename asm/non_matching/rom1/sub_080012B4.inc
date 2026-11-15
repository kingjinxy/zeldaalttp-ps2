	thumb_func_start sub_080012B4
sub_080012B4: @ 0x080012B4
	movs r2, #1
	strb r2, [r0, #0x14]
	eors r2, r2
	strb r2, [r0, #0x15]
	strb r2, [r0, #0x16]
	mov pc, lr

