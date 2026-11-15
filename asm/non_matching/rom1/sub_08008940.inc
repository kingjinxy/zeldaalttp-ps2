	.syntax unified
	THUMB_FUNC_START sub_08008940
sub_08008940: @ 0X08008940
	push {r4, lr}
	bl 0x8001d5c
	ldrb r2, [r1, #4]
	orrs r2, r2
	beq.n _08008964
	movs r3, #8
	tst r2, r3
	bne.n _08008964
	ldrh r2, [r1, #26]
	orrs r2, r2
	bne.n _08008964
	ldr r2, [r1, #40]
	ldrb r2, [r2, #20]
	cmp r2, #1
	beq.n _0800897A
	cmp r2, #19
	beq.n _0800897A
_08008964:
	eors r2, r2
	str r2, [r1, #44]
	push {r0}
	bl 0x8000620
	pop {r0}
	push {r0}
	bl 0x8012540
	pop {r0}
	pop {r4, pc}
_0800897A:
	ldr r1, [r0, #84]
	movs r2, #41
	ldrb r2, [r1, r2]
	lsrs r2, r2, #1
	bcc.n _080089DA
	ldr r3, [r1, #28]
	str r3, [r0, #28]
	movs r2, #60
	ldrb r3, [r1, r2]
	adds r3, #1
	strb r3, [r0, r2]
	movs r2, #92
	ldrb r3, [r1, r2]
	strb r3, [r0, r2]
	movs r2, #42
	ldrb r2, [r1, r2]
	lsrs r2, r2, #1
	lsls r2, r2, #2
	ldr r1, [pc, #368]
	ldrsh r3, [r1, r2]
	ldrh r4, [r0, #50]
	adds r3, r3, r4
	strh r3, [r0, #50]
	adds r2, #2
	ldrsh r3, [r1, r2]
	ldrh r4, [r0, #54]
	adds r3, r3, r4
	strh r3, [r0, #54]
	ldr r1, [r0, #28]
	ldr r2, [pc, #348]
	ands r1, r2
	movs r2, #193
	orrs r1, r2
	str r1, [r0, #28]
	movs r1, #212
	movs r2, #32
	strb r1, [r0, r2]
	ldrb r1, [r0, #20]
	adds r1, #1
	strb r1, [r0, #20]
	eors r1, r1
	bl 0x8003870
	bl 0x8001d5c
	eors r2, r2
	str r2, [r1, #44]
	pop {r4, pc}
_080089DA:
	movs r3, #33
	strb r2, [r0, r3]
	movs r3, #40
	strb r2, [r0, r3]
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.byte 0xf8
	.byte 0xff
	.byte 0x08
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x08
	.byte 0x00
	.byte 0xf8
	.byte 0xff
	.byte 0x00
	.byte 0x00
_080089F4:
	push {r4, lr}
	bl sub_08008AD0
	push {r0}
	bl 0x803cc20
	pop {r0}
	.syntax unified
	.thumb
