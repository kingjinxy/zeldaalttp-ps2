	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08004532
sub_08004532: @ 0X08004532
	ldrb r3, [r0, r2]
	b.n _08004590
_08004536:
	movs r1, #3
	movs r2, #46
	strb r1, [r0, r2]
	bl 0x8001d5c
	ldrb r2, [r1, #18]
	cmp r2, #108
	beq.n _0800454C
	bl 0x80020a0
	b.n _08004550
_0800454C:
	bl 0x8001f70
_08004550:
	bl 0x8001d5c
	.syntax unified
	.thumb
