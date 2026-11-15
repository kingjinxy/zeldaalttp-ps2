	.syntax unified
	THUMB_FUNC_START sub_08009780
sub_08009780: @ 0X08009780
	ldrh r4, [r0, #44]
	ldr r5, [pc, #236]
	ldr r4, [r5, r4]
	bx r4
	.4byte _0800979C+1
	.4byte _080097F8+1
	.4byte _080097D8+1
	.4byte _08009810+1
	.4byte _08009830+1
_0800979C:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	adds r5, r4, #0
	subs r5, #16
	cmp r5, #239
	bcc.n _080097C8
_080097AE:
	movs r5, #8
	tst r3, r5
	bne.n _080097B6
	lsrs r4, r4, #2
_080097B6:
	tst r2, r5
	bne.n _080097BC
	lsrs r4, r4, #1
_080097BC:
	lsrs r4, r4, #1
	bcc.n _080097C6
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_080097C6:
	mov pc, lr
_080097C8:
	cmp r4, #34
	beq.n _080097C6
	cmp r4, #35
	beq.n _080097C6
	mov r4, ip
	orrs r4, r6
	mov ip, r4
	mov pc, lr
_080097D8:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	adds r5, r4, #0
	subs r5, #16
	cmp r5, #239
	bcs.n _080097AE
	cmp r5, #16
	bcs.n _080097F4
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_080097F4:
	mov pc, lr
	.byte 0x00
	.byte 0x00
_080097F8:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	cmp r4, #255
	bne.n _0800980C
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_0800980C:
	mov pc, lr
	.byte 0x00
	.byte 0x00
_08009810:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	adds r5, r4, #0
	cmp r5, #255
	beq.n _08009826
	subs r5, #15
	cmp r5, #17
	.syntax unified
	.thumb
