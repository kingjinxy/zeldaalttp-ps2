	thumb_func_start sub_080019FC
sub_080019FC: @ 0x080019FC
	push {lr}
	bl sub_08001D5C
	ldrh r2, [r1, #0x36]
	movs r3, #0x80
	ldr r1, _08001CA8 @ =0x08001780
	ands r2, r3
	beq _08001A0E
	ldr r1, _08001CAC @ =0x080017B0
_08001A0E:
	mov fp, r1
	eors r7, r7
	mov r8, r0
	movs r2, #0x32
	ldrh r3, [r0, r2]
	movs r2, #0x36
	ldrh r4, [r0, r2]
	movs r2, #0x48
	ldr r5, [r0, r2]
	ldr r1, _08001CB0 @ =0x03000468
	ldrh r1, [r1]
	subs r3, r3, r1
	ldr r1, _08001CB4 @ =0x0300046A
	ldrh r1, [r1]
	subs r4, r4, r1
	eors r2, r2
	ldrsb r0, [r5, r2]
	adds r0, r0, r3
	movs r2, #1
	ldrsb r1, [r5, r2]
	adds r1, r1, r4
	push {r0, r1}
	ldrb r2, [r5, #2]
	adds r0, r0, r2
	ldrb r4, [r5, #3]
	movs r6, #2
	mov sl, r1
_08001A44:
	lsls r7, r7, #1
	lsls r7, r7, #1
	adds r1, r1, r4
	bl sub_08001AA8
	orrs r7, r2
	lsls r7, r7, #1
	mov r1, sl
	subs r1, r1, r4
	bl sub_08001AA8
	orrs r7, r2
	lsls r7, r7, #1
	subs r6, #1
	beq _08001A6C
	mov r1, sl
	ldrb r3, [r5, #2]
	subs r0, r0, r3
	subs r0, r0, r3
	b _08001A44
_08001A6C:
	pop {r0, r1}
	ldrb r2, [r5, #5]
	adds r1, r1, r2
	ldrb r4, [r5, #4]
	movs r6, #2
	mov sb, r0
_08001A78:
	lsls r7, r7, #1
	lsls r7, r7, #1
	adds r0, r0, r4
	bl sub_08001AA8
	orrs r7, r2
	lsls r7, r7, #1
	mov r0, sb
	subs r0, r0, r4
	bl sub_08001AA8
	orrs r7, r2
	lsls r7, r7, #1
	subs r6, #1
	beq _08001AA0
	mov r0, sb
	ldrb r3, [r5, #5]
	subs r1, r1, r3
	subs r1, r1, r3
	b _08001A78
_08001AA0:
	mov r0, r8
	movs r2, #0x2c
	strh r7, [r0, r2]
	pop {pc}

