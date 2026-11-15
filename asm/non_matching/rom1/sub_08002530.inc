	.syntax unified
	THUMB_FUNC_START sub_08002530
sub_08002530: @ 0X08002530
	bl sub_080025F4
	movs r3, #38
	ldrb r2, [r1, r3]
	orrs r2, r2
	bne.n _08002578
	movs r2, #8
	strb r2, [r1, r3]
	eors r2, r2
	str r2, [r0, #12]
	adds r4, r0, #0
	adds r5, r1, #0
	movs r0, #15
	movs r1, #11
	eors r2, r2
	bl 0x804c8a8
	adds r2, r0, #0
	adds r0, r4, #0
	orrs r2, r2
	beq.n _080025DC
	ldrh r3, [r0, #50]
	strh r3, [r2, #50]
	ldrh r3, [r0, #54]
	strh r3, [r2, #54]
	movs r2, #171
	bl 0x80031ac
	adds r1, r5, #0
	bl 0x80076c4
	eors r2, r2
	movs r3, #137
	strb r2, [r1, r3]
	movs r3, #38
	ldrb r2, [r1, r3]
_08002578:
	movs r5, #128
	tst r2, r5
	beq.n _08002596
	movs r7, #60
	ldrb r6, [r0, r7]
	movs r4, #128
	ands r6, r4
	movs r4, #10
	orrs r6, r4
	strb r6, [r0, r7]
	push {r1, r2, r3}
	movs r1, #0
	bl sub_08002E50
	pop {r1, r2, r3}
_08002596:
	movs r7, #60
	ldrh r6, [r0, r7]
	orrs r6, r5
	strh r6, [r0, r7]
	movs r4, #15
	ands r4, r2
	subs r4, #1
	beq.n _080025DC
	subs r2, #1
	strb r2, [r1, r3]
	bics r6, r5
	strh r6, [r0, r7]
	movs r0, r0
	.syntax unified
	.thumb
