	.syntax unified
	THUMB_FUNC_START sub_08009D98
sub_08009D98: @ 0X08009D98
	subs r3, r3, r4
	subs r3, r3, r4
	lsls r3, r3, #22
	lsrs r3, r3, #22
	bl sub_08009DDC
	pop {r2, r3, r5}
	movs r4, #15
	ands r4, r5
	beq.n _08009DD8
	ldrb r4, [r1, #5]
	adds r6, r5, #0
	subs r6, #8
	cmp r6, #16
	bcc.n _08009DB8
	negs r4, r4
_08009DB8:
	adds r3, r3, r4
	lsls r3, r3, #22
	lsrs r3, r3, #22
	ldrb r4, [r1, #4]
	adds r2, r2, r4
	lsls r2, r2, #22
	lsrs r2, r2, #22
	bl sub_08009DDC
	ldrb r4, [r1, #4]
	subs r2, r2, r4
	subs r2, r2, r4
	lsls r2, r2, #22
	lsrs r2, r2, #22
	bl sub_08009DDC
_08009DD8:
	mov r0, ip
	pop {r4, r5, r6, r7, pc}
	.syntax unified
	.thumb
