	THUMB_FUNC_START sub_081183E4
sub_081183E4: @ 0x081183E4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _08118440  @ =gRam
	ldr r0, _08118444  @ =0x00001605
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _08118448  @ =0x00000E1F
	add r0, r1, r2
	add r3, r5, r0
	ldrb r2, [r3]
	add r6, r1, #0
	cmp r2, #0
	beq _0811840A
	cmp r2, #3
	beq _0811840A
	b _081186A4
_0811840A:
	ldr r3, _0811844C  @ =0x00000E29
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _08118460
	cmp r2, #2
	beq _08118460
	ldr r1, _08118450  @ =0x00000E33
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081184B0
	cmp r0, #17
	beq _0811842C
	b _08118830
_0811842C:
	ldr r2, _08118454  @ =0x00001752
	add r1, r6, r2
	ldr r0, _08118458  @ =0x00000DF3
	strh r0, [r1]
	ldr r3, _0811845C  @ =0x00001663
	add r1, r6, r3
	mov r0, #14
	strb r0, [r1]
	b _081186FC
	.byte 0x00
	.byte 0x00
_08118440:
	.4byte gRam
_08118444:
	.4byte 0x00001605
_08118448:
	.4byte 0x00000E1F
_0811844C:
	.4byte 0x00000E29
_08118450:
	.4byte 0x00000E33
_08118454:
	.4byte 0x00001752
_08118458:
	.4byte 0x00000DF3
_0811845C:
	.4byte 0x00001663
_08118460:
	ldr r1, _081184A8  @ =0x00001844
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _081184B0
	cmp r0, #1
	beq _0811847A
	b _08118830
_0811847A:
	ldr r2, _081184AC  @ =0x00000E29
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	sub r0, r0, #55
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _0811848E
	b _081186FC
_0811848E:
	bl sub_0812A0B8
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _081184A0
	b _081186FC
_081184A0:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _08118830
_081184A8:
	.4byte 0x00001844
_081184AC:
	.4byte 0x00000E29
_081184B0:
	ldr r3, _08118540  @ =0x00000E29
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _081184D8
	ldr r1, _08118544  @ =0x00000E1F
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _081184D8
	ldr r2, _08118548  @ =0x00000A3E
	add r1, r6, r2
	mov r0, #255
	strb r0, [r1]
	ldr r3, _0811854C  @ =0x00000A3C
	add r1, r6, r3
	mov r0, #7
	strh r0, [r1]
_081184D8:
	ldr r2, _08118550  @ =gRam
	ldr r1, _08118554  @ =0x000017D4
	add r0, r2, r1
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r0, r0, #31
	mov r1, #4
	and r0, r0, r1
	ldr r1, _08118558  @ =0x00001718
	add r3, r2, r1
	mov r1, #0
	strb r0, [r3]
	ldr r3, _0811855C  @ =0x0000175D
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _08118560  @ =0x0000180D
	add r2, r2, r0
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080AD05C
_0811850A:
	ldr r1, _08118550  @ =gRam
	ldr r3, _08118564  @ =0x00001776
	add r2, r1, r3
	mov r0, #0
	strb r0, [r2]
	ldr r2, _08118540  @ =0x00000E29
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #23
	bne _08118574
	ldr r0, _08118568  @ =gHeartPieces
	ldrb r4, [r0]
	cmp r4, #0
	bne _08118574
	mov r0, #38
	bl sub_080A1588
	ldr r3, _0811856C  @ =0x00000E15
	add r0, r6, r3
	add r0, r5, r0
	strb r4, [r0]
	ldr r1, _08118570  @ =0x00001605
	add r0, r6, r1
	strb r4, [r0]
	b _08118830
_08118540:
	.4byte 0x00000E29
_08118544:
	.4byte 0x00000E1F
_08118548:
	.4byte 0x00000A3E
_0811854C:
	.4byte 0x00000A3C
_08118550:
	.4byte gRam
_08118554:
	.4byte 0x000017D4
_08118558:
	.4byte 0x00001718
_0811855C:
	.4byte 0x0000175D
_08118560:
	.4byte 0x0000180D
_08118564:
	.4byte 0x00001776
_08118568:
	.4byte gHeartPieces
_0811856C:
	.4byte 0x00000E15
_08118570:
	.4byte 0x00001605
_08118574:
	ldr r2, _081185A8  @ =0x00000E29
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #38
	beq _081185B4
	cmp r1, #63
	beq _081185B4
	add r0, r1, #0
	cmp r0, #62
	bne _081185F4
	ldr r3, _081185AC  @ =0x00001770
	add r1, r6, r3
	mov r0, #0
	strb r0, [r1]
	ldr r1, _081185B0  @ =gCurrentHealth
	ldrb r0, [r1]
	cmp r0, #160
	beq _081185F4
	add r0, r0, #8
	strb r0, [r1]
	add r1, r1, #6
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	b _081185DA
_081185A8:
	.4byte 0x00000E29
_081185AC:
	.4byte 0x00001770
_081185B0:
	.4byte gCurrentHealth
_081185B4:
	ldr r1, _081185E4  @ =gRam
	ldr r0, _081185E8  @ =gMaxHealth
	ldrb r2, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r1, r0
	strb r2, [r1]
	ldr r3, _081185EC  @ =gCurrentHealth
	ldrb r0, [r3]
	cmp r0, #160
	beq _081185F4
	add r0, r0, #8
	strb r0, [r3]
	sub r0, r0, r2
	strb r0, [r1]
	ldr r2, _081185F0  @ =gHeartsFiller
	ldrb r1, [r2]
	add r1, r1, r0
	strb r1, [r2]
_081185DA:
	mov r0, #111
	mov r1, #0
	bl sub_0812A324
	b _0811862A
_081185E4:
	.4byte gRam
_081185E8:
	.4byte gMaxHealth
_081185EC:
	.4byte gCurrentHealth
_081185F0:
	.4byte gHeartsFiller
_081185F4:
	cmp r0, #66
	bne _08118608
	ldr r1, _08118604  @ =gHeartsFiller
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	b _0811862A
	.byte 0x00
	.byte 0x00
_08118604:
	.4byte gHeartsFiller
_08118608:
	cmp r0, #69
	bne _0811861C
	ldr r1, _08118618  @ =gMagicMeterFiller
	ldrb r0, [r1]
	add r0, r0, #22
	strb r0, [r1]
	b _0811862A
	.byte 0x00
	.byte 0x00
_08118618:
	.4byte gMagicMeterFiller
_0811861C:
	sub r0, r0, #34
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _0811862A
	bl sub_081302F0
_0811862A:
	ldr r2, _08118688  @ =gRam
	ldr r1, _0811868C  @ =0x00000E15
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r3, _08118690  @ =0x00001605
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _08118694  @ =0x00000E1F
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _0811866E
	ldr r3, _08118698  @ =0x00000E29
	add r0, r2, r3
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r0, _0811869C  @ =gUnknown_0817F34E
	ldrb r1, [r0]
	cmp r2, r1
	beq _0811866E
	ldrb r3, [r0, #5]
	cmp r2, r3
	beq _0811866E
	ldrb r1, [r0, #4]
	cmp r2, r1
	beq _0811866E
	ldrb r0, [r0, #6]
	cmp r2, r0
	beq _0811866E
	bl sub_08075804
_0811866E:
	ldr r1, _08118688  @ =gRam
	ldr r2, _08118694  @ =0x00000E1F
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _0811867E
	b _08118830
_0811867E:
	ldr r3, _081186A0  @ =0x00001770
	add r1, r1, r3
	mov r0, #0
	strb r0, [r1]
	b _08118830
_08118688:
	.4byte gRam
_0811868C:
	.4byte 0x00000E15
_08118690:
	.4byte 0x00001605
_08118694:
	.4byte 0x00000E1F
_08118698:
	.4byte 0x00000E29
_0811869C:
	.4byte gUnknown_0817F34E
_081186A0:
	.4byte 0x00001770
_081186A4:
	ldr r0, _081186F4  @ =0x00001844
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081186B8
	b _0811850A
_081186B8:
	lsr r0, r0, #24
	cmp r0, #0
	beq _081186FC
	cmp r0, #40
	beq _081186C4
	b _08118808
_081186C4:
	ldrb r0, [r3]
	cmp r0, #2
	bne _081186CC
	b _08118808
_081186CC:
	add r0, r5, #0
	bl sub_080AD05C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _081186E8
	ldr r1, _081186F8  @ =0x00000E29
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #23
	bne _081186E8
	b _08118808
_081186E8:
	add r0, r5, #0
	mov r1, #122
	bl sub_080C19F8
	b _08118808
	.byte 0x00
	.byte 0x00
_081186F4:
	.4byte 0x00001844
_081186F8:
	.4byte 0x00000E29
_081186FC:
	ldr r0, _08118774  @ =gRam
	ldr r2, _08118778  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r6, r0, #0
	cmp r1, #0
	beq _08118742
	ldr r3, _0811877C  @ =0x000009DA
	add r0, r6, r3
	ldrh r1, [r0]
	cmp r1, #255
	beq _08118808
	ldr r0, _08118780  @ =0x0000010F
	cmp r1, r0
	beq _08118808
	add r0, r0, #1
	cmp r1, r0
	beq _08118808
	add r0, r0, #2
	cmp r1, r0
	beq _08118808
	add r0, r0, #13
	cmp r1, r0
	bne _08118742
	ldr r1, _08118784  @ =0x00000E29
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	sub r0, r0, #83
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bhi _08118808
_08118742:
	ldr r2, _08118784  @ =0x00000E29
	add r0, r6, r2
	add r1, r5, r0
	ldrb r2, [r1]
	add r0, r2, #0
	sub r0, r0, #56
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08118790
	ldrb r2, [r1]
	ldr r0, _08118788  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _081187C8
	add r0, r2, #0
	sub r0, r0, #56
	lsl r0, r0, #25
	ldr r1, _0811878C  @ =gUnknown_0817F34A
	lsr r0, r0, #24
	add r0, r0, r1
	ldrh r2, [r0]
	b _081187EE
_08118774:
	.4byte gRam
_08118778:
	.4byte 0x000009B2
_0811877C:
	.4byte 0x000009DA
_08118780:
	.4byte 0x0000010F
_08118784:
	.4byte 0x00000E29
_08118788:
	.4byte gPendantCount
_0811878C:
	.4byte gUnknown_0817F34A
_08118790:
	ldr r3, _081187B8  @ =0x00000E1F
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _08118830
	cmp r2, #23
	bne _081187C8
	ldr r0, _081187BC  @ =gHeartPieces
	ldrb r0, [r0]
	lsl r0, r0, #25
	ldr r1, _081187C0  @ =gUnknown_0817F342
	lsr r0, r0, #24
	add r2, r0, r1
	ldrh r1, [r2]
	ldr r0, _081187C4  @ =0x0000FFFF
	cmp r1, r0
	beq _08118830
	add r2, r1, #0
	b _081187EE
_081187B8:
	.4byte 0x00000E1F
_081187BC:
	.4byte gHeartPieces
_081187C0:
	.4byte gUnknown_0817F342
_081187C4:
	.4byte 0x0000FFFF
_081187C8:
	ldr r1, _081187F8  @ =0x00000E29
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	ldr r1, _081187FC  @ =gUnknown_0817F288
	lsr r0, r0, #24
	add r2, r0, r1
	ldrh r1, [r2]
	ldr r0, _08118800  @ =0x0000FFFF
	cmp r1, r0
	beq _08118830
	add r2, r1, #0
	cmp r2, #115
	bne _081187EE
	ldr r3, _08118804  @ =0x00000A3E
	add r1, r6, r3
	mov r0, #6
	strb r0, [r1]
_081187EE:
	add r0, r2, #0
	bl sub_080AF4FC
	b _08118830
	.byte 0x00
	.byte 0x00
_081187F8:
	.4byte 0x00000E29
_081187FC:
	.4byte gUnknown_0817F288
_08118800:
	.4byte 0x0000FFFF
_08118804:
	.4byte 0x00000A3E
_08118808:
	ldr r1, _08118838  @ =gRam
	ldr r2, _0811883C  @ =0x00001844
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #23
	bls _08118830
	ldr r3, _08118840  @ =0x00000DED
	add r0, r1, r3
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #247
	bls _0811882A
	strb r0, [r1]
_0811882A:
	add r0, r5, #0
	bl sub_080BF774
_08118830:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08118838:
	.4byte gRam
_0811883C:
	.4byte 0x00001844
_08118840:
	.4byte 0x00000DED
	THUMB_FUNC_END sub_081183E4

