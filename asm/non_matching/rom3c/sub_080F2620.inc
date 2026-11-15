	THUMB_FUNC_START sub_080F2620
sub_080F2620: @ 0x080F2620
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F2778  @ =gRam
	ldr r1, _080F277C  @ =0x00000F52
	add r0, r6, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080F2652
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F29B8
	ldr r1, _080F2780  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F2652
	b _080F27EA
_080F2652:
	ldr r1, _080F2780  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080F2664
	add r0, r4, #0
	bl sub_080C5D18
_080F2664:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F2678
	b _080F27EA
_080F2678:
	bl sub_0809E3CC
	mov r8, r0
	cmp r0, #0
	beq _080F2684
	b _080F27EA
_080F2684:
	add r0, r4, #0
	bl sub_080C79F8
	ldr r1, _080F2784  @ =0x00001042
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080F26B6
	ldr r0, _080F2788  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F278C  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_080F26B6:
	ldr r1, _080F2790  @ =0x00001152
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F2794  @ =0x00001142
	add r0, r6, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r7, #128
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080F2730
	mov r0, r8
	strb r0, [r2]
	ldrb r0, [r5]
	mov r1, #248
	bic r1, r1, r0
	lsr r1, r1, #1
	strb r1, [r5]
	ldr r1, _080F2788  @ =0x00000F22
	add r0, r6, r1
	add r1, r4, r0
	ldrb r3, [r1]
	lsl r0, r3, #24
	cmp r0, #0
	beq _080F270E
	add r2, r7, #0
	and r2, r2, r3
	lsr r0, r0, #25
	orr r2, r2, r0
	strb r2, [r1]
	cmp r2, #255
	bne _080F270E
	add r0, r2, #1
	strb r0, [r1]
_080F270E:
	ldr r0, _080F2778  @ =gRam
	ldr r1, _080F278C  @ =0x00000F12
	add r0, r0, r1
	add r2, r4, r0
	ldrb r3, [r2]
	lsl r0, r3, #24
	cmp r0, #0
	beq _080F2730
	mov r1, #128
	and r1, r1, r3
	lsr r0, r0, #25
	orr r1, r1, r0
	strb r1, [r2]
	cmp r1, #255
	bne _080F2730
	add r0, r1, #1
	strb r0, [r2]
_080F2730:
	ldr r7, _080F2778  @ =gRam
	ldr r1, _080F2798  @ =0x000010E2
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F27EA
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F27EA
	ldr r6, _080F279C  @ =gHeartPieces
	ldrb r0, [r6]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r6]
	add r5, r0, #0
	cmp r5, #0
	beq _080F27A4
	add r0, r4, #0
	mov r1, #71
	bl sub_080CF140
	ldr r0, _080F27A0  @ =gUnknown_0817925C
	ldrb r1, [r6]
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	b _080F27B4
_080F2778:
	.4byte gRam
_080F277C:
	.4byte 0x00000F52
_080F2780:
	.4byte 0x00000FA2
_080F2784:
	.4byte 0x00001042
_080F2788:
	.4byte 0x00000F22
_080F278C:
	.4byte 0x00000F12
_080F2790:
	.4byte 0x00001152
_080F2794:
	.4byte 0x00001142
_080F2798:
	.4byte 0x000010E2
_080F279C:
	.4byte gHeartPieces
_080F27A0:
	.4byte gUnknown_0817925C
_080F27A4:
	bl sub_08093078
	ldr r1, _080F27D4  @ =0x00001776
	add r0, r7, r1
	strb r5, [r0]
	mov r0, #38
	bl sub_080A1588
_080F27B4:
	ldr r2, _080F27D8  @ =gRam
	ldr r1, _080F27DC  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080F27E0  @ =0x000009B2
	add r2, r2, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bne _080F27E4
	add r0, r4, #0
	bl sub_080F2A70
	b _080F27EA
_080F27D4:
	.4byte 0x00001776
_080F27D8:
	.4byte gRam
_080F27DC:
	.4byte 0x00000FA2
_080F27E0:
	.4byte 0x000009B2
_080F27E4:
	add r0, r4, #0
	bl sub_080F2A94
_080F27EA:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F2620

	.byte 0x00
	.byte 0x00
