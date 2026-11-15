	thumb_func_start sub_080035C4
sub_080035C4: @ 0x080035C4
	push {r4, r5, r6, r7, lr}
	ldr r4, [r1, #0x48]
	ldrb r5, [r4, #6]
	ldrb r6, [r4, #7]
	adds r2, r2, r5
	adds r3, r3, r6
	ldrh r5, [r1, #0x32]
	movs r7, #0
	ldrsb r7, [r4, r7]
	ldrb r6, [r1, #0x1c]
	lsrs r6, r6, #3
	blo _080035DE
	rsbs r7, r7, #0
_080035DE:
	adds r5, r5, r7
	ldrh r6, [r1, #0x36]
	movs r7, #1
	ldrsb r7, [r4, r7]
	adds r6, r6, r7
	push {r5, r6}
	movs r4, #0x50
	ldrh r7, [r0, r4]
	ldrh r4, [r1, r4]
	ands r7, r4
	ldr r4, _080039DC @ =0x0000C000
	tst r7, r4
	beq _0800361C
	orrs r2, r2
	beq _08003608
	ldrh r4, [r0, #0x32]
	subs r4, r4, r5
	adds r4, r4, r2
	lsls r2, r2, #1
	cmp r2, r4
	blo _0800361C
_08003608:
	orrs r3, r3
	beq _08003618
	ldrh r4, [r0, #0x36]
	subs r4, r4, r6
	adds r4, r4, r3
	lsls r3, r3, #1
	cmp r3, r4
	blo _0800361C
_08003618:
	movs r5, #1
	b _0800361E
_0800361C:
	eors r5, r5
_0800361E:
	pop {r2, r3}
	pop {r4, r5, r6, r7, pc}
	.align 2, 0

