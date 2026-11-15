	thumb_func_start sub_08003960
sub_08003960: @ 0x08003960
	movs r3, #0x2a
	ldrb r1, [r0, r3]
	push {r4}
	ldrh r2, [r0, #0x32]
	ldr r4, _08003A2C @ =0x03000468
	ldrh r3, [r4]
	subs r2, r2, r3
	ldrh r3, [r0, #0x36]
	ldrh r4, [r4, #2]
	subs r3, r3, r4
	ldr r4, _08003A00 @ =0x000003F0
	ands r2, r4
	ands r3, r4
	lsrs r2, r2, #3
	lsls r3, r3, #3
	adds r2, r2, r3
	pop {r4}
	movs r0, r0
	push {r4}
	adds r4, r1, #0
	movs r3, #3
	tst r4, r3
	beq _08003998
	movs r3, #2
	lsrs r4, r4, #3
	blo _08003996
	rsbs r3, r3, #0
_08003996:
	adds r2, r2, r3
_08003998:
	adds r4, r1, #0
	movs r3, #3
	ands r4, r3
	cmp r4, #2
	beq _080039AE
	movs r3, #0x80
	adds r1, #1
	lsrs r1, r1, #3
	bhs _080039AC
	rsbs r3, r3, #0
_080039AC:
	adds r2, r2, r3
_080039AE:
	ldr r3, _08003A30 @ =0x00001FFF
	ands r2, r3
	movs r4, #0x50
	ldrh r4, [r0, r4]
	lsrs r4, r4, #0xe
	lsls r4, r4, #3
	ldr r3, _08003A34 @ =0x08009280
	adds r3, r3, r4
	ldr r4, [r3]
	ldrh r1, [r4, r2]
	ldr r4, _08003A38 @ =0x00004000
	tst r1, r4
	bne _080039D0
	lsls r1, r1, #0x11
	lsrs r1, r1, #0x10
	ldr r4, [r3, #4]
	ldrh r1, [r4, r1]
_080039D0:
	pop {r4}
	mov pc, lr

