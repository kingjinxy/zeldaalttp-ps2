	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08004532
sub_08004532: @ 0X08004532
	ldrb r3, [r0, r2]
	b.n _08004590
_08004536:
	movs r1, #3
	movs r2, #46
	strb r1, [r0, r2]
	bl sub_08001D5C
	ldrb r2, [r1, #18]
	cmp r2, #108
	beq.n _0800454C
	bl sub_080020A0
	b.n _08004550
_0800454C:
	bl sub_08001F70
_08004550:
	bl sub_08001D5C
	.syntax unified
	.thumb
