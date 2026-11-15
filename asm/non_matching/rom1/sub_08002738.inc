	.syntax unified
	THUMB_FUNC_START sub_08002738
sub_08002738: @ 0X08002738
	ldrh r2, [r1, #54]
	movs r3, #64
	ands r2, r3
	beq.n _08002742
	pop {pc}
_08002742:
	push {r1}
	movs r1, #80
	ldrh r2, [r0, r1]
	ldr r3, [pc, #660]
	ands r2, r3
	ldr r3, [pc, #664]
	orrs r2, r3
	strh r2, [r0, r1]
	movs r2, #128
	strb r2, [r0, #31]
	ldrb r2, [r0, #29]
	movs r3, #63
	ands r2, r3
	movs r3, #128
	orrs r2, r3
	strb r2, [r0, #29]
	pop {r1}
	b.n sub_0800247C
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
