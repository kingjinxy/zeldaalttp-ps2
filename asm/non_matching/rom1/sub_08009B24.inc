	.syntax unified
	THUMB_FUNC_START sub_08009B24
sub_08009B24: @ 0X08009B24
	bcc.n _08009B4E
	subs r6, r6, r3
	adds r6, #8
	lsrs r6, r6, #4
	beq.n _08009B44
	adds r6, #1
_08009B30:
	ldrb r4, [r1, #0]
	ands r4, r7
	bne.n _08009B40
	adds r1, #64
	subs r6, #1
	bne.n _08009B30
_08009B3C:
	movs r0, #144
	pop {r4, r5, r6, r7, pc}
_08009B40:
	subs r6, #1
	bne.n _08009B4E
_08009B44:
	ldrb r4, [r1, #0]
	movs r5, #12
	ands r7, r5
	ands r4, r7
	beq.n _08009B3C
_08009B4E:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
_08009B54:
	ldrh r4, [r0, #50]
	subs r4, #6
	bpl.n _08009B5C
	movs r4, #0
_08009B5C:
	adds r3, r4, #0
	ldrh r5, [r0, #54]
	ldrh r6, [r2, #54]
	adds r5, r5, r6
	lsrs r5, r5, #1
	ldr r7, [pc, #448]
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	lsrs r6, r4, #4
	lsrs r7, r5, #4
	lsls r7, r7, #6
	adds r6, r6, r7
	adds r1, r1, r6
	movs r7, #8
	ands r5, r7
	lsrs r5, r5, #3
	ldr r7, [pc, #424]
	ldrb r7, [r7, r5]
	ldrh r6, [r2, #50]
	cmp r3, r6
	bcc.n _08009BB2
	subs r3, r3, r6
	adds r3, #8
	lsrs r3, r3, #4
	beq.n _08009BA8
	adds r3, #1
_08009B94:
	ldrb r4, [r1, #0]
	ands r4, r7
	bne.n _08009BA4
	subs r1, #1
	subs r3, #1
	bne.n _08009B94
_08009BA0:
	movs r0, #152
	pop {r4, r5, r6, r7, pc}
_08009BA4:
	subs r3, #1
	bne.n _08009BB2
_08009BA8:
	ldrb r4, [r1, #0]
	movs r5, #5
	ands r7, r5
	ands r4, r7
	beq.n _08009BA0
_08009BB2:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
_08009BB8:
	ldrh r4, [r0, #50]
	ldrh r5, [r2, #50]
	adds r4, r4, r5
	lsrs r4, r4, #1
	ldrh r5, [r0, #54]
	subs r5, #6
	bpl.n _08009BC8
	movs r5, #0
_08009BC8:
	adds r3, r5, #0
	ldr r7, [pc, #356]
	.syntax unified
	.thumb
