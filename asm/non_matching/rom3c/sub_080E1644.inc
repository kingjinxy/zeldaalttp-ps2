	THUMB_FUNC_START sub_080E1644
sub_080E1644: @ 0x080E1644
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080E169C  @ =gRam
	ldr r2, _080E16A0  @ =0x00001002
	add r0, r1, r2
	add r0, r5, r0
	ldrb r4, [r0]
	add r2, r4, #0
	add r6, r1, #0
	cmp r4, #0
	beq _080E16BE
	mov r0, #7
	and r4, r4, r0
	cmp r4, #4
	bls _080E16B0
	mov r0, #5
	eor r0, r0, r4
	neg r1, r0
	orr r1, r1, r0
	asr r1, r1, #31
	mov r0, #4
	and r1, r1, r0
	ldr r0, _080E16A4  @ =0x00000F72
	add r3, r6, r0
	add r3, r5, r3
	ldr r4, _080E16A8  @ =gUnknown_081769A8
	lsr r0, r2, #3
	mov r2, #3
	and r0, r0, r2
	orr r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r1, _080E16AC  @ =0x00000D84
	add r2, r6, r1
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	mov r1, #80
	orr r0, r0, r1
	strb r0, [r2]
	b _080E171E
_080E169C:
	.4byte gRam
_080E16A0:
	.4byte 0x00001002
_080E16A4:
	.4byte 0x00000F72
_080E16A8:
	.4byte gUnknown_081769A8
_080E16AC:
	.4byte 0x00000D84
_080E16B0:
	ldr r2, _080E16E4  @ =0x00000FB2
	add r0, r6, r2
	add r0, r5, r0
	sub r1, r4, #1
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
_080E16BE:
	mov r0, #0
	cmp r0, #0
	bne _080E171E
	ldr r1, _080E16E8  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080E16F0
	ldr r2, _080E16EC  @ =0x000011B2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r2, [r0]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r0]
	b _080E171E
	.byte 0x00
	.byte 0x00
_080E16E4:
	.4byte 0x00000FB2
_080E16E8:
	.4byte 0x000009B2
_080E16EC:
	.4byte 0x000011B2
_080E16F0:
	ldr r1, _080E172C  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080E1730  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #112
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E1734  @ =0x00000FB2
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
	add r2, r2, #208
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
_080E171E:
	add r0, r5, #0
	bl sub_080E25A8
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E172C:
	.4byte 0x00000F52
_080E1730:
	.4byte 0x00000FC2
_080E1734:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E1644

