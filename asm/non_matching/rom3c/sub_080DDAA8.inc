	THUMB_FUNC_START sub_080DDAA8
sub_080DDAA8: @ 0x080DDAA8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080DDB18  @ =gRam
	ldr r1, _080DDB1C  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DDB2C
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DDBBA
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DDBBA
	ldr r2, _080DDB20  @ =0x00001052
	add r4, r6, r2
	add r4, r5, r4
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080DDDA4
	ldrb r1, [r4]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080DDB00
	add r0, r5, #0
	mov r1, #39
	bl sub_080CF140
_080DDB00:
	ldr r1, _080DDB24  @ =gUnknown_081762B4
	ldr r3, _080DDB28  @ =0x00000F52
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _080DDBBA
_080DDB18:
	.4byte gRam
_080DDB1C:
	.4byte 0x00001082
_080DDB20:
	.4byte 0x00001052
_080DDB24:
	.4byte gUnknown_081762B4
_080DDB28:
	.4byte 0x00000F52
_080DDB2C:
	ldr r1, _080DDBC4  @ =0x00000FE2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #0
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #62
	bhi _080DDB5C
	add r1, r0, #0
	cmp r1, #0
	bne _080DDB4E
	ldr r3, _080DDBC8  @ =0x00000FA2
	add r0, r6, r3
	add r0, r5, r0
	strb r2, [r0]
_080DDB4E:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080DDB58
	mov r2, #1
_080DDB58:
	cmp r2, #0
	beq _080DDBBA
_080DDB5C:
	add r0, r5, #0
	bl sub_080DDEC8
	ldr r4, _080DDBCC  @ =gRam
	ldr r1, _080DDBD0  @ =0x000010A2
	add r0, r4, r1
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DDB8C
	mov r0, #5
	strb r0, [r2]
	ldr r3, _080DDBD4  @ =0x00000F92
	add r2, r4, r3
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
_080DDB8C:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DDBBA
	ldr r0, _080DDBD8  @ =0x00001052
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DDBDC  @ =gUnknown_081762C0
	ldr r2, _080DDBE0  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080DDBBA:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDBC4:
	.4byte 0x00000FE2
_080DDBC8:
	.4byte 0x00000FA2
_080DDBCC:
	.4byte gRam
_080DDBD0:
	.4byte 0x000010A2
_080DDBD4:
	.4byte 0x00000F92
_080DDBD8:
	.4byte 0x00001052
_080DDBDC:
	.4byte gUnknown_081762C0
_080DDBE0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DDAA8

