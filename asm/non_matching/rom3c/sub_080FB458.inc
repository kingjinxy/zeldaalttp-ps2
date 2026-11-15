	THUMB_FUNC_START sub_080FB458
sub_080FB458: @ 0x080FB458
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080FB568  @ =gRam
	ldr r0, _080FB56C  @ =0x00001032
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	mov r2, #0
	mov r12, r2
	strb r0, [r1]
	ldr r3, _080FB570  @ =0x00000E75
	add r0, r4, r3
	add r0, r5, r0
	mov r1, r12
	strb r1, [r0]
	ldr r2, _080FB574  @ =0x000010E2
	add r0, r4, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r8, r4
	cmp r1, #0
	bne _080FB490
	b _080FB59C
_080FB490:
	ldr r3, _080FB578  @ =0x00001152
	add r0, r4, r3
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	ldr r1, _080FB57C  @ =0x00001142
	add r0, r4, r1
	add r3, r5, r0
	ldrb r1, [r3]
	mov r7, #128
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080FB4FE
	mov r0, r12
	strb r0, [r3]
	ldrb r0, [r2]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	lsr r0, r0, #1
	cmp r0, #8
	bhi _080FB4C4
	mov r0, #0
_080FB4C4:
	strb r0, [r2]
	ldr r1, _080FB580  @ =0x00000F22
	add r0, r4, r1
	add r3, r5, r0
	ldrb r2, [r3]
	mov r6, #127
	lsr r1, r2, #1
	add r0, r7, #0
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
	cmp r1, #255
	bne _080FB4E2
	mov r2, r12
	strb r2, [r3]
_080FB4E2:
	ldr r3, _080FB584  @ =0x00000F12
	add r0, r4, r3
	add r3, r5, r0
	ldrb r2, [r3]
	lsr r1, r2, #1
	and r1, r1, r6
	add r0, r7, #0
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
	cmp r1, #255
	bne _080FB4FE
	mov r0, r12
	strb r0, [r3]
_080FB4FE:
	mov r4, r8
	ldr r1, _080FB574  @ =0x000010E2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #63
	bhi _080FB530
	ldr r3, _080FB580  @ =0x00000F22
	add r2, r4, r3
	add r2, r5, r2
	ldr r3, _080FB588  @ =gUnknown_0817A6E6
	lsr r0, r1, #25
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080FB58C  @ =0x00001052
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FB530:
	ldr r3, _080FB58C  @ =0x00001052
	add r3, r3, r8
	add r3, r5, r3
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r0, _080FB590  @ =0x00000F92
	add r0, r0, r8
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	ldr r4, _080FB594  @ =0x00001122
	add r4, r4, r8
	add r4, r5, r4
	ldrb r0, [r4]
	mov r2, #191
	and r2, r2, r0
	ldr r5, _080FB598  @ =gUnknown_0817A6E4
	ldrb r0, [r3]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r5
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r4]
	b _080FB5B2
	.byte 0x00
	.byte 0x00
_080FB568:
	.4byte gRam
_080FB56C:
	.4byte 0x00001032
_080FB570:
	.4byte 0x00000E75
_080FB574:
	.4byte 0x000010E2
_080FB578:
	.4byte 0x00001152
_080FB57C:
	.4byte 0x00001142
_080FB580:
	.4byte 0x00000F22
_080FB584:
	.4byte 0x00000F12
_080FB588:
	.4byte gUnknown_0817A6E6
_080FB58C:
	.4byte 0x00001052
_080FB590:
	.4byte 0x00000F92
_080FB594:
	.4byte 0x00001122
_080FB598:
	.4byte gUnknown_0817A6E4
_080FB59C:
	ldr r3, _080FB5BC  @ =0x00000F72
	add r0, r4, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080FB5C0  @ =0x00001152
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	mov r0, #64
	strb r0, [r2]
_080FB5B2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080FB5BC:
	.4byte 0x00000F72
_080FB5C0:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080FB458

