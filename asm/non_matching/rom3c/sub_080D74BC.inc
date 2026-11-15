	THUMB_FUNC_START sub_080D74BC
sub_080D74BC: @ 0x080D74BC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080D7548  @ =gRam
	ldr r1, _080D754C  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080D7550  @ =0x00001623
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080D7554  @ =0x000016C4
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
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #32
	bhi _080D7542
	ldr r1, _080D7558  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080D755C  @ =0x00001625
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
	add r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #40
	bhi _080D7542
	ldr r1, _080D7560  @ =0x00000A28
	add r0, r3, r1
	ldr r2, _080D7564  @ =0x00000A2A
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _080D7542
	ldr r5, _080D7568  @ =0x00000F52
	add r1, r3, r5
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D7542:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D7548:
	.4byte gRam
_080D754C:
	.4byte 0x00001622
_080D7550:
	.4byte 0x00001623
_080D7554:
	.4byte 0x000016C4
_080D7558:
	.4byte 0x00001624
_080D755C:
	.4byte 0x00001625
_080D7560:
	.4byte 0x00000A28
_080D7564:
	.4byte 0x00000A2A
_080D7568:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D74BC

