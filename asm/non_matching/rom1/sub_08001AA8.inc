	thumb_func_start sub_08001AA8
sub_08001AA8: @ 0x08001AA8
	push {lr}
	push {r0, r1}
	ldr r2, _08001CB8 @ =0x000003F0
	ands r0, r2
	ands r1, r2
	lsrs r0, r0, #4
	lsls r1, r1, #2
	adds r0, r0, r1
	mov r2, r8
	movs r3, #0x50
	ldrh r3, [r2, r3]
	lsrs r3, r3, #0xe
	lsls r3, r3, #2
	ldr r1, _08001CBC @ =0x080092A0
	ldr r1, [r1, r3]
	ldrb r2, [r0, r1]
	push {r0, r1, r2}
	mov r0, r8
	bl sub_08001D5C
	movs r2, #0x26
	ldrb r2, [r1, r2]
	orrs r2, r2
	pop {r0, r1, r2}
	pop {r0, r1}
	beq _08001AE4
	cmp r2, #0x10
	bhs _08001AFC
_08001AE0:
	movs r2, #0xf
	b _08001AEC
_08001AE4:
	cmp r2, #0x24
	beq _08001AE0
	cmp r2, #0x10
	bhs _08001AFC
_08001AEC:
	movs r3, #8
	tst r1, r3
	bne _08001AF4
	lsrs r2, r2, #2
_08001AF4:
	tst r0, r3
	bne _08001B38
	lsrs r2, r2, #1
	b _08001B38
_08001AFC:
	cmp r2, #0xff
	beq _08001B38
	push {r4}
	subs r2, #0x10
	lsls r2, r2, #1
	mov r3, fp
	ldrh r2, [r2, r3]
	movs r4, #0xf
	ands r4, r0
	cmp r4, #4
	blo _08001B20
	lsrs r2, r2, #1
	cmp r4, #8
	blo _08001B20
	lsrs r2, r2, #1
	cmp r4, #0xc
	blo _08001B20
	lsrs r2, r2, #1
_08001B20:
	movs r4, #0xf
	ands r4, r1
	cmp r4, #4
	blo _08001B36
	lsrs r2, r2, #4
	cmp r4, #8
	blo _08001B36
	lsrs r2, r2, #4
	cmp r4, #0xc
	blo _08001B36
	lsrs r2, r2, #4
_08001B36:
	pop {r4}
_08001B38:
	movs r3, #1
	ands r2, r3
	pop {pc}
	.align 2, 0

