	.syntax unified
	THUMB_FUNC_START sub_080028AC
sub_080028AC: @ 0X080028AC
	push {lr}
	bl 0x8003010
	pop {r2}
	pop {r0, r1}
	mov pc, r2
_080028B8:
	movs r3, #38
	ldrb r3, [r1, r3]
	lsls r3, r3, #25
	lsrs r3, r3, #25
	subs r3, #1
	bne.n _080028CC
	push {r0, r1}
	movs r1, #128
	bl sub_080028AC
_080028CC:
	b.n sub_08002530
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
