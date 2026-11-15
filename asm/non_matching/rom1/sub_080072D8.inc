	.syntax unified
	THUMB_FUNC_START sub_080072D8
sub_080072D8: @ 0X080072D8
	push {r4, lr}
	ldrh r1, [r1, #0]
	ands r1, r3
	beq.n _080072F0
_080072E0:
	bl sub_080071B8
	bne.n _080072F0
	strb r2, [r1, #9]
	strb r0, [r1, #1]
	strb r3, [r1, #3]
	.2byte 0x1c1b
	pop {r4, pc}
_080072F0:
	eors r2, r2
	pop {r4, pc}
	.syntax unified
	.thumb
