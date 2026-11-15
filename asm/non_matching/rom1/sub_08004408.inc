	.syntax unified
	THUMB_FUNC_START sub_08004408
sub_08004408: @ 0X08004408
	orrs r2, r2
	bne.n _0800441A
	push {r0, r1}
	bl 0x80152f4
	cmp r0, #2
	pop {r0, r1}
	bne.n _0800441A
	pop {pc}
_0800441A:
	eors r2, r2
	strb r2, [r1, #6]
_0800441E:
	movs r3, #60
	ldrb r2, [r0, r3]
	movs r4, #128
	ands r2, r4
	ldrb r4, [r0, #10]
	lsls r4, r4, #1
	orrs r2, r4
	strb r2, [r0, r3]
	movs r1, #2
	bl 0x8002e50
	bl 0x8001510
	bl 0x800127c
	bl 0x8007364
	bl 0x8001328
	bl 0x8001d5c
	ldrb r2, [r1, #15]
	movs r3, #64
	tst r2, r3
	bne.n _08004460
	ldrb r2, [r1, #2]
	orrs r2, r2
	bne.n _08004460
	ldrb r3, [r1, #10]
	orrs r2, r3
	bne.n _08004460
	bl 0x80015bc
_08004460:
	bl 0x8001818
	bl 0x80052a8
	bl 0x8001d5c
	movs r3, #2
	ldrsb r2, [r1, r3]
	orrs r2, r2
	beq.n _080044A8
	movs r3, #192
	tst r2, r3
	bne.n _0800448A
	movs r3, #15
	ands r2, r3
	cmp r2, #3
	beq.n _0800448A
	eors r2, r2
	str r2, [r0, #12]
	bl 0x8001f70
_0800448A:
	bl 0x8002294
	movs r2, #41
	ldrb r2, [r0, r2]
	lsrs r2, r2, #2
	bcs.n _080044A6
	bl 0x8001d5c
	ldrb r1, [r1, #4]
	orrs r1, r1
	bne.n _080044A6
_080044A0:
	ldrb r1, [r0, #27]
	bl 0x80037ec
_080044A6:
	pop {pc}
_080044A8:
	movs r2, #66
	ldrb r2, [r0, r2]
	orrs r2, r2
	bne.n _080044A0
	movs r2, #38
	ldrb r2, [r1, r2]
	orrs r2, r2
	beq.n _08004536
	eors r3, r3
	movs r2, #46
	strb r3, [r0, r2]
	movs r2, #66
	strb r3, [r0, r2]
	ldr r2, [r0, #12]
	subs r2, #4
	str r2, [r0, #12]
	bmi.n _080044CC
	bne.n _080044E2
_080044CC:
	movs r2, #64
	str r2, [r0, #12]
	ldrb r3, [r1, #13]
	movs r2, #43
	strb r3, [r0, r2]
	movs r2, #38
	ldrb r2, [r1, r2]
	movs r3, #15
	ands r2, r3
	subs r2, #1
	bne.n _08004530
_080044E2:
	movs r3, #137
	ldrb r4, [r1, r3]
	orrs r4, r4
	beq.n _080044F0
	subs r4, #1
	strb r4, [r1, r3]
	beq.n _080044FA
_080044F0:
	ldr r2, [pc, #408]
	ldrh r2, [r2, #0]
	movs r3, #2
	tst r2, r3
	beq.n _0800451C
_080044FA:
	movs r3, #38
	ldrb r4, [r1, r3]
	movs r5, #128
	eors r4, r5
	strb r4, [r1, r3]
	lsrs r4, r4, #8
	bcc.n _08004516
	push {r0, r1, r2, r3}
	movs r0, #105
	bl 0x8003dfc
	pop {r0, r1, r2, r3}
	movs r4, #240
	b.n _08004518
_08004516:
	eors r4, r4
_08004518:
	movs r6, #137
	strb r4, [r1, r6]
_0800451C:
	movs r3, #1
	tst r2, r3
	beq.n _08004530
	ldr r2, [pc, #364]
	str r2, [r0, #12]
	bl 0x8001d00
	movs r2, #104
	bl 0x80031ac
_08004530:
	movs r2, #43
	.syntax unified
	.thumb
