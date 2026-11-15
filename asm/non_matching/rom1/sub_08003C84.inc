	thumb_func_start sub_08003C84
sub_08003C84: @ 0x08003C84
	push {r4, r5, r6, r7, lr}
	ldr r2, [r0, #0x48]
	ldr r3, [r1, #0x48]
	ldrh r4, [r1, #0x32]
	movs r6, #0
	ldrsb r5, [r3, r6]
	adds r4, r4, r5
	ldrh r5, [r0, #0x32]
	subs r4, r4, r5
	ldrsb r5, [r2, r6]
	subs r4, r4, r5
	adds r5, r4, #0
	ldrb r6, [r2, #6]
	ldrb r7, [r3, #6]
	adds r7, r7, r6
	adds r4, r4, r7
	lsls r6, r7, #1
	cmp r6, r4
	blo _08003D02
	movs r6, #8
	orrs r5, r5
	bpl _08003CB4
	movs r6, #0x18
	rsbs r5, r5, #0
_08003CB4:
	subs r7, r7, r5
	mov ip, r6
	ldrh r4, [r1, #0x36]
	movs r6, #1
	ldrsb r5, [r3, r6]
	adds r4, r4, r5
	ldrh r5, [r0, #0x36]
	subs r4, r4, r5
	ldrsb r5, [r2, r6]
	subs r4, r4, r5
	adds r5, r4, #0
	ldrb r6, [r2, #7]
	ldrb r2, [r3, #7]
	adds r6, r6, r2
	adds r4, r4, r6
	lsls r2, r6, #1
	cmp r2, r4
	blo _08003D02
	movs r2, #0x10
	orrs r5, r5
	bpl _08003CE2
	movs r2, #0
	rsbs r5, r5, #0
_08003CE2:
	subs r6, r6, r5
	cmp r6, r7
	blo _08003CEC
	adds r6, r7, #0
	mov r2, ip
_08003CEC:
	cmp r6, #0
	beq _08003D02
	cmp r6, #5
	blo _08003CF6
	movs r6, #4
_08003CF6:
	adds r0, r1, #0
	lsls r1, r6, #8
	bl sub_08002E70
	movs r0, #1
	pop {r4, r5, r6, r7, pc}
_08003D02:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.align 2, 0

