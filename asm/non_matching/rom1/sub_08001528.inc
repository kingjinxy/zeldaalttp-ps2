	thumb_func_start sub_08001528
sub_08001528: @ 0x08001528
	push {lr}
	push {r0}
	push {r1}
	movs r1, #0
	movs r2, #3
	ldrh r3, [r0, #0x32]
	adds r1, r1, r3
	ldrh r3, [r0, #0x36]
	adds r2, r2, r3
	ldr r3, _0800171C @ =0x000003F0
	ands r1, r3
	ands r2, r3
	lsrs r1, r1, #4
	lsls r2, r2, #2
	adds r2, r2, r1
	lsls r2, r2, #1
	push {r2}
	movs r1, #0
	movs r2, #3
	bl sub_080093F8
	ldr r3, _08001720 @ =0x00004000
	tst r1, r3
	bne _0800155A
	adds r3, r1, #0
_0800155A:
	pop {r2}
	pop {r1}
	movs r4, #0x22
	ldrh r4, [r1, r4]
	push {r4}
	cmp r2, r4
	bne _0800156E
	ldrh r4, [r1, #0x24]
	cmp r3, r4
	beq _08001578
_0800156E:
	movs r4, #0x22
	strh r2, [r1, r4]
	strh r3, [r1, #0x24]
	eors r4, r4
	strb r4, [r1, #0x11]
_08001578:
	ldrb r4, [r1, #0x11]
	adds r4, #1
	strb r4, [r1, #0x11]
	ldrb r4, [r1, #0x12]
	strb r4, [r1, #0x13]
	push {r1}
	movs r1, #0
	movs r2, #3
	bl sub_08009444
	adds r0, r1, #0
	ldr r1, _08001720 @ =0x00004000
	tst r0, r1
	beq _08001598
	movs r3, #0x30
	b _0800159E
_08001598:
	ldr r1, _08001724 @ =0x08001010
	bl sub_080012D8
_0800159E:
	pop {r1}
	pop {r2}
	pop {r0}
	pop {pc}
	.align 2, 0

