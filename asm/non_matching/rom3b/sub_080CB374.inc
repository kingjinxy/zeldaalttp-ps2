	THUMB_FUNC_START sub_080CB374
sub_080CB374: @ 0x080CB374
	push {r4-r6,lr}
	ldr r0, _080CB544  @ =gRam
	ldr r2, _080CB548  @ =0x000009B2
	add r1, r0, r2
	ldrb r2, [r1]
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r5, r0, #0
	cmp r1, #0
	bne _080CB38C
	b _080CB53E
_080CB38C:
	ldr r4, _080CB54C  @ =0x00001647
	add r0, r5, r4
	strb r2, [r0]
	mov r2, #15
	add r3, r5, #0
_080CB396:
	ldr r6, _080CB550  @ =0x0000144C
	add r0, r3, r6
	add r4, r2, r0
	mov r0, #0
	strb r0, [r4]
	ldr r0, _080CB554  @ =0x0000145C
	add r1, r3, r0
	add r1, r2, r1
	ldr r6, _080CB558  @ =0x00000FF2
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CB55C  @ =0x0000146C
	add r1, r3, r0
	add r1, r2, r1
	ldr r6, _080CB560  @ =0x00000EE2
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CB564  @ =0x000014AC
	add r1, r3, r0
	add r1, r2, r1
	add r6, r6, #176
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CB568  @ =0x0000147C
	add r1, r3, r0
	add r1, r2, r1
	sub r6, r6, #144
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CB56C  @ =0x0000148C
	add r1, r3, r0
	add r1, r2, r1
	sub r6, r6, #48
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CB570  @ =0x0000149C
	add r1, r3, r0
	add r1, r2, r1
	add r6, r6, #32
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CB574  @ =0x000010D2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CB40E
	b _080CB536
_080CB40E:
	add r6, r6, #176
	add r0, r5, r6
	add r0, r2, r0
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #4
	bne _080CB41E
	b _080CB536
_080CB41E:
	cmp r1, #10
	bne _080CB424
	b _080CB536
_080CB424:
	strb r0, [r4]
	ldr r0, _080CB578  @ =0x000014BC
	add r1, r3, r0
	add r1, r2, r1
	ldr r4, _080CB57C  @ =0x00000F62
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080CB580  @ =0x000014CC
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB584  @ =0x00001082
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #160
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB588  @ =0x00000D94
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB58C  @ =0x00000FB2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #96
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #224
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB590  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #224
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	sub r4, r4, #192
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #16
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #224
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	sub r4, r4, #16
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	add r4, r4, #240
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB594  @ =0x00000FC2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #32
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB598  @ =0x000013B2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r2, r1
	ldr r4, _080CB59C  @ =0x00001172
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
_080CB536:
	sub r2, r2, #1
	cmp r2, #0
	blt _080CB53E
	b _080CB396
_080CB53E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080CB544:
	.4byte gRam
_080CB548:
	.4byte 0x000009B2
_080CB54C:
	.4byte 0x00001647
_080CB550:
	.4byte 0x0000144C
_080CB554:
	.4byte 0x0000145C
_080CB558:
	.4byte 0x00000FF2
_080CB55C:
	.4byte 0x0000146C
_080CB560:
	.4byte 0x00000EE2
_080CB564:
	.4byte 0x000014AC
_080CB568:
	.4byte 0x0000147C
_080CB56C:
	.4byte 0x0000148C
_080CB570:
	.4byte 0x0000149C
_080CB574:
	.4byte 0x000010D2
_080CB578:
	.4byte 0x000014BC
_080CB57C:
	.4byte 0x00000F62
_080CB580:
	.4byte 0x000014CC
_080CB584:
	.4byte 0x00001082
_080CB588:
	.4byte 0x00000D94
_080CB58C:
	.4byte 0x00000FB2
_080CB590:
	.4byte 0x00000F52
_080CB594:
	.4byte 0x00000FC2
_080CB598:
	.4byte 0x000013B2
_080CB59C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080CB374

