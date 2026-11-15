	thumb_func_start sub_08000CFC
sub_08000CFC: @ 0x08000CFC
	adds r1, #0x1b
	ldrb r2, [r1]
	lsls r2, r2, #2
	ldr r6, _08000F98 @ =0x0862F52C
	adds r2, r2, r6
	ldr r2, [r2]
	adds r2, r2, r6
	ldrb r5, [r1, #6]
	lsls r5, r5, #2
	adds r2, r2, r5
	ldr r2, [r2]
	adds r2, r2, r6
	ldrb r3, [r2]
	adds r4, r0, r3
	subs r4, #1
	cmp r4, #0x78
	blo _08000D20
	mov pc, lr
_08000D20:
	adds r2, #1
	adds r1, #1
	ldr r4, [r1]
	lsrs r4, r4, #4
	ldr r7, _08000F9C @ =0x0000F000
	ands r4, r7
	ldrh r7, [r1, #2]
	lsrs r7, r7, #4
	ldr r5, _08000FA0 @ =0x00000C00
	ands r7, r5
	orrs r4, r7
	ldrb r7, [r1]
	lsrs r7, r7, #6
	lsls r7, r7, #8
	orrs r4, r7
	mov r8, r4
	eors r5, r5
	eors r6, r6
	ldr r7, [r1]
	lsrs r7, r7, #2
	bhs _08000D50
	ldr r6, _08000FA4 @ =0x03000470
	ldrh r5, [r6]
	ldrh r6, [r6, #2]
_08000D50:
	movs r4, #3
	ands r7, r4
	movs r4, #0x13
	ldrb r4, [r1, r4]
	eors r7, r4
	mov sb, r7
	movs r4, #4
	rors r7, r4
	ldr r4, [r1]
	orrs r7, r4
	ldr r4, _08000FA8 @ =0x3E003F00
	ands r7, r4
	mov fp, r7
	ldrh r7, [r1, #0x16]
	subs r5, r7, r5
	ldrh r7, [r1, #0x1a]
	subs r6, r7, r6
	ldrh r7, [r1, #0x1e]
	adds r6, r6, r7
	ldr r7, _08000FAC @ =0x03005E04
	ldr r7, [r7]
	adds r4, r0, #0
	lsls r4, r4, #3
	adds r7, r7, r4
	adds r0, r0, r3
	push {r0, r1}
	adds r0, r7, #0
	ldrb r4, [r1, #4]
	mov ip, r4
	mov sl, r5
_08000D8C:
	push {r3, r6}
	mov r7, sb
	movs r3, #0
	ldrsb r5, [r2, r3]
	lsrs r7, r7, #1
	blo _08000D9A
	rsbs r5, r5, #0
_08000D9A:
	add r5, sl
	movs r3, #1
	ldrsb r4, [r2, r3]
	lsrs r7, r7, #1
	blo _08000DA8
	subs r6, r6, r4
	b _08000DAA
_08000DA8:
	adds r6, r6, r4
_08000DAA:
	mov r7, fp
	ldrb r1, [r2, #2]
	movs r3, #0xc0
	ands r1, r3
	lsls r3, r1, #8
	orrs r7, r3
	ldrb r4, [r2, #2]
	lsrs r4, r4, #4
	lsls r4, r4, #0x1e
	orrs r7, r4
	lsrs r4, r4, #0x1e
	orrs r1, r1
	beq _08000DDC
	lsrs r1, r1, #8
	bhs _08000DD2
	ldr r3, _08000FB0 @ =0x08000AF4
	ldrb r1, [r3, r4]
	ldr r3, _08000FB4 @ =0x08000AF8
	ldrb r3, [r3, r4]
	b _08000DF0
_08000DD2:
	ldr r3, _08000FB8 @ =0x08000AF8
	ldrb r1, [r3, r4]
	ldr r3, _08000FBC @ =0x08000AF4
	ldrb r3, [r3, r4]
	b _08000DF0
_08000DDC:
	movs r3, #2
	tst r4, r3
	beq _08000DEA
	adds r4, #1
	cmp r4, #3
	beq _08000DEA
	movs r4, #7
_08000DEA:
	adds r4, #1
	lsls r1, r4, #3
	lsls r3, r4, #3
_08000DF0:
	mov r4, sb
	lsrs r4, r4, #1
	blo _08000DF8
	subs r5, r5, r1
_08000DF8:
	lsrs r4, r4, #1
	blo _08000DFE
	subs r6, r6, r3
_08000DFE:
	ldr r4, _08000F88 @ =0x00000200
	tst r7, r4
	beq _08000E0C
	lsrs r1, r1, #1
	lsrs r3, r3, #1
	subs r5, r5, r1
	subs r6, r6, r3
_08000E0C:
	ldr r4, _08000FC0 @ =0x000001FF
	ands r5, r4
	lsrs r4, r4, #1
	ldr r3, _08000FC4 @ =0x00008000
	tst r6, r3
	beq _08000E22
	ands r6, r4
	movs r4, #0xa0
	cmp r6, r4
	bhs _08000E24
	b _08000E5E
_08000E22:
	ands r6, r4
_08000E24:
	orrs r7, r6
	lsls r5, r5, #0x10
	orrs r7, r5
	ldrb r5, [r2, #2]
	movs r6, #0xc
	ands r5, r6
	lsrs r6, r6, #1
	rors r5, r6
	eors r7, r5
	str r7, [r0]
	ldrb r7, [r2, #2]
	movs r6, #3
	ands r7, r6
	lsls r7, r7, #8
	add r7, r8
	ldrb r6, [r2, #3]
	add r6, ip
	adds r7, r7, r6
	ldrb r6, [r2, #4]
	lsls r6, r6, #0x19
	blo _08000E5A
	lsrs r6, r6, #0xd
	ldr r3, _08000F9C @ =0x0000F000
	ands r6, r3
	ldr r3, _08000FC8 @ =0x00000FFF
	ands r7, r3
	orrs r7, r6
_08000E5A:
	strh r7, [r0, #4]
	adds r0, #8
_08000E5E:
	pop {r3, r6}
	adds r2, #5
	subs r3, #1
	bne _08000D8C
	pop {r0, r1}
	mov pc, lr
	.align 2, 0

