	THUMB_FUNC_START sub_08101CBC
sub_08101CBC: @ 0x08101CBC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08101D68  @ =gRam
	ldr r2, _08101D6C  @ =0x00000996
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r3, #0
	eor r2, r2, r0
	mov r0, #3
	and r2, r2, r0
	add r5, r1, #0
	cmp r2, #0
	bne _08101D4C
	mov r0, #150
	lsl r0, r0, #4
	add r6, r5, r0
	strb r2, [r6]
	ldr r1, _08101D70  @ =0x00000FB2
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r7, r1, #0
	ldr r2, _08101D74  @ =0x00000F22
	add r0, r5, r2
	add r4, r3, r0
	ldr r0, _08101D78  @ =gUnknown_0817B484
	add r0, r1, r0
	ldrb r2, [r4]
	ldrb r0, [r0]
	cmp r2, r0
	beq _08101D0C
	ldr r0, _08101D7C  @ =gUnknown_0817B48C
	add r0, r1, r0
	ldrb r0, [r0]
	add r0, r2, r0
	strb r0, [r4]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_08101D0C:
	ldr r1, _08101D80  @ =0x00000F12
	add r0, r5, r1
	add r2, r3, r0
	ldr r0, _08101D84  @ =gUnknown_0817B488
	add r0, r7, r0
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	beq _08101D2E
	ldr r0, _08101D88  @ =gUnknown_0817B490
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r2]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_08101D2E:
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	bne _08101D4C
	ldr r2, _08101D8C  @ =0x00000FC2
	add r0, r5, r2
	add r0, r3, r0
	mov r1, #15
	strb r1, [r0]
	ldr r0, _08101D90  @ =0x00000F52
	add r1, r5, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08101D4C:
	ldr r2, _08101D94  @ =0x00000F62
	add r1, r5, r2
	add r1, r3, r1
	ldr r2, _08101D6C  @ =0x00000996
	add r0, r5, r2
	ldrb r2, [r0]
	mov r0, #4
	and r0, r0, r2
	lsl r0, r0, #24
	lsr r0, r0, #26
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
_08101D68:
	.4byte gRam
_08101D6C:
	.4byte 0x00000996
_08101D70:
	.4byte 0x00000FB2
_08101D74:
	.4byte 0x00000F22
_08101D78:
	.4byte gUnknown_0817B484
_08101D7C:
	.4byte gUnknown_0817B48C
_08101D80:
	.4byte 0x00000F12
_08101D84:
	.4byte gUnknown_0817B488
_08101D88:
	.4byte gUnknown_0817B490
_08101D8C:
	.4byte 0x00000FC2
_08101D90:
	.4byte 0x00000F52
_08101D94:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_08101CBC

