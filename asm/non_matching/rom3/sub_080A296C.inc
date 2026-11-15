	THUMB_FUNC_START sub_080A296C
sub_080A296C: @ 0x080A296C
	push {r4-r6,lr}
	mov r6, #0
	ldr r4, _080A29B4  @ =gRam
	ldr r0, _080A29B8  @ =0x000016E8
	add r2, r4, r0
	ldrb r3, [r2]
	mov r5, #64
	add r0, r5, #0
	and r0, r0, r3
	cmp r0, #0
	beq _080A299A
	ldr r0, _080A29BC  @ =0x00001886
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2994
	b _080A2AC4
_080A2994:
	mov r0, #191
	and r0, r0, r3
	strb r0, [r2]
_080A299A:
	ldrb r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080A29AE
	ldr r1, _080A29C0  @ =0x000016F8
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A29C4
_080A29AE:
	mov r0, #0
	b _080A29C8
	.byte 0x00
	.byte 0x00
_080A29B4:
	.4byte gRam
_080A29B8:
	.4byte 0x000016E8
_080A29BC:
	.4byte 0x00001886
_080A29C0:
	.4byte 0x000016F8
_080A29C4:
	bl sub_080A1ADC
_080A29C8:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2AC4
	ldr r1, _080A2A78  @ =gRam
	ldr r3, _080A2A7C  @ =0x00001886
	add r2, r1, r3
	mov r0, #128
	strb r0, [r2]
	ldr r2, _080A2A80  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r2, r1, #0
	cmp r0, #0
	bne _080A2ABA
	ldr r3, _080A2A84  @ =0x000009C6
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2ABA
	ldr r1, _080A2A88  @ =0x000009AC
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #11
	beq _080A2ABA
	mov r1, #4
	ldr r0, _080A2A8C  @ =0x00000E15
	add r3, r2, r0
_080A2A06:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #39
	beq _080A2ABA
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080A2A06
	ldr r0, _080A2A90  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #2
	bne _080A2AA0
	ldr r1, _080A2A84  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #24
	bne _080A2ABA
	mov r3, #182
	lsl r3, r3, #5
	add r1, r2, r3
	ldr r3, _080A2A94  @ =0xFFFFF8A0
	add r0, r3, #0
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #88
	bhi _080A2ABA
	ldr r1, _080A2A98  @ =0x000016C4
	add r0, r2, r1
	mov r3, #0
	ldrsh r1, [r0, r3]
	mov r0, #231
	lsl r0, r0, #1
	cmp r1, r0
	ble _080A2ABA
	add r0, r0, #97
	cmp r1, r0
	bgt _080A2ABA
	ldr r0, _080A2A9C  @ =0x000009AD
	add r1, r2, r0
	mov r0, #45
	strb r0, [r1]
	mov r0, #0
	mov r1, #55
	bl sub_08122F2C
	lsl r0, r6, #24
	mov r1, #128
	lsl r1, r1, #17
	add r0, r0, r1
	lsr r6, r0, #24
	b _080A2ABA
	.byte 0x00
	.byte 0x00
_080A2A78:
	.4byte gRam
_080A2A7C:
	.4byte 0x00001886
_080A2A80:
	.4byte 0x000009B2
_080A2A84:
	.4byte 0x000009C6
_080A2A88:
	.4byte 0x000009AC
_080A2A8C:
	.4byte 0x00000E15
_080A2A90:
	.4byte gFlute
_080A2A94:
	.4byte 0xFFFFF8A0
_080A2A98:
	.4byte 0x000016C4
_080A2A9C:
	.4byte 0x000009AD
_080A2AA0:
	mov r0, #4
	mov r1, #39
	bl sub_081226A0
	ldr r0, _080A2ACC  @ =gRam
	ldr r2, _080A2AD0  @ =0x0000188F
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
	mov r0, #12
	mov r1, #1
	bl sub_080BEA28
_080A2ABA:
	cmp r6, #0
	bne _080A2AC4
	mov r0, #46
	bl sub_0809E43C
_080A2AC4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A2ACC:
	.4byte gRam
_080A2AD0:
	.4byte 0x0000188F
	THUMB_FUNC_END sub_080A296C

