	thumb_func_start sub_08001660
sub_08001660: @ 0x08001660
	ldrh r2, [r1, #0x36]
	ldr r3, _0800173C @ =0x00000200
	orrs r2, r3
	strh r2, [r1, #0x36]
	bl sub_080012A4
	eors r2, r2
	movs r3, #0x42
	strb r2, [r0, r3]
	ldrb r2, [r0, #0x14]
	cmp r2, #3
	bne _0800167A
	pop {pc}
_0800167A:
	ldrb r2, [r1, #0x11]
	cmp r2, #0xb
	blo _08001684
	bl sub_0800125C
_08001684:
	adds r4, r0, #0
	movs r3, #3
	ands r2, r3
	beq _08001692
	subs r2, #1
	beq _080016A6
	pop {pc}
_08001692:
	adds r4, #0x36
	ldrh r2, [r4]
	adds r2, #3
	ldr r3, _08001740 @ =0x0000FFF0
	ands r3, r2
	adds r3, #8
	ldrh r2, [r4]
	subs r3, r3, r2
	blo _080016C0
	b _080016B6
_080016A6:
	adds r4, #0x32
	ldrh r2, [r4]
	ldr r3, _08001740 @ =0x0000FFF0
	ands r3, r2
	adds r3, #8
	ldrh r2, [r4]
	subs r3, r3, r2
	blo _080016C0
_080016B6:
	subs r4, #2
	ldr r2, [r4]
	ldr r3, _08001744 @ =0x00012800
	adds r2, r2, r3
	b _080016C8
_080016C0:
	subs r4, #2
	ldr r2, [r4]
	ldr r3, _08001744 @ =0x00012800
	subs r2, r2, r3
_080016C8:
	str r2, [r4]
	ldrh r2, [r0, #0x32]
	movs r3, #0xf
	ands r2, r3
	subs r2, #7
	cmp r2, #3
	bhs _080016F6
	ldrh r2, [r0, #0x36]
	movs r3, #0xf
	ands r2, r3
	subs r2, #7
	cmp r2, #3
	bhs _080016F6
	ldrh r2, [r1, #0x36]
	movs r3, #0x80
	ands r2, r3
	bne _080016EE
	bl sub_080076C4
_080016EE:
	movs r2, #3
	pop {r3}
	ldr r3, _08001748 @ =sub_08001290
	bx r3
_080016F6:
	pop {pc}
	.align 2, 0
_080016F8: .4byte 0x0000FEFE
_080016FC: .4byte 0xFFFFFFFF
_08001700: .4byte 0x00000280
_08001704: .4byte 0x0800100C
_08001708: .4byte 0x03000510
_0800170C: .4byte 0x080071A8
_08001710: .4byte 0x000001AC
_08001714: .4byte 0x00000230
_08001718: .4byte 0x0800110C
_0800171C: .4byte 0x000003F0
_08001720: .4byte 0x00004000
_08001724: .4byte 0x08001010
_08001728: .4byte 0x03000510
_0800172C: .4byte 0x080011C0
_08001730: .4byte 0x00000400
_08001734: .4byte 0x080011D0
_08001738: .4byte 0x080011D8
_0800173C: .4byte 0x00000200
_08001740: .4byte 0x0000FFF0
_08001744: .4byte 0x00012800
_08001748: .4byte sub_08001290

	.INCBIN "baserom.gba", 0x174C, 0x17FA-0x174C

_080017FA:
	pop {pc}

