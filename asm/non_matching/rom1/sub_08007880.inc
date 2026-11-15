	thumb_func_start sub_08007880
sub_08007880: @ 0x08007880
	push {lr}
	ldr r3, [r1, #0x28]
	ldrb r4, [r3, #0x14]
	cmp r4, #1
	bne _08007892
	movs r4, #0x26
	ldrb r4, [r1, r4]
	orrs r4, r4
	beq _08007896
_08007892:
	eors r4, r4
	b _080078AC
_08007896:
	adds r1, r3, #0
	movs r4, #0x2a
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08007A24 @ =0x080074A4
	ldrb r2, [r3, r4]
	adds r4, #1
	ldrb r3, [r3, r4]
	bl sub_08003634
_080078AC:
	pop {pc}
	.align 2, 0

