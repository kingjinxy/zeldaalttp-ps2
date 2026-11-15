	thumb_func_start sub_0800303C
sub_0800303C: @ 0x0800303C
	push {r4, r5, r6, r7, lr}
	eors r6, r6
	ldr r1, [r0, #0xc]
	adds r0, #0x2b
	ldrb r2, [r0]
	movs r3, #0x80
	tst r2, r3
	bne _080030B0
	adds r0, #1
	ldrh r3, [r0]
_08003050:
	ldr r4, _080031E4 @ =0x08002DBC
	lsls r2, r2, #1
	adds r4, r4, r2
	ldrh r4, [r4]
	lsls r2, r2, #3
	ands r3, r4
	ldr r4, _080031E8 @ =0x0000EE00
	tst r3, r4
	bne _08003086
	push {r0, r1, r2, r3}
	ldr r4, _080031EC @ =0x0813E4CC
	adds r4, r4, r2
	ldrh r0, [r4]
	orrs r0, r0
	beq _0800307C
	adds r6, #1
	bl sub_0803D310
	ldr r1, _080031E0 @ =0x00000100
	bl sub_0803D350
	lsls r0, r0, #8
_0800307C:
	adds r4, r0, #0
	pop {r0, r1, r2, r3}
	ldr r5, [r0, #4]
	adds r5, r5, r4
	str r5, [r0, #4]
_08003086:
	movs r4, #0xee
	tst r3, r4
	bne _080030B0
	push {r0, r1, r2, r3}
	ldr r4, _080031F0 @ =0x0813E54C
	adds r4, r4, r2
	ldrh r0, [r4]
	orrs r0, r0
	beq _080030A6
	adds r6, #2
	bl sub_0803D310
	ldr r1, _080031E0 @ =0x00000100
	bl sub_0803D350
	lsls r0, r0, #8
_080030A6:
	adds r4, r0, #0
	pop {r0, r1, r2, r3}
	ldr r5, [r0, #8]
	subs r5, r5, r4
	str r5, [r0, #8]
_080030B0:
	adds r1, r6, #0
	pop {r4, r5, r6, r7, pc}

