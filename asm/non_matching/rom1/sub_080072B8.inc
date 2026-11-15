	.syntax unified
	THUMB_FUNC_START sub_080072B8
sub_080072B8: @ 0X080072B8
	push {r1, r2, r3}
	mov r2, sl
	ldr r2, [r2, #40]
	movs r3, #113
	ldrb r1, [r2, r3]
	orrs r1, r1
	beq.n _080072D4
	mov r2, sl
	ldrb r1, [r2, #5]
	orrs r1, r1
	bne.n _080072D4
	pop {r1, r2, r3}
	push {r4, lr}
	b.n _080072E0
_080072D4:
	pop {r1, r2, r3}
	movs r0, r0
	.syntax unified
	.thumb
