	.syntax unified
	THUMB_FUNC_START sub_08133E34
sub_08133E34: @ 0X08133E34
	push {r4, r5, lr}
	adds r5, r1, #0
	ldr r4, [r5, #32]
	cmp r4, #0
	beq.n _08133E58
_08133E3E:
	ldrb r1, [r4, #0]
	movs r0, #199
	tst r0, r1
	beq.n _08133E4C
	movs r0, #64
	orrs r1, r0
	strb r1, [r4, #0]
_08133E4C:
	adds r0, r4, #0
	bl sub_08133E14
	ldr r4, [r4, #52]
	cmp r4, #0
	bne.n _08133E3E
_08133E58:
	movs r0, #0
	strb r0, [r5, #0]
	pop {r4, r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
