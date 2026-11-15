	THUMB_FUNC_START sub_0806FB58
sub_0806FB58: @ 0x0806FB58
	push {r4-r7,lr}
	ldr r6, _0806FC78  @ =gRam
	ldr r0, _0806FC7C  @ =0x000009E4
	add r5, r6, r0
	ldrb r0, [r5]
	mov r4, #2
	eor r0, r0, r4
	strb r0, [r5]
	ldr r2, _0806FC80  @ =0x00000AB4
	add r1, r6, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r3, _0806FC84  @ =0x000009E3
	add r1, r6, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r2, r2, #210
	add r1, r6, r2
	strb r0, [r1]
	ldr r3, _0806FC88  @ =0x00000B74
	add r2, r6, r3
	ldr r1, _0806FC8C  @ =0xFFFFFF00
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	ldr r2, _0806FC90  @ =0x00000B78
	add r1, r6, r2
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r1, _0806FC94  @ =0x00000AA8
	add r0, r6, r1
	ldrh r3, [r0]
	lsr r3, r3, #4
	ldr r2, _0806FC98  @ =0x0000096C
	add r0, r6, r2
	strh r3, [r0]
	ldr r0, _0806FC9C  @ =0x000009DA
	add r7, r6, r0
	ldrh r2, [r7]
	lsl r2, r2, #1
	ldr r1, _0806FCA0  @ =gUnknown_02002000
	add r1, r1, r2
	mov r12, r1
	ldr r2, _0806FCA4  @ =0x00000AA6
	add r0, r6, r2
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	add r2, r2, #8
	add r1, r6, r2
	ldrh r1, [r1]
	orr r0, r0, r1
	orr r3, r3, r0
	mov r0, r12
	strh r3, [r0]
	ldrb r0, [r5]
	eor r4, r4, r0
	ldr r2, _0806FCA8  @ =gUnknown_0814CE14
	lsl r0, r4, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r3, _0806FCAC  @ =0x00000B84
	add r0, r6, r3
	strh r1, [r0]
	add r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r2
	ldrh r1, [r4]
	ldr r2, _0806FCB0  @ =0x00000B86
	add r0, r6, r2
	strh r1, [r0]
	mov r0, #1
	bl sub_0806C814
	ldr r3, _0806FCB4  @ =0x000009AD
	add r1, r6, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r5]
	cmp r0, #0
	bne _0806FC04
	b _0806FDC4
_0806FC04:
	ldr r0, _0806FCB8  @ =0x00000B76
	add r2, r6, r0
	ldr r1, _0806FCBC  @ =0xFFFFFE00
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	ldr r2, _0806FCC0  @ =0x00000B7A
	add r1, r6, r2
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldrh r2, [r7]
	ldr r0, _0806FCC4  @ =0x000009DC
	add r4, r6, r0
	strh r2, [r4]
	ldr r1, _0806FCC8  @ =0x00000A22
	add r0, r6, r1
	ldrh r1, [r0]
	cmp r1, #142
	bne _0806FCE4
	ldr r2, _0806FCCC  @ =0x00000AB2
	add r1, r6, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _0806FC4C
	ldrh r0, [r1]
	cmp r0, #2
	bne _0806FC40
	mov r0, #0
_0806FC40:
	asr r0, r0, #1
	ldr r3, _0806FCD0  @ =gUnknown_0200235C
	add r0, r0, r3
	ldr r1, _0806FCD4  @ =gKeyCount
	ldrb r1, [r1]
	strb r1, [r0]
_0806FC4C:
	bl sub_08070994
	ldr r1, _0806FC78  @ =gRam
	ldr r0, _0806FCD8  @ =0x00000A1A
	add r2, r1, r0
	mov r3, #0
	mov r4, #0
	mov r0, #8
	strh r0, [r2]
	ldr r0, _0806FCDC  @ =0x000009AC
	add r2, r1, r0
	mov r0, #15
	strb r0, [r2]
	ldr r2, _0806FCB4  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _0806FCE0  @ =0x000009E8
	add r1, r1, r3
	strh r4, [r1]
	bl sub_0807166C
	b _0806FE56
_0806FC78:
	.4byte gRam
_0806FC7C:
	.4byte 0x000009E4
_0806FC80:
	.4byte 0x00000AB4
_0806FC84:
	.4byte 0x000009E3
_0806FC88:
	.4byte 0x00000B74
_0806FC8C:
	.4byte 0xFFFFFF00
_0806FC90:
	.4byte 0x00000B78
_0806FC94:
	.4byte 0x00000AA8
_0806FC98:
	.4byte 0x0000096C
_0806FC9C:
	.4byte 0x000009DA
_0806FCA0:
	.4byte gUnknown_02002000
_0806FCA4:
	.4byte 0x00000AA6
_0806FCA8:
	.4byte gUnknown_0814CE14
_0806FCAC:
	.4byte 0x00000B84
_0806FCB0:
	.4byte 0x00000B86
_0806FCB4:
	.4byte 0x000009AD
_0806FCB8:
	.4byte 0x00000B76
_0806FCBC:
	.4byte 0xFFFFFE00
_0806FCC0:
	.4byte 0x00000B7A
_0806FCC4:
	.4byte 0x000009DC
_0806FCC8:
	.4byte 0x00000A22
_0806FCCC:
	.4byte 0x00000AB2
_0806FCD0:
	.4byte gUnknown_0200235C
_0806FCD4:
	.4byte gKeyCount
_0806FCD8:
	.4byte 0x00000A1A
_0806FCDC:
	.4byte 0x000009AC
_0806FCE0:
	.4byte 0x000009E8
_0806FCE4:
	lsl r0, r2, #16
	lsr r3, r0, #16
	cmp r3, #0
	bne _0806FD3C
	ldr r0, _0806FD24  @ =0x00000AB2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #255
	beq _0806FD0A
	ldrh r0, [r1]
	cmp r0, #2
	bne _0806FCFE
	mov r0, #0
_0806FCFE:
	asr r0, r0, #1
	ldr r1, _0806FD28  @ =gUnknown_0200235C
	add r0, r0, r1
	sub r1, r1, #13
	ldrb r1, [r1]
	strb r1, [r0]
_0806FD0A:
	ldr r1, _0806FD2C  @ =gRam
	ldr r3, _0806FD30  @ =0x000009AC
	add r2, r1, r3
	mov r3, #0
	mov r0, #25
	strb r0, [r2]
	ldr r2, _0806FD34  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0806FD38  @ =0x000009E8
	add r1, r1, r0
	strh r3, [r1]
	b _0806FE56
_0806FD24:
	.4byte 0x00000AB2
_0806FD28:
	.4byte gUnknown_0200235C
_0806FD2C:
	.4byte gRam
_0806FD30:
	.4byte 0x000009AC
_0806FD34:
	.4byte 0x000009AD
_0806FD38:
	.4byte 0x000009E8
_0806FD3C:
	mov r0, #207
	and r0, r0, r1
	cmp r0, #136
	beq _0806FD48
	cmp r0, #138
	bne _0806FD68
_0806FD48:
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	ldr r2, _0806FD64  @ =0x00000CF4
	add r0, r6, r2
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r7]
	ldrh r1, [r7]
	add r1, r1, #16
	mov r0, #0
	bl sub_0806F090
	b _0806FD7E
_0806FD64:
	.4byte 0x00000CF4
_0806FD68:
	ldr r1, _0806FDEC  @ =0x00000B36
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, r3
	beq _0806FD78
	strh r0, [r4]
	bl sub_0806F1E8
_0806FD78:
	ldrh r0, [r7]
	sub r0, r0, #16
	strh r0, [r7]
_0806FD7E:
	ldr r3, _0806FDF0  @ =gRam
	ldr r2, _0806FDF4  @ =0x000009AD
	add r1, r3, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0806FDF8  @ =0x00000A11
	add r4, r3, r0
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0806FDAE
	mov r1, #161
	lsl r1, r1, #4
	add r2, r3, r1
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	ldr r2, _0806FDFC  @ =0x00000B1E
	add r0, r3, r2
	strh r1, [r0]
_0806FDAE:
	ldrb r1, [r4]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806FDC4
	ldr r1, _0806FE00  @ =0x00000AB2
	add r0, r3, r1
	ldrh r1, [r0]
	mov r2, #2
	eor r1, r1, r2
	strh r1, [r0]
_0806FDC4:
	ldr r1, _0806FDF0  @ =gRam
	ldr r2, _0806FDF8  @ =0x00000A11
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	mov r3, #158
	lsl r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _0806FE04  @ =0x000009E3
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	bne _0806FE08
	sub r3, r3, #128
	add r1, r2, r3
	mov r0, #1
	b _0806FE10
	.byte 0x00
	.byte 0x00
_0806FDEC:
	.4byte 0x00000B36
_0806FDF0:
	.4byte gRam
_0806FDF4:
	.4byte 0x000009AD
_0806FDF8:
	.4byte 0x00000A11
_0806FDFC:
	.4byte 0x00000B1E
_0806FE00:
	.4byte 0x00000AB2
_0806FE04:
	.4byte 0x000009E3
_0806FE08:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #2
_0806FE10:
	strh r0, [r1]
	ldr r1, _0806FE40  @ =0x00000AF8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806FE4C
	ldr r1, _0806FE44  @ =gUnknown_0814CDDC
	ldr r3, _0806FE48  @ =0x000009E2
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	sub r3, r3, #130
	add r1, r2, r3
	mov r3, #0
	ldrsh r1, [r1, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _0806FE56
	mov r0, #158
	lsl r0, r0, #4
	add r1, r2, r0
	b _0806FE52
	.byte 0x00
	.byte 0x00
_0806FE40:
	.4byte 0x00000AF8
_0806FE44:
	.4byte gUnknown_0814CDDC
_0806FE48:
	.4byte 0x000009E2
_0806FE4C:
	mov r3, #158
	lsl r3, r3, #4
	add r1, r2, r3
_0806FE52:
	mov r0, #2
	strb r0, [r1]
_0806FE56:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806FB58

