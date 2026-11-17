	.syntax unified
	THUMB_FUNC_START sub_08002878
sub_08002878: @ 0X08002878
	ldrb r2, [r1, #30]
	orrs r2, r2
	bne.n _080028AA
	push {r0, r1}
	movs r2, #0
	ldrh r3, [r0, #54]
	adds r3, #3
	lsrs r3, r3, #4
	bcs.n _0800288E
	movs r1, #240
	b.n _080028A4
_0800288E:
	movs r3, #43
	strb r2, [r0, r3]
	movs r3, #13
	adds r1, #56
	strb r3, [r1, #0]
	strb r3, [r1, #1]
	pop {r0, r1}
	pop {r2}
	movs r2, #11
	ldr r3, [pc, #340]
	bx r3
_080028A4:
	bl sub_08003010
	pop {r0, r1}
_080028AA:
	pop {pc}
	.syntax unified
	.thumb
