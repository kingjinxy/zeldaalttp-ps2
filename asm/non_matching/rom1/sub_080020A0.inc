	thumb_func_start sub_080020A0
sub_080020A0: @ 0x080020A0
	push {r4, r5, lr}
	bl sub_08001D5C
	ldrb r2, [r1, #0x12]
	cmp r2, #4
	beq _080020C6
	ldrb r2, [r1, #0xd]
	cmp r2, #0xff
	beq _080020C6
	lsls r2, r2, #4
	ldr r3, _08002198 @ =0x0813E4CC
	ldrsh r4, [r3, r2]
	adds r3, #0x80
	ldrsh r5, [r3, r2]
	rsbs r5, r5, #0
	movs r2, #0x8c
	strh r4, [r1, r2]
	movs r2, #0x8e
	strh r5, [r1, r2]
_080020C6:
	pop {r4, r5, pc}

