	THUMB_FUNC_START sub_080FFDD8
sub_080FFDD8: @ 0x080FFDD8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080FFA44
	cmp r0, #0
	beq _080FFDF4
	b _080FFFDC
_080FFDF4:
	add r0, r4, #0
	bl sub_080FF9B8
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _080FFEE4
	mov r0, #3
	and r0, r0, r6
	cmp r0, #0
	bne _080FFE28
	ldr r2, _080FFE20  @ =gRam
	ldr r0, _080FFE24  @ =0x00000F12
	add r1, r2, r0
	b _080FFE2E
	.byte 0x00
	.byte 0x00
_080FFE20:
	.4byte gRam
_080FFE24:
	.4byte 0x00000F12
_080FFE28:
	ldr r2, _080FFEC4  @ =gRam
	ldr r3, _080FFEC8  @ =0x00000F22
	add r1, r2, r3
_080FFE2E:
	add r1, r4, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	add r7, r2, #0
	add r2, r7, #0
	ldr r0, _080FFECC  @ =0x00000F52
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r3, #0
	mov r10, r3
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _080FFE54
	b _080FFFDC
_080FFE54:
	ldr r0, _080FFEC8  @ =0x00000F22
	add r0, r0, r2
	mov r9, r0
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080FFE68
	add r0, r0, #3
_080FFE68:
	asr r0, r0, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080FFED0  @ =0x00000F12
	add r1, r1, r2
	mov r8, r1
	add r0, r5, r1
	mov r4, #0
	ldrsb r4, [r0, r4]
	cmp r4, #0
	bge _080FFE80
	add r4, r4, #3
_080FFE80:
	asr r4, r4, #2
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080FFED4  @ =0x00000FA2
	add r0, r7, r2
	add r0, r5, r0
	mov r3, r10
	strb r3, [r0]
	add r0, r5, #0
	bl sub_08101290
	ldr r1, _080FFED8  @ =0x00000ED2
	add r3, r7, r1
	add r3, r0, r3
	ldr r2, _080FFEDC  @ =0x00001142
	add r1, r7, r2
	add r1, r0, r1
	ldrb r2, [r3]
	ldrb r1, [r1]
	sub r2, r2, r1
	strb r2, [r3]
	mov r3, r9
	add r1, r0, r3
	strb r6, [r1]
	mov r2, r8
	add r1, r0, r2
	strb r4, [r1]
	ldr r3, _080FFEE0  @ =0x00000FC2
	add r1, r7, r3
	add r0, r0, r1
	mov r1, r10
	strb r1, [r0]
	b _080FFFDC
	.byte 0x00
	.byte 0x00
_080FFEC4:
	.4byte gRam
_080FFEC8:
	.4byte 0x00000F22
_080FFECC:
	.4byte 0x00000F52
_080FFED0:
	.4byte 0x00000F12
_080FFED4:
	.4byte 0x00000FA2
_080FFED8:
	.4byte 0x00000ED2
_080FFEDC:
	.4byte 0x00001142
_080FFEE0:
	.4byte 0x00000FC2
_080FFEE4:
	ldr r4, _080FFFEC  @ =gRam
	ldr r2, _080FFFF0  @ =0x00000F82
	add r0, r4, r2
	ldrb r0, [r0]
	sub r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080FFFDC
	ldr r3, _080FFFF4  @ =0x00000EE2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r7, r4, r1
	strb r0, [r7]
	sub r2, r2, #128
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080FFFF8  @ =0x00000964
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080FFFFC  @ =0x00000965
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08100000  @ =0x00000ED2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #32
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #16
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FFFDC
	mov r0, #160
	strb r0, [r7]
	mov r0, #0
	mov r1, #16
	bl sub_080C414C
	ldr r3, _08100004  @ =0x00000FA2
	add r0, r4, r3
	add r0, r5, r0
	strb r6, [r0]
	ldr r1, _08100008  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _0810000C  @ =0x00001112
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #144
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	sub r2, r2, #16
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _08100010  @ =gUnknown_02010990
	ldrb r0, [r2, #2]
	sub r0, r0, #1
	strb r0, [r2, #2]
	mov r5, #255
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080FFFA0
	strb r0, [r2]
	ldr r0, _08100014  @ =gUnknown_08227988
	add r0, r0, #206
	ldrb r1, [r0]
	ldr r3, _08100018  @ =0x00001132
	add r0, r4, r3
	strb r1, [r0]
_080FFFA0:
	ldrb r0, [r2, #1]
	add r0, r0, #1
	strb r0, [r2, #1]
	and r0, r0, r5
	cmp r0, #6
	bne _080FFFDC
	bl sub_080CBB34
	mov r0, #0
	bl sub_080CA5D8
	ldr r0, _0810001C  @ =0x00000FC2
	add r1, r4, r0
	ldrb r0, [r1]
	orr r0, r0, r5
	strb r0, [r1]
	ldr r2, _08100020  @ =0x000010C2
	add r1, r4, r2
	ldrb r0, [r1]
	orr r0, r0, r5
	strb r0, [r1]
	ldr r3, _08100024  @ =0x00001649
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	mov r1, #96
	bl sub_080CF140
_080FFFDC:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FFFEC:
	.4byte gRam
_080FFFF0:
	.4byte 0x00000F82
_080FFFF4:
	.4byte 0x00000EE2
_080FFFF8:
	.4byte 0x00000964
_080FFFFC:
	.4byte 0x00000965
_08100000:
	.4byte 0x00000ED2
_08100004:
	.4byte 0x00000FA2
_08100008:
	.4byte 0x00000F22
_0810000C:
	.4byte 0x00001112
_08100010:
	.4byte gUnknown_02010990
_08100014:
	.4byte gUnknown_08227988
_08100018:
	.4byte 0x00001132
_0810001C:
	.4byte 0x00000FC2
_08100020:
	.4byte 0x000010C2
_08100024:
	.4byte 0x00001649
	THUMB_FUNC_END sub_080FFDD8

