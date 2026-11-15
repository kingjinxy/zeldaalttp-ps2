	THUMB_FUNC_START sub_0810B490
sub_0810B490: @ 0x0810B490
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B5A4
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B5A4
	ldr r6, _0810B554  @ =gRam
	ldr r0, _0810B558  @ =0x00001122
	add r3, r6, r0
	add r3, r5, r3
	ldrb r0, [r3]
	mov r2, #63
	and r2, r2, r0
	ldr r4, _0810B55C  @ =gUnknown_0817CB80
	ldr r1, _0810B560  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r3]
	ldr r2, _0810B564  @ =0x00000F62
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810B584
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl sub_0810B5B4
	ldr r1, _0810B568  @ =0x00001042
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810B504
	add r0, r5, #0
	bl Sprite3_Move
_0810B504:
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810B52C
	bl GetRandomInt
	ldr r2, _0810B56C  @ =0x00000FB2
	add r3, r6, r2
	add r3, r5, r3
	ldr r4, _0810B570  @ =gUnknown_0817CB8C
	ldrb r1, [r3]
	lsl r1, r1, #1
	mov r2, #1
	and r2, r2, r0
	orr r1, r1, r2
	add r1, r1, r4
	ldrb r0, [r1]
	strb r0, [r3]
_0810B52C:
	ldr r1, _0810B56C  @ =0x00000FB2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r0, _0810B574  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _0810B578  @ =gUnknown_0817CB84
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810B57C  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _0810B580  @ =gUnknown_0817CB88
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	b _0810B5A4
	.byte 0x00
	.byte 0x00
_0810B554:
	.4byte gRam
_0810B558:
	.4byte 0x00001122
_0810B55C:
	.4byte gUnknown_0817CB80
_0810B560:
	.4byte 0x00000996
_0810B564:
	.4byte 0x00000F62
_0810B568:
	.4byte 0x00001042
_0810B56C:
	.4byte 0x00000FB2
_0810B570:
	.4byte gUnknown_0817CB8C
_0810B574:
	.4byte 0x00000F22
_0810B578:
	.4byte gUnknown_0817CB84
_0810B57C:
	.4byte 0x00000F12
_0810B580:
	.4byte gUnknown_0817CB88
_0810B584:
	ldr r1, _0810B5AC  @ =0x00001172
	add r0, r6, r1
	add r0, r7, r0
	ldr r2, _0810B5B0  @ =0x00000FC2
	add r1, r6, r2
	add r1, r7, r1
	ldrb r1, [r1]
	strb r1, [r0]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #0
	bne _0810B5A4
	sub r2, r2, #32
	add r0, r6, r2
	add r0, r7, r0
	strb r1, [r0]
_0810B5A4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B5AC:
	.4byte 0x00001172
_0810B5B0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810B490

