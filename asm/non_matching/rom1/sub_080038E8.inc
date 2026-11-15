	thumb_func_start sub_080038E8
sub_080038E8: @ 0x080038E8
	adds r0, #0x2b
	ldrb r2, [r0]
	ldr r3, _08003A28 @ =0x0000EE00
	tst r1, r3
	beq _080038F8
	movs r3, #0x20
	subs r3, r3, r2
	adds r2, r3, #0
_080038F8:
	movs r3, #0xee
	tst r1, r3
	beq _08003904
	movs r3, #0x10
	subs r3, r3, r2
	adds r2, r3, #0
_08003904:
	movs r3, #0x1f
	ands r2, r3
	strb r2, [r0]
	mov pc, lr

