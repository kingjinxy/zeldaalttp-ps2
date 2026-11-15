	.syntax unified
	THUMB_FUNC_START sub_08002990
sub_08002990: @ 0X08002990
	ldr r2, [pc, #112]
	ldrb r2, [r2, #0]
	movs r3, #240
	ands r2, r3
	bne.n _080029A6
	ldrb r2, [r1, #13]
	lsrs r2, r2, #8
	bcs.n _080029B0
	ldrb r2, [r1, #17]
	subs r2, #1
	bne.n _080029B0
_080029A6:
	push {r1}
	movs r2, #103
	bl 0x80031ac
	pop {r1}
_080029B0:
	movs r3, #38
	ldrb r2, [r1, r3]
	orrs r2, r2
	beq.n _080029C2
	movs r4, #60
	ldrb r2, [r0, r4]
	movs r5, #128
	orrs r2, r5
	strb r2, [r0, r4]
_080029C2:
	movs r2, #0
	strb r2, [r1, r3]
	movs r2, #2
	b.n _08002474
	.byte 0x00
	.byte 0x00
	.4byte 0x0000f3fb
	.4byte 0x00000133
	.4byte 0x00000176
	.4byte 0x08001661
	.4byte 0x00000158
	.4byte 0x00003fff
	.4byte 0x00008000
	.4byte 0x00004000
	.4byte 0x0000c000
	.4byte 0x00006600
	.4byte 0x0000ffbf
	.4byte 0x08001291
	.4byte 0x00000180
	.4byte 0x03000e20
	.4byte 0x03000bd0
	.syntax unified
	.thumb
