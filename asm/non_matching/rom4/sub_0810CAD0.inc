	THUMB_FUNC_START sub_0810CAD0
sub_0810CAD0: @ 0x0810CAD0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _0810CB1C  @ =gRam
	ldr r0, _0810CB20  @ =0x00000D94
	add r1, r3, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	mov r1, #0
	ldr r2, _0810CB24  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810CAFC
	mov r1, #1
_0810CAFC:
	cmp r1, #0
	beq _0810CB34
	ldr r4, _0810CB28  @ =0x00000F92
	add r0, r3, r4
	add r4, r5, r0
	ldrb r6, [r4]
	cmp r6, #2
	bne _0810CB2C
	mov r0, #3
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C6240
	strb r6, [r4]
	b _0810CB3A
	.byte 0x00
	.byte 0x00
_0810CB1C:
	.4byte gRam
_0810CB20:
	.4byte 0x00000D94
_0810CB24:
	.4byte 0x000009DA
_0810CB28:
	.4byte 0x00000F92
_0810CB2C:
	add r0, r5, #0
	bl sub_080E1544
	b _0810CB3A
_0810CB34:
	add r0, r5, #0
	bl sub_080C6240
_0810CB3A:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810CB48
	b _0810CE4C
_0810CB48:
	ldr r2, _0810CB9C  @ =gRam
	ldr r0, _0810CBA0  @ =0x00001052
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _0810CBA4  @ =0x00000F92
	add r1, r2, r3
	add r6, r5, r1
	ldr r3, _0810CBA8  @ =gUnknown_0817CDF4
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r3
	ldrb r3, [r0]
	strb r3, [r6]
	mov r1, #0
	ldr r4, _0810CBAC  @ =0x000009DA
	add r0, r2, r4
	ldrh r0, [r0]
	add r4, r2, #0
	cmp r0, #205
	bne _0810CB7C
	mov r1, #1
_0810CB7C:
	cmp r1, #0
	beq _0810CBBE
	ldr r1, _0810CBB0  @ =0x00000FE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810CBB8
	ldr r2, _0810CBB4  @ =0x00000996
	add r0, r4, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #2
	and r0, r0, r1
	b _0810CBBC
	.byte 0x00
	.byte 0x00
_0810CB9C:
	.4byte gRam
_0810CBA0:
	.4byte 0x00001052
_0810CBA4:
	.4byte 0x00000F92
_0810CBA8:
	.4byte gUnknown_0817CDF4
_0810CBAC:
	.4byte 0x000009DA
_0810CBB0:
	.4byte 0x00000FE2
_0810CBB4:
	.4byte 0x00000996
_0810CBB8:
	cmp r3, #2
	bne _0810CBBE
_0810CBBC:
	strb r0, [r6]
_0810CBBE:
	ldr r3, _0810CBF4  @ =0x00000F72
	add r0, r4, r3
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _0810CC64
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0810CBF8  @ =0x00000E15
	add r0, r4, r1
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _0810CC04
	ldr r3, _0810CBFC  @ =0x00000F52
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	strb r2, [r6]
	ldr r1, _0810CC00  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	b _0810CC64
_0810CBF4:
	.4byte 0x00000F72
_0810CBF8:
	.4byte 0x00000E15
_0810CBFC:
	.4byte 0x00000F52
_0810CC00:
	.4byte 0x00000FC2
_0810CC04:
	ldr r2, _0810CD8C  @ =0x00000EE2
	add r1, r4, r2
	add r1, r5, r1
	ldr r2, _0810CD90  @ =0x00000DCF
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810CD94  @ =0x00000F02
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #20
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810CD98  @ =0x00000ED2
	add r1, r4, r0
	add r1, r5, r1
	sub r2, r2, #30
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810CD9C  @ =0x00000EF2
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #20
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _0810CDA0  @ =0x00001122
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #5
	strb r1, [r0]
	ldr r0, _0810CDA4  @ =0x00001032
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	mov r0, #0
	cmp r0, #0
	bne _0810CC64
	b _0810CE4C
_0810CC64:
	add r6, r4, #0
	ldr r1, _0810CDA8  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810CC78
	add r0, r5, #0
	bl sub_080C4F98
_0810CC78:
	ldr r2, _0810CDAC  @ =0x00000F52
	add r0, r6, r2
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810CC88
	b _0810CE14
_0810CC88:
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
	ldr r3, _0810CDB0  @ =0x00000996
	add r0, r6, r3
	ldrb r0, [r0]
	add r7, r5, #0
	eor r7, r7, r0
	mov r0, #3
	and r7, r7, r0
	cmp r7, #0
	bne _0810CD44
	ldr r0, _0810CDB4  @ =gUnknown_0200303F
	add r4, r5, r0
	ldrb r1, [r4]
	ldr r2, _0810CDB8  @ =0x00000968
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _0810CDBC  @ =gUnknown_0200304F
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	add r3, r3, #16
	add r3, r3, r5
	mov r8, r3
	ldrb r1, [r3]
	add r2, r2, #3
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _0810CDC0  @ =gUnknown_0200306F
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #4
	bl sub_080C2DCC
	ldr r3, _0810CDC4  @ =0x00000F12
	add r0, r6, r3
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r6, r3
	add r0, r5, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	sub r3, r3, #64
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	ldrb r1, [r4]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _0810CD44
	ldr r4, _0810CD98  @ =0x00000ED2
	add r0, r6, r4
	add r0, r5, r0
	ldrb r0, [r0]
	mov r2, r8
	ldrb r1, [r2]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _0810CD44
	mov r3, r9
	strb r7, [r3]
	ldr r4, _0810CDA0  @ =0x00001122
	add r0, r6, r4
	add r0, r5, r0
	mov r1, #13
	strb r1, [r0]
	ldr r0, _0810CDA4  @ =0x00001032
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
_0810CD44:
	add r0, r5, #0
	bl Sprite3_Move
	mov r1, #0
	ldr r6, _0810CDC8  @ =gRam
	ldr r2, _0810CDCC  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810CD5A
	mov r1, #1
_0810CD5A:
	cmp r1, #0
	beq _0810CE4C
	ldr r3, _0810CDAC  @ =0x00000F52
	add r0, r6, r3
	add r7, r5, r0
	ldrb r4, [r7]
	cmp r4, #0
	beq _0810CE4C
	cmp r4, #1
	bne _0810CDE8
	ldr r1, _0810CDD0  @ =0x00000FD2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810CDE8
	bl GetRandomInt
	and r4, r4, r0
	cmp r4, #0
	beq _0810CDD4
	add r0, r5, #0
	bl sub_080E157C
	b _0810CE4C
_0810CD8C:
	.4byte 0x00000EE2
_0810CD90:
	.4byte 0x00000DCF
_0810CD94:
	.4byte 0x00000F02
_0810CD98:
	.4byte 0x00000ED2
_0810CD9C:
	.4byte 0x00000EF2
_0810CDA0:
	.4byte 0x00001122
_0810CDA4:
	.4byte 0x00001032
_0810CDA8:
	.4byte 0x00000FC2
_0810CDAC:
	.4byte 0x00000F52
_0810CDB0:
	.4byte 0x00000996
_0810CDB4:
	.4byte gUnknown_0200303F
_0810CDB8:
	.4byte 0x00000968
_0810CDBC:
	.4byte gUnknown_0200304F
_0810CDC0:
	.4byte gUnknown_0200306F
_0810CDC4:
	.4byte 0x00000F12
_0810CDC8:
	.4byte gRam
_0810CDCC:
	.4byte 0x000009DA
_0810CDD0:
	.4byte 0x00000FD2
_0810CDD4:
	ldr r2, _0810CDE4  @ =0x00000FE2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #128
	strb r1, [r0]
	mov r0, #2
	strb r0, [r7]
	b _0810CE4C
_0810CDE4:
	.4byte 0x00000FE2
_0810CDE8:
	ldr r4, _0810CE08  @ =gRam
	ldr r3, _0810CE0C  @ =0x00000FE2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810CE4C
	add r0, r5, #0
	bl sub_080E157C
	ldr r1, _0810CE10  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #1
	b _0810CE4A
	.byte 0x00
	.byte 0x00
_0810CE08:
	.4byte gRam
_0810CE0C:
	.4byte 0x00000FE2
_0810CE10:
	.4byte 0x00000F52
_0810CE14:
	ldr r2, _0810CE5C  @ =0x00000EE2
	add r0, r4, r2
	add r0, r5, r0
	ldr r3, _0810CE60  @ =gUnknown_0200303F
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810CE64  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldr r2, _0810CE68  @ =gUnknown_0200304F
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _0810CE6C  @ =0x00000ED2
	add r0, r4, r3
	add r0, r5, r0
	add r2, r2, #16
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #32
	add r0, r4, r3
	add r0, r5, r0
	ldr r4, _0810CE70  @ =gUnknown_0200306F
	add r1, r5, r4
	ldrb r1, [r1]
_0810CE4A:
	strb r1, [r0]
_0810CE4C:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810CE5C:
	.4byte 0x00000EE2
_0810CE60:
	.4byte gUnknown_0200303F
_0810CE64:
	.4byte 0x00000F02
_0810CE68:
	.4byte gUnknown_0200304F
_0810CE6C:
	.4byte 0x00000ED2
_0810CE70:
	.4byte gUnknown_0200306F
	THUMB_FUNC_END sub_0810CAD0

