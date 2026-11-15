	.syntax unified
	THUMB_FUNC_START sub_080095D4
sub_080095D4: @ 0X080095D4
	movs r2, #108
	ldrb r3, [r0, r2]
	cmp r3, #0
	beq.n _080095E6
	movs r3, #1
	strb r3, [r0, r2]
	movs r2, #107
	movs r3, #0
	strb r3, [r0, r2]
_080095E6:
	mov pc, lr
	.syntax unified
	.thumb
