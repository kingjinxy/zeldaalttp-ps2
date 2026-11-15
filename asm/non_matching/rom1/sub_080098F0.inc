	.syntax unified
	THUMB_FUNC_START sub_080098F0
sub_080098F0: @ 0X080098F0
	movs r1, #108
	ldrh r2, [r4, r1]
	cmp r2, #0
	beq.n _08009920
	subs r2, #1
	bne.n _0800991E
	movs r2, #107
	ldrb r2, [r4, r2]
	cmp r2, #0
	bne.n _0800991C
	movs r2, #60
	ldrb r2, [r4, r2]
	cmp r2, #128
	bcc.n _0800991C
	movs r2, #92
	ldrh r2, [r4, r2]
	movs r3, #85
	ands r2, r3
	cmp r2, r3
	bne.n _0800991C
	movs r0, #5
	mov pc, lr
_0800991C:
	movs r2, #64
_0800991E:
	strh r2, [r4, r1]
_08009920:
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
