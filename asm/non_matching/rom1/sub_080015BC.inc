	thumb_func_start sub_080015BC
sub_080015BC: @ 0x080015BC
	push {lr}
	ldrb r2, [r1, #0x1e]
	orrs r2, r2
	bne _080015F2
	movs r2, #0x26
	ldrb r2, [r1, r2]
	orrs r2, r2
	bne _08001650
	ldrh r2, [r1, #0x36]
	ldr r3, _08001730 @ =0x00000400
	tst r2, r3
	bne _080015F2
	movs r3, #4
	tst r2, r3
	bne _08001650
	ldrb r2, [r1, #0x1b]
	movs r3, #0x40
	tst r2, r3
	bne _08001650
	ldrb r2, [r1, #0xd]
	movs r3, #0x80
	tst r2, r3
	bne _08001650
	movs r3, #0x2b
	ldrb r3, [r0, r3]
	cmp r2, r3
	bne _08001650
_080015F2:
	push {r1}
	bl sub_08007780
	pop {r1}
	bne _08001650
	movs r3, #0x2a
	ldrb r3, [r0, r3]
	lsrs r3, r3, #1
	lsls r3, r3, #1
	push {r1}
	push {r3}
	ldr r2, _08001734 @ =0x080011D0
	ldrsb r1, [r2, r3]
	adds r3, #1
	ldrsb r2, [r2, r3]
	bl sub_08009444
	adds r2, r1, #0
	pop {r3}
	lsls r3, r3, #1
	ldr r1, _08001738 @ =0x080011D8
	ldr r1, [r1, r3]
	push {r0}
	adds r0, r2, #0
	bl sub_080012D8
	pop {r0}
	pop {r1}
	beq _08001654
	movs r2, #0x80
	strb r2, [r1, #6]
	ldrb r2, [r1, #0x1e]
	orrs r2, r2
	bne _08001640
	ldrb r2, [r0, #0x18]
	adds r2, #1
	strb r2, [r0, #0x18]
	cmp r2, #4
	blo _08001654
_08001640:
	subs r3, #1
	movs r2, #0x2a
	strb r3, [r0, r2]
	pop {r2}
	movs r2, #0x81
	strb r2, [r1, #2]
	movs r2, #4
	b sub_08001290
_08001650:
	eors r2, r2
	strb r2, [r0, #0x18]
_08001654:
	pop {pc}
	.align 2, 0

