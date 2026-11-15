	THUMB_FUNC_START sub_081009CC
sub_081009CC: @ 0x081009CC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r7, #0
	mov r5, #0
	mov r8, r5
	add r0, r4, #0
	bl sub_08100DB4
	add r0, r4, #0
	bl sub_08100E3C
	ldr r6, _08100A18  @ =gRam
	ldr r1, _08100A1C  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	bne _08100A2A
	add r0, r4, #0
	bl sub_080C3028
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #2
	ldr r2, _08100A20  @ =0x00000FB2
	add r1, r6, r2
	add r1, r4, r1
	ldrb r1, [r1]
	cmp r0, r1
	beq _08100A24
	mov r5, #1
	b _08100A26
	.byte 0x00
	.byte 0x00
_08100A18:
	.4byte gRam
_08100A1C:
	.4byte 0x00001052
_08100A20:
	.4byte 0x00000FB2
_08100A24:
	mov r7, #1
_08100A26:
	cmp r7, #0
	beq _08100A4A
_08100A2A:
	ldr r0, _08100A40  @ =gRam
	ldr r7, _08100A44  @ =0x00000FC2
	add r0, r0, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08100A48
	mov r0, #1
	mov r8, r0
	b _08100A4A
	.byte 0x00
	.byte 0x00
_08100A40:
	.4byte gRam
_08100A44:
	.4byte 0x00000FC2
_08100A48:
	mov r5, #1
_08100A4A:
	cmp r5, #0
	beq _08100A8E
	ldr r5, _08100B4C  @ =gRam
	ldr r1, _08100B50  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #119
	bhi _08100A96
	ldr r2, _08100B54  @ =0x00000F82
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r7, _08100B58  @ =0x00000F12
	add r1, r5, r7
	add r1, r4, r1
	ldrb r3, [r1]
	mov r2, #254
	add r0, r2, #0
	and r0, r0, r3
	strb r0, [r1]
	ldr r1, _08100B5C  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	and r2, r2, r1
	strb r2, [r0]
	ldr r2, _08100B60  @ =0x00000FE2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
_08100A8E:
	mov r5, r8
	cmp r5, #0
	bne _08100A96
	b _08100B92
_08100A96:
	ldr r6, _08100B4C  @ =gRam
	ldr r7, _08100B64  @ =0x00000F72
	add r0, r6, r7
	add r2, r4, r0
	ldrb r0, [r2]
	mov r7, #1
	add r3, r7, #0
	and r3, r3, r0
	ldr r0, _08100B58  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r5, _08100B68  @ =gUnknown_0817AD78
	mov r12, r5
	add r0, r3, r5
	ldrb r0, [r0]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	ldr r1, _08100B6C  @ =gUnknown_0817AE11
	add r1, r3, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _08100ACE
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08100ACE:
	ldr r1, _08100B70  @ =0x000010A2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	add r3, r7, #0
	and r3, r3, r0
	ldr r2, _08100B5C  @ =0x00000F22
	add r0, r6, r2
	add r2, r4, r0
	ldr r0, _08100B74  @ =gUnknown_0817AE13
	add r0, r3, r0
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	beq _08100AF6
	mov r7, r12
	add r0, r3, r7
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r2]
_08100AF6:
	ldr r1, _08100B50  @ =0x00000EE2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #254
	ldr r0, _08100B78  @ =gUnknown_0817AE15
	add r0, r3, r0
	and r1, r1, r2
	ldrb r0, [r0]
	cmp r1, r0
	bne _08100B12
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_08100B12:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _08100B7C  @ =0x00001042
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08100B8C
	ldr r5, _08100B80  @ =0x00001052
	add r0, r6, r5
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08100B92
	ldr r7, _08100B84  @ =0x00001082
	add r0, r6, r7
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r2, _08100B88  @ =0x0000097D
	add r1, r6, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E210C
	b _08100B92
_08100B4C:
	.4byte gRam
_08100B50:
	.4byte 0x00000EE2
_08100B54:
	.4byte 0x00000F82
_08100B58:
	.4byte 0x00000F12
_08100B5C:
	.4byte 0x00000F22
_08100B60:
	.4byte 0x00000FE2
_08100B64:
	.4byte 0x00000F72
_08100B68:
	.4byte gUnknown_0817AD78
_08100B6C:
	.4byte gUnknown_0817AE11
_08100B70:
	.4byte 0x000010A2
_08100B74:
	.4byte gUnknown_0817AE13
_08100B78:
	.4byte gUnknown_0817AE15
_08100B7C:
	.4byte 0x00001042
_08100B80:
	.4byte 0x00001052
_08100B84:
	.4byte 0x00001082
_08100B88:
	.4byte 0x0000097D
_08100B8C:
	add r0, r4, #0
	bl sub_08100624
_08100B92:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081009CC

