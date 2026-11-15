	thumb_func_start sub_08001328
sub_08001328: @ 0x08001328
	push {lr}
	bl sub_08001D5C
	movs r2, #0x42
	ldrsb r2, [r0, r2]
	orrs r2, r2
	beq _080013CC
	ldrb r3, [r1, #7]
	lsrs r3, r3, #8
	bhs _080013C6
	movs r3, #0x26
	ldrb r3, [r1, r3]
	orrs r3, r3
	beq _0800134C
	movs r4, #0xf
	ands r3, r4
	subs r3, #1
	bne _080013C6
_0800134C:
	ldrb r3, [r0, #0x14]
	cmp r3, #3
	beq _080013C6
	ldr r4, _080016FC @ =0xFFFFFFFF
	lsls r2, r2, #1
	bhs _0800137E
	movs r4, #1
	cmp r3, #0xb
	beq _080013C6
	ldrb r2, [r1, #0x1e]
	orrs r2, r2
	bne _080013C6
	ldrb r2, [r1, #5]
	orrs r2, r2
	beq _0800136E
	cmp r2, #4
	blo _080013C6
_0800136E:
	ldrb r2, [r1, #0xf]
	movs r3, #0x40
	tst r2, r3
	bne _080013C6
	movs r2, #2
	ldrsb r2, [r1, r2]
	orrs r2, r2
	bne _080013C6
_0800137E:
	movs r2, #0x42
	ldrb r3, [r0, r2]
	subs r3, r3, r4
	strb r3, [r0, r2]
	beq _080013C6
	ldrb r2, [r1, #7]
	movs r3, #0xdf
	ands r2, r3
	strb r2, [r1, #7]
	movs r3, #0x3d
	ldrsb r3, [r0, r3]
	orrs r3, r3
	beq _080013B6
	bmi _080013B6
	movs r3, #0x26
	ldrb r3, [r1, r3]
	orrs r3, r3
	bne _080013B6
	ldrb r3, [r0, #0x14]
	cmp r3, #9
	beq _080013B6
	ldrb r3, [r1, #2]
	orrs r3, r3
	bne _080013B6
	bl sub_080076C4
	movs r2, #0x14
	strh r2, [r1, #8]
_080013B6:
	push {r0}
	movs r1, #0x3e
	ldrb r2, [r0, r1]
	ldr r1, _08001700 @ =0x00000280
	bl sub_08003010
	pop {r0}
	b _080013CC
_080013C6:
	movs r1, #0x42
	eors r2, r2
	strb r2, [r0, r1]
_080013CC:
	pop {pc}
	.align 2, 0

