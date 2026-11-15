	THUMB_FUNC_START sub_080C14FC
sub_080C14FC: @ 0x080C14FC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	add r0, r6, #0
	bl sub_080C1468
	add r0, r5, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C151E
	b _080C1630
_080C151E:
	ldr r0, _080C1540  @ =gRam
	ldr r2, _080C1544  @ =0x00000FF2
	add r1, r0, r2
	add r1, r5, r1
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #146
	bne _080C154C
	ldr r1, _080C1548  @ =0x00000F82
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080C154C
	mov r0, #1
	b _080C1632
	.byte 0x00
	.byte 0x00
_080C1540:
	.4byte gRam
_080C1544:
	.4byte 0x00000FF2
_080C1548:
	.4byte 0x00000F82
_080C154C:
	ldr r2, _080C1600  @ =0x00000FF2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #128
	bne _080C1576
	ldr r1, _080C1604  @ =0x000010E2
	add r0, r4, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080C1576
	mov r0, #24
	strb r0, [r1]
	sub r2, r2, #64
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
_080C1576:
	ldr r1, _080C1608  @ =0x00001172
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1630
	ldr r2, _080C160C  @ =0x00000DCF
	add r0, r4, r2
	add r0, r6, r0
	ldrb r1, [r0]
	add r2, r2, #20
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #8
	ldr r2, _080C1610  @ =0x00000968
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080C1614  @ =0x00000DC5
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _080C1618  @ =0x00000DD9
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080C161C  @ =0x00000A92
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	ldr r2, _080C1620  @ =0x0000096C
	add r0, r4, r2
	strh r1, [r0]
	add r0, r5, #0
	mov r1, #80
	bl sub_080C2DCC
	ldr r0, _080C1624  @ =0x00001102
	add r1, r4, r0
	add r1, r5, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	mvn r0, r0
	strb r0, [r1]
	ldr r0, _080C1628  @ =0x00001112
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	mvn r0, r0
	strb r0, [r1]
	ldr r1, _080C162C  @ =0x00000E15
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080C4E94
	mov r0, #1
	b _080C1632
_080C1600:
	.4byte 0x00000FF2
_080C1604:
	.4byte 0x000010E2
_080C1608:
	.4byte 0x00001172
_080C160C:
	.4byte 0x00000DCF
_080C1610:
	.4byte 0x00000968
_080C1614:
	.4byte 0x00000DC5
_080C1618:
	.4byte 0x00000DD9
_080C161C:
	.4byte 0x00000A92
_080C1620:
	.4byte 0x0000096C
_080C1624:
	.4byte 0x00001102
_080C1628:
	.4byte 0x00001112
_080C162C:
	.4byte 0x00000E15
_080C1630:
	mov r0, #0
_080C1632:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C14FC

