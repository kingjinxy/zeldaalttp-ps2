	.syntax unified
	THUMB_FUNC_START sub_080095A4
sub_080095A4: @ 0X080095A4
	ldr r1, [pc, #688]
	ldrh r1, [r1, #2]
	cmp r1, #0
	bne.n _080095AE
	mov pc, lr
_080095AE:
	push {lr}
	lsrs r1, r1, #1
	bcc.n _080095B8
	bl sub_080095CC
_080095B8:
	lsrs r1, r1, #1
	bcc.n _080095C0
	bl sub_080095D4
_080095C0:
	lsrs r1, r1, #1
	bcc.n _080095C8
	bl sub_080095E8
_080095C8:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
