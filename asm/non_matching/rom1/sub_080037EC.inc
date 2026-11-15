	thumb_func_start sub_080037EC
sub_080037EC: @ 0x080037EC
	push {lr}
	push {r1}
	bl GetNextFrame
	movs r2, #0x21
	ldrb r3, [r0, r2]
	movs r2, #0x22
	ldrb r1, [r0, r2]
	cmp r1, r3
	pop {r1}
	beq _08003826
	cmp r3, #0xff
	beq _08003826
	strb r3, [r0, r2]
	lsls r1, r1, #2
	ldr r3, _08003A0C @ =0x080034E8
	ldr r3, [r1, r3]
	ldr r2, _08003A10 @ =0x080034F8
	ldr r2, [r1, r2]
	adds r1, r3, #0
	movs r3, #0x21
	ldrb r3, [r0, r3]
	lsls r3, r3, #2
	adds r2, r2, r3
	ldrh r3, [r2]
	orrs r3, r3
	beq _08003826
	bl sub_080038B8
_08003826:
	pop {pc}

