	thumb_func_start sub_0800375C
sub_0800375C: @ 0x0800375C
	push {r4, lr}
	movs r0, r0
	push {r2, r3}
	ldr r4, _08003A00 @ =0x000003F0
	ands r2, r4
	ands r3, r4
	lsrs r2, r2, #4
	lsls r3, r3, #2
	adds r2, r2, r3
	movs r3, #0x50
	ldrh r3, [r0, r3]
	lsrs r3, r3, #0xe
	lsls r3, r3, #2
	ldr r4, _08003A04 @ =0x080092A0
	ldr r3, [r4, r3]
	ldrb r4, [r3, r2]
	pop {r2, r3}
	cmp r4, #0x10
	bhs _08003790
	lsrs r3, r3, #4
	bhs _08003788
	lsrs r4, r4, #2
_08003788:
	lsrs r2, r2, #4
	bhs _080037C6
	lsrs r4, r4, #1
	b _080037C6
_08003790:
	cmp r4, #0xff
	beq _080037C6
	subs r4, #0x10
	lsls r4, r4, #1
	ldrh r4, [r1, r4]
	movs r1, #0xf
	ands r1, r2
	cmp r1, #4
	blo _080037B0
	lsrs r4, r4, #1
	cmp r1, #8
	blo _080037B0
	lsrs r4, r4, #1
	cmp r1, #0xc
	blo _080037B0
	lsrs r4, r4, #1
_080037B0:
	movs r1, #0xf
	ands r1, r3
	cmp r1, #4
	blo _080037C6
	lsrs r4, r4, #4
	cmp r1, #8
	blo _080037C6
	lsrs r4, r4, #4
	cmp r1, #0xc
	blo _080037C6
	lsrs r4, r4, #4
_080037C6:
	movs r2, #1
	ands r2, r4
	pop {r4, pc}

