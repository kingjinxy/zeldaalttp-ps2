	THUMB_FUNC_START sub_080C4574
sub_080C4574: @ 0x080C4574
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r5, _080C4594  @ =gRam
	ldr r1, _080C4598  @ =0x00001142
	add r0, r5, r1
	add r6, r3, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	bge _080C45A0
	ldr r2, _080C459C  @ =0x00000974
	add r1, r5, r2
	mov r0, #128
	strb r0, [r1]
	b _080C4630
_080C4594:
	.4byte gRam
_080C4598:
	.4byte 0x00001142
_080C459C:
	.4byte 0x00000974
_080C45A0:
	ldr r7, _080C4638  @ =0x00001132
	add r0, r5, r7
	add r0, r3, r0
	ldrb r0, [r0]
	mov r4, #31
	and r4, r4, r0
	ldr r1, _080C463C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r7, _080C4640  @ =0x00000F02
	add r0, r5, r7
	add r0, r3, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080C4644  @ =gUnknown_08171FF4
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080C4648  @ =gUnknown_08172014
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080C464C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	sub r7, r7, #16
	add r0, r5, r7
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrb r3, [r6]
	ldr r0, _080C4650  @ =gUnknown_08172054
	add r0, r4, r0
	sub r1, r1, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080C4654  @ =gUnknown_08172074
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080C4658  @ =0x00000968
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	ldr r7, _080C465C  @ =0x00000974
	add r0, r5, r7
	strb r2, [r0]
	ldr r2, _080C4660  @ =0x00000969
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r3, r3, #13
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080C4664  @ =gUnknown_08172034
	add r0, r4, r0
	ldrb r1, [r0]
	sub r7, r7, #8
	add r0, r5, r7
	strb r1, [r0]
	ldr r0, _080C4668  @ =gUnknown_08172094
	add r4, r4, r0
	ldrb r1, [r4]
	add r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
_080C4630:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C4638:
	.4byte 0x00001132
_080C463C:
	.4byte 0x00000EE2
_080C4640:
	.4byte 0x00000F02
_080C4644:
	.4byte gUnknown_08171FF4
_080C4648:
	.4byte gUnknown_08172014
_080C464C:
	.4byte 0x00000ED2
_080C4650:
	.4byte gUnknown_08172054
_080C4654:
	.4byte gUnknown_08172074
_080C4658:
	.4byte 0x00000968
_080C465C:
	.4byte 0x00000974
_080C4660:
	.4byte 0x00000969
_080C4664:
	.4byte gUnknown_08172034
_080C4668:
	.4byte gUnknown_08172094
	THUMB_FUNC_END sub_080C4574

