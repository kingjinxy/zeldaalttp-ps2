	.syntax unified
	THUMB_FUNC_START sub_08002860
sub_08002860: @ 0X08002860
	ldrb r2, [r1, #30]
	orrs r2, r2
	bne.n _080028AA
	push {r0, r1}
	movs r2, #16
	ldrh r3, [r0, #54]
	adds r3, #3
	lsrs r3, r3, #4
	bcc.n _0800288E
	movs r1, #240
	b.n _080028A4
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
