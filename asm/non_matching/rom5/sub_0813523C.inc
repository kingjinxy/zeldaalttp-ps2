	THUMB_FUNC_START sub_0813523C
sub_0813523C: @ 0x0813523C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #28
	ldr r0, _0813525C  @ =gUnknown_03007FF0
	ldr r0, [r0]
	str r0, [sp, #4]
	ldrb r0, [r0, #10]
	cmp r0, #0
	beq _08135260
	sub r0, r0, #1
	ldr r1, [sp, #4]
	strb r0, [r1, #10]
	b _08135266
_0813525C:
	.4byte gUnknown_03007FF0
_08135260:
	mov r0, #14
	ldr r2, [sp, #4]
	strb r0, [r2, #10]
_08135266:
	mov r6, #1
	ldr r0, [sp, #4]
	ldr r4, [r0, #28]
_0813526C:
	ldrb r1, [r4]
	mov r0, #199
	and r0, r0, r1
	add r2, r6, #1
	mov r10, r2
	mov r2, #64
	add r2, r2, r4
	mov r9, r2
	cmp r0, #0
	bne _08135282
	b _0813566C
_08135282:
	cmp r6, #2
	beq _081352B4
	cmp r6, #2
	bgt _08135290
	cmp r6, #1
	beq _08135296
	b _081352EC
_08135290:
	cmp r6, #3
	beq _081352CC
	b _081352EC
_08135296:
	ldr r0, _081352A8  @ =0x04000060
	str r0, [sp, #8]
	ldr r7, _081352AC  @ =0x04000062
	ldr r2, _081352B0  @ =0x04000063
	str r2, [sp, #12]
	add r0, r0, #4
	str r0, [sp, #16]
	add r2, r2, #2
	b _081352FC
_081352A8:
	.4byte 0x04000060
_081352AC:
	.4byte 0x04000062
_081352B0:
	.4byte 0x04000063
_081352B4:
	ldr r0, _081352C0  @ =0x04000061
	str r0, [sp, #8]
	ldr r7, _081352C4  @ =0x04000068
	ldr r2, _081352C8  @ =0x04000069
	b _081352F4
	.byte 0x00
	.byte 0x00
_081352C0:
	.4byte 0x04000061
_081352C4:
	.4byte 0x04000068
_081352C8:
	.4byte 0x04000069
_081352CC:
	ldr r0, _081352E0  @ =0x04000070
	str r0, [sp, #8]
	ldr r7, _081352E4  @ =0x04000072
	ldr r2, _081352E8  @ =0x04000073
	str r2, [sp, #12]
	add r0, r0, #4
	str r0, [sp, #16]
	add r2, r2, #2
	b _081352FC
	.byte 0x00
	.byte 0x00
_081352E0:
	.4byte 0x04000070
_081352E4:
	.4byte 0x04000072
_081352E8:
	.4byte 0x04000073
_081352EC:
	ldr r0, _0813534C  @ =0x04000071
	str r0, [sp, #8]
	ldr r7, _08135350  @ =0x04000078
	ldr r2, _08135354  @ =0x04000079
_081352F4:
	str r2, [sp, #12]
	add r0, r0, #11
	str r0, [sp, #16]
	add r2, r2, #4
_081352FC:
	str r2, [sp, #20]
	ldr r0, [sp, #4]
	ldrb r0, [r0, #10]
	str r0, [sp]
	ldr r2, [sp, #12]
	ldrb r0, [r2]
	mov r8, r0
	add r2, r1, #0
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _081353F2
	mov r3, #64
	add r0, r3, #0
	and r0, r0, r2
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r6, #1
	mov r10, r0
	mov r1, #64
	add r1, r1, r4
	mov r9, r1
	cmp r5, #0
	bne _08135416
	mov r0, #3
	strb r0, [r4]
	strb r0, [r4, #29]
	add r0, r4, #0
	str r3, [sp, #24]
	bl sub_081351D4
	ldr r3, [sp, #24]
	cmp r6, #2
	beq _08135364
	cmp r6, #2
	bgt _08135358
	cmp r6, #1
	beq _0813535E
	b _081353B8
	.byte 0x00
	.byte 0x00
_0813534C:
	.4byte 0x04000071
_08135350:
	.4byte 0x04000078
_08135354:
	.4byte 0x04000079
_08135358:
	cmp r6, #3
	beq _08135370
	b _081353B8
_0813535E:
	ldrb r0, [r4, #31]
	ldr r2, [sp, #8]
	strb r0, [r2]
_08135364:
	ldr r0, [r4, #36]
	lsl r0, r0, #6
	ldrb r1, [r4, #30]
	add r0, r1, r0
	strb r0, [r7]
	b _081353C4
_08135370:
	ldr r1, [r4, #36]
	ldr r0, [r4, #40]
	cmp r1, r0
	beq _08135398
	ldr r2, [sp, #8]
	strb r3, [r2]
	ldr r1, _081353AC  @ =0x04000090
	ldr r2, [r4, #36]
	ldr r0, [r2]
	str r0, [r1]
	add r1, r1, #4
	ldr r0, [r2, #4]
	str r0, [r1]
	add r1, r1, #4
	ldr r0, [r2, #8]
	str r0, [r1]
	add r1, r1, #4
	ldr r0, [r2, #12]
	str r0, [r1]
	str r2, [r4, #40]
_08135398:
	ldr r0, [sp, #8]
	strb r5, [r0]
	ldrb r0, [r4, #30]
	strb r0, [r7]
	ldrb r0, [r4, #30]
	cmp r0, #0
	beq _081353B0
	mov r0, #192
	b _081353D2
	.byte 0x00
	.byte 0x00
_081353AC:
	.4byte 0x04000090
_081353B0:
	mov r1, #128
	neg r1, r1
	strb r1, [r4, #26]
	b _081353D4
_081353B8:
	ldrb r0, [r4, #30]
	strb r0, [r7]
	ldr r0, [r4, #36]
	lsl r0, r0, #3
	ldr r2, [sp, #16]
	strb r0, [r2]
_081353C4:
	ldrb r0, [r4, #4]
	add r0, r0, #8
	mov r8, r0
	ldrb r0, [r4, #30]
	cmp r0, #0
	beq _081353D2
	mov r0, #64
_081353D2:
	strb r0, [r4, #26]
_081353D4:
	ldrb r1, [r4, #4]
	mov r2, #0
	strb r1, [r4, #11]
	mov r0, #255
	and r0, r0, r1
	add r1, r6, #1
	mov r10, r1
	mov r1, #64
	add r1, r1, r4
	mov r9, r1
	cmp r0, #0
	bne _081353EE
	b _0813552A
_081353EE:
	strb r2, [r4, #9]
	b _08135558
_081353F2:
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	beq _08135424
	ldrb r0, [r4, #13]
	sub r0, r0, #1
	strb r0, [r4, #13]
	mov r2, #255
	and r0, r0, r2
	lsl r0, r0, #24
	add r1, r6, #1
	mov r10, r1
	mov r2, #64
	add r2, r2, r4
	mov r9, r2
	cmp r0, #0
	ble _08135416
	b _0813556A
_08135416:
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_08135184
	mov r0, #0
	strb r0, [r4]
	b _08135668
_08135424:
	mov r0, #64
	and r0, r0, r1
	add r2, r6, #1
	mov r10, r2
	mov r2, #64
	add r2, r2, r4
	mov r9, r2
	cmp r0, #0
	beq _08135464
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08135464
	mov r0, #252
	and r0, r0, r1
	mov r2, #0
	strb r0, [r4]
	ldrb r1, [r4, #7]
	strb r1, [r4, #11]
	mov r0, #255
	and r0, r0, r1
	cmp r0, #0
	beq _08135496
	mov r0, #1
	ldrb r1, [r4, #29]
	orr r0, r0, r1
	strb r0, [r4, #29]
	cmp r6, #3
	beq _08135558
	ldrb r2, [r4, #7]
	mov r8, r2
	b _08135558
_08135464:
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _08135558
	cmp r6, #3
	bne _08135476
	mov r0, #1
	ldrb r1, [r4, #29]
	orr r0, r0, r1
	strb r0, [r4, #29]
_08135476:
	add r0, r4, #0
	bl sub_081351D4
	mov r0, #3
	ldrb r2, [r4]
	and r0, r0, r2
	cmp r0, #0
	bne _081354CA
	ldrb r0, [r4, #9]
	sub r0, r0, #1
	strb r0, [r4, #9]
	mov r1, #255
	and r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bgt _081354C6
_08135496:
	ldrb r2, [r4, #12]
	ldrb r1, [r4, #10]
	add r0, r2, #0
	mul r0, r1, r0
	add r0, r0, #255
	asr r0, r0, #8
	mov r1, #0
	strb r0, [r4, #9]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08135416
	mov r0, #4
	ldrb r2, [r4]
	orr r0, r0, r2
	strb r0, [r4]
	mov r0, #1
	ldrb r1, [r4, #29]
	orr r0, r0, r1
	strb r0, [r4, #29]
	cmp r6, #3
	beq _0813556A
	mov r2, #8
	mov r8, r2
	b _0813556A
_081354C6:
	ldrb r0, [r4, #7]
	b _08135556
_081354CA:
	cmp r0, #1
	bne _081354D6
_081354CE:
	ldrb r0, [r4, #25]
	strb r0, [r4, #9]
	mov r0, #7
	b _08135556
_081354D6:
	cmp r0, #2
	bne _0813551A
	ldrb r0, [r4, #9]
	sub r0, r0, #1
	strb r0, [r4, #9]
	mov r1, #255
	and r0, r0, r1
	lsl r0, r0, #24
	ldrb r2, [r4, #25]
	lsl r1, r2, #24
	cmp r0, r1
	bgt _08135516
_081354EE:
	ldrb r0, [r4, #6]
	cmp r0, #0
	bne _081354FE
	mov r0, #252
	ldrb r1, [r4]
	and r0, r0, r1
	strb r0, [r4]
	b _08135496
_081354FE:
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	mov r0, #1
	ldrb r2, [r4, #29]
	orr r0, r0, r2
	strb r0, [r4, #29]
	cmp r6, #3
	beq _081354CE
	mov r0, #8
	mov r8, r0
	b _081354CE
_08135516:
	ldrb r0, [r4, #5]
	b _08135556
_0813551A:
	ldrb r0, [r4, #9]
	add r0, r0, #1
	strb r0, [r4, #9]
	mov r1, #255
	and r0, r0, r1
	ldrb r2, [r4, #10]
	cmp r0, r2
	bcc _08135554
_0813552A:
	ldrb r0, [r4]
	sub r0, r0, #1
	mov r2, #0
	strb r0, [r4]
	ldrb r1, [r4, #5]
	strb r1, [r4, #11]
	mov r0, #255
	and r0, r0, r1
	cmp r0, #0
	beq _081354EE
	mov r0, #1
	ldrb r1, [r4, #29]
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldrb r0, [r4, #10]
	strb r0, [r4, #9]
	cmp r6, #3
	beq _08135558
	ldrb r2, [r4, #5]
	mov r8, r2
	b _08135558
_08135554:
	ldrb r0, [r4, #4]
_08135556:
	strb r0, [r4, #11]
_08135558:
	ldrb r0, [r4, #11]
	sub r0, r0, #1
	strb r0, [r4, #11]
	ldr r0, [sp]
	cmp r0, #0
	bne _0813556A
	sub r0, r0, #1
	str r0, [sp]
	b _08135464
_0813556A:
	mov r0, #2
	ldrb r1, [r4, #29]
	and r0, r0, r1
	cmp r0, #0
	beq _081355E2
	cmp r6, #3
	bgt _081355AA
	mov r0, #8
	ldrb r2, [r4, #1]
	and r0, r0, r2
	cmp r0, #0
	beq _081355AA
	ldr r0, _08135594  @ =0x04000089
	ldrb r0, [r0]
	cmp r0, #63
	bgt _0813559C
	ldr r0, [r4, #32]
	add r0, r0, #2
	ldr r1, _08135598  @ =0x000007FC
	b _081355A6
	.byte 0x00
	.byte 0x00
_08135594:
	.4byte 0x04000089
_08135598:
	.4byte 0x000007FC
_0813559C:
	cmp r0, #127
	bgt _081355AA
	ldr r0, [r4, #32]
	add r0, r0, #1
	ldr r1, _081355B8  @ =0x000007FE
_081355A6:
	and r0, r0, r1
	str r0, [r4, #32]
_081355AA:
	cmp r6, #4
	beq _081355BC
	ldr r0, [r4, #32]
	ldr r1, [sp, #16]
	strb r0, [r1]
	b _081355CA
	.byte 0x00
	.byte 0x00
_081355B8:
	.4byte 0x000007FE
_081355BC:
	ldr r2, [sp, #16]
	ldrb r0, [r2]
	mov r1, #8
	and r1, r1, r0
	ldr r0, [r4, #32]
	orr r0, r0, r1
	strb r0, [r2]
_081355CA:
	mov r0, #192
	ldrb r1, [r4, #26]
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #33
	ldrb r1, [r1]
	add r0, r1, r0
	strb r0, [r4, #26]
	mov r2, #255
	and r0, r0, r2
	ldr r1, [sp, #20]
	strb r0, [r1]
_081355E2:
	mov r0, #1
	ldrb r2, [r4, #29]
	and r0, r0, r2
	cmp r0, #0
	beq _08135668
	ldr r1, _0813562C  @ =0x04000081
	ldrb r0, [r1]
	ldrb r2, [r4, #28]
	bic r0, r0, r2
	ldrb r2, [r4, #27]
	orr r0, r0, r2
	strb r0, [r1]
	cmp r6, #3
	bne _08135634
	ldr r0, _08135630  @ =gUnknown_083C28B8
	ldrb r1, [r4, #9]
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r2, [sp, #12]
	strb r0, [r2]
	mov r1, #128
	add r0, r1, #0
	ldrb r2, [r4, #26]
	and r0, r0, r2
	cmp r0, #0
	beq _08135668
	ldr r0, [sp, #8]
	strb r1, [r0]
	ldrb r0, [r4, #26]
	ldr r1, [sp, #20]
	strb r0, [r1]
	mov r0, #127
	ldrb r2, [r4, #26]
	and r0, r0, r2
	strb r0, [r4, #26]
	b _08135668
	.byte 0x00
	.byte 0x00
_0813562C:
	.4byte 0x04000081
_08135630:
	.4byte gUnknown_083C28B8
_08135634:
	mov r0, #15
	mov r1, r8
	and r1, r1, r0
	mov r8, r1
	ldrb r2, [r4, #9]
	lsl r0, r2, #4
	add r0, r0, r8
	ldr r1, [sp, #12]
	strb r0, [r1]
	mov r2, #128
	ldrb r0, [r4, #26]
	orr r0, r0, r2
	ldr r1, [sp, #20]
	strb r0, [r1]
	cmp r6, #1
	bne _08135668
	ldr r0, [sp, #8]
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _08135668
	ldrb r0, [r4, #26]
	orr r0, r0, r2
	ldr r1, [sp, #20]
	strb r0, [r1]
_08135668:
	mov r0, #0
	strb r0, [r4, #29]
_0813566C:
	mov r6, r10
	mov r4, r9
	cmp r6, #4
	bgt _08135676
	b _0813526C
_08135676:
	add sp, sp, #28
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0813523C

	.byte 0x00
	.byte 0x00
