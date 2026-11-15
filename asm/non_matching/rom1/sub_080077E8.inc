	thumb_func_start sub_080077E8
sub_080077E8: @ 0x080077E8
	push {r0, r1, r2, r4, lr}
	adds r0, r1, #0
	adds r1, r2, #0
	movs r4, #0x2a
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08007A0C @ =0x0800749C
	ldrb r2, [r3, r4]
	adds r4, #1
	ldrb r3, [r3, r4]
	bl sub_080035B4
	pop {r0, r1, r2, r4, pc}

