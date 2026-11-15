	THUMB_FUNC_START sub_080700F8
sub_080700F8: @ 0x080700F8
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r4, _080703F4  @ =gRam
	ldr r0, _080703F8  @ =0x0000050C
	add r2, r4, r0
	mov r1, #0
	mov r0, #252
	lsl r0, r0, #6
	strh r0, [r2]
	ldr r3, _080703FC  @ =0x0000051A
	add r2, r4, r3
	mov r0, #63
	strh r0, [r2]
	ldr r6, _08070400  @ =0x00000A3E
	add r2, r4, r6
	mov r0, #255
	strb r0, [r2]
	ldr r2, _08070404  @ =0x000009DA
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _08070408  @ =0x000009DC
	add r0, r4, r3
	strh r1, [r0]
	add r6, r6, #106
	add r0, r4, r6
	strh r1, [r0]
	ldr r2, _0807040C  @ =0x00000D0A
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _08070410  @ =0x00000D0C
	add r0, r4, r3
	strh r1, [r0]
	ldr r6, _08070414  @ =0x00000D0E
	add r0, r4, r6
	strh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #6
	add r0, r4, r3
	strh r1, [r0]
	add r6, r6, #6
	add r0, r4, r6
	strh r1, [r0]
	bl sub_08078840
	ldr r0, _08070418  @ =0x00000AB2
	add r4, r4, r0
	ldrb r2, [r4]
	cmp r2, #255
	beq _0807016C
	cmp r2, #2
	bne _08070164
	mov r2, #0
_08070164:
	lsr r2, r2, #1
	ldr r1, _0807041C  @ =gUnknown_0200235C
	add r0, r2, r1
	ldrb r2, [r0]
_0807016C:
	add r0, r2, #0
	bl sub_080AA7E8
	ldr r5, _080703F4  @ =gRam
	ldr r2, _08070420  @ =0x00000B02
	add r0, r5, r2
	mov r1, #0
	strh r1, [r0]
	mov r3, #176
	lsl r3, r3, #4
	add r0, r5, r3
	strh r1, [r0]
	bl sub_08079204
	bl sub_08092874
	ldr r1, _08070424  @ =gUnknown_0814CE1C
	ldr r6, _08070428  @ =0x00000C99
	add r0, r5, r6
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0812FCDC
	bl sub_080836B8
	ldr r0, _0807042C  @ =0x00000C9C
	add r1, r5, r0
	mov r4, #10
	mov r0, #10
	strh r0, [r1]
	bl sub_0812E8DC
	ldr r1, _08070430  @ =0x00000CA9
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08079540
	ldr r2, _08070434  @ =0x0000176C
	add r0, r5, r2
	ldr r3, _08070438  @ =0x00001711
	add r1, r5, r3
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _080701CE
	bl sub_08133678
_080701CE:
	ldr r6, _08070404  @ =0x000009DA
	add r0, r5, r6
	ldrh r3, [r0]
	mov r0, #15
	and r0, r0, r3
	lsl r0, r0, #9
	ldr r2, _0807043C  @ =0x00000BA8
	add r1, r5, r2
	strh r0, [r1]
	mov r1, #255
	lsl r1, r1, #4
	and r1, r1, r3
	lsr r1, r1, #3
	sub r6, r6, #122
	add r2, r5, r6
	strh r1, [r2]
	mov r0, #255
	and r1, r1, r0
	lsl r1, r1, #8
	ldr r0, _08070440  @ =0x00000BAA
	add r4, r5, r0
	mov r6, #0
	ldrsh r0, [r2, r6]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	orr r1, r1, r0
	strh r1, [r4]
	lsl r3, r3, #16
	mov r0, #130
	lsl r0, r0, #17
	cmp r3, r0
	bne _08070228
	ldr r1, _08070444  @ =0x0000165F
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _08070228
	ldr r2, _08070448  @ =0x00000CF5
	add r1, r5, r2
	mov r0, #0
	strb r0, [r1]
_08070228:
	bl sub_0806FE5C
	ldr r2, _080703F4  @ =gRam
	ldr r3, _0807044C  @ =0x000009D3
	add r1, r2, r3
	mov r0, #2
	strb r0, [r1]
	ldr r6, _08070450  @ =0x000009D4
	add r1, r2, r6
	mov r0, #179
	strb r0, [r1]
	ldr r1, _08070420  @ =0x00000B02
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _08070448  @ =0x00000CF5
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08070270
	mov r1, #3
	add r6, r6, #230
	add r0, r2, r6
	ldrh r0, [r0]
	cmp r0, #0
	beq _08070266
	mov r2, #50
	cmp r0, #7
	beq _08070268
	mov r2, #98
	cmp r0, #4
	beq _08070268
_08070266:
	mov r2, #32
_08070268:
	ldr r0, _080703F4  @ =gRam
	ldr r3, _08070450  @ =0x000009D4
	add r0, r0, r3
	strb r2, [r0]
_08070270:
	add r0, r1, #0
	bl sub_0806C4EC
	ldr r1, _080703F4  @ =gRam
	ldr r6, _08070450  @ =0x000009D4
	add r2, r1, r6
	ldrb r0, [r2]
	cmp r0, #179
	bne _080702A4
	ldr r3, _08070404  @ =0x000009DA
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #11
	beq _080702A4
	cmp r0, #106
	beq _080702A4
	cmp r0, #146
	beq _080702A4
	cmp r0, #147
	beq _080702A4
	cmp r0, #153
	beq _080702A4
	cmp r0, #186
	beq _080702A4
	mov r0, #176
	strb r0, [r2]
_080702A4:
	bl sub_0806DF4C
	ldr r4, _080703F4  @ =gRam
	ldr r6, _08070454  @ =0x00000D08
	add r0, r4, r6
	ldrh r0, [r0]
	ldr r1, _08070458  @ =0x00000999
	add r7, r4, r1
	mov r6, #0
	strb r0, [r7]
	ldr r2, _0807045C  @ =0x00000CF8
	add r1, r4, r2
	mov r5, #0
	mov r0, #31
	strh r0, [r1]
	ldr r3, _08070460  @ =0x00000CFC
	add r0, r4, r3
	strh r6, [r0]
	ldr r0, _08070464  @ =0x00000CFA
	add r1, r4, r0
	mov r0, #2
	strh r0, [r1]
	sub r2, r2, #88
	add r1, r4, r2
	ldrb r0, [r1]
	strh r0, [r1]
	ldr r3, _08070468  @ =0x00001712
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _0807046C  @ =0x000016E8
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08070470  @ =0x000016EA
	add r0, r4, r2
	strb r5, [r0]
	mov r3, #22
	ldr r0, _08070474  @ =gUnknown_0814CAD4
	ldr r2, _08070478  @ =0x00000ABA
	add r1, r4, r2
	ldrh r2, [r1]
	add r0, r2, r0
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08070306
	mov r3, #23
	mov r1, #0
_08070306:
	cmp r2, #2
	bne _0807030C
	mov r1, #3
_0807030C:
	ldr r2, _0807047C  @ =0x000009B4
	add r0, r4, r2
	strb r3, [r0]
	ldr r3, _08070480  @ =0x000009B5
	add r0, r4, r3
	strb r1, [r0]
	bl sub_0806D598
	bl sub_0807166C
	bl sub_080B00BC
	ldr r1, _08070484  @ =0x00000A4C
	add r0, r4, r1
	strh r6, [r0]
	ldr r2, _08070488  @ =0x000009E8
	add r0, r4, r2
	strh r6, [r0]
	ldr r3, _0807048C  @ =0x00000ABE
	add r0, r4, r3
	strh r6, [r0]
	sub r1, r1, #159
	add r0, r4, r1
	strb r5, [r0]
	mov r2, #188
	lsl r2, r2, #4
	add r0, r4, r2
	strh r6, [r0]
	ldr r3, _08070490  @ =0x00000BBF
	add r0, r4, r3
	strb r5, [r0]
	bl sub_0808B1FC
	ldr r6, _08070494  @ =0x00001663
	add r1, r4, r6
	ldrb r0, [r1]
	cmp r0, #13
	bne _08070364
	strb r5, [r1]
	ldr r1, _08070498  @ =0x00000B5C
	add r0, r4, r1
	strb r5, [r0]
	bl sub_080AB13C
_08070364:
	bl sub_08114600
	bl sub_080CBCD8
	bl sub_080CB278
	ldr r2, _0807049C  @ =0x0000177E
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080704A0  @ =0x00000B6F
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r6, _080704A4  @ =0x0000165E
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _0807038C
	b _080704D4
_0807038C:
	ldr r1, _08070444  @ =0x0000165F
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0807039C
	b _08070500
_0807039C:
	ldr r2, _080704A8  @ =0x0000051E
	add r1, r4, r2
	ldr r0, _080704AC  @ =0x00003C42
	strh r0, [r1]
	ldr r3, _080704B0  @ =0x00000998
	add r1, r4, r3
	mov r0, #11
	strb r0, [r1]
	mov r0, #10
	strb r0, [r7]
	ldr r6, _080704B4  @ =0x00000514
	add r2, r4, r6
	ldrh r1, [r2]
	ldr r0, _080704B8  @ =0x0000FFFC
	and r0, r0, r1
	mov r3, #1
	orr r0, r0, r3
	strh r0, [r2]
	ldr r1, _080704BC  @ =gUnknown_02000D82
	ldr r2, _080704C0  @ =0x0000580C
	add r0, r2, #0
	strh r0, [r1]
	ldr r6, _080704C4  @ =0x0000099B
	add r0, r4, r6
	strb r3, [r0]
	ldr r0, _080704C8  @ =0x000009D6
	add r1, r4, r0
	mov r0, #48
	strb r0, [r1]
	ldr r2, _080704CC  @ =0x000009D7
	add r1, r4, r2
	mov r0, #80
	strb r0, [r1]
	ldr r3, _080704D0  @ =0x000009D8
	add r1, r4, r3
	mov r0, #128
	strb r0, [r1]
	ldr r6, _08070448  @ =0x00000CF5
	add r0, r4, r6
	strb r5, [r0]
	bl sub_0809B7E4
	b _08070500
	.byte 0x00
	.byte 0x00
_080703F4:
	.4byte gRam
_080703F8:
	.4byte 0x0000050C
_080703FC:
	.4byte 0x0000051A
_08070400:
	.4byte 0x00000A3E
_08070404:
	.4byte 0x000009DA
_08070408:
	.4byte 0x000009DC
_0807040C:
	.4byte 0x00000D0A
_08070410:
	.4byte 0x00000D0C
_08070414:
	.4byte 0x00000D0E
_08070418:
	.4byte 0x00000AB2
_0807041C:
	.4byte gUnknown_0200235C
_08070420:
	.4byte 0x00000B02
_08070424:
	.4byte gUnknown_0814CE1C
_08070428:
	.4byte 0x00000C99
_0807042C:
	.4byte 0x00000C9C
_08070430:
	.4byte 0x00000CA9
_08070434:
	.4byte 0x0000176C
_08070438:
	.4byte 0x00001711
_0807043C:
	.4byte 0x00000BA8
_08070440:
	.4byte 0x00000BAA
_08070444:
	.4byte 0x0000165F
_08070448:
	.4byte 0x00000CF5
_0807044C:
	.4byte 0x000009D3
_08070450:
	.4byte 0x000009D4
_08070454:
	.4byte 0x00000D08
_08070458:
	.4byte 0x00000999
_0807045C:
	.4byte 0x00000CF8
_08070460:
	.4byte 0x00000CFC
_08070464:
	.4byte 0x00000CFA
_08070468:
	.4byte 0x00001712
_0807046C:
	.4byte 0x000016E8
_08070470:
	.4byte 0x000016EA
_08070474:
	.4byte gUnknown_0814CAD4
_08070478:
	.4byte 0x00000ABA
_0807047C:
	.4byte 0x000009B4
_08070480:
	.4byte 0x000009B5
_08070484:
	.4byte 0x00000A4C
_08070488:
	.4byte 0x000009E8
_0807048C:
	.4byte 0x00000ABE
_08070490:
	.4byte 0x00000BBF
_08070494:
	.4byte 0x00001663
_08070498:
	.4byte 0x00000B5C
_0807049C:
	.4byte 0x0000177E
_080704A0:
	.4byte 0x00000B6F
_080704A4:
	.4byte 0x0000165E
_080704A8:
	.4byte 0x0000051E
_080704AC:
	.4byte 0x00003C42
_080704B0:
	.4byte 0x00000998
_080704B4:
	.4byte 0x00000514
_080704B8:
	.4byte 0x0000FFFC
_080704BC:
	.4byte gUnknown_02000D82
_080704C0:
	.4byte 0x0000580C
_080704C4:
	.4byte 0x0000099B
_080704C8:
	.4byte 0x000009D6
_080704CC:
	.4byte 0x000009D7
_080704D0:
	.4byte 0x000009D8
_080704D4:
	ldr r0, _08070574  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _08070500
	ldr r1, _08070578  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08070500
	ldr r2, _0807057C  @ =0x0000176C
	add r0, r4, r2
	mov r1, #1
	strb r1, [r0]
	ldr r3, _08070580  @ =0x00001711
	add r0, r4, r3
	strb r1, [r0]
	ldr r6, _08070584  @ =0x00001718
	add r1, r4, r6
	mov r0, #23
	strb r0, [r1]
	bl sub_08133678
_08070500:
	ldr r1, _08070588  @ =gRam
	ldr r0, _0807058C  @ =0x00000A1A
	add r2, r1, r0
	mov r3, #7
	mov r0, #7
	strh r0, [r2]
	ldr r2, _08070590  @ =0x000009AC
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _08070594  @ =0x000009AD
	add r2, r1, r3
	mov r0, #16
	strb r0, [r2]
	ldr r6, _08070598  @ =0x0000165E
	add r0, r1, r6
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0807054C
	ldr r0, _0807059C  @ =0x00000A3E
	add r2, r1, r0
	mov r0, #255
	strb r0, [r2]
	add r3, r3, #49
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0807054C
	ldr r6, _080705A0  @ =0x000009DA
	add r0, r1, r6
	ldrh r0, [r0]
	cmp r0, #2
	beq _0807054C
	cmp r0, #18
	beq _0807054C
	mov r0, #3
	strb r0, [r2]
_0807054C:
	ldr r0, _080705A4  @ =0x0000050C
	add r2, r1, r0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _080705A8  @ =0xF0FCF0FC
	str r0, [sp]
	ldr r1, _080705AC  @ =gUnknown_02001600
	ldr r2, _080705B0  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070574:
	.4byte gMoonPearl
_08070578:
	.4byte 0x0000165C
_0807057C:
	.4byte 0x0000176C
_08070580:
	.4byte 0x00001711
_08070584:
	.4byte 0x00001718
_08070588:
	.4byte gRam
_0807058C:
	.4byte 0x00000A1A
_08070590:
	.4byte 0x000009AC
_08070594:
	.4byte 0x000009AD
_08070598:
	.4byte 0x0000165E
_0807059C:
	.4byte 0x00000A3E
_080705A0:
	.4byte 0x000009DA
_080705A4:
	.4byte 0x0000050C
_080705A8:
	.4byte 0xF0FCF0FC
_080705AC:
	.4byte gUnknown_02001600
_080705B0:
	.4byte 0x01000080
	THUMB_FUNC_END sub_080700F8

