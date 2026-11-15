	THUMB_FUNC_START sub_080C2160
sub_080C2160: @ 0x080C2160
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080C21BC  @ =gRam
	ldr r1, _080C21C0  @ =0x00000FA2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r1, [r7]
	cmp r1, #8
	bhi _080C217C
	b _080C24A4
_080C217C:
	ldr r2, _080C21C4  @ =0x000015F9
	add r0, r6, r2
	mov r3, #0
	mov r8, r3
	strb r1, [r0]
	ldr r1, _080C21C8  @ =0x00000EB5
	add r0, r6, r1
	add r4, r5, r0
	ldrb r1, [r4]
	add r0, r1, #0
	cmp r0, #253
	bne _080C21D4
	add r0, r5, #0
	mov r1, #84
	bl sub_080CF140
	mov r0, #7
	strb r0, [r7]
	ldr r2, _080C21CC  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #112
	strb r1, [r0]
	ldr r3, _080C21D0  @ =0x00001012
	add r1, r6, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	mov r7, r8
	strb r7, [r4]
	b _080C24A4
_080C21BC:
	.4byte gRam
_080C21C0:
	.4byte 0x00000FA2
_080C21C4:
	.4byte 0x000015F9
_080C21C8:
	.4byte 0x00000EB5
_080C21CC:
	.4byte 0x00000FC2
_080C21D0:
	.4byte 0x00001012
_080C21D4:
	cmp r0, #250
	bls _080C22A4
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r6
	mov r9, r0
	strb r1, [r0]
	mov r1, r8
	strb r1, [r4]
	ldrb r0, [r7]
	cmp r0, #11
	bne _080C21EE
	b _080C24A4
_080C21EE:
	ldr r2, _080C2280  @ =0x0000142C
	add r0, r6, r2
	add r2, r5, r0
	mov r1, #0
	mov r3, r9
	ldrb r0, [r3]
	cmp r0, #254
	bne _080C2200
	mov r1, #1
_080C2200:
	strb r1, [r2]
	cmp r1, #0
	beq _080C2248
	ldr r0, _080C2284  @ =0x00000E75
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #8
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, _080C2288  @ =0x000011B2
	add r1, r6, r2
	add r1, r5, r1
	ldrb r2, [r1]
	mov r4, #127
	add r0, r4, #0
	and r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #31
	bl sub_080CF0AC
	ldr r3, _080C228C  @ =0x00001152
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
	ldr r1, _080C2290  @ =0x00000EA5
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	and r4, r4, r1
	strb r4, [r0]
	add r0, r5, #0
	bl sub_080C3540
_080C2248:
	mov r0, #11
	strb r0, [r7]
	ldr r2, _080C2294  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	ldr r3, _080C2298  @ =0x00000D74
	add r1, r6, r3
	add r1, r5, r1
	ldr r2, _080C229C  @ =gUnknown_08171DC6
	mov r7, r9
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #5
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080C22A0  @ =0x00000FF2
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #35
	beq _080C227A
	b _080C24A4
_080C227A:
	mov r0, #36
	strb r0, [r1]
	b _080C24A4
_080C2280:
	.4byte 0x0000142C
_080C2284:
	.4byte 0x00000E75
_080C2288:
	.4byte 0x000011B2
_080C228C:
	.4byte 0x00001152
_080C2290:
	.4byte 0x00000EA5
_080C2294:
	.4byte 0x00000FC2
_080C2298:
	.4byte 0x00000D74
_080C229C:
	.4byte gUnknown_08171DC6
_080C22A0:
	.4byte 0x00000FF2
_080C22A4:
	ldr r3, _080C2358  @ =0x00001022
	add r2, r6, r3
	add r2, r5, r2
	ldrb r1, [r2]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r6, r3
	strb r1, [r0]
	ldrb r0, [r2]
	ldrb r1, [r4]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	strb r0, [r2]
	mov r1, r8
	strb r1, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	ble _080C22CC
	b _080C24A4
_080C22CC:
	mov r0, #31
	mov r1, #1
	bl sub_080BEA28
	ldr r2, _080C235C  @ =0x00000E85
	add r0, r6, r2
	add r1, r5, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080C2300
	ldrb r0, [r7]
	cmp r0, #11
	bne _080C22EA
	mov r0, #3
	strb r0, [r1]
_080C22EA:
	ldr r3, _080C2360  @ =0x0000143C
	add r0, r6, r3
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C2300
	strb r2, [r1]
	ldr r7, _080C2364  @ =0x000011B2
	add r0, r6, r7
	add r0, r5, r0
	strb r2, [r0]
_080C2300:
	ldr r1, _080C2368  @ =gRam
	ldr r2, _080C236C  @ =0x00000FF2
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #27
	beq _080C2326
	ldr r3, _080C2370  @ =0x00000D84
	add r0, r1, r3
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C2326
	add r0, r5, #0
	mov r1, #84
	bl sub_080CF140
_080C2326:
	ldr r0, _080C2368  @ =gRam
	ldr r7, _080C236C  @ =0x00000FF2
	add r1, r0, r7
	add r1, r5, r1
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #64
	bne _080C238E
	ldr r1, _080C2374  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C237C
	ldr r3, _080C2378  @ =0x00000AA8
	add r2, r6, r3
	ldrh r1, [r2]
	mov r7, #128
	lsl r7, r7, #8
	add r0, r7, #0
	orr r0, r0, r1
	strh r0, [r2]
	b _080C238E
	.byte 0x00
	.byte 0x00
_080C2358:
	.4byte 0x00001022
_080C235C:
	.4byte 0x00000E85
_080C2360:
	.4byte 0x0000143C
_080C2364:
	.4byte 0x000011B2
_080C2368:
	.4byte gRam
_080C236C:
	.4byte 0x00000FF2
_080C2370:
	.4byte 0x00000D84
_080C2374:
	.4byte 0x000009B2
_080C2378:
	.4byte 0x00000AA8
_080C237C:
	ldr r1, _080C23B4  @ =0x000009C6
	add r0, r6, r1
	ldrh r1, [r0]
	ldr r2, _080C23B8  @ =gUnknown_02002280
	add r1, r1, r2
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
_080C238E:
	add r2, r6, #0
	ldr r3, _080C23BC  @ =0x00000FF2
	add r0, r2, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #236
	bne _080C23C4
	ldr r7, _080C23C0  @ =0x00000F82
	add r0, r2, r7
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _080C23AA
	b _080C24A4
_080C23AA:
	add r0, r5, #0
	bl sub_080C5138
	b _080C24A4
	.byte 0x00
	.byte 0x00
_080C23B4:
	.4byte 0x000009C6
_080C23B8:
	.4byte gUnknown_02002280
_080C23BC:
	.4byte 0x00000FF2
_080C23C0:
	.4byte 0x00000F82
_080C23C4:
	ldr r1, _080C2400  @ =0x00000FA2
	add r0, r2, r1
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #10
	bne _080C23DE
	ldr r7, _080C2404  @ =0x00001791
	add r0, r2, r7
	mov r1, #0
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
_080C23DE:
	mov r0, #6
	strb r0, [r3]
	ldrb r0, [r4]
	cmp r0, #84
	beq _080C246C
	cmp r0, #84
	bgt _080C2412
	cmp r0, #15
	beq _080C248C
	cmp r0, #15
	bgt _080C2408
	cmp r0, #9
	beq _080C247C
	cmp r0, #12
	beq _080C2438
	b _080C249E
	.byte 0x00
	.byte 0x00
_080C2400:
	.4byte 0x00000FA2
_080C2404:
	.4byte 0x00001791
_080C2408:
	cmp r0, #35
	beq _080C2484
	cmp r0, #83
	beq _080C2464
	b _080C249E
_080C2412:
	cmp r0, #146
	beq _080C2440
	cmp r0, #146
	bgt _080C2424
	cmp r0, #122
	beq _080C2474
	cmp r0, #136
	beq _080C2494
	b _080C249E
_080C2424:
	cmp r0, #203
	beq _080C245C
	cmp r0, #203
	blt _080C249E
	cmp r0, #205
	bgt _080C249E
	add r0, r5, #0
	bl sub_08107174
	b _080C24A4
_080C2438:
	add r0, r5, #0
	bl sub_080E5B38
	b _080C24A4
_080C2440:
	bl sub_080CBB34
	ldr r1, _080C2458  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080ED8C8
	b _080C24A4
	.byte 0x00
	.byte 0x00
_080C2458:
	.4byte 0x00000FC2
_080C245C:
	add r0, r5, #0
	bl sub_08108A48
	b _080C24A4
_080C2464:
	add r0, r5, #0
	bl sub_080ED61C
	b _080C24A4
_080C246C:
	add r0, r5, #0
	bl sub_080EFCCC
	b _080C24A4
_080C2474:
	add r0, r5, #0
	bl sub_080DB42C
	b _080C24A4
_080C247C:
	add r0, r5, #0
	bl sub_080D9804
	b _080C24A4
_080C2484:
	add r0, r5, #0
	bl sub_080E14E4
	b _080C24A4
_080C248C:
	add r0, r5, #0
	bl sub_080F0990
	b _080C24A4
_080C2494:
	add r0, r5, #0
	bl sub_080FEE94
	cmp r0, #0
	bne _080C24A4
_080C249E:
	add r0, r5, #0
	bl sub_080C24B0
_080C24A4:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C2160

