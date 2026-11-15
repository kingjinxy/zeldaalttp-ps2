	.syntax unified
	THUMB_FUNC_START sub_080025B0
sub_080025B0: @ 0X080025B0
	ldrh r3, [r0, #50]
	movs r4, #1
	movs r2, #15
	ands r2, r3
	cmp r2, #8
	beq.n _080025C4
	bcc.n _080025C0
	negs r4, r4
_080025C0:
	adds r3, r3, r4
	strh r3, [r0, #50]
_080025C4:
	ldrh r3, [r0, #54]
	adds r3, #3
	movs r4, #1
	movs r2, #15
	ands r2, r3
	cmp r2, #8
	beq.n _080025DC
	bcc.n _080025D6
	negs r4, r4
_080025D6:
	adds r3, r3, r4
	subs r3, #3
	strh r3, [r0, #54]
_080025DC:
	ldrh r2, [r1, #54]
	ldr r3, [pc, #1004]
	ands r2, r3
	strh r2, [r1, #54]
	movs r3, #114
	ldrh r2, [r0, r3]
	cmp r2, #15
	bcs.n _080025F0
	movs r2, #15
	strh r2, [r0, r3]
_080025F0:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
