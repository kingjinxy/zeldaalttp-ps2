	THUMB_FUNC_START sub_080C1B40
sub_080C1B40: @ 0x080C1B40
	push {r4-r6,lr}
	ldr r4, _080C1BD8  @ =gRam
	ldr r1, _080C1BDC  @ =0x000015DC
	add r0, r4, r1
	mov r1, #255
	strb r1, [r0]
	ldr r2, _080C1BE0  @ =0x000009B2
	add r0, r4, r2
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	bne _080C1B7A
	ldr r3, _080C1BE4  @ =0x00000E47
	add r0, r4, r3
	strb r1, [r0]
	ldr r2, _080C1BE8  @ =0x00000E48
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strb r1, [r0]
	bl sub_080CBC60
_080C1B7A:
	ldr r1, _080C1BEC  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	neg r0, r0
	lsr r0, r0, #31
	ldr r2, _080C1BF0  @ =0x0000164C
	add r1, r4, r2
	mov r5, #0
	strb r0, [r1]
	ldr r3, _080C1BF4  @ =0x000009AD
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1BA2
	ldr r1, _080C1BF8  @ =0x00000DA8
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _080C1BFC  @ =0x00000DAA
	add r0, r4, r2
	strh r5, [r0]
_080C1BA2:
	ldr r0, _080C1C00  @ =gUnknown_03003E70
	strb r5, [r0]
	bl sub_080CF330
	bl sub_080CE350
	bl sub_08114908
	ldr r3, _080C1C04  @ =0x0000179E
	add r2, r4, r3
	ldrb r1, [r2]
	ldr r3, _080C1C08  @ =0x000015F6
	add r0, r4, r3
	strb r1, [r0]
	strb r5, [r2]
	ldr r1, _080C1C0C  @ =0x000015ED
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080C1C10  @ =0x000016F9
	add r1, r4, r2
	ldrb r0, [r1]
	mov r3, #126
	and r3, r3, r0
	cmp r3, #0
	bne _080C1C14
	strb r3, [r1]
	b _080C1C18
_080C1BD8:
	.4byte gRam
_080C1BDC:
	.4byte 0x000015DC
_080C1BE0:
	.4byte 0x000009B2
_080C1BE4:
	.4byte 0x00000E47
_080C1BE8:
	.4byte 0x00000E48
_080C1BEC:
	.4byte 0x0000165C
_080C1BF0:
	.4byte 0x0000164C
_080C1BF4:
	.4byte 0x000009AD
_080C1BF8:
	.4byte 0x00000DA8
_080C1BFC:
	.4byte 0x00000DAA
_080C1C00:
	.4byte gUnknown_03003E70
_080C1C04:
	.4byte 0x0000179E
_080C1C08:
	.4byte 0x000015F6
_080C1C0C:
	.4byte 0x000015ED
_080C1C10:
	.4byte 0x000016F9
_080C1C14:
	sub r0, r0, #1
	strb r0, [r1]
_080C1C18:
	ldr r4, _080C1D30  @ =gRam
	ldr r3, _080C1D34  @ =0x0000180B
	add r0, r4, r3
	mov r5, #0
	strb r5, [r0]
	ldr r1, _080C1D38  @ =0x00001809
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080C1D3C  @ =0x00000DA7
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080C1D40  @ =0x00001626
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1C3C
	sub r0, r0, #1
	strb r0, [r1]
_080C1C3C:
	bl sub_080C171C
	bl sub_080CD4E4
	ldr r1, _080C1D44  @ =0x00000DB6
	add r0, r4, r1
	strb r5, [r0]
	mov r1, #15
	ldr r2, _080C1D48  @ =0x000015DC
	add r5, r4, r2
_080C1C50:
	strb r1, [r5]
	lsl r4, r1, #24
	lsr r0, r4, #24
	bl Sprite_ExecuteSingle
	mov r3, #255
	lsl r3, r3, #24
	add r4, r4, r3
	lsr r1, r4, #24
	cmp r4, #0
	bge _080C1C50
	ldr r0, _080C1D30  @ =gRam
	ldr r2, _080C1D4C  @ =0x00001716
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #2
	beq _080C1CB4
	ldr r3, _080C1D50  @ =0x00001702
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080C1CB4
	ldr r1, _080C1D54  @ =0x000017D4
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1CB4
	add r3, r3, #106
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1CB4
	sub r1, r1, #117
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1CB4
	add r3, r3, #161
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1CC2
	sub r1, r1, #103
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C1CC2
_080C1CB4:
	ldr r3, _080C1D58  @ =0x0000179E
	add r0, r2, r3
	mov r1, #0
	strb r1, [r0]
	sub r3, r3, #28
	add r0, r2, r3
	strb r1, [r0]
_080C1CC2:
	mov r1, #15
	ldr r5, _080C1D30  @ =gRam
	ldr r0, _080C1D5C  @ =0x0000140C
	add r6, r5, r0
_080C1CCA:
	lsl r0, r1, #24
	asr r2, r0, #24
	ldr r3, _080C1D60  @ =0x00000FA2
	add r1, r5, r3
	add r1, r2, r1
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #10
	bne _080C1CEA
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1CEA
	lsr r0, r4, #24
	bl sub_080C3214
_080C1CEA:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r4, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080C1CCA
	ldr r4, _080C1D30  @ =gRam
	ldr r2, _080C1D48  @ =0x000015DC
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	bl sub_080CE324
	ldr r3, _080C1D64  @ =0x00000C11
	add r0, r4, r3
	mov r1, #0
	strb r1, [r0]
	mov r2, #193
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	bl sub_080C9C2C
	ldr r3, _080C1D68  @ =0x00000CA2
	add r0, r4, r3
	ldrh r1, [r0]
	cmp r1, #0
	beq _080C1D28
	ldr r2, _080C1D6C  @ =0x00001610
	add r0, r4, r2
	strb r1, [r0]
_080C1D28:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C1D30:
	.4byte gRam
_080C1D34:
	.4byte 0x0000180B
_080C1D38:
	.4byte 0x00001809
_080C1D3C:
	.4byte 0x00000DA7
_080C1D40:
	.4byte 0x00001626
_080C1D44:
	.4byte 0x00000DB6
_080C1D48:
	.4byte 0x000015DC
_080C1D4C:
	.4byte 0x00001716
_080C1D50:
	.4byte 0x00001702
_080C1D54:
	.4byte 0x000017D4
_080C1D58:
	.4byte 0x0000179E
_080C1D5C:
	.4byte 0x0000140C
_080C1D60:
	.4byte 0x00000FA2
_080C1D64:
	.4byte 0x00000C11
_080C1D68:
	.4byte 0x00000CA2
_080C1D6C:
	.4byte 0x00001610
	THUMB_FUNC_END sub_080C1B40

