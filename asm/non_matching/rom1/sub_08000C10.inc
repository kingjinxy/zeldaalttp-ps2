	thumb_func_start sub_08000C10
sub_08000C10: @ 0x08000C10
	push {lr}
	ldrb r2, [r1]
	orrs r2, r2
	beq _08000CFA
	push {r0, r1}
	adds r1, #4
	subs r2, #1
	lsls r2, r2, #2
	adds r2, r2, r1
	subs r3, r2, r1
	lsrs r3, r3, #2
	mov fp, r1
	orrs r3, r3
	beq _08000C82
_08000C2C:
	mov sl, r3
	lsls r3, r3, #2
	eors r6, r6
_08000C32:
	cmp r6, sl
	bhs _08000C7C
	subs r1, r2, r3
	lsls r0, r6, #2
	subs r1, r1, r0
_08000C3C:
	cmp r1, fp
	blo _08000C78
	ldr r4, [r1]
	ldr r5, [r4, #0x34]
	movs r0, #0x5e
	ldrb r0, [r4, r0]
	lsls r0, r0, #0x1e
	orrs r5, r0
	mov r8, r5
	adds r7, r1, r3
_08000C50:
	cmp r2, r7
	blo _08000C70
	ldr r5, [r7]
	ldr r0, [r5, #0x34]
	adds r5, #0x5e
	ldrb r5, [r5]
	lsls r5, r5, #0x1e
	orrs r5, r0
	cmp r8, r5
	bhs _08000C70
	ldr r5, [r7]
	subs r7, r7, r3
	str r5, [r7]
	lsls r0, r3, #1
	adds r7, r7, r0
	b _08000C50
_08000C70:
	subs r7, r7, r3
	str r4, [r7]
	subs r1, r1, r3
	b _08000C3C
_08000C78:
	adds r6, #1
	b _08000C32
_08000C7C:
	mov r3, sl
	lsrs r3, r3, #1
	bne _08000C2C
_08000C82:
	pop {r0, r1}
	eors r3, r3
	ldrb r2, [r1]
	strb r3, [r1]
	adds r1, #4
_08000C8C:
	cmp r2, r3
	beq _08000CFA
	push {r1, r2, r3}
	ldr r1, [r1]
	movs r2, #0x2e
	ldrb r2, [r1, r2]
	orrs r2, r2
	beq _08000CEE
	ldr r3, [r1, #0x38]
	orrs r3, r3
	bne _08000CE4
	push {r0}
	adds r0, r1, #0
	eors r1, r1
	bl sub_08009444
	adds r2, r1, #0
	adds r1, r0, #0
	pop {r0}
	cmp r2, #0x22
	beq _08000CCA
	cmp r2, #0x12
	bne _08000CE4
	ldr r2, _08000F8C @ =0x03000E20
	ldrb r2, [r2]
	movs r3, #0x18
	ands r2, r3
	lsrs r2, r2, #1
	ldr r3, _08000F90 @ =0x08000B9C
	ldr r2, [r3, r2]
	b _08000CDA
_08000CCA:
	ldrh r2, [r1, #0x32]
	ldrh r3, [r1, #0x36]
	eors r2, r3
	movs r3, #3
	ands r2, r3
	lsls r2, r2, #2
	ldr r3, _08000F94 @ =0x08000B8C
	ldr r2, [r3, r2]
_08000CDA:
	bl sub_08000EFC
	bl sub_08000CFC
	b _08000CF2
_08000CE4:
	bl sub_08000CFC
	bl sub_08000E6C
	b _08000CF2
_08000CEE:
	bl sub_08000CFC
_08000CF2:
	pop {r1, r2, r3}
	adds r1, #4
	adds r3, #1
	b _08000C8C
_08000CFA:
	pop {pc}

