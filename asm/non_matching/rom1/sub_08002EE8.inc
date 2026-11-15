	thumb_func_start sub_08002EE8
sub_08002EE8: @ 0x08002EE8
	push {lr}
	movs r2, #0x2b
	ldrb r6, [r0, r2]
	movs r3, #0x80
	tst r6, r3
	bne _08002FC0
_08002EF4:
	mov r2, sl
	push {r2}
	eors r7, r7
	mov sl, r0
	movs r2, #0x32
	ldrh r3, [r0, r2]
	movs r2, #0x36
	ldrh r4, [r0, r2]
	movs r2, #0x48
	ldr r5, [r0, r2]
	ldr r1, _080031D0 @ =0x03000468
	ldrh r1, [r1]
	subs r3, r3, r1
	ldr r1, _080031D4 @ =0x0300046A
	ldrh r1, [r1]
	subs r4, r4, r1
	eors r2, r2
	ldrsb r0, [r5, r2]
	adds r0, r0, r3
	movs r2, #1
	ldrsb r1, [r5, r2]
	adds r1, r1, r4
	push {r0, r1}
	movs r4, #0xf
	tst r4, r6
	beq _08002F5C
	ldrb r2, [r5, #2]
	movs r4, #0x10
	tst r6, r4
	beq _08002F32
	rsbs r2, r2, #0
_08002F32:
	adds r0, r0, r2
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #3]
	adds r1, r1, r4
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	lsls r4, r4, #1
	subs r1, r1, r4
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	movs r4, #0x10
	tst r4, r6
	bne _08002F5C
	lsls r7, r7, #4
_08002F5C:
	pop {r0, r1}
	adds r3, r6, #0
	movs r4, #0xf
	ands r3, r4
	movs r4, #8
	cmp r4, r3
	beq _08002FB4
	ldrb r2, [r5, #5]
	movs r4, #0x10
	ands r4, r6
	lsrs r4, r4, #1
	eors r4, r6
	movs r3, #8
	tst r4, r3
	bne _08002F7E
	rsbs r2, r2, #0
	lsls r7, r7, #4
_08002F7E:
	lsls r7, r7, #1
	adds r1, r1, r2
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	ldrb r4, [r5, #4]
	adds r0, r0, r4
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	lsls r4, r4, #1
	subs r0, r0, r4
	bl sub_08002FC4
	orrs r7, r2
	lsls r7, r7, #1
	movs r4, #0x10
	ands r4, r6
	lsrs r4, r4, #1
	eors r4, r6
	movs r3, #8
	tst r4, r3
	beq _08002FB6
	lsls r7, r7, #4
	b _08002FB6
_08002FB4:
	lsls r7, r7, #8
_08002FB6:
	mov r0, sl
	movs r2, #0x2c
	strh r7, [r0, r2]
	pop {r2}
	mov sl, r2
_08002FC0:
	pop {pc}
	.align 2, 0

