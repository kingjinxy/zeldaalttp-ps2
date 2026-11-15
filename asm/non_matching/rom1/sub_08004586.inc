	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08004586
sub_08004586: @ 0X08004586
	ldrb r3, [r0, r3]
	lsrs r3, r3, #1
	lsls r3, r3, #3
	movs r2, #43
	strb r3, [r0, r2]
_08004590:
	ldrb r2, [r1, #7]
	eors r4, r4
	orrs r3, r2
	movs r2, #128
	tst r3, r2
	bne.n _080045C6
	ldrb r2, [r1, #10]
	orrs r2, r2
	beq.n _080045AC
	movs r3, #16
	tst r2, r3
	beq.n _080045C6
	movs r4, #1
	b.n _080045C6
_080045AC:
	movs r4, #1
	ldrb r2, [r1, #15]
	movs r3, #64
	tst r2, r3
	bne.n _080045C6
	ldrb r2, [r1, #18]
	cmp r2, #108
	beq.n _080045C6
	movs r2, #66
	ldrb r2, [r0, r2]
	orrs r2, r2
	bne.n _080045C6
	movs r4, #3
_080045C6:
	adds r1, r4, #0
	bl sub_080042A8
	bl 0x8009490
	cmp r1, #15
	bne.n _080045DE
	movs r3, #30
	movs r2, #61
	strb r3, [r0, r2]
	bl 0x8002200
_080045DE:
	bl 0x8001d5c
	movs r2, #66
	ldrb r2, [r0, r2]
	orrs r2, r2
	bne.n _080045F8
	ldrb r2, [r1, #11]
	orrs r2, r2
	bne.n _080045F8
	push {r0}
	bl 0x803d134
	pop {r0}
_080045F8:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb

