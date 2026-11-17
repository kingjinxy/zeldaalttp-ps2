	.syntax unified
	THUMB_FUNC_START sub_08002668
sub_08002668: @ 0X08002668
	bl sub_080025F4
	ldrh r2, [r1, #54]
	movs r3, #128
	tst r2, r3
	bne.n _080026BA
	ldrb r2, [r1, #17]
	cmp r2, #26
	bcc.n _080026BA
	push {r0, r1}
	movs r2, #80
	ldrh r2, [r0, r2]
	ldr r0, [pc, #856]
	ldrh r1, [r1, #34]
	lsrs r1, r1, #1
	bl sub_08014658
	movs r0, #15
	eors r1, r1
	movs r2, #64
	bl sub_0804C8A8
	orrs r0, r0
	beq.n _080026B8
	adds r2, r0, #0
	pop {r0, r1}
	ldrh r3, [r1, #34]
	lsls r3, r3, #25
	lsrs r3, r3, #22
	adds r3, #8
	strh r3, [r2, #50]
	ldrh r3, [r1, #34]
	lsrs r3, r3, #7
	lsls r3, r3, #4
	adds r3, #8
	strh r3, [r2, #54]
	movs r2, #44
	bl sub_080031AC
	pop {pc}
_080026B8:
	pop {r0, r1}
_080026BA:
	pop {pc}
	.syntax unified
	.thumb
