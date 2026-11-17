	.syntax unified
	THUMB_FUNC_START sub_080024AC
sub_080024AC: @ 0X080024AC
	movs r3, #38
	ldrb r2, [r1, r3]
	lsrs r2, r2, #8
	bcc.n sub_08002530
	push {r0, r1}
	push {r0}
	movs r5, #80
	ldrh r5, [r0, r5]
	ldrh r1, [r0, #54]
	adds r1, #3
	strh r1, [r0, #54]
	bl sub_0803CD8C
	adds r1, r0, #0
	movs r0, #128
	adds r2, r5, #0
	bl sub_08008F78
	bl sub_080123E8
	adds r1, r0, #0
	orrs r1, r1
	pop {r0}
	beq.n sub_08002530
	push {r0}
	ldrh r2, [r0, #54]
	subs r2, #3
	strh r2, [r0, #54]
	movs r0, #5
	push {r1}
	bl sub_08012728
	pop {r1}
	pop {r0}
	movs r2, #6
	strb r2, [r1, #8]
	eors r2, r2
	strb r2, [r1, #9]
	movs r2, #1
	strb r2, [r1, #10]
	movs r2, #2
	strb r2, [r1, #11]
	str r0, [r1, #88]
	movs r3, #50
	ldrh r2, [r0, r3]
	strh r2, [r1, r3]
	movs r3, #54
	ldrh r2, [r0, r3]
	strh r2, [r1, r3]
	movs r3, #58
	ldrh r2, [r0, r3]
	strh r2, [r1, r3]
	movs r3, #80
	ldrh r2, [r0, r3]
	strh r2, [r1, r3]
	push {r0, r1}
	adds r2, r1, #0
	adds r1, r0, #0
	adds r0, r2, #0
	bl sub_0804C448
	pop {r0, r1}
	adds r0, r1, #0
	bl sub_08008DD8
	pop {r0, r1}
	.syntax unified
	.thumb
