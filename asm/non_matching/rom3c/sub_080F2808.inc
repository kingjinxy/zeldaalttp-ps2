	THUMB_FUNC_START sub_080F2808
sub_080F2808: @ 0x080F2808
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F2938  @ =gRam
	ldr r1, _080F293C  @ =0x00000AB2
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #26
	bne _080F281C
	b _080F29A4
_080F281C:
	ldr r2, _080F2940  @ =0x00001172
	add r1, r6, r2
	add r1, r5, r1
	ldr r3, _080F2944  @ =0x000010A2
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F2844
	mov r0, #3
	bl sub_0812FBC4
	add r0, r5, #0
	bl sub_080C1F70
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080F2844:
	ldr r1, _080F2948  @ =0x00000B36
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #6
	bne _080F2860
	ldr r2, _080F294C  @ =0x00001142
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F2860
	add r0, r5, #0
	bl sub_080E91E0
_080F2860:
	ldr r7, _080F2938  @ =gRam
	ldr r3, _080F2950  @ =0x00000FA2
	add r0, r7, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080F2874
	add r0, r5, #0
	bl sub_080C5D18
_080F2874:
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _080F288A
	b _080F29AE
_080F288A:
	ldr r1, _080F2954  @ =0x00001152
	add r0, r7, r1
	add r4, r5, r0
	ldrb r0, [r4]
	sub r0, r0, #2
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r2, _080F294C  @ =0x00001142
	add r0, r7, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F28EA
	strb r6, [r2]
	ldrb r0, [r4]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	asr r0, r0, #2
	strb r0, [r4]
	ldr r3, _080F2948  @ =0x00000B36
	add r0, r7, r3
	ldrh r0, [r0]
	cmp r0, #6
	bne _080F28EA
	ldr r1, _080F2958  @ =0x00001002
	add r0, r7, r1
	add r2, r5, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080F28EA
	ldr r3, _080F295C  @ =0x00001012
	add r0, r7, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #2
	strb r1, [r0]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080F7AB4
_080F28EA:
	bl sub_0809E3CC
	add r4, r0, #0
	cmp r4, #0
	bne _080F29AE
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F29AE
	ldr r6, _080F2938  @ =gRam
	ldr r1, _080F2950  @ =0x00000FA2
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r2, _080F2960  @ =0x00000F62
	add r0, r6, r2
	add r0, r5, r0
	ldrb r4, [r0]
	cmp r4, #0
	beq _080F296C
	ldr r3, _080F2964  @ =0x00001776
	add r1, r6, r3
	mov r0, #2
	strb r0, [r1]
	mov r0, #62
	bl sub_080A1588
	ldr r0, _080F2968  @ =0x00000AA8
	add r2, r6, r0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	b _080F29AE
	.byte 0x00
	.byte 0x00
_080F2938:
	.4byte gRam
_080F293C:
	.4byte 0x00000AB2
_080F2940:
	.4byte 0x00001172
_080F2944:
	.4byte 0x000010A2
_080F2948:
	.4byte 0x00000B36
_080F294C:
	.4byte 0x00001142
_080F2950:
	.4byte 0x00000FA2
_080F2954:
	.4byte 0x00001152
_080F2958:
	.4byte 0x00001002
_080F295C:
	.4byte 0x00001012
_080F2960:
	.4byte 0x00000F62
_080F2964:
	.4byte 0x00001776
_080F2968:
	.4byte 0x00000AA8
_080F296C:
	bl sub_08093078
	ldr r1, _080F2994  @ =0x00001776
	add r0, r6, r1
	strb r4, [r0]
	mov r0, #38
	bl sub_080A1588
	ldr r2, _080F2998  @ =0x000009B2
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F299C
	add r0, r5, #0
	bl sub_080F2A94
	b _080F29AE
	.byte 0x00
	.byte 0x00
_080F2994:
	.4byte 0x00001776
_080F2998:
	.4byte 0x000009B2
_080F299C:
	add r0, r5, #0
	bl sub_080F2A70
	b _080F29AE
_080F29A4:
	ldr r3, _080F29B4  @ =0x00000FA2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080F29AE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F29B4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F2808

