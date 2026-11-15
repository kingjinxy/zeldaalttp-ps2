	THUMB_FUNC_START sub_080A2CE0
sub_080A2CE0: @ 0x080A2CE0
	push {r4-r7,lr}
	ldr r2, _080A2D00  @ =gRam
	ldr r1, _080A2D04  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2CFC
	ldr r4, _080A2D08  @ =0x000016F8
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2D0C
_080A2CFC:
	mov r0, #0
	b _080A2D10
_080A2D00:
	.4byte gRam
_080A2D04:
	.4byte 0x000016E8
_080A2D08:
	.4byte 0x000016F8
_080A2D0C:
	bl sub_080A1ADC
_080A2D10:
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A2D18
	b _080A2F16
_080A2D18:
	ldr r3, _080A2D58  @ =gRam
	ldr r0, _080A2D5C  @ =0x000016E8
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	mov r2, #0
	ldr r1, _080A2D60  @ =0x0000178C
	add r0, r3, r1
	ldrb r0, [r0]
	add r7, r3, #0
	cmp r0, #11
	beq _080A2D3A
	sub r0, r0, #20
	lsl r0, r0, #24
	lsr r2, r0, #24
_080A2D3A:
	ldr r0, _080A2D64  @ =gUnknown_0817276C
	lsl r2, r2, #2
	add r4, r2, r0
	ldr r1, [r4]
	ldrb r1, [r1]
	add r6, r0, #0
	add r5, r2, #0
	cmp r1, #6
	bls _080A2D4E
	b _080A2EE8
_080A2D4E:
	lsl r0, r1, #2
	ldr r1, _080A2D68  @ =0x080A2D6C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080A2D58:
	.4byte gRam
_080A2D5C:
	.4byte 0x000016E8
_080A2D60:
	.4byte 0x0000178C
_080A2D64:
	.4byte gUnknown_0817276C
_080A2D68:
	.4byte 0x080A2D6C
	.4byte _080A2F16
	.4byte _080A2F00
	.4byte _080A2F00
	.4byte _080A2D88
	.4byte _080A2DEC
	.4byte _080A2E48
	.4byte _080A2EB8
_080A2D88:
	ldr r0, _080A2DD0  @ =gCurrentHealth
	ldr r1, _080A2DD4  @ =gMaxHealth
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080A2D96
	b _080A2F00
_080A2D96:
	add r0, r5, r6
	ldr r1, [r0]
	mov r0, #2
	strb r0, [r1]
	mov r0, #20
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A2DD8  @ =gRam
	ldr r4, _080A2DDC  @ =0x0000178A
	add r2, r1, r4
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080A2DE0  @ =0x000009AD
	add r2, r1, r0
	mov r0, #4
	strb r0, [r2]
	ldr r4, _080A2DE4  @ =0x000009AC
	add r3, r1, r4
	ldrb r2, [r3]
	add r4, r4, #110
	add r0, r1, r4
	strh r2, [r0]
	mov r0, #14
	strb r0, [r3]
	ldr r0, _080A2DE8  @ =0x00000A54
	add r1, r1, r0
	mov r0, #7
	b _080A2ED8
_080A2DD0:
	.4byte gCurrentHealth
_080A2DD4:
	.4byte gMaxHealth
_080A2DD8:
	.4byte gRam
_080A2DDC:
	.4byte 0x0000178A
_080A2DE0:
	.4byte 0x000009AD
_080A2DE4:
	.4byte 0x000009AC
_080A2DE8:
	.4byte 0x00000A54
_080A2DEC:
	ldr r0, _080A2E30  @ =gMagicMeter
	ldrb r0, [r0]
	cmp r0, #128
	bne _080A2DF6
	b _080A2F00
_080A2DF6:
	add r0, r5, r6
	ldr r1, [r0]
	mov r0, #2
	strb r0, [r1]
	mov r0, #21
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A2E34  @ =gRam
	ldr r4, _080A2E38  @ =0x0000178A
	add r2, r1, r4
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080A2E3C  @ =0x000009AD
	add r2, r1, r0
	mov r0, #8
	strb r0, [r2]
	ldr r4, _080A2E40  @ =0x000009AC
	add r3, r1, r4
	ldrb r2, [r3]
	add r4, r4, #110
	add r0, r1, r4
	strh r2, [r0]
	mov r0, #14
	strb r0, [r3]
	ldr r0, _080A2E44  @ =0x00000A54
	add r1, r1, r0
	mov r0, #7
	b _080A2ED8
_080A2E30:
	.4byte gMagicMeter
_080A2E34:
	.4byte gRam
_080A2E38:
	.4byte 0x0000178A
_080A2E3C:
	.4byte 0x000009AD
_080A2E40:
	.4byte 0x000009AC
_080A2E44:
	.4byte 0x00000A54
_080A2E48:
	ldr r0, _080A2E98  @ =gCurrentHealth
	ldr r1, _080A2E9C  @ =gMaxHealth
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080A2E5C
	ldr r0, _080A2EA0  @ =gMagicMeter
	ldrb r0, [r0]
	cmp r0, #128
	beq _080A2F00
_080A2E5C:
	add r0, r5, r6
	ldr r1, [r0]
	mov r0, #2
	strb r0, [r1]
	mov r0, #22
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A2EA4  @ =gRam
	ldr r4, _080A2EA8  @ =0x0000178A
	add r2, r1, r4
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080A2EAC  @ =0x000009AD
	add r2, r1, r0
	mov r0, #9
	strb r0, [r2]
	ldr r4, _080A2EB0  @ =0x000009AC
	add r3, r1, r4
	ldrb r2, [r3]
	add r4, r4, #110
	add r0, r1, r4
	strh r2, [r0]
	mov r0, #14
	strb r0, [r3]
	ldr r0, _080A2EB4  @ =0x00000A54
	add r1, r1, r0
	mov r0, #7
	b _080A2ED8
	.byte 0x00
	.byte 0x00
_080A2E98:
	.4byte gCurrentHealth
_080A2E9C:
	.4byte gMaxHealth
_080A2EA0:
	.4byte gMagicMeter
_080A2EA4:
	.4byte gRam
_080A2EA8:
	.4byte 0x0000178A
_080A2EAC:
	.4byte 0x000009AD
_080A2EB0:
	.4byte 0x000009AC
_080A2EB4:
	.4byte 0x00000A54
_080A2EB8:
	ldr r4, _080A2EE0  @ =0x0000178A
	add r1, r7, r4
	mov r0, #0
	strb r0, [r1]
	bl sub_080CFD60
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	beq _080A2F00
	ldr r0, _080A2EE4  @ =gUnknown_0817276C
	add r0, r5, r0
	ldr r1, [r0]
	mov r0, #2
_080A2ED8:
	strb r0, [r1]
	bl sub_080AA7BC
	b _080A2F16
_080A2EE0:
	.4byte 0x0000178A
_080A2EE4:
	.4byte gUnknown_0817276C
_080A2EE8:
	ldr r0, _080A2F08  @ =0x0000178A
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, [r4]
	ldrb r0, [r0]
	bl sub_080D0EE0
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _080A2F0C
_080A2F00:
	mov r0, #64
	bl sub_0809E43C
	b _080A2F16
_080A2F08:
	.4byte 0x0000178A
_080A2F0C:
	ldr r1, [r4]
	mov r0, #2
	strb r0, [r1]
	bl sub_080AA7BC
_080A2F16:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A2CE0

