	thumb_func_start sub_08003840
sub_08003840: @ 0x08003840
	push {lr}
	push {r2}
	bl sub_08003870
	pop {r2}
	movs r1, #0x21
	ldrb r1, [r0, r1]
	cmp r1, #0xff
	beq _0800386E
	lsls r2, r2, #2
	ldr r1, _08003A14 @ =0x080034E8
	ldr r1, [r1, r2]
	ldr r3, _08003A18 @ =0x080034F8
	ldr r2, [r3, r2]
	movs r3, #0x21
	ldrb r3, [r0, r3]
	lsls r3, r3, #2
	adds r2, r2, r3
	ldrh r3, [r2]
	orrs r3, r3
	beq _0800386E
	bl sub_080038B8
_0800386E:
	pop {pc}

