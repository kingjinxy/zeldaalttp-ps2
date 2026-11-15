	.syntax unified
	THUMB_FUNC_START sub_080026BC
sub_080026BC: @ 0X080026BC
	ldrh r2, [r1, #54]
	movs r3, #64
	ands r2, r3
	beq.n _080026C6
	pop {pc}
_080026C6:
	push {r1}
	movs r1, #80
	ldrh r2, [r0, r1]
	ldr r3, [pc, #784]
	ands r2, r3
	ldr r3, [pc, #784]
	orrs r2, r3
	strh r2, [r0, r1]
	movs r2, #64
	strb r2, [r0, #31]
	ldrb r2, [r0, #29]
	movs r3, #63
	ands r2, r3
	movs r3, #64
	orrs r2, r3
	strb r2, [r0, #29]
	pop {r1}
	b.n sub_0800247C
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
