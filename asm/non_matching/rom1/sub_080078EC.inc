	thumb_func_start sub_080078EC
sub_080078EC: @ 0x080078EC
	movs r3, #3
	movs r0, r0
	push {lr}
	push {r4, r5, r6}
	adds r4, r3, #0
	adds r3, r2, #0
	adds r2, r1, #0
_080078FA:
	push {r2}
	adds r2, r4, #0
	bl sub_08001D60
	pop {r2}
	ldrb r5, [r1, #2]
	ldrb r6, [r1, #5]
	orrs r5, r6
	ldrb r6, [r1, #7]
	orrs r5, r6
	bne _08007954
	movs r5, #0x27
	ldrb r5, [r1, r5]
	movs r6, #0x26
	ldrb r6, [r1, r6]
	orrs r5, r6
	bne _08007954
	ldrh r5, [r1, #0x36]
	ldr r6, _08007A2C @ =0x00001291
	ands r5, r6
	bne _08007954
	ldr r1, [r1, #0x28]
	orrs r1, r1
	beq _08007954
	cmp r0, r1
	beq _08007954
	ldrb r5, [r1, #0x14]
	cmp r5, #0xb
	beq _0800794E
	subs r5, #1
	bne _08007954
	movs r5, #0x3d
	ldrb r5, [r1, r5]
	orrs r5, r5
	bne _08007954
	movs r6, #0x50
	ldrh r5, [r0, r6]
	ldrh r6, [r1, r6]
	lsrs r5, r5, #0xe
	lsrs r6, r6, #0xe
	ands r5, r6
	beq _08007954
_0800794E:
	bl sub_08003634
	bne _0800795E
_08007954:
	subs r4, #1
	bpl _080078FA
	push {r4}
	eors r4, r4
	b _08007962
_0800795E:
	push {r4}
	movs r4, #1
_08007962:
	pop {r3}
	pop {r4, r5, r6}
	pop {pc}

