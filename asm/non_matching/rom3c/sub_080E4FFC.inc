	THUMB_FUNC_START sub_080E4FFC
sub_080E4FFC: @ 0x080E4FFC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E51B0
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _080E501C
	b _080E51A4
_080E501C:
	ldr r6, _080E50AC  @ =gRam
	ldr r1, _080E50B0  @ =0x00000FA2
	add r0, r6, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080E50D0
	ldr r2, _080E50B4  @ =0x00000F52
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E5060
	add r0, r4, #0
	bl sub_080C50E4
	ldr r1, _080E50B8  @ =0x00001152
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	ldr r2, _080E50BC  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r1, _080E50C0  @ =0x000010C2
	add r0, r6, r1
	add r0, r4, r0
	strb r7, [r0]
_080E5060:
	ldr r0, _080E50C4  @ =0x00000FB2
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080E50C8  @ =gUnknown_08177424
	ldr r1, _080E50BC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080E50B8  @ =0x00001152
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldr r1, _080E50CC  @ =0x00001142
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080E50A6
	b _080E51A4
_080E50A6:
	mov r2, r8
	strb r7, [r2]
	b _080E51A4
_080E50AC:
	.4byte gRam
_080E50B0:
	.4byte 0x00000FA2
_080E50B4:
	.4byte 0x00000F52
_080E50B8:
	.4byte 0x00001152
_080E50BC:
	.4byte 0x00000FC2
_080E50C0:
	.4byte 0x000010C2
_080E50C4:
	.4byte 0x00000FB2
_080E50C8:
	.4byte gUnknown_08177424
_080E50CC:
	.4byte 0x00001142
_080E50D0:
	ldr r1, _080E5120  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E5138
	add r0, r4, #0
	bl sub_080C500C
	ldr r2, _080E5124  @ =0x00001062
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E5180
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080E5128  @ =0x00001042
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E5180
	ldr r2, _080E512C  @ =0x00000F62
	add r0, r6, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080E5130
	mov r0, #48
	strb r0, [r5]
	mov r0, #2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #28
	bl sub_080CF0AC
	b _080E51A4
	.byte 0x00
	.byte 0x00
_080E5120:
	.4byte 0x00000FC2
_080E5124:
	.4byte 0x00001062
_080E5128:
	.4byte 0x00001042
_080E512C:
	.4byte 0x00000F62
_080E5130:
	add r0, r4, #0
	bl sub_080C4F18
	b _080E51A4
_080E5138:
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080E51A0
	cmp r1, #31
	bls _080E51A4
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080E51A4
	ldr r1, _080E5188  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	lsl r1, r1, #1
	mov r0, #4
	and r1, r1, r0
	ldr r2, _080E518C  @ =0x00000FB2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r0, _080E5190  @ =0x00000F22
	add r2, r6, r0
	add r2, r4, r2
	ldr r0, _080E5194  @ =gUnknown_08177428
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080E5198  @ =0x00000F12
	add r2, r6, r0
	add r2, r4, r2
	ldr r0, _080E519C  @ =gUnknown_08177430
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
_080E5180:
	add r0, r4, #0
	bl Sprite3_Move
	b _080E51A4
_080E5188:
	.4byte 0x00000996
_080E518C:
	.4byte 0x00000FB2
_080E5190:
	.4byte 0x00000F22
_080E5194:
	.4byte gUnknown_08177428
_080E5198:
	.4byte 0x00000F12
_080E519C:
	.4byte gUnknown_08177430
_080E51A0:
	mov r2, r8
	strb r1, [r2]
_080E51A4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E4FFC

	.byte 0x00
	.byte 0x00
