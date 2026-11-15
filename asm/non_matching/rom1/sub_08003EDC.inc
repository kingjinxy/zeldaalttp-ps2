	thumb_func_start sub_08003EDC
sub_08003EDC: @ 0x08003EDC
	lsls r0, r0, #4
	lsls r2, r0, #0xc
	movs r4, r0
	movs r0, r0
	lsls r0, r1, #0x1c
	lsls r6, r0, #0x14
	movs r4, r0
	movs r0, r0
	lsrs r0, r2, #0x1c
	lsrs r6, r1, #0x14
	movs r4, r1
	movs r0, r0
	lsrs r0, r1, #4
	lsrs r2, r1, #0xc
	movs r4, r1
	movs r0, r0
	@subs r0, #4
    .byte 0x00, 0x1F
	adds r6, r3, #4
	movs r4, r3
	movs r0, r0
	adds r0, r3, r4
	subs r2, r3, r4
	movs r4, r3
	movs r0, r0
	asrs r0, r2, #4
	asrs r2, r2, #0xc
	movs r4, r2
	movs r0, r0
	asrs r0, r3, #0x1c
	asrs r6, r2, #0x14
	movs r4, r2
	movs r0, r0
	ldr r2, [r0, #0x38]
	ldr r3, [r0, #0x10]
	subs r2, r2, r3
	bpl _08003F2E
	str r2, [r0, #0x38]
	subs r3, r3, r1
	str r3, [r0, #0x10]
	movs r0, #2
	mov pc, lr
_08003F2E:
	movs r2, #0
	str r2, [r0, #0x38]
	subs r3, r3, r1
	rsbs r3, r3, #0
	lsrs r3, r3, #1
	lsrs r1, r3, #2
	adds r3, r3, r1
	lsrs r1, r3, #0xc
	cmp r1, #0xc
	bhs _08003F46
	subs r2, #1
	movs r3, #0
_08003F46:
	str r3, [r0, #0x10]
	adds r0, r2, #1
	mov pc, lr

