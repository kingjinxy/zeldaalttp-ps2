	.syntax unified
	THUMB_FUNC_START sub_08002770
sub_08002770: @ 0X08002770
	movs r2, #0
	movs r3, #16
_08002774:
	eors r4, r4
	movs r5, #61
	strb r4, [r1, r5]
	ldrb r4, [r1, #30]
	orrs r4, r4
	beq.n _0800278A
	movs r4, #42
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #3
	b.n _0800278C
_0800278A:
	ldrb r4, [r1, #13]
_0800278C:
	cmp r4, r2
	beq.n _0800279E
	cmp r4, r3
	beq.n _0800279E
	movs r2, #52
	ldrb r4, [r1, r2]
	movs r3, #1
	orrs r4, r3
	strb r4, [r1, r2]
_0800279E:
	movs r4, #80
	ldrh r2, [r0, r4]
	ldr r3, [pc, #584]
	orrs r2, r3
	strh r2, [r0, r4]
	movs r2, #64
	strb r2, [r0, #31]
	ldrb r2, [r0, #29]
	movs r3, #63
	ands r2, r3
	movs r3, #64
	orrs r2, r3
	strb r2, [r0, #29]
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
