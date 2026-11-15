	thumb_func_start sub_08007840
sub_08007840: @ 0x08007840
	push {lr}
	push {r0}
	adds r0, r1, #0
	movs r4, #0x2a
	ldrb r4, [r1, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldr r3, _08007A1C @ =0x0800749C
	ldrb r1, [r3, r4]
	adds r4, #1
	ldrb r2, [r3, r4]
	bl sub_080078EC
	pop {r0}
	pop {pc}
	.align 2, 0

