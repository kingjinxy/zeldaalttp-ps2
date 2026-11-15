	THUMB_FUNC_START sub_081234B0
sub_081234B0: @ 0x081234B0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _0812354C  @ =gRam
	ldr r1, _08123550  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _081234D8
	add r0, r7, #0
	mov r1, #100
	bl sub_080C19F8
_081234D8:
	ldr r2, _08123554  @ =0x00001832
	add r0, r4, r2
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081234FC
	mov r0, #3
	strb r0, [r1]
	ldr r3, _08123558  @ =0x00001813
	add r1, r4, r3
	add r1, r7, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
_081234FC:
	ldr r5, _0812355C  @ =0x00001844
	add r0, r4, r5
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08123510
	b _0812373A
_08123510:
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08123560  @ =0x00001818
	add r0, r4, r1
	add r5, r7, r0
	ldrb r3, [r5]
	cmp r3, #0
	bne _081235EA
	ldr r2, _08123564  @ =0x00000E29
	add r0, r4, r2
	add r2, r7, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _081235C0
	ldr r3, _08123568  @ =0x00000E1F
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08123570
	ldr r5, _0812356C  @ =0x00000A88
	add r1, r4, r5
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #255
	b _0812357A
_0812354C:
	.4byte gRam
_08123550:
	.4byte 0x00000996
_08123554:
	.4byte 0x00001832
_08123558:
	.4byte 0x00001813
_0812355C:
	.4byte 0x00001844
_08123560:
	.4byte 0x00001818
_08123564:
	.4byte 0x00000E29
_08123568:
	.4byte 0x00000E1F
_0812356C:
	.4byte 0x00000A88
_08123570:
	ldr r0, _0812359C  @ =0x00000A88
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
_0812357A:
	strb r0, [r1]
	ldr r2, _081235A0  @ =gRam
	ldr r1, _0812359C  @ =0x00000A88
	add r0, r2, r1
	add r3, r7, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _081235A4
	ldrb r0, [r3]
	neg r0, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _081235A6
	.byte 0x00
	.byte 0x00
_0812359C:
	.4byte 0x00000A88
_081235A0:
	.4byte gRam
_081235A4:
	ldrb r2, [r3]
_081235A6:
	cmp r2, #11
	bhi _081235AC
	b _0812373A
_081235AC:
	ldr r2, _081235BC  @ =0x00000E1F
	add r0, r4, r2
	add r0, r7, r0
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	b _08123738
	.byte 0x00
	.byte 0x00
_081235BC:
	.4byte 0x00000E1F
_081235C0:
	strb r3, [r2]
	ldr r0, _0812360C  @ =0x00000E1F
	add r2, r4, r0
	add r2, r7, r2
	strb r3, [r2]
	ldr r1, _08123610  @ =0x00000DF7
	add r0, r4, r1
	add r0, r7, r0
	ldr r1, _08123614  @ =gUnknown_08180420
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _08123618  @ =0x00000A88
	add r0, r4, r3
	add r0, r7, r0
	mov r1, #240
	strb r1, [r0]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #3
	strb r0, [r2]
_081235EA:
	ldr r2, _0812361C  @ =gRam
	ldr r5, _0812360C  @ =0x00000E1F
	add r0, r2, r5
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _08123620
	ldr r0, _08123610  @ =0x00000DF7
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #255
	b _0812362A
	.byte 0x00
	.byte 0x00
_0812360C:
	.4byte 0x00000E1F
_08123610:
	.4byte 0x00000DF7
_08123614:
	.4byte gUnknown_08180420
_08123618:
	.4byte 0x00000A88
_0812361C:
	.4byte gRam
_08123620:
	ldr r2, _08123648  @ =0x00000DF7
	add r1, r4, r2
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
_0812362A:
	strb r0, [r1]
	ldr r3, _08123648  @ =0x00000DF7
	add r0, r4, r3
	add r2, r7, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0812364C
	ldrb r0, [r2]
	neg r0, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _0812364E
	.byte 0x00
	.byte 0x00
_08123648:
	.4byte 0x00000DF7
_0812364C:
	ldrb r2, [r2]
_0812364E:
	cmp r2, #0
	bne _08123670
	ldr r5, _081236D0  @ =0x00001818
	add r1, r4, r5
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bne _08123670
	ldr r1, _081236D4  @ =0x0000183C
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #1
	strb r1, [r0]
_08123670:
	ldr r0, _081236D8  @ =gUnknown_08180420
	ldr r3, _081236D4  @ =0x0000183C
	add r1, r4, r3
	add r1, r7, r1
	ldrb r1, [r1]
	add r1, r1, r0
	add r5, r0, #0
	ldrb r1, [r1]
	cmp r2, r1
	bcc _081236AA
	ldr r0, _081236DC  @ =0x00000E1F
	add r2, r4, r0
	add r2, r7, r2
	ldrb r1, [r2]
	mov r3, #3
	mov r0, #3
	and r0, r0, r1
	eor r0, r0, r3
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strb r0, [r1]
	ldrb r1, [r2]
	orr r0, r0, r1
	mov r3, #4
	neg r3, r3
	add r1, r3, #0
	and r0, r0, r1
	strb r0, [r2]
_081236AA:
	ldr r1, _081236E0  @ =0x00000DF7
	add r0, r4, r1
	add r1, r7, r0
	ldrb r2, [r1]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _081236E8
	ldrb r0, [r1]
	neg r0, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strb r0, [r1]
	ldr r3, _081236E4  @ =0x00000E3D
	add r0, r4, r3
	add r0, r7, r0
	mov r1, #2
	b _081236F8
_081236D0:
	.4byte 0x00001818
_081236D4:
	.4byte 0x0000183C
_081236D8:
	.4byte gUnknown_08180420
_081236DC:
	.4byte 0x00000E1F
_081236E0:
	.4byte 0x00000DF7
_081236E4:
	.4byte 0x00000E3D
_081236E8:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _08123864  @ =0x00000E3D
	add r0, r4, r2
	add r0, r7, r0
	mov r1, #3
_081236F8:
	strb r1, [r0]
	add r2, r4, #0
	ldr r3, _08123868  @ =0x0000183C
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r5
	ldrb r0, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r3, r2, r5
	mov r1, #0
	ldrsb r1, [r3, r1]
	sub r0, r0, r1
	asr r0, r0, #1
	strb r0, [r3]
	ldr r0, _0812386C  @ =0x00000E1F
	add r2, r2, r0
	add r2, r7, r2
	ldrb r1, [r2]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08123730
	mov r0, #0
	ldrsb r0, [r3, r0]
	neg r0, r0
	strb r0, [r3]
_08123730:
	ldr r1, _08123870  @ =0x00000A88
	add r0, r4, r1
	add r0, r7, r0
	ldrb r1, [r3]
_08123738:
	strb r1, [r0]
_0812373A:
	add r0, r7, #0
	bl sub_080C1768
	add r0, r7, #0
	mov r1, #0
	bl sub_080BF804
	ldr r2, _08123874  @ =gRam
	mov r10, r2
	ldr r1, _08123878  @ =gUnknown_081803DC
	ldr r0, _0812387C  @ =0x00001813
	add r0, r0, r10
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _08123880  @ =0x00000CEA
	add r0, r0, r10
	strh r1, [r0]
	add r0, r7, #0
	bl sub_080C177C
	ldr r2, _08123884  @ =gUnknown_0818041E
	ldr r0, _08123864  @ =0x00000E3D
	add r0, r0, r10
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r3, r3, r10
	mov r12, r3
	strb r0, [r3]
	ldr r0, _08123888  @ =0x00000A92
	add r0, r0, r10
	add r0, r7, r0
	ldrb r2, [r0]
	cmp r2, #127
	bls _08123798
	mov r5, #255
	lsl r5, r5, #8
	add r0, r5, #0
	orr r2, r2, r0
_08123798:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r10
	mov r9, r0
	ldrh r1, [r0]
	ldr r3, _0812388C  @ =gUnknown_03002BA4
	strh r1, [r3]
	add r1, r1, r2
	ldr r5, _08123890  @ =gUnknown_03002B98
	strh r1, [r5]
	ldr r0, _08123894  @ =0x00000964
	add r0, r0, r10
	mov r8, r0
	ldrh r2, [r0]
	ldr r3, _08123898  @ =gUnknown_03002B9C
	strh r2, [r3]
	ldr r0, _0812389C  @ =gUnknown_081803D6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r1
	mov r5, r9
	strh r0, [r5]
	ldr r0, _081238A0  @ =gUnknown_081803D9
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r2
	mov r1, r8
	strh r0, [r1]
	ldr r6, _081238A4  @ =gUnknown_03003E74
	ldrh r0, [r6]
	ldrh r1, [r1]
	ldrh r2, [r5]
	ldr r3, _081238A8  @ =gUnknown_081803D0
	ldrb r3, [r3]
	ldr r4, _081238AC  @ =gUnknown_081803D3
	ldrb r5, [r4]
	mov r4, #48
	orr r4, r4, r5
	mov r5, r12
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	ldr r1, _0812388C  @ =gUnknown_03002BA4
	ldrh r0, [r1]
	add r0, r0, #48
	mov r2, r9
	strh r0, [r2]
	ldr r3, _08123898  @ =gUnknown_03002B9C
	ldrh r0, [r3]
	mov r5, r8
	strh r0, [r5]
	mov r0, #48
	ldr r1, _08123890  @ =gUnknown_03002B98
	strb r0, [r1]
	mov r0, #1
	bl sub_0811B82C
	ldr r2, _08123898  @ =gUnknown_03002B9C
	mov r3, #0
	ldrsh r0, [r2, r3]
	mov r1, #128
	lsl r1, r1, #8
	and r0, r0, r1
	cmp r0, #0
	bne _08123854
	mov r5, #0
	ldrsh r0, [r2, r5]
	cmp r0, #247
	ble _08123854
	ldr r0, _081238B0  @ =0x00000E15
	add r0, r0, r10
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _081238B4  @ =0x000009AD
	add r0, r0, r10
	strb r1, [r0]
	ldr r1, _081238B8  @ =gFlute
	mov r0, #3
	strb r0, [r1]
_08123854:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08123864:
	.4byte 0x00000E3D
_08123868:
	.4byte 0x0000183C
_0812386C:
	.4byte 0x00000E1F
_08123870:
	.4byte 0x00000A88
_08123874:
	.4byte gRam
_08123878:
	.4byte gUnknown_081803DC
_0812387C:
	.4byte 0x00001813
_08123880:
	.4byte 0x00000CEA
_08123884:
	.4byte gUnknown_0818041E
_08123888:
	.4byte 0x00000A92
_0812388C:
	.4byte gUnknown_03002BA4
_08123890:
	.4byte gUnknown_03002B98
_08123894:
	.4byte 0x00000964
_08123898:
	.4byte gUnknown_03002B9C
_0812389C:
	.4byte gUnknown_081803D6
_081238A0:
	.4byte gUnknown_081803D9
_081238A4:
	.4byte gUnknown_03003E74
_081238A8:
	.4byte gUnknown_081803D0
_081238AC:
	.4byte gUnknown_081803D3
_081238B0:
	.4byte 0x00000E15
_081238B4:
	.4byte 0x000009AD
_081238B8:
	.4byte gFlute
	THUMB_FUNC_END sub_081234B0

