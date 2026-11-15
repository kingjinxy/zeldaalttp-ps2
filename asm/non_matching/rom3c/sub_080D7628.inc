	THUMB_FUNC_START sub_080D7628
sub_080D7628: @ 0x080D7628
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080D76C0  @ =gRam
	ldr r1, _080D76C4  @ =0x000016D5
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D76B8
	ldr r2, _080D76C8  @ =0x00001622
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r5, _080D76CC  @ =0x00001623
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r2, #162
	add r0, r3, r2
	ldrb r2, [r0]
	add r5, r5, #162
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #39
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #46
	bhi _080D76B8
	ldr r1, _080D76D0  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080D76D4  @ =0x00001625
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r5, r5, #5
	add r0, r3, r5
	ldrb r2, [r0]
	add r5, r5, #1
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #40
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #45
	bhi _080D76B8
	ldr r1, _080D76D8  @ =0x00000A28
	add r0, r3, r1
	ldr r2, _080D76DC  @ =0x00000A2A
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _080D76B8
	ldr r5, _080D76E0  @ =0x00000F52
	add r1, r3, r5
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D76B8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D76C0:
	.4byte gRam
_080D76C4:
	.4byte 0x000016D5
_080D76C8:
	.4byte 0x00001622
_080D76CC:
	.4byte 0x00001623
_080D76D0:
	.4byte 0x00001624
_080D76D4:
	.4byte 0x00001625
_080D76D8:
	.4byte 0x00000A28
_080D76DC:
	.4byte 0x00000A2A
_080D76E0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D7628

