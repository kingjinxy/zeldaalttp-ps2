	THUMB_FUNC_START sub_080F89EC
sub_080F89EC: @ 0x080F89EC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080F8B04  @ =gRam
	ldr r1, _080F8B08  @ =0x00000FC2
	add r0, r3, r1
	add r7, r4, r0
	ldrb r0, [r7]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F8A0C
	b _080F8C24
_080F8A0C:
	lsr r0, r0, #26
	add r2, r0, #0
	ldr r5, _080F8B0C  @ =0x00000FB2
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	mov r9, r0
	ldr r6, _080F8B10  @ =0x00000F92
	add r1, r3, r6
	add r1, r4, r1
	ldr r0, _080F8B14  @ =gUnknown_0817A190
	add r0, r2, r0
	ldrb r0, [r0]
	mov r5, #0
	strb r0, [r1]
	ldr r0, _080F8B18  @ =0x00000F62
	add r1, r3, r0
	add r1, r4, r1
	ldr r6, _080F8B1C  @ =gUnknown_0817A1A8
	mov r12, r6
	ldr r0, _080F8B20  @ =gUnknown_0817A1F0
	add r0, r0, r9
	ldrb r0, [r0]
	add r0, r2, r0
	add r0, r0, r12
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F8B24  @ =0x00000968
	add r1, r1, r3
	mov r8, r1
	strb r0, [r1]
	ldr r6, _080F8B28  @ =0x00000969
	add r1, r3, r6
	strb r5, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080F8A5C
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
_080F8A5C:
	ldr r0, _080F8B2C  @ =0x00000F72
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080F8B30  @ =gUnknown_0817A1F8
	add r0, r0, r9
	ldrb r0, [r0]
	add r0, r2, r0
	add r0, r0, r12
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F8B34  @ =0x0000096C
	add r2, r3, r1
	strb r0, [r2]
	ldr r6, _080F8B38  @ =0x0000096D
	add r1, r3, r6
	strb r5, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080F8A86
	sub r0, r5, #1
	strb r0, [r1]
_080F8A86:
	ldr r1, _080F8B3C  @ =0x000010A2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F8A94
	b _080F8C48
_080F8A94:
	ldr r5, _080F8B40  @ =0x00001622
	add r0, r3, r5
	ldrb r1, [r0]
	ldr r6, _080F8B44  @ =0x00001623
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r0, r8
	ldrh r0, [r0]
	add r1, r1, r0
	add r5, r5, #162
	add r0, r3, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #23
	bls _080F8ABE
	b _080F8C48
_080F8ABE:
	add r6, r6, #1
	add r0, r3, r6
	ldrb r1, [r0]
	sub r5, r5, #159
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	add r6, r6, #156
	add r0, r3, r6
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bls _080F8AE6
	b _080F8C48
_080F8AE6:
	ldrb r0, [r7]
	cmp r0, #45
	bls _080F8AEE
	b _080F8C48
_080F8AEE:
	ldr r1, _080F8B48  @ =0x000009AC
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #26
	bne _080F8B4C
	add r0, r4, #0
	mov r1, #83
	bl sub_080CF140
	b _080F8B52
	.byte 0x00
	.byte 0x00
_080F8B04:
	.4byte gRam
_080F8B08:
	.4byte 0x00000FC2
_080F8B0C:
	.4byte 0x00000FB2
_080F8B10:
	.4byte 0x00000F92
_080F8B14:
	.4byte gUnknown_0817A190
_080F8B18:
	.4byte 0x00000F62
_080F8B1C:
	.4byte gUnknown_0817A1A8
_080F8B20:
	.4byte gUnknown_0817A1F0
_080F8B24:
	.4byte 0x00000968
_080F8B28:
	.4byte 0x00000969
_080F8B2C:
	.4byte 0x00000F72
_080F8B30:
	.4byte gUnknown_0817A1F8
_080F8B34:
	.4byte 0x0000096C
_080F8B38:
	.4byte 0x0000096D
_080F8B3C:
	.4byte 0x000010A2
_080F8B40:
	.4byte 0x00001622
_080F8B44:
	.4byte 0x00001623
_080F8B48:
	.4byte 0x000009AC
_080F8B4C:
	mov r0, #7
	bl Sound_SetSfxPanWithPlayerCoords
_080F8B52:
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	add r1, r1, #1
	ldr r2, _080F8BA4  @ =gRam
	ldr r3, _080F8BA8  @ =0x000010A2
	add r0, r2, r3
	add r5, r4, r0
	mov r3, #0
	strb r1, [r5]
	ldr r6, _080F8BAC  @ =0x00001062
	add r0, r2, r6
	add r0, r4, r0
	strb r1, [r0]
	ldr r6, _080F8BB0  @ =0x000009AC
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #26
	beq _080F8C00
	cmp r1, #1
	beq _080F8BE8
	cmp r1, #2
	beq _080F8BD6
	cmp r1, #3
	beq _080F8BC0
	ldr r0, _080F8BB4  @ =0x00001002
	add r1, r2, r0
	add r1, r4, r1
	ldr r2, _080F8BB8  @ =gShield
	ldrb r0, [r2]
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080F8B9E
	cmp r0, #3
	bne _080F8BBC
_080F8B9E:
	strb r3, [r5]
	b _080F8C00
	.byte 0x00
	.byte 0x00
_080F8BA4:
	.4byte gRam
_080F8BA8:
	.4byte 0x000010A2
_080F8BAC:
	.4byte 0x00001062
_080F8BB0:
	.4byte 0x000009AC
_080F8BB4:
	.4byte 0x00001002
_080F8BB8:
	.4byte gShield
_080F8BBC:
	strb r3, [r2]
	b _080F8C00
_080F8BC0:
	bl sub_080AA868
	cmp r0, #0
	bne _080F8BCC
	strb r0, [r5]
	b _080F8C00
_080F8BCC:
	mov r0, #1
	neg r0, r0
	bl sub_080AA83C
	b _080F8C00
_080F8BD6:
	ldr r2, _080F8BE4  @ =gArrowCount
	ldrb r0, [r2]
	add r1, r0, #0
	cmp r1, #0
	beq _080F8BF2
	b _080F8BFC
	.byte 0x00
	.byte 0x00
_080F8BE4:
	.4byte gArrowCount
_080F8BE8:
	ldr r2, _080F8BF8  @ =gBombs
	ldrb r0, [r2]
	add r1, r0, #0
	cmp r1, #0
	bne _080F8BFC
_080F8BF2:
	strb r1, [r5]
	b _080F8C00
	.byte 0x00
	.byte 0x00
_080F8BF8:
	.4byte gBombs
_080F8BFC:
	sub r0, r0, #1
	strb r0, [r2]
_080F8C00:
	ldr r2, _080F8C18  @ =gRam
	ldr r1, _080F8C1C  @ =0x000010A2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080F8C48
	ldr r3, _080F8C20  @ =0x00001062
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	b _080F8C48
_080F8C18:
	.4byte gRam
_080F8C1C:
	.4byte 0x000010A2
_080F8C20:
	.4byte 0x00001062
_080F8C24:
	ldr r5, _080F8C54  @ =0x00000F52
	add r0, r3, r5
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #16
	strb r0, [r7]
	ldr r6, _080F8C58  @ =0x00000F62
	add r0, r3, r6
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _080F8C5C  @ =0x00000F72
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r5, _080F8C60  @ =0x000010A2
	add r0, r3, r5
	add r0, r4, r0
	strb r2, [r0]
_080F8C48:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F8C54:
	.4byte 0x00000F52
_080F8C58:
	.4byte 0x00000F62
_080F8C5C:
	.4byte 0x00000F72
_080F8C60:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080F89EC

