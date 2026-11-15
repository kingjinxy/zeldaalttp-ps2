	THUMB_FUNC_START sub_080A18F0
sub_080A18F0: @ 0x080A18F0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080A1988  @ =gRam
	ldr r0, _080A198C  @ =0x00001782
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _080A1990  @ =0x0000178A
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _080A190E
	b _080A1ACA
_080A190E:
	ldr r1, _080A1994  @ =0x0000180C
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _080A191E
	b _080A1ACA
_080A191E:
	ldr r2, _080A1998  @ =0x0000180B
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A192A
	b _080A1ACA
_080A192A:
	ldr r1, _080A199C  @ =0x000016EA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #8
	bhi _080A1944
	ldr r2, _080A19A0  @ =0x000016E8
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A1944
	b _080A1ACA
_080A1944:
	ldr r0, _080A19A4  @ =0x000017FE
	add r5, r4, r0
	ldrb r3, [r5]
	ldr r1, _080A19A8  @ =0x00001791
	add r0, r4, r1
	ldr r2, _080A19AC  @ =0x00001808
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _080A195E
	b _080A1AA0
_080A195E:
	add r0, r6, #0
	bl sub_080A17E4
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A196C
	b _080A1AC0
_080A196C:
	cmp r6, #1
	beq _080A1A44
	ldr r1, _080A19B0  @ =0x0000188F
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A19B8
	ldr r2, _080A19B4  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A19B8
	mov r3, #7
	b _080A1A4C
_080A1988:
	.4byte gRam
_080A198C:
	.4byte 0x00001782
_080A1990:
	.4byte 0x0000178A
_080A1994:
	.4byte 0x0000180C
_080A1998:
	.4byte 0x0000180B
_080A199C:
	.4byte 0x000016EA
_080A19A0:
	.4byte 0x000016E8
_080A19A4:
	.4byte 0x000017FE
_080A19A8:
	.4byte 0x00001791
_080A19AC:
	.4byte 0x00001808
_080A19B0:
	.4byte 0x0000188F
_080A19B4:
	.4byte 0x000016D5
_080A19B8:
	ldr r4, _080A19C8  @ =gRam
	ldr r1, _080A19CC  @ =0x00001788
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _080A19D0
	mov r3, #6
	b _080A1A4C
_080A19C8:
	.4byte gRam
_080A19CC:
	.4byte 0x00001788
_080A19D0:
	ldr r2, _080A1A28  @ =0x0000177A
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A19EA
	ldr r1, _080A1A2C  @ =0x0000179E
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _080A1A44
	add r2, r2, #8
	add r0, r4, r2
	strb r1, [r0]
_080A19EA:
	ldr r1, _080A1A30  @ =0x000016EA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A19F8
	bl sub_08092BF4
_080A19F8:
	ldr r2, _080A1A34  @ =0x0000178A
	add r3, r4, r2
	ldr r0, _080A1A38  @ =0x0000180C
	add r2, r4, r0
	ldrb r1, [r3]
	ldrb r0, [r2]
	orr r0, r0, r1
	cmp r0, #0
	beq _080A1A24
	strb r5, [r3]
	strb r5, [r2]
	bl sub_08092C50
	ldr r1, _080A1A3C  @ =0x000017F0
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080A1A40  @ =0x00000E15
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #5
	bne _080A1A24
	strb r5, [r1]
_080A1A24:
	mov r3, #1
	b _080A1A4C
_080A1A28:
	.4byte 0x0000177A
_080A1A2C:
	.4byte 0x0000179E
_080A1A30:
	.4byte 0x000016EA
_080A1A34:
	.4byte 0x0000178A
_080A1A38:
	.4byte 0x0000180C
_080A1A3C:
	.4byte 0x000017F0
_080A1A40:
	.4byte 0x00000E15
_080A1A44:
	bl sub_0809F4F8
	lsl r0, r0, #24
	lsr r3, r0, #24
_080A1A4C:
	cmp r6, #1
	bne _080A1A5A
	sub r0, r3, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080A1AC0
_080A1A5A:
	ldr r0, _080A1A88  @ =gUnknown_0816907C
	add r0, r3, r0
	ldr r1, _080A1A8C  @ =gAbilityFlags
	ldrb r2, [r0]
	ldrb r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080A1A78
	ldr r0, _080A1A90  @ =gUnknown_03003E70
	ldrb r0, [r0]
	cmp r0, #1
	beq _080A1AC0
	cmp r3, #2
	bne _080A1AC0
	mov r3, #0
_080A1A78:
	ldr r0, _080A1A94  @ =gRam
	ldr r1, _080A1A98  @ =0x000017FE
	add r0, r0, r1
	strb r3, [r0]
	ldr r1, _080A1A9C  @ =gUnknown_0816903C
	lsl r0, r3, #2
	b _080A1AAC
	.byte 0x00
	.byte 0x00
_080A1A88:
	.4byte gUnknown_0816907C
_080A1A8C:
	.4byte gAbilityFlags
_080A1A90:
	.4byte gUnknown_03003E70
_080A1A94:
	.4byte gRam
_080A1A98:
	.4byte 0x000017FE
_080A1A9C:
	.4byte gUnknown_0816903C
_080A1AA0:
	ldr r2, _080A1AB8  @ =0x0000178F
	add r0, r4, r2
	strb r3, [r0]
	ldr r1, _080A1ABC  @ =gUnknown_0816905C
	ldrb r0, [r5]
	lsl r0, r0, #2
_080A1AAC:
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	mov r0, #1
	b _080A1ACC
_080A1AB8:
	.4byte 0x0000178F
_080A1ABC:
	.4byte gUnknown_0816905C
_080A1AC0:
	ldr r0, _080A1AD4  @ =gRam
	ldr r1, _080A1AD8  @ =0x000016E9
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
_080A1ACA:
	mov r0, #0
_080A1ACC:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A1AD4:
	.4byte gRam
_080A1AD8:
	.4byte 0x000016E9
	THUMB_FUNC_END sub_080A18F0

