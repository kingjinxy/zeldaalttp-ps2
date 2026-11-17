	.syntax unified
	THUMB_FUNC_START sub_08003C5C
sub_08003C5C: @ 0X08003C5C
	push {r4, r5, lr}
	adds r4, r0, #0
	adds r5, r1, #0
	adds r0, r1, #0
	bl sub_08003FB0
	beq.n _08003C82
	adds r0, r4, #0
	adds r1, r5, #0
	bl sub_08003C84
	beq.n _08003C82
	ldrb r0, [r5, #20]
	cmp r0, #2
	bne.n _08003C7E
	movs r0, #3
	strb r0, [r5, #21]
_08003C7E:
	movs r0, #1
	pop {r4, r5, pc}
_08003C82:
	pop {r4, r5, pc}
	.syntax unified
	.thumb

