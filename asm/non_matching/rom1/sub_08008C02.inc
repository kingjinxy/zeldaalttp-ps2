	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08008C02
sub_08008C02: @ 0X08008C02
	adds r6, r6, r3
	cmp r6, #8
	bcc.n _08008C44
_08008C08:
	adds r6, r5, #0
	movs r7, #1
	b.n _08008C44
_08008C0E:
	cmp r3, r2
	bcs.n _08008C44
	ldrh r6, [r0, #42]
	subs r6, #160
	cmp r5, r6
	bcs.n _08008C44
	subs r2, r2, r3
	cmp r2, #4
	bcc.n _08008C22
	movs r2, #4
_08008C22:
	adds r5, r5, r2
	cmp r6, r5
	bcs.n _08008C2E
	subs r5, r5, r6
	subs r2, r2, r5
	adds r5, r6, #0
_08008C2E:
	ldrh r6, [r0, #34]
	adds r6, r6, r2
	strh r6, [r0, #34]
	movs r6, #7
	ands r6, r5
	beq.n _08008C3E
	cmp r6, r2
	bcs.n _08008C44
_08008C3E:
	adds r6, r5, #0
	adds r6, #160
	movs r7, #1
_08008C44:
	cmp r7, #0
	beq.n _08008C60
	ldr r7, [pc, #540]
	cmp r6, r7
	bcs.n _08008C60
	ldrh r7, [r0, #42]
	cmp r6, r7
	bcs.n _08008C60
	ldr r2, [pc, #540]
	ldr r3, [pc, #544]
	ldrb r3, [r3, #0]
	adds r2, r2, r3
	movs r3, #1
	strb r3, [r2, #0]
_08008C60:
	movs r6, #0
	adds r7, r6, #0
	ldrh r2, [r0, #22]
	cmp r2, #0
	beq.n _08008C80
	subs r2, #1
	strh r2, [r0, #22]
	movs r6, #14
	ands r2, r6
	ldrb r6, [r0, #5]
	lsls r6, r6, #4
	adds r2, r2, r6
	ldr r3, [pc, #512]
	ldrsb r6, [r3, r2]
	adds r2, #1
	ldrsb r7, [r3, r2]
_08008C80:
	ldr r2, [pc, #508]
	ldr r2, [r2, #0]
	ldrh r3, [r0, #28]
	adds r3, r3, r4
	adds r3, r3, r6
	strh r3, [r2, #2]
	ldr r2, [pc, #500]
	ldr r2, [r2, #0]
	strh r3, [r2, #2]
	ldrh r3, [r0, #30]
	adds r3, r3, r5
	adds r3, r3, r7
	strh r3, [r2, #4]
	ldr r2, [pc, #492]
	ldr r2, [r2, #0]
	strh r3, [r2, #4]
	ldr r2, [pc, #488]
	ldrb r2, [r2, #0]
	cmp r2, #0
	beq.n sub_08008CB4
	subs r2, #4
	ldr r3, [pc, #484]
	ldr r2, [r3, r2]
	ldr r3, [pc, #484]
	mov lr, r3
	bx r2
	.syntax unified
	.thumb
