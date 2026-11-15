	thumb_func_start sub_080014C4
sub_080014C4: @ 0x080014C4
	push {lr}
	push {r4}
	ldrb r2, [r1, #8]
	ldrb r3, [r1, #0xb]
	orrs r3, r3
	bne _0800150A
	movs r4, #6
	ldrsb r3, [r1, r4]
	lsls r3, r3, #1
	bhs _0800150A
	orrs r3, r3
	bne _080014FC
	lsrs r3, r3, #1
	orrs r3, r3
	beq _080014E8
	subs r3, #1
	strb r3, [r1, #6]
	b _080014F4
_080014E8:
	push {r2}
	bl sub_080013D0
	pop {r2}
	orrs r3, r3
	beq _08001508
_080014F4:
	ldrb r3, [r0, #0x18]
	adds r3, #1
	cmp r3, #4
	blo _08001508
_080014FC:
	movs r2, #0x2a
	ldrb r2, [r0, r2]
	movs r4, #0x35
	strb r2, [r1, r4]
	ldr r2, _08001714 @ =0x00000230
	b _0800150A
_08001508:
	strb r3, [r0, #0x18]
_0800150A:
	strh r2, [r1, #8]
	pop {r4}
	pop {pc}

