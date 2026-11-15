	thumb_func_start sub_080012FC
sub_080012FC: @ 0x080012FC
	push {lr}
	bl sub_080012B4
	ldrb r1, [r0, #0x1c]
	movs r2, #0xfc
	ands r1, r2
	movs r2, #1
	orrs r1, r2
	strb r1, [r0, #0x1c]
	bl sub_08001D5C
	ldr r2, _080016F8 @ =0x0000FEFE
	ldrh r3, [r1, #0x36]
	ands r3, r2
	strh r3, [r1, #0x36]
	eors r2, r2
	movs r3, #0x26
	strb r2, [r1, r3]
	bl sub_080020C8
	pop {pc}
	.align 2, 0

