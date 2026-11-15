	THUMB_FUNC_START sub_0800DCDC
sub_0800DCDC: @ 0x0800DCDC
	push {r4-r6,lr}
	add r5, r0, #0
	add r0, r0, #24
	bl sub_0800F22C
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r6, #11
	bls _0800DCF0
	b _0800DECE
_0800DCF0:
	lsl r0, r6, #2
	ldr r1, _0800DCFC  @ =0x0800DD00
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0800DCFC:
	.4byte 0x0800DD00
	.4byte _0800DD30
	.4byte _0800DECE
	.4byte _0800DDD0
	.4byte _0800DECE
	.4byte _0800DECE
	.4byte _0800DDF8
	.4byte _0800DE8C
	.4byte _0800DEC0
	.4byte _0800DECE
	.4byte _0800DECE
	.4byte _0800DD62
	.4byte _0800DEB0
_0800DD30:
	ldrb r0, [r5, #27]
	cmp r0, #2
	beq _0800DD58
	ldr r2, _0800DD50  @ =gUnknown_02000000
	ldrb r0, [r2]
	cmp r0, #1
	bne _0800DD58
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #6
	strb r0, [r1]
	ldr r1, _0800DD54  @ =gUnknown_0201EF00
	mov r0, #2
	strb r0, [r2]
	strb r0, [r1]
	b _0800DECE
_0800DD50:
	.4byte gUnknown_02000000
_0800DD54:
	.4byte gUnknown_0201EF00
_0800DD58:
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #2
	strb r0, [r1]
	b _0800DECE
_0800DD62:
	ldrb r0, [r5, #27]
	cmp r0, #2
	beq _0800DD70
	add r1, r5, #0
	add r1, r1, #250
	mov r0, #2
	b _0800DD76
_0800DD70:
	ldr r0, _0800DD90  @ =0x00000107
	add r1, r5, r0
	mov r0, #3
_0800DD76:
	strb r0, [r1]
	ldr r1, _0800DD90  @ =0x00000107
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0800DD94
	cmp r0, #2
	beq _0800DD9E
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #4
	b _0800DDA4
	.byte 0x00
	.byte 0x00
_0800DD90:
	.4byte 0x00000107
_0800DD94:
	mov r2, #132
	lsl r2, r2, #1
	add r1, r5, r2
	mov r0, #1
	b _0800DDA4
_0800DD9E:
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #5
_0800DDA4:
	strb r0, [r1]
	ldr r4, _0800DDC8  @ =0x00000107
	add r3, r5, r4
	ldrb r0, [r3]
	mov r1, #1
	eor r0, r0, r1
	mov r1, #2
	mov r2, #0
	orr r0, r0, r1
	strb r0, [r3]
	add r0, r5, #0
	add r0, r0, #91
	strb r2, [r0]
	ldr r1, _0800DDCC  @ =0x00000101
	add r0, r5, r1
	strb r2, [r0]
	b _0800DECE
	.byte 0x00
	.byte 0x00
_0800DDC8:
	.4byte 0x00000107
_0800DDCC:
	.4byte 0x00000101
_0800DDD0:
	ldrb r6, [r5, #28]
	cmp r6, #8
	bge _0800DDD8
	b _0800DECE
_0800DDD8:
	cmp r6, #11
	bgt _0800DDE8
	add r1, r6, #0
	sub r1, r1, #8
	add r0, r5, #0
	bl sub_0800EB50
	b _0800DECE
_0800DDE8:
	cmp r6, #20
	bgt _0800DECE
	cmp r6, #16
	blt _0800DECE
	add r0, r6, #0
	sub r0, r0, #16
	strb r0, [r5, #1]
	b _0800DECE
_0800DDF8:
	ldr r6, _0800DE80  @ =gUnknown_02000000
	ldrb r0, [r6]
	cmp r0, #1
	beq _0800DE18
	add r0, r6, #0
	mov r1, #4
	bl zero_memory
	ldr r4, _0800DE84  @ =gUnknown_0201EF00
	add r0, r4, #0
	mov r1, #20
	bl zero_memory
	mov r0, #1
	strb r0, [r6]
	strb r0, [r4]
_0800DE18:
	add r0, r5, #0
	bl sub_0800EE08
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r3, _0800DE84  @ =gUnknown_0201EF00
	mov r0, #2
	ldrsb r0, [r3, r0]
	cmp r0, #3
	bgt _0800DECE
	add r1, r3, #0
	add r1, r1, #12
	add r0, r0, r1
	strb r6, [r0]
	add r2, r5, #0
	add r2, r2, #91
	ldrb r0, [r2]
	add r0, r0, #7
	mov r4, #8
	neg r4, r4
	add r1, r4, #0
	and r0, r0, r1
	strb r0, [r2]
	mov r1, #2
	ldrsb r1, [r3, r1]
	add r0, r3, #4
	add r1, r1, r0
	ldrb r0, [r2]
	lsr r0, r0, #3
	strb r0, [r1]
	ldrb r0, [r2]
	add r0, r0, #8
	strb r0, [r2]
	mov r2, #2
	ldrsb r2, [r3, r2]
	add r0, r3, #0
	add r0, r0, #8
	add r2, r2, r0
	ldr r1, _0800DE88  @ =0x00000107
	add r0, r5, r1
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r0, r0, #31
	mov r1, #2
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r3, #2]
	add r0, r0, #1
	strb r0, [r3, #2]
	b _0800DECE
	.byte 0x00
	.byte 0x00
_0800DE80:
	.4byte gUnknown_02000000
_0800DE84:
	.4byte gUnknown_0201EF00
_0800DE88:
	.4byte 0x00000107
_0800DE8C:
	add r0, r5, #0
	bl sub_0800EE08
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #255
	bne _0800DEA4
	add r1, r5, #0
	add r1, r1, #254
	mov r0, #1
	strb r0, [r1]
	b _0800DECE
_0800DEA4:
	ldr r2, _0800DEAC  @ =0x00000105
	add r0, r5, r2
	strb r6, [r0]
	b _0800DECE
_0800DEAC:
	.4byte 0x00000105
_0800DEB0:
	add r0, r5, #0
	bl sub_0800EE08
	mov r3, #130
	lsl r3, r3, #1
	add r1, r5, r3
	strb r0, [r1]
	b _0800DECE
_0800DEC0:
	ldr r0, _0800DED8  @ =gUnknown_08427424
	ldrb r1, [r5, #28]
	add r1, r1, r0
	ldrb r1, [r1]
	add r0, r5, #0
	bl sub_0800DFC4
_0800DECE:
	cmp r6, #255
	bhi _0800DEDC
	mov r0, #0
	b _0800DFB8
	.byte 0x00
	.byte 0x00
_0800DED8:
	.4byte gUnknown_08427424
_0800DEDC:
	ldr r0, _0800DF10  @ =0x000003FF
	cmp r6, r0
	bls _0800DF18
	add r0, r5, #0
	add r0, r0, #255
	ldrb r2, [r0]
	mov r0, #128
	mov r4, #128
	lsl r4, r4, #1
	add r1, r5, r4
	mov r4, #0
	orr r0, r0, r2
	strb r0, [r1]
	mov r1, #240
	lsl r1, r1, #8
	and r1, r1, r6
	lsr r1, r1, #8
	mov r0, #129
	orr r1, r1, r0
	add r0, r5, #0
	bl sub_0800DFC4
	ldr r1, _0800DF14  @ =0x00000101
	add r0, r5, r1
	strb r4, [r0]
	b _0800DF54
_0800DF10:
	.4byte 0x000003FF
_0800DF14:
	.4byte 0x00000101
_0800DF18:
	mov r0, #144
	lsl r0, r0, #1
	cmp r6, r0
	bne _0800DF30
	ldr r2, _0800DF2C  @ =0x00000101
	add r1, r5, r2
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	b _0800DF54
_0800DF2C:
	.4byte 0x00000101
_0800DF30:
	ldr r3, _0800DF84  @ =0x00000101
	add r1, r5, r3
	mov r0, #1
	strb r0, [r1]
	add r0, r0, #255
	add r4, r5, r0
	ldrb r2, [r4]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _0800DF54
	mov r1, #63
	and r1, r1, r2
	add r0, r5, #0
	bl sub_0800DFC4
	mov r0, #0
	strb r0, [r4]
_0800DF54:
	add r1, r5, #0
	add r1, r1, #88
	add r0, r6, #0
	bl sub_0800F7B4
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldrb r0, [r5, #27]
	cmp r0, #2
	bne _0800DF88
	mov r2, #130
	lsl r2, r2, #1
	add r1, r5, r2
	mov r0, #120
	strb r0, [r1]
	add r1, r5, #0
	add r1, r1, #212
	mov r0, #106
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #107
	strb r0, [r1]
	b _0800DFB6
	.byte 0x00
	.byte 0x00
_0800DF84:
	.4byte 0x00000101
_0800DF88:
	mov r0, #144
	lsl r0, r0, #1
	cmp r6, r0
	beq _0800DFB6
	ldrb r0, [r5, #1]
	cmp r0, #0
	beq _0800DFB6
	mov r3, #131
	lsl r3, r3, #1
	add r1, r5, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _0800DFB6
	mov r0, #4
	strb r0, [r1]
	ldr r1, _0800DFC0  @ =gUnknown_08137D68
	ldrb r0, [r5, #1]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl play_sound
_0800DFB6:
	add r0, r4, #0
_0800DFB8:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800DFC0:
	.4byte gUnknown_08137D68
	THUMB_FUNC_END sub_0800DCDC

