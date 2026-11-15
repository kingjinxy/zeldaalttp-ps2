	THUMB_FUNC_START sub_080B74F4
sub_080B74F4: @ 0x080B74F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #40
	ldr r0, _080B7540  @ =gUnknown_020068BD
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B7554
	ldr r4, _080B7544  @ =gRam
	ldr r1, _080B7548  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080B7554
	bl sub_08069F08
	ldr r2, _080B754C  @ =0x0000099D
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, #0
	cmp r0, #0
	bne _080B752A
	mov r1, #1
_080B752A:
	cmp r1, #0
	beq _080B7554
	ldr r1, _080B7550  @ =gUnknown_02006883
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _080B77B2
_080B7540:
	.4byte gUnknown_020068BD
_080B7544:
	.4byte gRam
_080B7548:
	.4byte 0x00000996
_080B754C:
	.4byte 0x0000099D
_080B7550:
	.4byte gUnknown_02006883
_080B7554:
	ldr r1, _080B7594  @ =gUnknown_0200688A
	mov r0, #0
	strb r0, [r1]
	mov r0, #3
	mov r1, #192
	bl sub_081337C8
	ldr r6, _080B7598  @ =gRam
	ldr r3, _080B759C  @ =0x00001643
	add r1, r6, r3
	ldrb r0, [r1]
	cmp r0, #0
	beq _080B7572
	sub r0, r0, #1
	strb r0, [r1]
_080B7572:
	ldr r5, _080B75A0  @ =gUnknown_020068BF
	ldrb r4, [r5]
	cmp r4, #0
	bne _080B75AA
	bl sub_08069FF4
	ldr r1, _080B75A4  @ =0x0000099D
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B75A8
	mov r0, #1
	strb r0, [r5]
	b _080B75AA
	.byte 0x00
	.byte 0x00
_080B7594:
	.4byte gUnknown_0200688A
_080B7598:
	.4byte gRam
_080B759C:
	.4byte 0x00001643
_080B75A0:
	.4byte gUnknown_020068BF
_080B75A4:
	.4byte 0x0000099D
_080B75A8:
	strb r4, [r5]
_080B75AA:
	ldr r2, _080B7664  @ =gUnknown_020068B0
	ldrb r1, [r2]
	add r0, r1, #0
	cmp r0, #255
	beq _080B75B8
	add r0, r1, #1
	strb r0, [r2]
_080B75B8:
	ldr r0, _080B7668  @ =gRam
	ldr r2, _080B766C  @ =0x00001643
	add r0, r0, r2
	ldrb r1, [r0]
	cmp r1, #0
	beq _080B75D4
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080B75D4
	mov r0, #17
	mov r1, #0
	bl sub_0812A324
_080B75D4:
	ldr r1, _080B7670  @ =gUnknown_0817025C
	ldr r0, _080B7674  @ =gUnknown_020068C0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	mov r5, #5
	add r7, sp, #28
	ldr r4, _080B7668  @ =gRam
	mov r6, #0
	ldr r3, _080B7678  @ =0x00000969
	add r3, r3, r4
	mov r8, r3
_080B75F2:
	ldr r1, _080B767C  @ =0x00000961
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _080B7680  @ =0x00000965
	add r0, r4, r2
	strb r6, [r0]
	ldr r3, _080B7684  @ =0x0000096C
	add r0, r4, r3
	strb r6, [r0]
	ldr r0, _080B7688  @ =gUnknown_081701A0
	add r0, r5, r0
	ldrb r1, [r0]
	sub r2, r2, #5
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B768C  @ =gUnknown_081701A6
	add r0, r5, r0
	ldrb r1, [r0]
	sub r3, r3, #8
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _080B7690  @ =gUnknown_081701AC
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #8
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B7694  @ =gUnknown_081701B2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r3, r8
	strb r0, [r3]
	add r0, r5, #0
	bl sub_080CEC80
	add r0, r5, #0
	ldr r1, _080B7698  @ =0x0000FFF9
	ldr r2, _080B769C  @ =0x0000FFD2
	bl 0x080B7D48
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _080B75F2
	ldr r0, _080B7664  @ =gUnknown_020068B0
	ldrb r0, [r0]
	cmp r0, #159
	bls _080B76BE
	ldr r3, _080B76A0  @ =gUnknown_02006890
	ldrb r2, [r3]
	cmp r2, #96
	bne _080B76A8
	ldr r1, _080B76A4  @ =gUnknown_020068C1
	ldrb r0, [r1]
	add r0, r0, #1
	b _080B76BC
_080B7664:
	.4byte gUnknown_020068B0
_080B7668:
	.4byte gRam
_080B766C:
	.4byte 0x00001643
_080B7670:
	.4byte gUnknown_0817025C
_080B7674:
	.4byte gUnknown_020068C0
_080B7678:
	.4byte 0x00000969
_080B767C:
	.4byte 0x00000961
_080B7680:
	.4byte 0x00000965
_080B7684:
	.4byte 0x0000096C
_080B7688:
	.4byte gUnknown_081701A0
_080B768C:
	.4byte gUnknown_081701A6
_080B7690:
	.4byte gUnknown_081701AC
_080B7694:
	.4byte gUnknown_081701B2
_080B7698:
	.4byte 0x0000FFF9
_080B769C:
	.4byte 0x0000FFD2
_080B76A0:
	.4byte gUnknown_02006890
_080B76A4:
	.4byte gUnknown_020068C1
_080B76A8:
	ldr r1, _080B77C0  @ =gUnknown_02006892
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B76BE
	sub r0, r2, #1
	strb r0, [r3]
	mov r0, #8
_080B76BC:
	strb r0, [r1]
_080B76BE:
	ldr r0, _080B77C4  @ =gUnknown_020068B2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B776E
	ldr r0, _080B77C8  @ =gUnknown_0816FEA0
	str r0, [sp, #20]
	ldr r0, _080B77CC  @ =gUnknown_0816FEA2
	str r0, [sp, #24]
	ldr r0, _080B77D0  @ =gUnknown_0816FEA4
	str r0, [sp, #28]
	ldr r4, _080B77D4  @ =gUnknown_02006890
	ldrb r1, [r4]
	mov r0, #112
	eor r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	ldr r1, _080B77D8  @ =gUnknown_081701E0
	lsr r0, r0, #31
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [sp, #32]
	ldr r0, _080B77DC  @ =gUnknown_0816FEAA
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #109
	strh r0, [r1]
	ldr r5, _080B77E0  @ =0x0000FFD2
	add r0, r5, #0
	ldrb r2, [r4]
	add r0, r0, r2
	strh r0, [r1, #2]
	add r0, r1, #0
	mov r6, #1
	strb r6, [r0, #4]
	mov r1, sp
	add r0, r7, #0
	ldm r0!, {r2,r3,r5}
	stm r1!, {r2,r3,r5}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
	mov r5, #14
	ldrb r0, [r4]
	cmp r0, #103
	bhi _080B7728
	sub r0, r0, #104
	lsl r5, r0, #1
	mov r0, #14
	and r5, r5, r0
_080B7728:
	ldr r0, _080B77E4  @ =gUnknown_0816FEAC
	str r0, [sp, #20]
	ldr r2, _080B77E8  @ =gUnknown_081701B8
	lsr r1, r5, #1
	lsl r0, r1, #2
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [sp, #24]
	ldr r0, _080B77EC  @ =gUnknown_0816FEB8
	str r0, [sp, #28]
	ldr r0, _080B77F0  @ =gUnknown_0816FEBA
	str r0, [sp, #32]
	ldr r0, _080B77F4  @ =gUnknown_0816FEBC
	str r0, [sp, #36]
	add r2, sp, #12
	ldr r0, _080B77F8  @ =gUnknown_081701D8
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #109
	strh r0, [r2]
	add r1, r2, #0
	mov r0, #72
	strh r0, [r1, #2]
	add r0, r1, #0
	strb r6, [r0, #4]
	mov r1, sp
	add r0, r7, #0
	ldm r0!, {r3-r5}
	stm r1!, {r3-r5}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
_080B776E:
	ldr r0, _080B77FC  @ =gUnknown_020068B0
	ldrb r0, [r0]
	ldr r1, _080B7800  @ =gUnknown_0816FE52
	str r1, [sp, #20]
	ldr r1, _080B7804  @ =gUnknown_0816FE58
	str r1, [sp, #24]
	ldr r1, _080B7808  @ =gUnknown_0816FE5E
	str r1, [sp, #28]
	ldr r1, _080B780C  @ =gUnknown_081701E8
	lsr r0, r0, #5
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [sp, #32]
	ldr r0, _080B7810  @ =gUnknown_0816FE8E
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #105
	strh r0, [r1]
	mov r0, #24
	strh r0, [r1, #2]
	mov r0, #5
	strb r0, [r1, #4]
	mov r1, sp
	add r0, r7, #0
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
_080B77B2:
	add sp, sp, #40
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B77C0:
	.4byte gUnknown_02006892
_080B77C4:
	.4byte gUnknown_020068B2
_080B77C8:
	.4byte gUnknown_0816FEA0
_080B77CC:
	.4byte gUnknown_0816FEA2
_080B77D0:
	.4byte gUnknown_0816FEA4
_080B77D4:
	.4byte gUnknown_02006890
_080B77D8:
	.4byte gUnknown_081701E0
_080B77DC:
	.4byte gUnknown_0816FEAA
_080B77E0:
	.4byte 0x0000FFD2
_080B77E4:
	.4byte gUnknown_0816FEAC
_080B77E8:
	.4byte gUnknown_081701B8
_080B77EC:
	.4byte gUnknown_0816FEB8
_080B77F0:
	.4byte gUnknown_0816FEBA
_080B77F4:
	.4byte gUnknown_0816FEBC
_080B77F8:
	.4byte gUnknown_081701D8
_080B77FC:
	.4byte gUnknown_020068B0
_080B7800:
	.4byte gUnknown_0816FE52
_080B7804:
	.4byte gUnknown_0816FE58
_080B7808:
	.4byte gUnknown_0816FE5E
_080B780C:
	.4byte gUnknown_081701E8
_080B7810:
	.4byte gUnknown_0816FE8E
	THUMB_FUNC_END sub_080B74F4

