	.syntax unified
	THUMB_FUNC_START sub_0800247C
sub_0800247C: @ 0X0800247C
	push {r1}
	movs r4, #15
	ldrh r5, [r1, #34]
	lsrs r5, r5, #1
	adds r2, r5, #0
	movs r5, #80
	ldrh r5, [r0, r5]
	lsrs r5, r5, #14
	lsls r5, r5, #30
	orrs r2, r5
	adds r5, r2, #0
	adds r1, #64
_08002494:
	ldr r3, [r1, #0]
	cmp r3, r5
	beq.n _080024A4
	str r2, [r1, #0]
	adds r2, r3, #0
	adds r1, #4
	subs r4, #1
	bne.n _08002494
_080024A4:
	str r2, [r1, #0]
	pop {r1}
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
