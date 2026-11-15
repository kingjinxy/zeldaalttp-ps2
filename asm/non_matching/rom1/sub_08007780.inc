	thumb_func_start sub_08007780
sub_08007780: @ 0x08007780
	ldr r1, [r1, #0x28]
	movs r3, #0x2a
	ldrb r2, [r1, r3]
	lsrs r2, r2, #1
	lsls r2, r2, #2
	ldr r3, _080079F4 @ =0x080074AC
	adds r2, r2, r3
	ldrh r3, [r2]
	ldrh r4, [r1, #0x2c]
	ands r4, r3
	cmp r3, r4
	bne _080077AE
	adds r2, #2
	eors r4, r4
	ldrsb r4, [r2, r4]
	ldrh r3, [r1, #0x36]
	adds r3, r3, r4
	movs r4, #1
	ldrsb r4, [r2, r4]
	ldrh r1, [r1, #0x32]
	adds r1, r1, r4
	adds r2, r3, #0
	eors r4, r4
_080077AE:
	mov pc, lr

