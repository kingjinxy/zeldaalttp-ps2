	thumb_func_start sub_08003D08
sub_08003D08: @ 0x08003D08
	push {lr}
	adds r6, r1, #0
	movs r3, #0x80
	tst r6, r3
	bne _08003DCE
	movs r7, #0
	mov ip, r0
	ldrh r3, [r0, #0x32]
	ldrh r4, [r0, #0x36]
	movs r2, #0x48
	ldr r5, [r0, r2]
	ldr r1, _08003EB4 @ =0x03000468
	ldrh r2, [r1]
	subs r3, r3, r2
	ldrh r2, [r1, #2]
	subs r4, r4, r2
	movs r2, #0
	ldrsb r0, [r5, r2]
	adds r0, r0, r3
	movs r2, #1
	ldrsb r1, [r5, r2]
	adds r1, r1, r4
	push {r0, r1}
	movs r4, #0xf
	tst r4, r6
	beq _08003D72
	ldrb r2, [r5, #2]
	movs r4, #0x10
	tst r6, r4
	beq _08003D46
	rsbs r2, r2, #0
_08003D46:
	adds r0, r0, r2
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #3]
	adds r1, r1, r4
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #3]
	lsls r4, r4, #1
	subs r1, r1, r4
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	movs r4, #0x10
	tst r4, r6
	bne _08003D72
	lsls r7, r7, #4
_08003D72:
	pop {r0, r1}
	adds r3, r6, #0
	movs r4, #0xf
	ands r3, r4
	cmp r3, #8
	beq _08003DC8
	ldrb r2, [r5, #5]
	movs r4, #0x10
	ands r4, r6
	lsrs r4, r4, #1
	eors r4, r6
	movs r3, #8
	tst r4, r3
	bne _08003D92
	rsbs r2, r2, #0
	lsls r7, r7, #4
_08003D92:
	adds r1, r1, r2
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #4]
	adds r0, r0, r4
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #4]
	lsls r4, r4, #1
	subs r0, r0, r4
	bl sub_08003DD0
	orrs r7, r2
	lsls r7, r7, #1
	movs r4, #0x10
	ands r4, r6
	lsrs r4, r4, #1
	eors r4, r6
	movs r3, #8
	tst r4, r3
	beq _08003DCA
	lsls r7, r7, #4
	b _08003DCA
_08003DC8:
	lsls r7, r7, #8
_08003DCA:
	mov r0, ip
	strh r7, [r0, #0x2c]
_08003DCE:
	pop {pc}

