	thumb_func_start sub_08001818
sub_08001818: @ 0x08001818
	push {lr}
	bl sub_08001D5C
	ldrb r2, [r1, #0x1e]
	movs r3, #0x40
	tst r2, r3
	beq _080017FA
	movs r3, #0x20
	tst r2, r3
	beq _0800183A
	movs r3, #0x2a
	ldrb r3, [r0, r3]
	lsrs r3, r3, #1
	lsls r3, r3, #3
	strb r3, [r1, #0xd]
	movs r2, #0x2b
	strb r3, [r0, r2]
_0800183A:
	ldrb r2, [r1, #0x1e]
	movs r3, #0x80
	tst r2, r3
	beq _080018AA
	ldr r1, [r0, #0x64]
	push {r1}
	bl sub_08007880
	pop {r1}
	bne _08001860
	eors r2, r2
	strb r2, [r1, #0x1e]
	bl sub_08001D5C
	ldrb r2, [r1, #0x1e]
	movs r3, #0x7f
	ands r2, r3
	strb r2, [r1, #0x1e]
	b _080018AA
_08001860:
	movs r2, #0x2a
	ldrb r2, [r0, r2]
	movs r3, #0x32
	lsrs r2, r2, #2
	bhs _0800186C
	movs r3, #0x36
_0800186C:
	ldr r2, [r0, #0x64]
	ldr r2, [r2, #0x28]
	ldrh r1, [r0, r3]
	ldrh r3, [r2, r3]
	subs r1, r1, r3
	bpl _0800187A
	rsbs r1, r1, #0
_0800187A:
	movs r3, #0x10
	subs r3, r3, r1
	bmi _08001920
	lsls r3, r3, #8
	str r3, [r2, #0xc]
	movs r3, #0x2b
	ldrb r1, [r0, r3]
	strb r1, [r2, r3]
	push {r0, r2}
	adds r0, r2, #0
	bl sub_080017FC
	pop {r0, r2}
	movs r3, #0x2b
	ldrb r3, [r2, r3]
	lsls r3, r3, #1
	ldr r1, _08001C8C @ =0x08002DBC
	ldrh r3, [r3, r1]
	ldrh r2, [r2, #0x2c]
	ands r2, r3
	beq _08001920
	eors r2, r2
	str r2, [r0, #0xc]
	b _08001920
_080018AA:
	bl sub_08001D5C
	ldrb r2, [r1, #0xf]
	movs r3, #0x80
	tst r2, r3
	bne _08001920
	push {r1}
	adds r1, r0, #0
	bl sub_08007860
	pop {r2}
	beq _08001920
	push {r0, r2}
	adds r0, r1, #0
	bl sub_080076C4
	pop {r0, r2}
	str r2, [r1, #0x60]
	movs r3, #0x2a
	ldrb r2, [r0, r3]
	strb r2, [r1, r3]
	ldrb r2, [r1, #0xa]
	bl sub_08001D60
	movs r3, #0x60
	strb r3, [r1, #0x1e]
	str r1, [r0, #0x64]
	push {r0, r1}
	bl sub_080123E8
	adds r2, r0, #0
	pop {r0, r1}
	beq _08001914
	push {r0, r1, r2}
	movs r0, #2
	adds r1, r2, #0
	bl sub_08012728
	pop {r0, r1, r2}
	movs r3, #8
	strb r3, [r2, #9]
	movs r3, #8
	strb r3, [r2, #8]
	movs r3, #0x80
	strb r3, [r2, #0x19]
	ldr r3, [r1, #0x28]
	str r3, [r2, #0x54]
	ldrb r3, [r3, #0xa]
	strb r3, [r2, #0xa]
	eors r3, r3
	strb r3, [r2, #0xb]
	strb r3, [r2, #0x14]
	strb r3, [r2, #0x15]
_08001914:
	bl sub_08001D5C
	ldrb r2, [r1, #0x1e]
	movs r3, #0x80
	orrs r2, r3
	strb r2, [r1, #0x1e]
_08001920:
	bl sub_08001D5C
	ldrb r2, [r1, #0x1e]
	lsrs r2, r2, #8
	blo _08001946
	ldr r2, [r0, #0x64]
	ldrb r2, [r2, #0x1e]
	movs r3, #0x20
	tst r2, r3
	bne _0800193C
	ldrb r3, [r1, #0x1e]
	movs r4, #0x7f
	ands r3, r4
	strb r3, [r1, #0x1e]
_0800193C:
	movs r3, #0x10
	tst r2, r3
	beq _08001946
	ldr r3, _08001C90 @ =0x00000100
	str r3, [r0, #0xc]
_08001946:
	ldrb r2, [r1, #0x1e]
	movs r3, #0x10
	tst r2, r3
	bne _080019E2
	ldrb r1, [r0, #0x1b]
	bl sub_080037EC
	movs r2, #0x2a
	ldrb r2, [r0, r2]
	lsrs r2, r2, #1
	lsls r2, r2, #1
	ldr r3, _08001C94 @ =0x08001754
	ldrsb r1, [r3, r2]
	adds r2, #1
	ldrsb r2, [r3, r2]
	bl sub_08009444
	push {r0}
	adds r0, r1, #0
	ldr r1, _08001C98 @ =0x0800175C
	bl sub_080012D8
	pop {r0}
	bl sub_08001D5C
	ldrb r2, [r1, #0x1e]
	orrs r3, r3
	beq _080019A2
	movs r2, #0x2a
	ldrb r2, [r0, r2]
	lsrs r2, r2, #1
	subs r3, #1
	cmp r2, r3
	bne _080019A2
	ldrb r2, [r1, #0x1e]
	movs r3, #0x10
	orrs r2, r3
	strb r2, [r1, #0x1e]
	movs r2, #1
	ldrh r3, [r1, #0x36]
	orrs r2, r3
	strh r2, [r1, #0x36]
	pop {r2}
	movs r2, #7
	ldr r3, _08001C9C @ =sub_08001290
	bx r3
_080019A2:
	movs r3, #0xef
	ands r2, r3
	ldrb r2, [r1, #0x1e]
	movs r3, #0x20
	tst r2, r3
	beq _080019E2
	ldrb r3, [r1, #0xd]
	lsls r3, r3, #1
	ldr r2, _08001CA0 @ =0x08002DBC
	ldrh r3, [r3, r2]
	ldrh r2, [r0, #0x2c]
	ands r2, r3
	cmp r2, r3
	bne _080019D2
	movs r2, #6
	strb r2, [r0, #0x14]
	eors r2, r2
	strb r2, [r0, #0x15]
	movs r3, #0x38
	strb r2, [r1, r3]
	strb r2, [r1, #0x1e]
	movs r3, #0xff
	strb r3, [r1, #0xd]
	pop {pc}
_080019D2:
	eors r2, r2
	str r2, [r0, #0xc]
	ldr r2, [r0, #0x60]
	ldrb r2, [r2, #0x1e]
	orrs r2, r2
	bne _080019E2
	strb r2, [r1, #0x1e]
	b _080019E2
_080019E2:
	pop {pc}

