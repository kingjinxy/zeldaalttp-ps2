	.syntax unified
	THUMB_FUNC_START sub_08003AC0
sub_08003AC0: @ 0X08003AC0
	push {r4, r5, r6, lr}
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq.n _08003B50
	movs r1, #72
	ldr r1, [r0, r1]
	movs r2, #1
	ldrsb r2, [r1, r2]
	movs r3, #0
	ldrsb r1, [r1, r3]
	bl 0x80093f8
	lsrs r2, r1, #14
	bne.n _08003B2A
	lsls r1, r1, #1
	ldr r2, [pc, #928]
	ldrh r1, [r2, r1]
	cmp r1, #0
	beq.n _08003B50
	ldr r4, [pc, #924]
	movs r6, #80
	ldrh r5, [r0, r6]
	lsls r5, r5, #18
_08003AEE:
	adds r4, #4
	ldrh r3, [r4, #0]
	cmp r3, #0
	beq.n _08003B08
	cmp r1, r3
	bne.n _08003AEE
	lsrs r3, r5, #18
	ldrh r4, [r4, #2]
	orrs r3, r4
	strh r3, [r0, r6]
	movs r4, #64
	movs r5, #64
	b.n _08003B18
_08003B08:
	cmp r1, #2
	bne.n _08003B2A
	lsrs r3, r5, #18
	ldrh r4, [r4, #2]
	orrs r3, r4
	strh r3, [r0, r6]
	movs r4, #128
	movs r5, #128
_08003B18:
	movs r3, #63
	ldrb r2, [r0, #29]
	ands r2, r3
	orrs r2, r4
	strb r2, [r0, #29]
	ldrb r2, [r0, #31]
	ands r2, r3
	orrs r2, r5
	strb r2, [r0, #31]
_08003B2A:
	movs r3, #58
	ldrh r2, [r0, r3]
	cmp r2, #0
	bne.n _08003B50
	adds r2, r1, #0
	subs r2, #19
	cmp r2, #13
	bcc.n _08003B4C
	ldr r2, [pc, #844]
_08003B3C:
	adds r2, #4
	ldrh r3, [r2, #0]
	cmp r3, #0
	beq.n _08003B50
	cmp r1, r3
	bne.n _08003B3C
	ldrh r0, [r2, #2]
	pop {r4, r5, r6, pc}
_08003B4C:
	movs r0, #2
	pop {r4, r5, r6, pc}
_08003B50:
	movs r0, #0
	pop {r4, r5, r6, pc}
	.byte 0x58
	.byte 0x6a
	.byte 0x00
	.byte 0x03
	.byte 0xe8
	.byte 0x6a
	.byte 0x00
	.byte 0x03
	.byte 0x78
	.byte 0x6b
	.byte 0x00
	.byte 0x03
	.byte 0x08
	.byte 0x6c
	.byte 0x00
	.byte 0x03
	.syntax unified
	.thumb
