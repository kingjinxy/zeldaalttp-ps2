	THUMB_FUNC_START sub_080D8660
sub_080D8660: @ 0x080D8660
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080C6240
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8680
	b _080D8838
_080D8680:
	ldr r0, _080D86E0  @ =gRam
	mov r8, r0
	ldr r0, _080D86E4  @ =0x00000F52
	add r0, r0, r8
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080D8722
	add r0, r0, #1
	strb r0, [r1]
	ldr r5, _080D86E8  @ =0x00000F12
	add r5, r5, r8
	add r5, r7, r5
	mov r1, #1
	mov r9, r1
	mov r3, r9
	strb r3, [r5]
	ldr r4, _080D86EC  @ =0x00000F22
	add r4, r4, r8
	add r4, r7, r4
	strb r3, [r4]
	add r0, r7, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #255
	strb r0, [r5]
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
	add r0, r7, #0
	bl sub_080C79F8
	ldr r0, _080D86F0  @ =0x00001042
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	orr r6, r6, r0
	cmp r6, #3
	bls _080D86F4
	mov r2, #2
	mov r0, #4
	and r6, r6, r0
	cmp r6, #0
	bne _080D8700
	mov r2, #3
	b _080D8700
_080D86E0:
	.4byte gRam
_080D86E4:
	.4byte 0x00000F52
_080D86E8:
	.4byte 0x00000F12
_080D86EC:
	.4byte 0x00000F22
_080D86F0:
	.4byte 0x00001042
_080D86F4:
	mov r2, #0
	mov r0, r9
	and r6, r6, r0
	cmp r6, #0
	bne _080D8700
	mov r2, #1
_080D8700:
	ldr r1, _080D87A8  @ =gRam
	ldr r3, _080D87AC  @ =0x00000FF2
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #92
	beq _080D8714
	add r0, r2, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
_080D8714:
	ldr r3, _080D87B0  @ =0x00000FB2
	add r0, r1, r3
	add r0, r7, r0
	ldr r1, _080D87B4  @ =gUnknown_081757E8
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
_080D8722:
	ldr r5, _080D87A8  @ =gRam
	ldr r0, _080D87B8  @ =0x00001122
	add r3, r5, r0
	add r3, r7, r3
	ldrb r0, [r3]
	mov r2, #63
	and r2, r2, r0
	ldr r4, _080D87BC  @ =gUnknown_081757E4
	ldr r1, _080D87C0  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r3]
	add r0, r7, #0
	bl Sprite3_Move
	add r0, r7, #0
	bl sub_080C4F98
	ldr r3, _080D87C4  @ =0x00000F22
	add r1, r5, r3
	add r1, r7, r1
	ldr r2, _080D87C8  @ =gUnknown_08176960
	add r3, r3, #144
	add r0, r5, r3
	add r4, r7, r0
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D87CC  @ =0x00000F12
	add r1, r5, r0
	add r1, r7, r1
	ldr r2, _080D87D0  @ =gUnknown_08176968
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080C79F8
	ldr r1, _080D87D4  @ =0x00000FE2
	add r0, r5, r1
	add r3, r7, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080D87E0
	ldr r0, _080D87D8  @ =0x00001042
	add r1, r5, r0
	add r1, r7, r1
	ldr r2, _080D87DC  @ =gUnknown_08176990
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080D87EE
	mov r0, #10
	strb r0, [r3]
	b _080D87EE
	.byte 0x00
	.byte 0x00
_080D87A8:
	.4byte gRam
_080D87AC:
	.4byte 0x00000FF2
_080D87B0:
	.4byte 0x00000FB2
_080D87B4:
	.4byte gUnknown_081757E8
_080D87B8:
	.4byte 0x00001122
_080D87BC:
	.4byte gUnknown_081757E4
_080D87C0:
	.4byte 0x00000996
_080D87C4:
	.4byte 0x00000F22
_080D87C8:
	.4byte gUnknown_08176960
_080D87CC:
	.4byte 0x00000F12
_080D87D0:
	.4byte gUnknown_08176968
_080D87D4:
	.4byte 0x00000FE2
_080D87D8:
	.4byte 0x00001042
_080D87DC:
	.4byte gUnknown_08176990
_080D87E0:
	cmp r0, #6
	bne _080D87EE
	ldr r0, _080D8844  @ =gUnknown_081769A0
	ldrb r1, [r4]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r4]
_080D87EE:
	ldr r4, _080D8848  @ =gRam
	ldr r1, _080D884C  @ =0x00001042
	add r2, r4, r1
	add r2, r7, r2
	ldr r1, _080D8850  @ =gUnknown_08176988
	ldr r3, _080D8854  @ =0x00000FB2
	add r0, r4, r3
	add r6, r7, r0
	ldrb r3, [r6]
	add r1, r3, r1
	ldrb r2, [r2]
	ldrb r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080D8814
	ldr r0, _080D8858  @ =gUnknown_08176998
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r6]
_080D8814:
	ldr r0, _080D885C  @ =0x00000F22
	add r1, r4, r0
	add r1, r7, r1
	ldr r2, _080D8860  @ =gUnknown_08176970
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r1]
	ldr r3, _080D8864  @ =0x00000F12
	add r1, r4, r3
	add r1, r7, r1
	ldr r2, _080D8868  @ =gUnknown_08176978
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r1]
_080D8838:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080D8844:
	.4byte gUnknown_081769A0
_080D8848:
	.4byte gRam
_080D884C:
	.4byte 0x00001042
_080D8850:
	.4byte gUnknown_08176988
_080D8854:
	.4byte 0x00000FB2
_080D8858:
	.4byte gUnknown_08176998
_080D885C:
	.4byte 0x00000F22
_080D8860:
	.4byte gUnknown_08176970
_080D8864:
	.4byte 0x00000F12
_080D8868:
	.4byte gUnknown_08176978
	THUMB_FUNC_END sub_080D8660

