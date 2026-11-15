	THUMB_FUNC_START sub_080B128C
sub_080B128C: @ 0x080B128C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _080B13EC  @ =gRam
	ldr r1, _080B13F0  @ =0x0000051C
	add r0, r4, r1
	mov r5, #0
	mov r6, #0
	strh r6, [r0]
	ldr r2, _080B13F4  @ =0x00000A3C
	add r1, r4, r2
	ldr r0, _080B13F8  @ =0x0000FFF1
	strh r0, [r1]
	ldr r3, _080B13FC  @ =0x000009B2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080B12B8
	bl sub_08070064
_080B12B8:
	ldr r1, _080B1400  @ =gMoonPearl
	ldrb r0, [r1]
	cmp r0, #0
	beq _080B12DE
	ldr r2, _080B1404  @ =0x00001718
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080B1408  @ =0x0000188C
	add r0, r4, r3
	strh r6, [r0]
	ldr r2, _080B140C  @ =0x0000188E
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080B1410  @ =0x00001711
	add r0, r4, r3
	strb r5, [r0]
	ldr r2, _080B1414  @ =0x0000176C
	add r0, r4, r2
	strb r5, [r0]
_080B12DE:
	ldr r3, _080B1418  @ =0x0000165E
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080B1312
	ldr r2, _080B141C  @ =0x0000165C
	add r0, r4, r2
	strh r6, [r0]
	ldrb r1, [r1]
	cmp r1, #0
	bne _080B1312
	add r3, r3, #186
	add r0, r4, r3
	strb r5, [r0]
	ldr r2, _080B1408  @ =0x0000188C
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080B140C  @ =0x0000188E
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _080B1410  @ =0x00001711
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B1414  @ =0x0000176C
	add r0, r4, r2
	strb r5, [r0]
_080B1312:
	ldr r4, _080B13EC  @ =gRam
	ldr r3, _080B1420  @ =0x000009DA
	add r0, r4, r3
	ldrh r1, [r0]
	cmp r1, #0
	bne _080B1324
	ldr r5, _080B13FC  @ =0x000009B2
	add r0, r4, r5
	strb r1, [r0]
_080B1324:
	bl sub_080AF554
	ldr r1, _080B1424  @ =0x00001663
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #6
	beq _080B133E
	cmp r0, #13
	beq _080B133E
	cmp r0, #10
	beq _080B133E
	cmp r0, #9
	bne _080B1348
_080B133E:
	ldr r0, _080B13EC  @ =gRam
	ldr r2, _080B1424  @ =0x00001663
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
_080B1348:
	ldr r2, _080B1428  @ =gMaxHealth
	ldr r1, _080B142C  @ =gUnknown_0816E90F
	ldr r0, _080B1430  @ =gCurrentHealth
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #3
	strb r0, [r2]
	ldr r0, _080B13EC  @ =gRam
	ldrb r2, [r2]
	ldr r3, _080B1434  @ =0x00000B52
	add r1, r0, r3
	strh r2, [r1]
	ldr r5, _080B1438  @ =0x00000AB2
	add r0, r0, r5
	ldrb r0, [r0]
	cmp r0, #255
	beq _080B1380
	cmp r0, #2
	bne _080B1374
	mov r0, #0
_080B1374:
	lsr r0, r0, #1
	ldr r1, _080B143C  @ =gUnknown_0200235C
	add r0, r0, r1
	sub r1, r1, #13
	ldrb r1, [r1]
	strb r1, [r0]
_080B1380:
	bl sub_080CBCD8
	cmp r7, #0
	bne _080B13A8
	ldr r0, _080B1440  @ =gUnknown_020023EC
	ldrh r1, [r0]
	ldr r0, _080B1444  @ =0x0000FFFF
	cmp r1, r0
	bne _080B13A8
	ldr r2, _080B1448  @ =gUnknown_020023EA
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r1, _080B144C  @ =0x03E60000
	cmp r0, r1
	bls _080B13A8
	ldr r3, _080B1450  @ =0x000003E7
	add r0, r3, #0
	strh r0, [r2]
_080B13A8:
	ldr r2, _080B13EC  @ =gRam
	ldr r5, _080B1454  @ =0x00000A18
	add r1, r2, r5
	ldrh r0, [r1]
	add r0, r0, #1
	mov r3, #0
	strh r0, [r1]
	ldr r1, _080B1458  @ =0x000009E8
	add r0, r2, r1
	ldrh r0, [r0]
	add r4, r2, #0
	cmp r0, #1
	bne _080B13C4
	b _080B14E0
_080B13C4:
	sub r5, r5, #102
	add r1, r2, r5
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	beq _080B1466
	ldr r5, _080B1424  @ =0x00001663
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #1
	beq _080B1478
	ldr r5, _080B1438  @ =0x00000AB2
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #255
	beq _080B145C
	ldr r1, _080B1434  @ =0x00000B52
	add r0, r2, r1
	strh r3, [r0]
	b _080B1478
_080B13EC:
	.4byte gRam
_080B13F0:
	.4byte 0x0000051C
_080B13F4:
	.4byte 0x00000A3C
_080B13F8:
	.4byte 0x0000FFF1
_080B13FC:
	.4byte 0x000009B2
_080B1400:
	.4byte gMoonPearl
_080B1404:
	.4byte 0x00001718
_080B1408:
	.4byte 0x0000188C
_080B140C:
	.4byte 0x0000188E
_080B1410:
	.4byte 0x00001711
_080B1414:
	.4byte 0x0000176C
_080B1418:
	.4byte 0x0000165E
_080B141C:
	.4byte 0x0000165C
_080B1420:
	.4byte 0x000009DA
_080B1424:
	.4byte 0x00001663
_080B1428:
	.4byte gMaxHealth
_080B142C:
	.4byte gUnknown_0816E90F
_080B1430:
	.4byte gCurrentHealth
_080B1434:
	.4byte 0x00000B52
_080B1438:
	.4byte 0x00000AB2
_080B143C:
	.4byte gUnknown_0200235C
_080B1440:
	.4byte gUnknown_020023EC
_080B1444:
	.4byte 0x0000FFFF
_080B1448:
	.4byte gUnknown_020023EA
_080B144C:
	.4byte 0x03E60000
_080B1450:
	.4byte 0x000003E7
_080B1454:
	.4byte 0x00000A18
_080B1458:
	.4byte 0x000009E8
_080B145C:
	ldr r5, _080B14B4  @ =0x00000A46
	add r0, r2, r5
	strh r3, [r0]
	mov r0, #0
	strb r0, [r1]
_080B1466:
	ldr r1, _080B14B8  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080B1478
	ldr r2, _080B14BC  @ =0x000009DA
	add r1, r4, r2
	mov r0, #32
	strh r0, [r1]
_080B1478:
	ldr r3, _080B14C0  @ =0x0000165E
	add r0, r4, r3
	ldrb r2, [r0]
	cmp r2, #0
	beq _080B14D4
	ldr r5, _080B14C4  @ =0x000009E8
	add r0, r4, r5
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B1490
	bl sub_080BE220
_080B1490:
	ldr r0, _080B14C8  @ =0x000009AC
	add r1, r4, r0
	mov r2, #0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080B14CC  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _080B14D0  @ =0x0000099C
	add r0, r4, r3
	strb r2, [r0]
	mov r5, #152
	lsl r5, r5, #4
	add r1, r4, r5
	mov r0, #128
	strb r0, [r1]
	b _080B14F8
	.byte 0x00
	.byte 0x00
_080B14B4:
	.4byte 0x00000A46
_080B14B8:
	.4byte 0x0000165C
_080B14BC:
	.4byte 0x000009DA
_080B14C0:
	.4byte 0x0000165E
_080B14C4:
	.4byte 0x000009E8
_080B14C8:
	.4byte 0x000009AC
_080B14CC:
	.4byte 0x000009AD
_080B14D0:
	.4byte 0x0000099C
_080B14D4:
	ldr r1, _080B14DC  @ =0x00000A18
	add r0, r4, r1
	strh r2, [r0]
	b _080B14F8
_080B14DC:
	.4byte 0x00000A18
_080B14E0:
	ldr r3, _080B1500  @ =0x0000165E
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B14F2
	cmp r7, #0
	bne _080B14F2
	bl sub_080BE220
_080B14F2:
	mov r0, #255
	bl SoftReset
_080B14F8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1500:
	.4byte 0x0000165E
	THUMB_FUNC_END sub_080B128C

