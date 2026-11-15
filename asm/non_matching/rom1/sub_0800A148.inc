	.syntax unified
	THUMB_FUNC_START sub_0800A148
sub_0800A148: @ 0X0800A148
	ldr r3, [pc, #584]
	lsls r2, r2, #2
	adds r2, r2, r3
	push {r4, r5, r6, r7, lr}
	ldr r6, [pc, #580]
	ldrh r3, [r1, #0]
	lsls r7, r3, #19
	lsrs r7, r7, #28
	strb r7, [r0, #8]
	adds r5, r7, #0
	adds r7, #128
	lsls r3, r3, #23
	lsrs r3, r3, #23
	strb r3, [r0, #9]
	cmp r5, #3
	bne.n _0800A17A
	ldr r5, [pc, #560]
_0800A16A:
	adds r5, #2
	ldrh r4, [r5, #0]
	cmp r4, r6
	beq.n _0800A18E
	cmp r3, r4
	bne.n _0800A16A
	movs r6, #0
	b.n _0800A18E
_0800A17A:
	cmp r5, #6
	bne.n _0800A18E
	ldr r5, [pc, #544]
_0800A180:
	adds r5, #2
	ldrh r4, [r5, #0]
	cmp r4, r6
	beq.n _0800A18E
	cmp r3, r4
	bne.n _0800A180
	movs r6, #0
_0800A18E:
	movs r4, #28
	ldrh r3, [r1, #0]
	lsrs r3, r3, #11
	ands r3, r4
	ldrh r4, [r1, #2]
	lsrs r5, r4, #8
	strb r5, [r0, #10]
	strb r4, [r0, #11]
	ldr r4, [pc, #516]
	ldr r3, [r4, r3]
	ldr r4, [pc, #516]
	mov lr, r4
	bx r3
	.syntax unified
	.thumb
