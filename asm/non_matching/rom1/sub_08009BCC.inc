	.syntax unified
	THUMB_FUNC_START sub_08009BCC
sub_08009BCC: @ 0X08009BCC
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	lsrs r6, r4, #4
	lsrs r7, r5, #4
	lsls r7, r7, #6
	adds r6, r6, r7
	adds r1, r1, r6
	ldrh r6, [r2, #54]
	cmp r3, r6
	bcc.n _08009C04
	subs r3, r3, r6
	adds r3, #8
	lsrs r3, r3, #4
	beq.n _08009C00
	adds r3, #1
_08009BEE:
	ldrb r4, [r1, #0]
	cmp r4, #255
	beq.n _08009C04
	subs r4, #15
	cmp r4, #17
	bcc.n _08009C04
	subs r1, #64
	subs r3, #1
	bne.n _08009BEE
_08009C00:
	movs r0, #128
	pop {r4, r5, r6, r7, pc}
_08009C04:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
_08009C08:
	ldrh r4, [r0, #50]
	adds r4, #6
	adds r3, r4, #0
	ldrh r5, [r0, #54]
	ldrh r6, [r2, #54]
	adds r5, r5, r6
	lsrs r5, r5, #1
	ldr r7, [pc, #284]
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	.syntax unified
	.thumb
