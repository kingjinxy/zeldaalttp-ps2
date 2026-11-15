	thumb_func_start DoPlayerItemEntity
DoPlayerItemEntity: @ 0x080045FC
	mov r3, lr
	push {r3, r4, r5, r6, r7}
	mov r4, r8
	mov r5, sb
	mov r6, sl
	mov r7, fp
	push {r4, r5, r6, r7}
	ldrb r1, [r0, #0x14]
	orrs r1, r1
	beq _08004618
	ldr r1, _0800469C @ =0x03000C00
	ldrb r1, [r1]
	orrs r1, r1
	bne _08004632
_08004618:
	push {r0}
	bl sub_0803E048
	pop {r0}
	bl sub_080015A8
	ldr r2, _080046A0 @ =0x08004244
	ldrb r1, [r0, #0x14]
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	ldr r2, _080046A4 @ =0x08004633
	mov lr, r2
	bx r1
_08004632:
	bl sub_08001D5C
	movs r2, #0x36
	ldrh r2, [r1, r2]
	ldr r3, _080046A8 @ =0x00001000
	tst r2, r3
	bne _08004656
	ldr r2, [r0, #0x38]
	orrs r2, r2
	bne _08004656
	ldrb r1, [r0, #0x14]
	cmp r1, #1
	beq _08004650
	cmp r1, #9
	bne _08004656
_08004650:
	movs r1, #8
	bl sub_08001B68
_08004656:
	bl sub_080013FC
	bl sub_08001D5C
	push {r0}
	bl sub_080156BC
	pop {r0}
	bl sub_08003688
	pop {r4, r5, r6, r7}
	mov r8, r4
	mov sb, r5
	mov sl, r6
	mov fp, r7
	pop {r3, r4, r5, r6, r7}
	bx r3
_08004678:
	.byte 0x5C, 0x01, 0x00, 0x00, 0xA0, 0x42, 0x00, 0x08
	.byte 0x40, 0x01, 0x00, 0x00, 0x98, 0x42, 0x00, 0x08, 0x33, 0x01, 0x00, 0x00, 0xD0, 0x0B, 0x00, 0x03
	.byte 0x80, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00
_0800469C: .4byte 0x03000C00
_080046A0: .4byte 0x08004244
_080046A4: .4byte 0x08004633
_080046A8: .4byte 0x00001000

	.INCBIN "baserom.gba", 0x46AC, 0x74C0-0x46AC

