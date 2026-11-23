	.ALIGN 2, 0
	.GLOBAL sub_080A7228
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080A7228, function
sub_080A7228:
push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r4, _080A7268  @ =gMagicMeterFiller
	ldrb r2, [r4]
	cmp r2, #0
	beq _080A7280
	ldr r1, _080A726C  @ =gMagicMeter
	ldrb r3, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080A7278
	sub r0, r2, #1
	strb r0, [r4]
	add r0, r3, #1
	strb r0, [r1]
	ldr r0, _080A7270  @ =gRam
	ldr r1, _080A7274  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080A7280
	mov r0, #38
	mov r1, #0
	bl sub_0812A324
	b _080A7280
	.byte 0x00
	.byte 0x00
_080A7268:
	.4byte gMagicMeterFiller
_080A726C:
	.4byte gMagicMeter
_080A7270:
	.4byte gRam
_080A7274:
	.4byte 0x00000996
_080A7278:
	mov r0, #128
	strb r0, [r1]
	mov r0, #0
	strb r0, [r4]
_080A7280:
	ldr r0, _080A7298  @ =gRupeesCounter
	ldrh r1, [r0]
	ldr r2, _080A729C  @ =gRupeesCount
	ldrh r0, [r2]
	cmp r1, r0
	bne _080A72A8
	ldr r0, _080A72A0  @ =gRam
	ldr r2, _080A72A4  @ =0x00000ECF
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
	b _080A72F4
_080A7298:
	.4byte gRupeesCounter
_080A729C:
	.4byte gRupeesCount
_080A72A0:
	.4byte gRam
_080A72A4:
	.4byte 0x00000ECF
_080A72A8:
	cmp r1, r0
	bcs _080A72C4
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r0, _080A72C0  @ =0x000003E7
	cmp r1, r0
	bls _080A72D4
	strh r0, [r2]
	add r1, r0, #0
	b _080A72D4
	.byte 0x00
	.byte 0x00
_080A72C0:
	.4byte 0x000003E7
_080A72C4:
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r0, #0
	bge _080A72D4
	mov r0, #0
	strh r0, [r2]
	mov r1, #0
_080A72D4:
	ldr r0, _080A73C4  @ =gRupeesCounter
	strh r1, [r0]
	ldr r0, _080A73C8  @ =gRam
	ldr r1, _080A73CC  @ =0x00000ECF
	add r0, r0, r1
	ldrb r1, [r0]
	add r2, r1, #1
	strb r2, [r0]
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _080A72F4
	mov r0, #115
	mov r1, #0
	bl sub_0812A324
_080A72F4:
	ldr r1, _080A73D0  @ =gBombFiller
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A7316
	sub r0, r0, #1
	strb r0, [r1]
	ldr r2, _080A73D4  @ =gBombs
	ldr r1, _080A73D8  @ =gUnknown_0816B588
	ldr r0, _080A73DC  @ =gBombUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080A7316
	add r0, r1, #1
	strb r0, [r2]
_080A7316:
	ldr r1, _080A73E0  @ =gArrowFiller
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A7338
	sub r0, r0, #1
	strb r0, [r1]
	ldr r2, _080A73E4  @ =gArrowCount
	ldr r1, _080A73E8  @ =gUnknown_0816B598
	ldr r0, _080A73EC  @ =gArrowUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080A7338
	add r0, r1, #1
	strb r0, [r2]
_080A7338:
	ldr r2, _080A73F0  @ =gBow
	ldrb r1, [r2]
	cmp r1, #0
	beq _080A7362
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080A7362
	add r0, r1, #1
	strb r0, [r2]
	bl sub_080A9E38
	bl sub_080AA920
	bl sub_080AA874
	ldr r0, _080A73C8  @ =gRam
	ldr r2, _080A73F4  @ =0x00000A4C
	add r0, r0, r2
	mov r1, #0
	strh r1, [r0]
_080A7362:
	ldr r0, _080A73C8  @ =gRam
	ldr r2, _080A73F8  @ =0x00001770
	add r1, r0, r2
	ldrb r1, [r1]
	mov r9, r0
	cmp r1, #0
	bne _080A73A8
	ldr r0, _080A73FC  @ =gHeartsFiller
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A73A8
	ldr r2, _080A7400  @ =gMaxHealth
	ldr r1, _080A7404  @ =gUnknown_0816B645
	ldr r0, _080A7408  @ =gCurrentHealth
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	bcs _080A73A8
	ldr r4, _080A740C  @ =0x00000B72
	add r4, r4, r9
	ldrh r0, [r4]
	cmp r0, #0
	bne _080A73A2
	mov r0, #32
	strh r0, [r4]
	mov r0, #80
	mov r1, #0
	bl sub_0812A324
_080A73A2:
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
_080A73A8:
	mov r0, #0
	mov r8, r0
	ldr r6, _080A7410  @ =0x00000A56
	add r6, r6, r9
	ldrb r0, [r6]
	cmp r0, #0
	bne _080A7468
	ldr r5, _080A73FC  @ =gHeartsFiller
	ldrb r0, [r5]
	cmp r0, #0
	bne _080A7414
	mov r1, #1
	mov r8, r1
	b _080A7462
_080A73C4:
	.4byte gRupeesCounter
_080A73C8:
	.4byte gRam
_080A73CC:
	.4byte 0x00000ECF
_080A73D0:
	.4byte gBombFiller
_080A73D4:
	.4byte gBombs
_080A73D8:
	.4byte gUnknown_0816B588
_080A73DC:
	.4byte gBombUpgrades
_080A73E0:
	.4byte gArrowFiller
_080A73E4:
	.4byte gArrowCount
_080A73E8:
	.4byte gUnknown_0816B598
_080A73EC:
	.4byte gArrowUpgrades
_080A73F0:
	.4byte gBow
_080A73F4:
	.4byte 0x00000A4C
_080A73F8:
	.4byte 0x00001770
_080A73FC:
	.4byte gHeartsFiller
_080A7400:
	.4byte gMaxHealth
_080A7404:
	.4byte gUnknown_0816B645
_080A7408:
	.4byte gCurrentHealth
_080A740C:
	.4byte 0x00000B72
_080A7410:
	.4byte 0x00000A56
_080A7414:
	ldr r4, _080A744C  @ =gMaxHealth
	ldr r7, _080A7450  @ =gCurrentHealth
	ldrb r0, [r4]
	ldrb r1, [r7]
	cmp r0, r1
	bcs _080A7458
	add r0, r0, #8
	strb r0, [r4]
	mov r0, #111
	mov r1, #0
	bl sub_0812A324
	ldrb r1, [r7]
	ldrb r0, [r4]
	cmp r0, r1
	bcc _080A7436
	strb r1, [r4]
_080A7436:
	ldrb r0, [r5]
	sub r0, r0, #8
	strb r0, [r5]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r1, _080A7454  @ =0x00000A54
	add r1, r1, r9
	mov r0, #7
	strb r0, [r1]
	b _080A7468
_080A744C:
	.4byte gMaxHealth
_080A7450:
	.4byte gCurrentHealth
_080A7454:
	.4byte 0x00000A54
_080A7458:
	strb r1, [r4]
	mov r2, r8
	strb r2, [r5]
	mov r0, #1
	mov r8, r0
_080A7462:
	mov r0, #0
	cmp r0, #0
	beq _080A7482
_080A7468:
	ldr r1, _080A74AC  @ =0x0000097C
	add r1, r1, r9
	ldr r0, _080A74B0  @ =0x0000FFFF
	strh r0, [r1]
	bl sub_080A75FC
	bl sub_080A797C
	ldr r1, _080A74B4  @ =0x000009AE
	add r1, r1, r9
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080A7482:
	mov r1, r8
	cmp r1, #0
	beq _080A74A0
	ldr r4, _080A74B8  @ =gRam
	ldr r2, _080A74AC  @ =0x0000097C
	add r1, r4, r2
	ldr r0, _080A74B0  @ =0x0000FFFF
	strh r0, [r1]
	bl sub_080A7588
	ldr r0, _080A74B4  @ =0x000009AE
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080A74A0:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080A74AC:
	.4byte 0x0000097C
_080A74B0:
	.4byte 0x0000FFFF
_080A74B4:
	.4byte 0x000009AE
_080A74B8:
	.4byte gRam
