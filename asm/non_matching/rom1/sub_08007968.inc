	thumb_func_start sub_08007968
sub_08007968: @ 0x08007968
	push {r0, r4, lr}
	mov r1, sl
	ldr r1, [r1, #0x28]
	push {r1}
	movs r0, #4
	movs r1, #2
	bl sub_080127A8
_08007978:
	adds r1, r0, #0
	orrs r0, r0
	pop {r0}
	beq _080079B6
	ldrb r4, [r1, #0x14]
	subs r4, #1
	bne _080079AA
	movs r4, #0x64
	ldrh r4, [r1, r4]
	orrs r4, r4
	bne _080079AA
	ldrb r4, [r1, #0x1a]
	cmp r4, #6
	beq _080079AA
	movs r4, #0x2a
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08007A30 @ =0x0800749C
	ldrb r2, [r3, r4]
	adds r4, #1
	ldrb r3, [r3, r4]
	bl sub_08003920
	bne _080079B6
_080079AA:
	push {r0}
	adds r0, r1, #0
	movs r1, #2
	bl sub_080127D4
	b _08007978
_080079B6:
	pop {r0, r4, pc}

