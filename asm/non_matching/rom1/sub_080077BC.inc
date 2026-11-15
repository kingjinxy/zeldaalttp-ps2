	thumb_func_start sub_080077BC
sub_080077BC: @ 0x080077BC
	ldrb r2, [r0, #3]
	movs r0, r0
	ldr r3, _080079FC @ =0x03000510
	ldrb r3, [r3]
	ands r3, r2
	mov pc, lr

