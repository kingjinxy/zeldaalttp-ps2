	thumb_func_start sub_08001B70
sub_08001B70: @ 0x08001B70
	push {r0, r4, r5, r6, r7, lr}
	movs r4, #0x50
	ldrh r4, [r0, r4]
	push {r4}
	push {r2, r3}
	push {r0, r1}
	adds r0, r2, #0
	adds r1, r3, #0
	adds r2, r4, #0
	bl sub_08009310
	ldr r1, _08001CC4 @ =0x08002B50
	bl sub_080012D8
	pop {r0, r1}
	beq _08001C84
	ldr r2, _08001CC8 @ =0x08002CC4
	lsls r3, r3, #3
	adds r2, r2, r3
	ldrh r3, [r2]
	movs r4, #1
	lsls r4, r1
	tst r3, r4
	beq _08001C84
	ldrb r5, [r2, #2]
	ldrb r6, [r2, #3]
	ldrb r7, [r2, #5]
	movs r4, #0x80
	tst r5, r4
	bne _08001C26
	cmp r1, #6
	beq _08001C26
	push {r0, r2, r5, r6}
	bl sub_080123E8
	orrs r0, r0
	beq _08001C24
	adds r1, r0, #0
	movs r0, #5
	push {r1}
	bl sub_08012728
	pop {r1}
	pop {r0, r2, r5, r6}
	pop {r3, r4}
	push {r3, r4}
	push {r0, r2, r5, r6}
	movs r2, #6
	strb r2, [r1, #8]
	strb r5, [r1, #9]
	strb r6, [r1, #0xa]
	cmp r5, #0xf
	bne _08001BE8
	ldrb r2, [r0, #8]
	cmp r2, #3
	beq _08001BE8
	cmp r2, #6
	beq _08001BE8
	movs r2, #0x80
	strb r2, [r1, #0xb]
_08001BE8:
	orrs r5, r5
	beq _08001BFE
	lsrs r3, r3, #4
	lsls r3, r3, #4
	adds r3, #8
	strh r3, [r1, #0x32]
	lsrs r4, r4, #4
	lsls r4, r4, #4
	adds r4, #8
	strh r4, [r1, #0x36]
	b _08001C10
_08001BFE:
	movs r3, #0x32
	ldrh r4, [r0, r3]
	strh r4, [r1, r3]
	movs r3, #0x36
	ldrh r4, [r0, r3]
	strh r4, [r1, r3]
	movs r3, #0x3a
	ldrh r4, [r0, r3]
	strh r4, [r1, r3]
_08001C10:
	movs r3, #0x54
	str r0, [r1, r3]
	movs r3, #0x50
	ldrh r2, [r0, r3]
	strh r2, [r1, r3]
	adds r0, r1, #0
	bl sub_08008DD8
	pop {r0, r2, r5, r6}
	b _08001C26
_08001C24:
	pop {r0, r2, r5, r6}
_08001C26:
	adds r4, r2, #0
	pop {r2, r3}
	ldr r1, _08001CCC @ =0x03000450
	ldrh r0, [r1, #0x18]
	subs r2, r2, r0
	lsrs r2, r2, #4
	ldrh r0, [r1, #0x1a]
	subs r3, r3, r0
	lsrs r3, r3, #4
	lsls r3, r3, #6
	adds r2, r2, r3
	ldrh r0, [r4, #6]
	pop {r4}
	ldr r3, _08001CD0 @ =0x00004000
	tst r0, r3
	bne _08001C52
	adds r1, r2, #0
	adds r2, r4, #0
	push {r7}
	bl sub_08014658
	b _08001C7A
_08001C52:
	ldr r3, _08001CD4 @ =0x0000FFFF
	cmp r0, r3
	beq _08001C70
	push {r7}
	push {r2, r5, r6}
	push {r0, r2}
	adds r0, r4, #0
	bl sub_08015DC0
	adds r1, r0, #4
	pop {r0, r2}
	lsls r2, r2, #1
	strh r0, [r1, r2]
	pop {r2, r5, r6}
	b _08001C7A
_08001C70:
	adds r0, r2, #0
	adds r1, r4, #0
	push {r7}
	bl sub_0801478C
_08001C7A:
	adds r1, r5, #0
	adds r2, r6, #0
	pop {r3}
	movs r7, #1
	pop {r0, r4, r5, r6, r7, pc}
_08001C84:
	eors r2, r2
	pop {r2, r3}
	pop {r4}
	pop {r0, r4, r5, r6, r7, pc}
_08001C8C: .4byte 0x08002DBC
_08001C90: .4byte 0x00000100
_08001C94: .4byte 0x08001754
_08001C98: .4byte 0x0800175C
_08001C9C: .4byte sub_08001290
_08001CA0: .4byte 0x08002DBC
_08001CA4: .4byte 0x0800174C
_08001CA8: .4byte 0x08001780
_08001CAC: .4byte 0x080017B0
_08001CB0: .4byte 0x03000468
_08001CB4: .4byte 0x0300046A
_08001CB8: .4byte 0x000003F0
_08001CBC: .4byte 0x080092A0
_08001CC0: .4byte 0x0800174C
_08001CC4: .4byte 0x08002B50
_08001CC8: .4byte 0x08002CC4
_08001CCC: .4byte 0x03000450
_08001CD0: .4byte 0x00004000
_08001CD4: .4byte 0x0000FFFF

	.INCBIN "baserom.gba", 0x1CD8, 0x1D5C-0x1CD8

