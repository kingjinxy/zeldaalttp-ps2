	THUMB_FUNC_START sub_080C297C
sub_080C297C: @ 0x080C297C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r5, _080C2AC8  @ =gRam
	ldr r1, _080C2ACC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	ldr r2, _080C2AD0  @ =0x00000FF2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #236
	strb r1, [r0]
	ldr r1, _080C2AD4  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080C2AD8  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080C2ADC  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #3
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080C2AE0  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080CEB84
	ldr r1, _080C2AE4  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080C2AE8  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	cmp r6, #5
	bls _080C2A02
	ldr r2, _080C2AEC  @ =0x00001012
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #166
	strb r1, [r0]
_080C2A02:
	cmp r6, #2
	bne _080C2A1E
	ldr r1, _080C2AF0  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C2A1E
	ldr r2, _080C2AF4  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
_080C2A1E:
	ldr r3, _080C2AC8  @ =gRam
	ldr r5, _080C2AF4  @ =0x00001122
	add r1, r3, r5
	add r1, r4, r1
	ldr r0, _080C2AF8  @ =gUnknown_081778C0
	add r0, r6, r0
	ldrb r0, [r0]
	mov r2, #0
	strb r0, [r1]
	ldr r1, _080C2AFC  @ =0x0000141C
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r5, _080C2B00  @ =0x0000179E
	add r0, r3, r5
	mov r1, #2
	strb r1, [r0]
	ldr r5, _080C2B04  @ =0x000015F6
	add r0, r3, r5
	strb r1, [r0]
	ldr r1, _080C2B08  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r5, _080C2AE4  @ =0x000010F2
	add r0, r3, r5
	add r0, r4, r0
	mov r5, #161
	lsl r5, r5, #4
	add r1, r3, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080C2B0C  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080C2B10  @ =0x00000DB8
	add r1, r3, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _080C2AC0
	sub r5, r5, #94
	add r1, r3, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	cmp r0, #0
	bne _080C2A9A
	ldr r1, _080C2AE8  @ =0x00000F82
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080C2A9A
	bl sub_080CA754
_080C2A9A:
	ldr r1, _080C2AC8  @ =gRam
	ldr r2, _080C2B10  @ =0x00000DB8
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080C2ABA
	ldr r5, _080C2B0C  @ =0x00000F92
	add r0, r1, r5
	add r0, r4, r0
	mov r1, #127
	and r1, r1, r2
	mov r2, #0
	strb r1, [r0]
	strb r2, [r3]
_080C2ABA:
	add r0, r4, #0
	bl sub_080C2534
_080C2AC0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2AC8:
	.4byte gRam
_080C2ACC:
	.4byte 0x00000FA2
_080C2AD0:
	.4byte 0x00000FF2
_080C2AD4:
	.4byte 0x00000EE2
_080C2AD8:
	.4byte 0x00000F02
_080C2ADC:
	.4byte 0x00000ED2
_080C2AE0:
	.4byte 0x00000EF2
_080C2AE4:
	.4byte 0x000010F2
_080C2AE8:
	.4byte 0x00000F82
_080C2AEC:
	.4byte 0x00001012
_080C2AF0:
	.4byte 0x000009B2
_080C2AF4:
	.4byte 0x00001122
_080C2AF8:
	.4byte gUnknown_081778C0
_080C2AFC:
	.4byte 0x0000141C
_080C2B00:
	.4byte 0x0000179E
_080C2B04:
	.4byte 0x000015F6
_080C2B08:
	.4byte 0x00000FC2
_080C2B0C:
	.4byte 0x00000F92
_080C2B10:
	.4byte 0x00000DB8
	THUMB_FUNC_END sub_080C297C

