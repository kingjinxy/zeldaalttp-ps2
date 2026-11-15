	thumb_func_start sub_080077B0
sub_080077B0: @ 0x080077B0
	ldrb r2, [r0, #3]
	ldr r3, _080079F8 @ =0x03000BD0
	ldrb r3, [r3]
	ands r3, r2
	mov pc, lr
	.align 2, 0

