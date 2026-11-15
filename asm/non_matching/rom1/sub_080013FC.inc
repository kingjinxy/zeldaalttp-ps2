	thumb_func_start sub_080013FC
sub_080013FC: @ 0x080013FC
	mov r3, lr
	push {r3, r4, r5, r6, r7}
	mov r4, r8
	mov r5, sb
	mov r6, sl
	mov r7, fp
	push {r4, r5, r6, r7}
	ldrb r2, [r0, #0x1c]
	movs r3, #0xfb
	ands r2, r3
	strb r2, [r0, #0x1c]
	movs r3, #0x2a
	ldrb r3, [r0, r3]
	cmp r3, #5
	blo _08001420
	movs r3, #4
	orrs r2, r3
	strb r2, [r0, #0x1c]
_08001420:
	bl sub_08001D5C
	movs r2, #0xff
	movs r3, #0x35
	strb r2, [r1, r3]
	bl sub_08001468
	movs r3, #0x2a
	ldrb r2, [r0, r3]
	lsrs r2, r2, #1
	ldrb r3, [r1, #8]
	movs r4, #0xa4
	cmp r3, r4
	bhs _0800143E
	adds r3, r3, r2
_0800143E:
	adds r2, r3, #0
	ldrb r4, [r1, #9]
	ldrb r3, [r0, #0x1b]
	cmp r4, r3
	bne _08001450
	movs r3, #0x23
	ldrb r3, [r0, r3]
	cmp r2, r3
	beq _0800145A
_08001450:
	adds r1, r2, #0
	strb r4, [r0, #0x1b]
	adds r2, r4, #0
	bl sub_08003840
_0800145A:
	pop {r4, r5, r6, r7}
	mov r8, r4
	mov sb, r5
	mov sl, r6
	mov fp, r7
	pop {r3, r4, r5, r6, r7}
	mov pc, r3

