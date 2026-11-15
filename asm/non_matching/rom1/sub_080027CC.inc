	.syntax unified
	THUMB_FUNC_START sub_080027CC
sub_080027CC: @ 0X080027CC
	ldrh r2, [r0, #54]
	adds r2, #3
	movs r3, #15
	ands r2, r3
	cmp r2, #5
	bcc.n _08002820
_080027D8:
	ldr r2, [pc, #532]
	strh r2, [r0, #44]
	b.n _080027FA
	.byte 0x00
	.byte 0xbd
	.syntax unified
	.thumb
