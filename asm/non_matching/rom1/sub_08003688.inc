	thumb_func_start sub_08003688
sub_08003688: @ 0x08003688
	push {r5, lr}
	ldr r1, _080039E0 @ =0x0201EF20
	ldrb r5, [r1]
	movs r2, #0
	strb r2, [r1]
	ldrb r1, [r0, #0x1c]
	movs r2, #3
	tst r1, r2
	beq _080036F6
	ldr r1, _080039E4 @ =0x03000948
	ldrb r2, [r1, #5]
	orrs r2, r2
	bne _080036C6
	ldrb r2, [r1, #4]
	orrs r2, r2
	beq _080036BE
	ldrb r1, [r0, #0x1f]
	lsrs r1, r1, #1
	bhs _080036BE
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _080036F6
	ldr r1, _080039E8 @ =0x03000414
	ldrb r2, [r1]
	ldrb r1, [r0, #0xa]
	cmp r1, r2
	bne _080036F6
_080036BE:
	bl sub_08003704
	cmp r1, #0
	beq _080036F6
_080036C6:
	ldrb r1, [r0, #0x1d]
	lsrs r1, r1, #4
	movs r2, #0xc
	ands r1, r2
	ldr r2, _080039EC @ =0x08003508
	ldr r1, [r2, r1]
	ldrb r2, [r1]
	cmp r2, #0x80
	bhs _080036E0
	adds r2, #1
	strb r2, [r1]
	lsls r2, r2, #2
	str r0, [r1, r2]
_080036E0:
	cmp r5, #0
	beq _080036F6
	push {r0, r4}
	ldr r4, _080039F0 @ =0x0201EDD0
_080036E8:
	ldrh r1, [r4]
	bl sub_0800D1C0
	adds r4, #2
	subs r5, #1
	bne _080036E8
	pop {r0, r4}
_080036F6:
	pop {r5, pc}

