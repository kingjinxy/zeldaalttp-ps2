	thumb_func_start sub_080077D0
sub_080077D0: @ 0x080077D0
	ldr r1, _08007A04 @ =0x03000838
	ldrb r3, [r1]
	movs r2, #0x80
	cmp r3, r2
	bhs _080077E6
	adds r2, r3, #1
	strb r2, [r1]
	lsls r3, r3, #2
	ldr r2, _08007A08 @ =0x03006830
	adds r3, r3, r2
	str r0, [r3]
_080077E6:
	mov pc, lr

