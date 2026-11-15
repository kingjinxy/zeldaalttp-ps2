	THUMB_FUNC_START sub_080DC478
sub_080DC478: @ 0x080DC478
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080DC5A8  @ =gRam
	ldr r1, _080DC5AC  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080DC498
	b _080DC624
_080DC498:
	ldr r2, _080DC5B0  @ =0x00000F52
	add r0, r6, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080DC4A6
	b _080DC5E0
_080DC4A6:
	add r0, r5, #0
	bl sub_080D5954
	ldr r7, _080DC5B4  @ =0x000010D2
	add r0, r6, r7
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DC51A
	ldr r1, _080DC5B8  @ =gUnknown_081760D0
	ldr r2, _080DC5BC  @ =0x00000F92
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r0, r6, r7
	strb r1, [r0]
	mov r0, #0
	ldr r1, _080DC5C0  @ =gUnknown_03003E74
	mov r9, r1
	mov r2, #170
	lsl r2, r2, #3
	add r2, r2, r6
	mov r8, r2
	add r6, r6, r7
	ldr r7, _080DC5C4  @ =0x000003FF
	ldr r1, _080DC5C8  @ =0xFFFFFC00
	mov r12, r1
_080DC4E4:
	lsl r4, r0, #24
	asr r2, r4, #26
	mov r0, r9
	ldrh r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #3
	add r2, r2, r8
	ldrb r1, [r6]
	and r1, r1, r7
	ldrh r3, [r2, #4]
	mov r0, r12
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r2, #4]
	ldrb r1, [r2, #5]
	mov r0, #15
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r2, #5]
	mov r1, #128
	lsl r1, r1, #19
	add r4, r4, r1
	lsr r0, r4, #24
	asr r4, r4, #24
	cmp r4, #19
	ble _080DC4E4
_080DC51A:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC528
	b _080DC778
_080DC528:
	ldr r4, _080DC5A8  @ =gRam
	ldr r2, _080DC5CC  @ =0x00000FC2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r6, [r0]
	cmp r6, #0
	beq _080DC538
	b _080DC778
_080DC538:
	ldr r7, _080DC5D0  @ =0x00000EA5
	add r0, r4, r7
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC560
	ldr r1, _080DC5D4  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
	ldr r2, _080DC5D8  @ =0x0000188C
	add r1, r4, r2
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r1]
_080DC560:
	mov r7, #161
	lsl r7, r7, #4
	add r0, r4, r7
	ldr r2, _080DC5DC  @ =0x000010F2
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080DC57C
	add r0, r5, #0
	mov r1, #16
	bl sub_080C35FC
_080DC57C:
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC590
	b _080DC778
_080DC590:
	ldr r7, _080DC5D4  @ =0x00000FA2
	add r0, r4, r7
	add r0, r5, r0
	strb r6, [r0]
	add r0, r5, #0
	bl sub_080CF6C0
	add r0, r5, #0
	mov r1, #21
	bl sub_080CF0AC
	b _080DC778
_080DC5A8:
	.4byte gRam
_080DC5AC:
	.4byte 0x000009B2
_080DC5B0:
	.4byte 0x00000F52
_080DC5B4:
	.4byte 0x000010D2
_080DC5B8:
	.4byte gUnknown_081760D0
_080DC5BC:
	.4byte 0x00000F92
_080DC5C0:
	.4byte gUnknown_03003E74
_080DC5C4:
	.4byte 0x000003FF
_080DC5C8:
	.4byte 0xFFFFFC00
_080DC5CC:
	.4byte 0x00000FC2
_080DC5D0:
	.4byte 0x00000EA5
_080DC5D4:
	.4byte 0x00000FA2
_080DC5D8:
	.4byte 0x0000188C
_080DC5DC:
	.4byte 0x000010F2
_080DC5E0:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC5F4
	b _080DC778
_080DC5F4:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC602
	b _080DC778
_080DC602:
	add r0, r5, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC610
	b _080DC778
_080DC610:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r1, _080DC620  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #128
	b _080DC776
_080DC620:
	.4byte 0x00000FC2
_080DC624:
	ldr r2, _080DC6C8  @ =0x00001032
	add r2, r2, r6
	mov r9, r2
	add r0, r5, r2
	mov r1, #64
	strb r1, [r0]
	ldr r7, _080DC6CC  @ =0x00001172
	add r0, r6, r7
	add r0, r5, r0
	strb r1, [r0]
	ldr r0, _080DC6D0  @ =0x00000F52
	add r0, r0, r6
	mov r8, r0
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DC6F0
	ldr r1, _080DC6D4  @ =0x00000D94
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080DC7AC
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC664
	b _080DC778
_080DC664:
	add r0, r5, #0
	bl Sprite3_Move
	ldr r2, _080DC6D8  @ =0x00001052
	add r0, r6, r2
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080DC778
	ldr r7, _080DC6DC  @ =0x00000FB2
	add r0, r6, r7
	add r3, r5, r0
	ldrb r0, [r3]
	mov r2, #1
	and r2, r2, r0
	ldr r0, _080DC6E0  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080DC6E4  @ =gUnknown_081760D6
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r7, [r1]
	add r0, r0, r7
	strb r0, [r1]
	ldr r1, _080DC6E8  @ =gUnknown_081760DA
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _080DC6B0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080DC6B0:
	ldrb r1, [r4]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080DC778
	ldr r0, _080DC6EC  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080DC778
_080DC6C8:
	.4byte 0x00001032
_080DC6CC:
	.4byte 0x00001172
_080DC6D0:
	.4byte 0x00000F52
_080DC6D4:
	.4byte 0x00000D94
_080DC6D8:
	.4byte 0x00001052
_080DC6DC:
	.4byte 0x00000FB2
_080DC6E0:
	.4byte 0x00000F22
_080DC6E4:
	.4byte gUnknown_081760D6
_080DC6E8:
	.4byte gUnknown_081760DA
_080DC6EC:
	.4byte 0x00000F92
_080DC6F0:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC778
	ldr r1, _080DC788  @ =0x00000FC2
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080DC778
	mov r7, #67
	strb r7, [r1]
	mov r0, #209
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DC778
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DC78C  @ =0x00000EE2
	add r1, r6, r2
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	ldrb r0, [r0]
	add r0, r0, #8
	strb r0, [r1]
	ldr r0, _080DC790  @ =0x00000ED2
	add r1, r6, r0
	add r1, r4, r1
	add r2, r2, #4
	add r0, r6, r2
	ldrb r0, [r0]
	add r0, r0, #4
	strb r0, [r1]
	ldr r1, _080DC794  @ =0x00001122
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	mov r2, r8
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080DC798  @ =0x00001012
	add r0, r6, r1
	add r0, r4, r0
	strb r7, [r0]
	mov r2, r9
	add r0, r4, r2
	strb r7, [r0]
	ldr r7, _080DC79C  @ =0x00000F22
	add r0, r6, r7
	add r0, r4, r0
	ldr r1, _080DC7A0  @ =gUnknown_081760DA
	ldrb r1, [r1, #1]
	strb r1, [r0]
	ldr r1, _080DC7A4  @ =0x00000F12
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #250
_080DC776:
	strb r1, [r0]
_080DC778:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC788:
	.4byte 0x00000FC2
_080DC78C:
	.4byte 0x00000EE2
_080DC790:
	.4byte 0x00000ED2
_080DC794:
	.4byte 0x00001122
_080DC798:
	.4byte 0x00001012
_080DC79C:
	.4byte 0x00000F22
_080DC7A0:
	.4byte gUnknown_081760DA
_080DC7A4:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080DC478

