	thumb_func_start sub_08003594
sub_08003594: @ 0x08003594
	adds r0, #0x10
	ldr r2, [r0, #0x28]
	ldr r3, [r0]
	subs r2, r2, r3
	str r2, [r0, #0x28]
	lsls r2, r2, #1
	blo _080035AA
	subs r3, r3, r1
	str r3, [r0]
	ldr r0, [r0, #0x28]
	mov pc, lr
_080035AA:
	movs r1, #0
	str r1, [r0]
	str r1, [r0, #0x28]
	adds r0, r1, #0
	mov pc, lr

