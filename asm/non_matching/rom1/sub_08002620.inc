	.syntax unified
	THUMB_FUNC_START sub_08002620
sub_08002620: @ 0X08002620
	ldrb r3, [r1, #19]
	ldrb r4, [r1, #18]
	cmp r3, r4
	bne.n _08002632
	ldrh r3, [r1, #34]
	cmp r2, r3
	beq.n _08002632
	movs r3, #14
	strb r3, [r1, #17]
_08002632:
	bl _08002424
	bl sub_080025F4
	ldr r2, [pc, #916]
	str r2, [r0, #12]
	ldrb r2, [r0, #20]
	cmp r2, #9
	beq.n _0800264C
	cmp r2, #11
	beq.n _0800264C
	cmp r2, #1
	bne.n sub_08002618
_0800264C:
	ldrb r2, [r1, #20]
	orrs r2, r2
	bne.n sub_08002618
	ldrh r2, [r1, #36]
	ldr r3, [pc, #892]
	subs r2, r2, r3
	ldrb r3, [r0, #10]
	cmp r2, r3
	beq.n sub_08002618
	movs r0, r0
	eors r2, r2
	strb r2, [r1, #30]
	ldr r2, [pc, #880]
	bx r2
	.syntax unified
	.thumb
