	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08008B4A
sub_08008B4A: @ 0X08008B4A
	cmp r2, r3
	bcs.n _08008B7C
	subs r5, r4, #1
	lsls r5, r5, #1
	bcs.n _08008BB2
	subs r3, r3, r2
	cmp r3, #4
	bcc.n _08008B5C
	movs r3, #4
_08008B5C:
	subs r4, r4, r3
	bcs.n _08008B64
	adds r3, r3, r4
	movs r4, #0
_08008B64:
	ldrh r6, [r0, #32]
	subs r6, r6, r3
	strh r6, [r0, #32]
	movs r6, #7
	ands r6, r4
	beq.n _08008B76
	adds r6, r6, r3
	cmp r6, #8
	bcc.n _08008BB2
_08008B76:
	adds r6, r4, #0
	movs r7, #1
	b.n _08008BB2
_08008B7C:
	cmp r3, r2
	bcs.n _08008BB2
	ldrh r6, [r0, #40]
	subs r6, #240
	cmp r4, r6
	bcs.n _08008BB2
	subs r2, r2, r3
	cmp r2, #4
	bcc.n _08008B90
	movs r2, #4
_08008B90:
	adds r4, r4, r2
	cmp r6, r4
	bcs.n _08008B9C
	subs r4, r4, r6
	subs r2, r2, r4
	adds r4, r6, #0
_08008B9C:
	ldrh r6, [r0, #32]
	adds r6, r6, r2
	strh r6, [r0, #32]
	movs r6, #7
	ands r6, r4
	beq.n _08008BAC
	cmp r6, r2
	bcs.n _08008BB2
_08008BAC:
	adds r6, r4, #0
	adds r6, #240
	movs r7, #1
_08008BB2:
	cmp r7, #0
	beq.n _08008BCE
	ldr r7, [pc, #688]
	cmp r6, r7
	bcs.n _08008BCE
	ldrh r7, [r0, #40]
	cmp r6, r7
	bcs.n _08008BCE
	ldr r2, [pc, #680]
	ldr r3, [pc, #680]
	ldrb r3, [r3, #0]
	adds r2, r2, r3
	movs r3, #1
	strb r3, [r2, #0]
_08008BCE:
	movs r7, #0
	ldrh r5, [r0, #34]
	adds r3, r5, #0
	ldrh r6, [r0, #26]
	subs r5, r5, r6
	ldrh r2, [r1, #54]
	adds r3, #80
	cmp r2, r3
	bcs.n _08008C0E
	subs r6, r5, #1
	lsls r6, r6, #1
	bcs.n _08008C44
	subs r3, r3, r2
	cmp r3, #4
	bcc.n _08008BEE
	movs r3, #4
_08008BEE:
	subs r5, r5, r3
	bcs.n _08008BF6
	adds r3, r3, r5
	movs r5, #0
_08008BF6:
	ldrh r6, [r0, #34]
	subs r6, r6, r3
	strh r6, [r0, #34]
	movs r6, #7
	ands r6, r5
	beq.n _08008C08
	.syntax unified
	.thumb
