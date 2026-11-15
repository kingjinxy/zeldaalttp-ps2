	thumb_func_start sub_08001468
sub_08001468: @ 0x08001468
	push {lr}
	push {r4}
	ldr r2, _0800170C @ =0x080071A8
	ldrb r3, [r0, #0xa]
	lsls r3, r3, #2
	ldr r2, [r2, r3]
	eors r3, r3
	mov r8, r3
	movs r3, #4
_0800147A:
	ldrb r4, [r2, #0xf]
	cmp r8, r4
	bhs _08001486
	mov r8, r4
	ldrh r4, [r2, #0x10]
	mov sb, r4
_08001486:
	adds r2, #0x1c
	subs r3, #1
	bne _0800147A
	pop {r4}
	movs r3, #0xe
	adds r3, r3, r1
	ldrb r3, [r3]
	cmp r3, r8
	bhs _080014A2
	mov r3, sb
	strh r3, [r1, #8]
	lsrs r3, r3, #8
	strb r3, [r0, #0x1b]
	pop {pc}
_080014A2:
	movs r3, #0x26
	ldrb r3, [r1, r3]
	orrs r3, r3
	beq _080014B4
	lsrs r3, r3, #8
	blo _080014C0
	ldr r2, _08001710 @ =0x000001AC
	strh r2, [r1, #8]
	b _080014C0
_080014B4:
	movs r2, #4
	ldrh r3, [r1, #8]
	cmp r2, r3
	bne _080014C0
	bl sub_080014C4
_080014C0:
	pop {pc}
	.align 2, 0

