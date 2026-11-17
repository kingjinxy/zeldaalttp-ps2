	.syntax unified
	THUMB_FUNC_START sub_08009874
sub_08009874: @ 0X08009874
	push {r4, lr}
	adds r4, r0, #0
	bl sub_08003AC0
	orrs r0, r0
	bne.n _0800988E
	movs r2, #60
	ldrb r1, [r4, r2]
	cmp r1, #0
	bne.n _0800989C
	movs r1, #137
	strb r1, [r4, r2]
	b.n _0800989C
_0800988E:
	cmp r0, #1
	beq.n _0800989C
	movs r1, #1
	strb r1, [r4, #23]
	movs r1, #0
	movs r2, #60
	strb r1, [r4, r2]
_0800989C:
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
