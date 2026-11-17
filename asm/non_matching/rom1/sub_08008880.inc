	.syntax unified
	THUMB_FUNC_START sub_08008880
sub_08008880: @ 0X08008880
	ldrb r1, [r0, #28]
	movs r2, #3
	ands r1, r2
	beq.n _080088B2
	movs r3, #11
	ldrb r2, [r0, r3]
	cmp r2, #35
	beq.n _08008894
	bl GetNextFrame
_08008894:
	ldrb r1, [r0, #24]
	subs r1, #1
	strb r1, [r0, #24]
	movs r2, #15
	ands r1, r2
	bne.n _080088A6
	movs r2, #1
	bl sub_080031AC
_080088A6:
	bl sub_08003688
	push {r0}
	bl sub_0803F0E4
	pop {r0}
_080088B2:
	pop {r4, pc}
	.4byte _080088C4+1
	.4byte sub_08008940+1
	.4byte _080089F4+1
	.4byte _08008A7C+1
_080088C4:
	push {lr}
	ldrb r1, [r0, #20]
	adds r1, #1
	strb r1, [r0, #20]
	movs r1, #9
	strb r1, [r0, #27]
	ldr r1, [pc, #556]
	str r1, [r0, #12]
	movs r1, #30
	strb r1, [r0, #23]
	ldr r1, [pc, #552]
	str r1, [r0, #72]
	movs r2, #3
	movs r1, #68
	strb r2, [r0, r1]
	movs r2, #10
	movs r1, #70
	strb r2, [r0, r1]
	movs r3, #20
	movs r2, #64
	strb r3, [r0, r2]
	movs r3, #4
	movs r2, #63
	strb r3, [r0, r2]
	bl sub_08001D5C
	str r0, [r1, #44]
	movs r3, #43
	movs r2, #13
	ldrsb r2, [r1, r2]
	ldr r1, [r1, #40]
	str r1, [r0, #84]
	orrs r2, r2
	bpl.n _0800890E
	movs r2, #42
	ldrb r2, [r1, r2]
	lsls r2, r2, #2
_0800890E:
	strb r2, [r0, r3]
	movs r2, #35
	movs r3, #11
	strb r3, [r0, r2]
	movs r2, #80
	ldrh r3, [r1, r2]
	strh r3, [r0, r2]
	ldr r2, [pc, #488]
	ands r3, r2
	ldr r2, [pc, #488]
	cmp r2, r3
	bne.n _0800892A
	movs r3, #1
	strb r3, [r0, #11]
_0800892A:
	eors r3, r3
	strb r3, [r0, #30]
	bl sub_0800238C
	push {r0}
	bl sub_080005F0
	pop {r0}
	bl sub_08008940
	pop {pc}
	.syntax unified
	.thumb
