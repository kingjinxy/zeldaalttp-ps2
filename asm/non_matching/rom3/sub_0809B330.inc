	THUMB_FUNC_START sub_0809B330
sub_0809B330: @ 0x0809B330
	push {r4-r6,lr}
	bl sub_08092F30
	bl sub_0809FC7C
	ldr r3, _0809B3AC  @ =gRam
	ldr r1, _0809B3B0  @ =0x000009C6
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	ldr r2, _0809B3B4  @ =0x0000173A
	add r1, r3, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r1, [r1]
	cmp r0, r1
	beq _0809B3D8
	ldr r4, _0809B3B8  @ =0x00000978
	add r0, r3, r4
	ldr r1, _0809B3BC  @ =0x0000097C
	add r2, r3, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	orr r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strb r1, [r0]
	mov r0, #15
	and r1, r1, r0
	add r5, r3, #0
	cmp r1, #0
	beq _0809B3D8
_0809B374:
	ldr r3, _0809B3C0  @ =0x000009AD
	add r1, r5, r3
	mov r2, #0
	mov r0, #44
	strb r0, [r1]
	ldr r4, _0809B3C4  @ =0x0000188F
	add r0, r5, r4
	strb r2, [r0]
	mov r0, #187
	lsl r0, r0, #5
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809B3C8  @ =0x000009E8
	add r0, r5, r1
	mov r1, #0
	strh r2, [r0]
	ldr r2, _0809B3CC  @ =0x000016CD
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0809B3D0  @ =0x000016CE
	add r0, r5, r3
	strb r1, [r0]
	ldr r4, _0809B3D4  @ =0x00001718
	add r1, r5, r4
	mov r0, #20
	strb r0, [r1]
	b _0809B54A
_0809B3AC:
	.4byte gRam
_0809B3B0:
	.4byte 0x000009C6
_0809B3B4:
	.4byte 0x0000173A
_0809B3B8:
	.4byte 0x00000978
_0809B3BC:
	.4byte 0x0000097C
_0809B3C0:
	.4byte 0x000009AD
_0809B3C4:
	.4byte 0x0000188F
_0809B3C8:
	.4byte 0x000009E8
_0809B3CC:
	.4byte 0x000016CD
_0809B3D0:
	.4byte 0x000016CE
_0809B3D4:
	.4byte 0x00001718
_0809B3D8:
	mov r4, #0
	mov r2, #3
	ldr r1, _0809B464  @ =gRam
	ldr r3, _0809B468  @ =0x000017D0
	add r0, r1, r3
	ldrb r3, [r0]
	add r5, r1, #0
	mov r1, #1
_0809B3E8:
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809B3F6
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_0809B3F6:
	lsr r3, r3, #1
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _0809B3E8
	cmp r4, #1
	bls _0809B4B2
	ldr r0, _0809B46C  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809B494
	ldr r4, _0809B470  @ =0x000017D4
	add r1, r5, r4
	mov r4, #0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809B474  @ =0x000016CC
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _0809B478  @ =0x000017CE
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0809B47C  @ =0x00001750
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _0809B480  @ =0x000017DF
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #24
	add r0, r5, r2
	strb r4, [r0]
	bl sub_08092B0C
	ldr r3, _0809B484  @ =0x00001718
	add r1, r5, r3
	mov r0, #4
	strb r0, [r1]
	ldr r0, _0809B488  @ =0x0000176E
	add r1, r5, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _0809B48C  @ =0x0000180D
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0809B490  @ =0x00001710
	add r0, r5, r2
	strb r4, [r0]
	add r3, r3, #217
	add r0, r5, r3
	strb r4, [r0]
	sub r1, r1, #244
	add r0, r5, r1
	b _0809B548
	.byte 0x00
	.byte 0x00
_0809B464:
	.4byte gRam
_0809B468:
	.4byte 0x000017D0
_0809B46C:
	.4byte gFlippers
_0809B470:
	.4byte 0x000017D4
_0809B474:
	.4byte 0x000016CC
_0809B478:
	.4byte 0x000017CE
_0809B47C:
	.4byte 0x00001750
_0809B480:
	.4byte 0x000017DF
_0809B484:
	.4byte 0x00001718
_0809B488:
	.4byte 0x0000176E
_0809B48C:
	.4byte 0x0000180D
_0809B490:
	.4byte 0x00001710
_0809B494:
	ldr r2, _0809B550  @ =0x000009C6
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	ldr r3, _0809B554  @ =0x0000173A
	add r1, r5, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r1, [r1]
	cmp r0, r1
	beq _0809B4AE
	b _0809B374
_0809B4AE:
	bl sub_0808B370
_0809B4B2:
	ldr r0, _0809B558  @ =gRam
	ldr r4, _0809B55C  @ =0x000017D4
	add r2, r0, r4
	ldrb r1, [r2]
	add r5, r0, #0
	cmp r1, #0
	beq _0809B4D0
	mov r0, #0
	strb r0, [r2]
	ldr r1, _0809B560  @ =0x000017CE
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _0809B564  @ =0x000016CC
	add r0, r5, r2
	strb r1, [r0]
_0809B4D0:
	ldr r3, _0809B568  @ =0x00001806
	add r0, r5, r3
	mov r2, #0
	strb r2, [r0]
	ldr r4, _0809B56C  @ =0x00001804
	add r0, r5, r4
	strb r2, [r0]
	ldr r1, _0809B570  @ =0x00001719
	add r0, r5, r1
	strb r2, [r0]
	ldr r3, _0809B574  @ =0x000016E8
	add r0, r5, r3
	strb r2, [r0]
	ldr r4, _0809B578  @ =0x000016EA
	add r0, r5, r4
	strb r2, [r0]
	sub r1, r1, #20
	add r0, r5, r1
	strb r2, [r0]
	add r3, r3, #208
	add r0, r5, r3
	mov r1, #0
	strh r2, [r0]
	sub r4, r4, #29
	add r0, r5, r4
	strb r1, [r0]
	ldr r0, _0809B550  @ =0x000009C6
	add r3, r5, r0
	ldrh r1, [r3]
	mov r6, #64
	add r0, r6, #0
	and r0, r0, r1
	add r4, r4, #109
	add r1, r5, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r1, [r1]
	cmp r0, r1
	beq _0809B524
	ldr r1, _0809B57C  @ =0x00000B54
	add r0, r5, r1
	strh r2, [r0]
_0809B524:
	mov r4, #0
	ldr r2, _0809B580  @ =0x00001811
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809B544
	ldr r0, _0809B584  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809B544
	ldrh r1, [r3]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809B544
	mov r4, #23
_0809B544:
	ldr r3, _0809B588  @ =0x00001718
	add r0, r5, r3
_0809B548:
	strb r4, [r0]
_0809B54A:
	pop {r4-r6}
	pop {r0}
	bx r0
_0809B550:
	.4byte 0x000009C6
_0809B554:
	.4byte 0x0000173A
_0809B558:
	.4byte gRam
_0809B55C:
	.4byte 0x000017D4
_0809B560:
	.4byte 0x000017CE
_0809B564:
	.4byte 0x000016CC
_0809B568:
	.4byte 0x00001806
_0809B56C:
	.4byte 0x00001804
_0809B570:
	.4byte 0x00001719
_0809B574:
	.4byte 0x000016E8
_0809B578:
	.4byte 0x000016EA
_0809B57C:
	.4byte 0x00000B54
_0809B580:
	.4byte 0x00001811
_0809B584:
	.4byte gMoonPearl
_0809B588:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809B330

