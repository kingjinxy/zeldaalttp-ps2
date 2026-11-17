	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08004306
sub_08004306: @ 0X08004306
	movs r3, #128
	ldrb r2, [r1, #15]
	tst r2, r3
	beq.n _0800437C
	push {r0}
	ldr r0, [r0, #84]
	pop {r1}
	movs r2, #42
	ldrb r2, [r0, r2]
	lsrs r2, r2, #1
	lsls r2, r2, #1
	ldr r3, [pc, #860]
	adds r3, r3, r2
	ldrb r2, [r3, #0]
	adds r3, #1
	ldrb r3, [r3, #0]
	bl sub_08003634
	push {r0}
	push {r1}
	pop {r0}
	pop {r1}
	beq.n _0800436E
	push {r1}
	ldrb r2, [r1, #10]
	bl sub_08001D60
	ldrb r2, [r1, #15]
	pop {r1}
	lsrs r2, r2, #1
	bcc.n _0800436E
	push {r0}
	ldr r2, [pc, #824]
	str r2, [r0, #12]
	movs r2, #42
	ldrb r2, [r1, r2]
	lsrs r2, r2, #1
	lsls r2, r2, #1
	ldr r3, [pc, #816]
	adds r3, r3, r2
	ldrb r2, [r3, #0]
	adds r3, #1
	ldrb r3, [r3, #0]
	bl sub_0803CEF0
	adds r1, r0, #0
	pop {r0}
	movs r2, #43
	strb r1, [r0, r2]
	bl sub_08002294
	b.n _0800437C
_0800436E:
	bl sub_08001D5C
	eors r2, r2
	ldrb r2, [r1, #15]
	movs r3, #127
	ands r2, r3
	strb r2, [r1, #15]
_0800437C:
	bl sub_08001D5C
	movs r2, #38
	ldrb r2, [r1, r2]
	orrs r2, r2
	bne.n _080043C0
	ldrb r2, [r1, #2]
	lsrs r2, r2, #8
	bcs.n _080043C0
	movs r2, #62
	ldrb r2, [r1, r2]
	movs r3, #48
	ands r3, r2
	beq.n _080043A0
	lsrs r3, r3, #5
	movs r2, #48
	lsls r2, r3
	adds r3, r2, #0
_080043A0:
	ldr r2, [pc, #740]
	ldrb r4, [r1, #3]
	orrs r4, r4
	bne.n _080043BA
	movs r4, #33
	ldrb r4, [r1, r4]
	orrs r4, r4
	bne.n _080043BA
	ldrb r4, [r1, #27]
	orrs r4, r4
	beq.n _080043BC
	movs r2, #224
	b.n _080043BC
_080043BA:
	movs r2, #192
_080043BC:
	adds r2, r2, r3
	str r2, [r0, #12]
_080043C0:
	bl sub_080019FC
	bl sub_08001EC0
	bne.n _080043CE
	bl sub_080047F4
_080043CE:
	movs r2, #0
	movs r3, #64
	strb r2, [r0, r3]
	movs r2, #2
	movs r3, #70
	strb r2, [r0, r3]
	bl sub_08001D5C
	bl sub_0800127C
	movs r2, #128
	strb r2, [r1, #6]
	ldrb r2, [r1, #2]
	orrs r2, r2
	bne.n _0800441A
	movs r2, #66
	ldrb r2, [r0, r2]
	orrs r2, r2
	bne.n _08004400
	bl sub_08001DF4
	bne.n _08004400
	bl sub_08001510
	pop {pc}
_08004400:
	ldrh r2, [r1, #54]
	.syntax unified
	.thumb
