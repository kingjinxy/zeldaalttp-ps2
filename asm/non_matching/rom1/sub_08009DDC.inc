	.syntax unified
	THUMB_FUNC_START sub_08009DDC
sub_08009DDC: @ 0X08009DDC
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	adds r5, r4, #0
	subs r5, #16
	cmp r5, #239
	bcc.n _08009E06
	movs r6, #8
	tst r3, r6
	bne.n _08009DF6
	lsrs r4, r4, #2
_08009DF6:
	tst r2, r6
	bne.n _08009DFC
	lsrs r4, r4, #1
_08009DFC:
	lsrs r4, r4, #1
	bcc.n _08009E04
	movs r6, #1
	mov ip, r6
_08009E04:
	mov pc, lr
_08009E06:
	movs r6, #1
	mov ip, r6
	mov pc, lr
	.syntax unified
	.thumb
