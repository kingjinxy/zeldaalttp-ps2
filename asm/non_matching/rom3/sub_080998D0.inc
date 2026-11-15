	THUMB_FUNC_START sub_080998D0
sub_080998D0: @ 0x080998D0
	push {r4-r6,lr}
	ldr r4, _08099A04  @ =gRam
	ldr r0, _08099A08  @ =0x00001726
	add r2, r4, r0
	mov r1, #0
	mov r0, #1
	strb r0, [r2]
	ldr r2, _08099A0C  @ =0x00001705
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08099A10  @ =0x000016CD
	add r0, r4, r3
	strb r1, [r0]
	sub r2, r2, #55
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08099A14  @ =0x000017E1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08099A18  @ =0x000016F8
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809992C
	ldr r2, _08099A1C  @ =0x000017F3
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809992C
	mov r0, #4
	bl sub_0809E43C
	bl sub_080932C8
	ldr r3, _08099A20  @ =0x000009B2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0809992C
	mov r0, #161
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
_0809992C:
	ldr r4, _08099A04  @ =gRam
	ldr r1, _08099A1C  @ =0x000017F3
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r3, _08099A24  @ =0x000016CF
	add r6, r4, r3
	add r1, r1, #1
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #125
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _08099A28  @ =0x000017F6
	add r0, r4, r1
	ldrh r0, [r0]
	sub r3, r3, #132
	add r5, r4, r3
	strh r0, [r5]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	sub r2, r2, #2
	strb r2, [r6]
	bl sub_080978AC
	ldrb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08099A48
	lsr r0, r0, #24
	cmp r0, #159
	bhi _08099974
	mov r0, #160
	strb r0, [r6]
_08099974:
	ldrh r1, [r5]
	ldr r0, _08099A2C  @ =0x0000FFEF
	cmp r1, r0
	bls _08099A48
	mov r0, #0
	strh r0, [r5]
	bl sub_0809A190
	ldr r1, _08099A30  @ =0x00001716
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08099996
	ldr r2, _08099A34  @ =0x00001718
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_08099996:
	ldr r3, _08099A34  @ =0x00001718
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #4
	beq _080999B4
	cmp r0, #1
	beq _080999B4
	ldr r1, _08099A38  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080999B4
	mov r0, #13
	bl sub_0809E43C
_080999B4:
	ldr r1, _08099A04  @ =gRam
	ldr r2, _08099A3C  @ =0x0000180D
	add r0, r1, r2
	mov r3, #0
	strb r3, [r0]
	sub r2, r2, #213
	add r0, r1, r2
	strb r3, [r0]
	sub r2, r2, #54
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _08099A24  @ =0x000016CF
	add r2, r1, r0
	mov r0, #255
	strb r0, [r2]
	ldr r0, _08099A40  @ =0x000016C8
	add r2, r1, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r2]
	ldr r0, _08099A44  @ =0x000016C9
	add r2, r1, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r2]
	ldr r2, _08099A18  @ =0x000016F8
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _08099A20  @ =0x000009B2
	add r0, r1, r3
	mov r3, #0
	ldrsb r3, [r0, r3]
	add r2, r1, #0
	cmp r3, #0
	bne _08099A5E
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	strb r3, [r0]
	b _08099A5E
_08099A04:
	.4byte gRam
_08099A08:
	.4byte 0x00001726
_08099A0C:
	.4byte 0x00001705
_08099A10:
	.4byte 0x000016CD
_08099A14:
	.4byte 0x000017E1
_08099A18:
	.4byte 0x000016F8
_08099A1C:
	.4byte 0x000017F3
_08099A20:
	.4byte 0x000009B2
_08099A24:
	.4byte 0x000016CF
_08099A28:
	.4byte 0x000017F6
_08099A2C:
	.4byte 0x0000FFEF
_08099A30:
	.4byte 0x00001716
_08099A34:
	.4byte 0x00001718
_08099A38:
	.4byte 0x000017D4
_08099A3C:
	.4byte 0x0000180D
_08099A40:
	.4byte 0x000016C8
_08099A44:
	.4byte 0x000016C9
_08099A48:
	ldr r2, _08099A88  @ =gRam
	ldr r3, _08099A8C  @ =0x000017F6
	add r0, r2, r3
	ldrb r1, [r0]
	ldr r3, _08099A90  @ =0x000016C8
	add r0, r2, r3
	ldrb r0, [r0]
	sub r1, r1, r0
	add r3, r3, #14
	add r0, r2, r3
	strb r1, [r0]
_08099A5E:
	ldr r1, _08099A94  @ =0x000016CF
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _08099A98  @ =0x000017F3
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _08099A9C  @ =0x0000174C
	add r0, r2, r1
	ldrh r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _08099A90  @ =0x000016C8
	add r0, r2, r1
	ldrh r1, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_08099A88:
	.4byte gRam
_08099A8C:
	.4byte 0x000017F6
_08099A90:
	.4byte 0x000016C8
_08099A94:
	.4byte 0x000016CF
_08099A98:
	.4byte 0x000017F3
_08099A9C:
	.4byte 0x0000174C
	THUMB_FUNC_END sub_080998D0

