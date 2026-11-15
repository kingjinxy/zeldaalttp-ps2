	thumb_func_start sub_08002200
sub_08002200: @ 0x08002200
	push {lr}
	bl sub_08001D5C
	adds r1, #0x40
	ldr r2, [r1]
	movs r4, #0x10
_0800220C:
	push {r1, r2}
	ldr r1, _080023F4 @ =0x7FFFFFFF
	cmp r1, r2
	beq _08002232
	adds r1, r2, #0
	lsls r1, r1, #0x10
	lsrs r1, r1, #0x10
	adds r3, r2, #0
	lsrs r3, r3, #0x10
	bl sub_080094B0
	cmp r1, #0xf
	bne _0800223E
	pop {r1, r2}
	subs r4, #1
	beq _08002232
	adds r1, #4
	ldr r2, [r1]
	b _0800220C
_08002232:
	push {r0}
	bl sub_0803F638
	pop {r0}
	pop {r1, r2}
	b _0800227C
_0800223E:
	pop {r1, r2}
	adds r1, r2, #0
	lsrs r1, r1, #0x10
	movs r4, #0x50
	ldrh r3, [r0, r4]
	lsls r3, r3, #0x12
	lsrs r3, r3, #0x12
	orrs r1, r3
	strh r1, [r0, r4]
	movs r3, #0x3f
	ands r3, r2
	lsls r3, r3, #4
	adds r3, #8
	strh r3, [r0, #0x32]
	ldr r3, _080023F8 @ =0x00000FC0
	ands r3, r2
	lsrs r3, r3, #2
	adds r3, #6
	strh r3, [r0, #0x36]
	ldrh r2, [r0, #0x32]
	ldr r3, _080023FC @ =0x03000468
	ldrh r3, [r3]
	adds r2, r2, r3
	lsls r2, r2, #0x10
	str r2, [r0, #0x30]
	ldrh r2, [r0, #0x36]
	ldr r3, _08002400 @ =0x0300046A
	ldrh r3, [r3]
	adds r2, r2, r3
	lsls r2, r2, #0x10
	str r2, [r0, #0x34]
_0800227C:
	movs r2, #0x3c
	ldrb r3, [r0, r2]
	movs r1, #0x80
	orrs r3, r1
	strb r3, [r0, r2]
	eors r2, r2
	str r2, [r0, #0x10]
	str r2, [r0, #0x38]
	bl sub_08008DD8
	pop {pc}
	.align 2, 0

