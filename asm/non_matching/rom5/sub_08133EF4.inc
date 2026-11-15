	.syntax unified
	THUMB_FUNC_START sub_08133EF4
sub_08133EF4: @ 0X08133EF4
	push {lr}
	ldr r2, [r1, #64]
	ldrb r3, [r2, #0]
	cmp r3, #0
	bne.n _08133F04
	adds r2, #1
	str r2, [r1, #64]
	b.n _08133EA6
_08133F04:
	ldrb r3, [r1, #3]
	adds r3, #1
	strb r3, [r1, #3]
	mov ip, r3
	bl sub_08133E98
	cmp ip, r3
	bcs.n _08133F16
	b.n _08133EA6
_08133F16:
	movs r3, #0
	strb r3, [r1, #3]
	adds r2, #5
	str r2, [r1, #64]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
