	thumb_func_start sub_080012C0
sub_080012C0: @ 0x080012C0
	movs r2, #0x13
	strb r2, [r0, #0x14]
	eors r2, r2
	strb r2, [r0, #0x15]
	strb r2, [r0, #0x16]
	mov pc, lr

