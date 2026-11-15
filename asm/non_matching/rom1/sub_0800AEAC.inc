	.syntax unified
	THUMB_FUNC_START sub_0800AEAC
sub_0800AEAC: @ 0X0800AEAC
	mov r3, lr
	push {r3, r4}
	adds r4, r0, #0
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne.n _0800AF44
	movs r1, #1
	strb r1, [r0, #20]
	movs r1, #64
	str r1, [r0, #12]
	ldrb r1, [r0, #10]
	cmp r1, #21
	beq.n _0800AED0
	ldrb r1, [r0, #28]
	movs r2, #252
	ands r1, r2
	adds r1, #1
	strb r1, [r0, #28]
_0800AED0:
	movs r1, #80
	ldrh r1, [r0, r1]
	lsrs r1, r1, #14
	bne.n _0800AEDC
	bl 0x8008d90
_0800AEDC:
	adds r0, r4, #0
	ldrb r1, [r0, #10]
	bl 0x8003870
	ldrb r1, [r4, #10]
	lsls r1, r1, #1
	ldr r0, [pc, #384]
	ldrh r0, [r0, r1]
	cmp r0, #0
	beq.n _0800AEFC
	ldrb r1, [r4, #11]
	movs r2, #64
	tst r1, r2
	bne.n _0800AEFC
	bl 0x8003dfc
_0800AEFC:
	ldrb r1, [r4, #11]
	movs r2, #32
	tst r1, r2
	.syntax unified
	.thumb
