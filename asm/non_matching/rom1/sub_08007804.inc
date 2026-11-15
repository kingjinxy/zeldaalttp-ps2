	thumb_func_start sub_08007804
sub_08007804: @ 0x08007804
	push {r0, r4, lr}
	adds r0, r1, #0
	ldr r1, _08007A10 @ =0x03000838
	ldrb r3, [r1]
	ldr r2, _08007A14 @ =0x03006830
_0800780E:
	orrs r3, r3
	beq _0800783E
	ldr r1, [r2]
	orrs r1, r1
	beq _08007832
	push {r0, r1, r2, r3}
	movs r4, #0x2a
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08007A18 @ =0x0800749C
	ldrb r2, [r3, r4]
	adds r4, #1
	ldrb r3, [r3, r4]
	bl sub_080035B4
	pop {r0, r1, r2, r3}
	bne _08007838
_08007832:
	adds r2, #4
	subs r3, #1
	b _0800780E
_08007838:
	eors r3, r3
	ldr r3, [r2]
	movs r0, #1
_0800783E:
	pop {r0, r4, pc}

