	THUMB_FUNC_START sub_080E8CE4
sub_080E8CE4: @ 0x080E8CE4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080E8E30  @ =gRam
	mov r8, r0
	ldr r2, _080E8E34  @ =0x00000F92
	add r2, r2, r8
	add r2, r4, r2
	ldr r3, _080E8E38  @ =gUnknown_08177A5C
	ldr r0, _080E8E3C  @ =0x00001052
	add r0, r0, r8
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E8E40  @ =0x00000FB2
	add r1, r1, r8
	add r1, r1, r4
	mov r9, r1
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080E8FB0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080E8E24
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r0, _080E8E44  @ =0x00001152
	add r0, r0, r8
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #2
	strb r0, [r5]
	ldr r0, _080E8E48  @ =0x00001142
	add r0, r0, r8
	add r7, r4, r0
	ldrb r0, [r7]
	sub r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080E8DB2
	ldrb r0, [r5]
	sub r0, r0, #240
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080E8D72
	add r0, r4, #0
	bl sub_080E2614
_080E8D72:
	strb r6, [r7]
	strb r6, [r5]
	ldr r5, _080E8E4C  @ =0x00000996
	add r5, r5, r8
	ldrb r0, [r5]
	add r1, r4, #0
	eor r1, r1, r0
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080E8DB2
	add r0, r4, #0
	bl sub_080C2FA8
	add r2, r0, #0
	ldr r0, _080E8E50  @ =0x00001082
	add r0, r0, r8
	add r0, r4, r0
	strb r2, [r0]
	ldrb r1, [r5]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080E8DB2
	mov r1, r9
	strb r2, [r1]
	add r0, r4, #0
	mov r1, #8
	bl sub_080C35FC
_080E8DB2:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C79F8
	ldr r5, _080E8E30  @ =gRam
	ldr r1, _080E8E48  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080E8E16
	add r0, r4, #0
	bl sub_080E91FC
	ldr r1, _080E8E54  @ =0x000015E2
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #8
	bne _080E8E16
	add r0, r4, #0
	bl sub_080CB1E0
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r1, _080E8E58  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r3, #0
	mov r2, #3
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080E8E5C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	add r1, r1, #192
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_080E8E16:
	ldr r1, _080E8E30  @ =gRam
	ldr r5, _080E8E3C  @ =0x00001052
	add r1, r1, r5
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E8E24:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E8E30:
	.4byte gRam
_080E8E34:
	.4byte 0x00000F92
_080E8E38:
	.4byte gUnknown_08177A5C
_080E8E3C:
	.4byte 0x00001052
_080E8E40:
	.4byte 0x00000FB2
_080E8E44:
	.4byte 0x00001152
_080E8E48:
	.4byte 0x00001142
_080E8E4C:
	.4byte 0x00000996
_080E8E50:
	.4byte 0x00001082
_080E8E54:
	.4byte 0x000015E2
_080E8E58:
	.4byte 0x00000FA2
_080E8E5C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E8CE4

