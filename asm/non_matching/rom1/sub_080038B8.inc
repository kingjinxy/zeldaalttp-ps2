	thumb_func_start sub_080038B8
sub_080038B8: @ 0x080038B8
	push {lr}
	push {r0, r4}
	ldrb r3, [r0, #0x1c]
	movs r4, #0xc0
	ands r3, r4
	lsls r3, r3, #2
	movs r4, #0x20
	ldrb r0, [r0, r4]
	adds r0, r0, r3
	lsls r0, r0, #5
	ldr r3, _08003A20 @ =0x06010000
	adds r0, r0, r3
	ldr r3, _08003A24 @ =0x0844DD74
	adds r1, r1, r3
	movs r3, #2
	ldrh r3, [r2, r3]
	lsls r3, r3, #5
	adds r1, r1, r3
	ldrh r2, [r2]
	lsls r2, r2, #5
	bl sub_080009F4
	pop {r0, r4}
	pop {pc}

