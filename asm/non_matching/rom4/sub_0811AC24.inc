	THUMB_FUNC_START sub_0811AC24
sub_0811AC24: @ 0x0811AC24
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #0
	mov r9, r0
	ldr r4, _0811AC50  @ =gRam
	ldr r1, _0811AC54  @ =0x000009AD
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _0811ACC0
	cmp r5, #8
	beq _0811AC48
	cmp r5, #17
	bne _0811AC58
_0811AC48:
	add r0, r6, #0
	bl sub_0811A234
	b _0811B23E
_0811AC50:
	.4byte gRam
_0811AC54:
	.4byte 0x000009AD
_0811AC58:
	add r1, r6, #1
	ldr r2, _0811ACAC  @ =0x0000177A
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r1, r0
	beq _0811AC66
	b _0811B23E
_0811AC66:
	ldr r3, _0811ACB0  @ =0x00001813
	add r0, r4, r3
	add r5, r6, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0811AC74
	b _0811B23E
_0811AC74:
	cmp r0, #3
	beq _0811ACA4
	add r0, r6, #0
	mov r1, #3
	bl sub_0811A0DC
	ldr r1, _0811ACB4  @ =0x00000A92
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #17
	strb r1, [r0]
	ldr r2, _0811ACB8  @ =0x00000DC5
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #17
	strb r0, [r1]
	ldr r3, _0811ACBC  @ =0x00000A74
	add r0, r4, r3
	add r0, r6, r0
	mov r1, r9
	strb r1, [r0]
	mov r0, #3
	strb r0, [r5]
_0811ACA4:
	add r0, r6, #0
	bl sub_0811A158
	b _0811B23E
_0811ACAC:
	.4byte 0x0000177A
_0811ACB0:
	.4byte 0x00001813
_0811ACB4:
	.4byte 0x00000A92
_0811ACB8:
	.4byte 0x00000DC5
_0811ACBC:
	.4byte 0x00000A74
_0811ACC0:
	add r0, r6, #0
	bl sub_0811A234
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	add r0, r6, #0
	bl sub_0811A010
	ldr r2, _0811AD30  @ =0x00000E3D
	add r0, r4, r2
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r3, _0811AD34  @ =0x00001734
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _0811AD38  @ =0x00000A74
	add r0, r4, r1
	add r0, r6, r0
	ldrb r2, [r0]
	add r3, r3, #1
	add r1, r4, r3
	strb r2, [r1]
	strb r5, [r0]
	add r0, r6, #0
	mov r1, #0
	bl sub_080BFE6C
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r5, _0811AD3C  @ =0x000009B2
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0811AD4C
	ldr r1, _0811AD40  @ =0x00001818
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AD4C
	ldr r2, _0811AD44  @ =0x0000187A
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #28
	bne _0811AD4C
	ldr r5, _0811AD48  @ =0x0000186B
	add r0, r4, r5
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	mov r8, r4
	b _0811AD5A
_0811AD30:
	.4byte 0x00000E3D
_0811AD34:
	.4byte 0x00001734
_0811AD38:
	.4byte 0x00000A74
_0811AD3C:
	.4byte 0x000009B2
_0811AD40:
	.4byte 0x00001818
_0811AD44:
	.4byte 0x0000187A
_0811AD48:
	.4byte 0x0000186B
_0811AD4C:
	ldr r0, _0811AE18  @ =gRam
	ldr r2, _0811AE1C  @ =0x0000186B
	add r1, r0, r2
	add r1, r6, r1
	mov r2, #0
	strb r2, [r1]
	mov r8, r0
_0811AD5A:
	cmp r3, #0
	beq _0811AE48
_0811AD5E:
	ldr r2, _0811AE18  @ =gRam
	ldr r3, _0811AE20  @ =0x00001791
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	mov r8, r2
	cmp r0, #0
	beq _0811AD7A
	ldr r0, _0811AE24  @ =0x00001792
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AE48
_0811AD7A:
	ldr r0, _0811AE28  @ =0x00001735
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AD86
	b _0811B08A
_0811AD86:
	ldr r0, _0811AE2C  @ =0x00000DBB
	add r0, r0, r8
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811AD94
	b _0811B08A
_0811AD94:
	mov r0, #1
	strb r0, [r1]
	ldr r3, _0811AE30  @ =0x0000097C
	add r3, r3, r8
	mov r0, #4
	strb r0, [r3]
	mov r2, #252
	ldr r0, _0811AE34  @ =0x00000E3D
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811ADB4
	mov r0, #16
	strb r0, [r3]
	mov r2, #240
_0811ADB4:
	ldr r0, _0811AE38  @ =0x00000DED
	add r0, r0, r8
	add r1, r6, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811ADCA
	cmp r0, #0
	bge _0811ADC8
	ldrb r2, [r3]
_0811ADC8:
	strb r2, [r1]
_0811ADCA:
	mov r2, #252
	ldr r0, _0811AE3C  @ =0x00000DF7
	add r0, r0, r8
	add r1, r6, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811ADE2
	cmp r0, #0
	bge _0811ADE0
	mov r2, #4
_0811ADE0:
	strb r2, [r1]
_0811ADE2:
	ldr r2, _0811AE18  @ =gRam
	ldr r5, _0811AE34  @ =0x00000E3D
	add r0, r2, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	beq _0811ADF2
	b _0811B08A
_0811ADF2:
	ldr r1, _0811AE40  @ =0x00000A92
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811AE00
	b _0811B08A
_0811AE00:
	ldr r3, _0811AE38  @ =0x00000DED
	add r0, r2, r3
	add r0, r6, r0
	mov r1, #252
	strb r1, [r0]
	ldr r5, _0811AE44  @ =0x00001818
	add r0, r2, r5
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	b _0811B08A
	.byte 0x00
	.byte 0x00
_0811AE18:
	.4byte gRam
_0811AE1C:
	.4byte 0x0000186B
_0811AE20:
	.4byte 0x00001791
_0811AE24:
	.4byte 0x00001792
_0811AE28:
	.4byte 0x00001735
_0811AE2C:
	.4byte 0x00000DBB
_0811AE30:
	.4byte 0x0000097C
_0811AE34:
	.4byte 0x00000E3D
_0811AE38:
	.4byte 0x00000DED
_0811AE3C:
	.4byte 0x00000DF7
_0811AE40:
	.4byte 0x00000A92
_0811AE44:
	.4byte 0x00001818
_0811AE48:
	ldr r0, _0811AEAC  @ =0x00001791
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _0811AE5C
	b _0811B08A
_0811AE5C:
	ldr r0, _0811AEB0  @ =0x00000A92
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AE6E
	cmp r0, #255
	beq _0811AE6E
	b _0811B08A
_0811AE6E:
	ldr r0, _0811AEB4  @ =0x00000E3D
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	ldr r4, _0811AEB8  @ =0x00000A74
	add r4, r4, r8
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r6, #0
	mov r1, #0
	bl sub_080BFA64
	strb r5, [r4]
	ldr r0, _0811AEBC  @ =0x0000187A
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #38
	bne _0811AE98
	b _0811AD5E
_0811AE98:
	cmp r0, #38
	bgt _0811AECC
	cmp r0, #12
	bne _0811AEA2
	b _0811AFF0
_0811AEA2:
	cmp r0, #12
	bgt _0811AEC0
	cmp r0, #8
	beq _0811AF2C
	b _0811AEE8
_0811AEAC:
	.4byte 0x00001791
_0811AEB0:
	.4byte 0x00000A92
_0811AEB4:
	.4byte 0x00000E3D
_0811AEB8:
	.4byte 0x00000A74
_0811AEBC:
	.4byte 0x0000187A
_0811AEC0:
	cmp r0, #28
	bne _0811AEC6
	b _0811AFF0
_0811AEC6:
	cmp r0, #32
	beq _0811AF80
	b _0811AEE8
_0811AECC:
	cmp r0, #182
	beq _0811AEFC
	cmp r0, #182
	bgt _0811AEE4
	cmp r0, #107
	bgt _0811AEE8
	cmp r0, #104
	blt _0811AEE8
	add r0, r6, #0
	bl sub_0811B934
	b _0811B08A
_0811AEE4:
	cmp r0, #188
	beq _0811AEFC
_0811AEE8:
	ldr r2, _0811AF1C  @ =gRam
	ldr r1, _0811AF20  @ =0x0000187A
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	mov r8, r2
	cmp r0, #176
	beq _0811AF80
_0811AEFC:
	ldr r0, _0811AF1C  @ =gRam
	ldr r2, _0811AF24  @ =0x00000E33
	add r1, r0, r2
	add r2, r6, r1
	mov r1, #0
	strb r1, [r2]
	ldr r3, _0811AF28  @ =0x00001818
	add r0, r0, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AF16
	b _0811B08A
_0811AF16:
	mov r0, #2
	strb r0, [r2]
	b _0811B08A
_0811AF1C:
	.4byte gRam
_0811AF20:
	.4byte 0x0000187A
_0811AF24:
	.4byte 0x00000E33
_0811AF28:
	.4byte 0x00001818
_0811AF2C:
	add r0, r6, #1
	ldr r1, _0811AF70  @ =0x0000177A
	add r1, r1, r8
	ldrb r5, [r1]
	cmp r0, r5
	bne _0811AF3A
	strb r7, [r1]
_0811AF3A:
	ldr r0, _0811AF74  @ =0x00000E33
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AF48
	b _0811B08A
_0811AF48:
	ldr r3, _0811AF78  @ =0x00000DC5
	add r3, r3, r8
	add r3, r6, r3
	ldrb r1, [r3]
	ldr r2, _0811AF7C  @ =0x00000DD9
	add r2, r2, r8
	add r2, r6, r2
	ldrb r0, [r2]
	add r0, r0, #255
	lsl r0, r0, #8
	add r0, r0, #232
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	add r0, r6, #0
	bl sub_08119324
	b _0811B244
	.byte 0x00
	.byte 0x00
_0811AF70:
	.4byte 0x0000177A
_0811AF74:
	.4byte 0x00000E33
_0811AF78:
	.4byte 0x00000DC5
_0811AF7C:
	.4byte 0x00000DD9
_0811AF80:
	mov r4, r8
	ldr r1, _0811AFD8  @ =0x00001791
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0811B08A
	ldr r3, _0811AFDC  @ =0x00000968
	add r0, r4, r3
	strb r6, [r0]
	ldr r5, _0811AFE0  @ =0x0000177A
	add r3, r4, r5
	ldrb r1, [r3]
	sub r1, r1, #1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r1, r0
	bne _0811AFAE
	strb r2, [r3]
_0811AFAE:
	ldr r1, _0811AFE4  @ =0x00000E33
	add r0, r4, r1
	add r0, r6, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _0811B08A
	ldr r2, _0811AFE8  @ =0x00000E29
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811AFCE
	add r0, r6, #0
	mov r1, #108
	bl sub_080C19F8
_0811AFCE:
	ldr r0, _0811AFEC  @ =0x00000E15
	add r0, r0, r8
	add r0, r6, r0
	strb r5, [r0]
	b _0811B244
_0811AFD8:
	.4byte 0x00001791
_0811AFDC:
	.4byte 0x00000968
_0811AFE0:
	.4byte 0x0000177A
_0811AFE4:
	.4byte 0x00000E33
_0811AFE8:
	.4byte 0x00000E29
_0811AFEC:
	.4byte 0x00000E15
_0811AFF0:
	ldr r4, _0811B020  @ =gRam
	ldr r3, _0811B024  @ =0x00000B14
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #3
	beq _0811B030
	ldr r5, _0811B028  @ =0x00000E47
	add r0, r4, r5
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811B08A
	ldr r2, _0811B02C  @ =0x00000A92
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811B08A
	cmp r0, #255
	beq _0811B08A
	mov r0, #1
	strb r0, [r1]
	b _0811B08A
	.byte 0x00
	.byte 0x00
_0811B020:
	.4byte gRam
_0811B024:
	.4byte 0x00000B14
_0811B028:
	.4byte 0x00000E47
_0811B02C:
	.4byte 0x00000A92
_0811B030:
	ldr r5, _0811B15C  @ =0x00001732
	add r3, r4, r5
	ldr r0, _0811B160  @ =0x0000179A
	add r1, r4, r0
	ldr r5, _0811B164  @ =0x00000DC5
	add r2, r4, r5
	add r2, r6, r2
	ldrb r0, [r2]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r3]
	ldr r0, _0811B168  @ =0x00001733
	add r3, r4, r0
	mov r5, #0
	ldrsh r1, [r1, r5]
	ldrb r2, [r2]
	add r1, r1, r2
	ldr r2, _0811B16C  @ =0x00000DD9
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #255
	lsl r0, r0, #8
	and r1, r1, r0
	asr r1, r1, #8
	strb r1, [r3]
	ldr r3, _0811B170  @ =0x0000179C
	add r1, r4, r3
	ldr r5, _0811B174  @ =0x00000DCF
	add r3, r4, r5
	add r3, r6, r3
	ldrb r0, [r3]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _0811B178  @ =0x00000DE3
	add r2, r4, r0
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
_0811B08A:
	mov r1, r9
	cmp r1, #1
	bne _0811B098
	add r0, r6, #0
	mov r1, #13
	bl sub_080C19F8
_0811B098:
	ldr r4, _0811B17C  @ =gRam
	ldr r2, _0811B16C  @ =0x00000DD9
	add r0, r4, r2
	add r0, r6, r0
	ldr r3, _0811B168  @ =0x00001733
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r5, _0811B164  @ =0x00000DC5
	add r0, r4, r5
	add r0, r6, r0
	ldr r2, _0811B15C  @ =0x00001732
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _0811B180  @ =0x00000E3D
	add r0, r4, r3
	add r0, r6, r0
	ldr r5, _0811B184  @ =0x00001734
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _0811B188  @ =0x00000A74
	add r2, r4, r0
	add r2, r6, r2
	ldr r3, _0811B18C  @ =0x00001735
	add r1, r4, r3
	ldrb r0, [r2]
	ldrb r1, [r1]
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r6, #0
	bl sub_0811A980
	add r5, r5, #254
	add r1, r4, r5
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0811B1B8
	ldr r0, _0811B190  @ =0x00000E29
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0811B130
	add r0, r6, #0
	mov r1, #41
	bl sub_080C19F8
	add r0, r6, #1
	ldr r2, _0811B194  @ =0x0000177A
	add r1, r4, r2
	ldrb r3, [r1]
	cmp r0, r3
	bne _0811B130
	strb r5, [r1]
	ldr r0, _0811B198  @ =0x00001791
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811B130
	strb r5, [r2]
	ldr r1, _0811B19C  @ =0x00001705
	add r0, r4, r1
	strb r5, [r0]
_0811B130:
	ldr r2, _0811B17C  @ =gRam
	ldr r3, _0811B190  @ =0x00000E29
	add r0, r2, r3
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #11
	bne _0811B1A8
	ldr r5, _0811B1A0  @ =0x00000E1F
	add r0, r2, r5
	add r0, r6, r0
	ldrb r0, [r0]
	neg r1, r0
	orr r1, r1, r0
	asr r1, r1, #31
	mov r0, #8
	and r1, r1, r0
	ldr r3, _0811B1A4  @ =0x00000E15
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	b _0811B244
	.byte 0x00
	.byte 0x00
_0811B15C:
	.4byte 0x00001732
_0811B160:
	.4byte 0x0000179A
_0811B164:
	.4byte 0x00000DC5
_0811B168:
	.4byte 0x00001733
_0811B16C:
	.4byte 0x00000DD9
_0811B170:
	.4byte 0x0000179C
_0811B174:
	.4byte 0x00000DCF
_0811B178:
	.4byte 0x00000DE3
_0811B17C:
	.4byte gRam
_0811B180:
	.4byte 0x00000E3D
_0811B184:
	.4byte 0x00001734
_0811B188:
	.4byte 0x00000A74
_0811B18C:
	.4byte 0x00001735
_0811B190:
	.4byte 0x00000E29
_0811B194:
	.4byte 0x0000177A
_0811B198:
	.4byte 0x00001791
_0811B19C:
	.4byte 0x00001705
_0811B1A0:
	.4byte 0x00000E1F
_0811B1A4:
	.4byte 0x00000E15
_0811B1A8:
	ldr r5, _0811B250  @ =0x00001832
	add r1, r2, r5
	add r1, r6, r1
	ldr r2, _0811B254  @ =gUnknown_0817F593
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_0811B1B8:
	ldr r7, _0811B258  @ =gRam
	ldr r1, _0811B25C  @ =0x00000E29
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #7
	bne _0811B23E
	ldr r2, _0811B250  @ =0x00001832
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _0811B23E
	ldr r3, _0811B260  @ =0x00000DC5
	add r0, r7, r3
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r5, _0811B264  @ =0x00000DD9
	add r0, r7, r5
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	mov r2, #0
	strh r1, [r0]
	add r3, r3, #10
	add r0, r7, r3
	add r0, r6, r0
	ldrb r1, [r0]
	add r5, r5, #10
	add r0, r7, r5
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _0811B268  @ =0x00000964
	add r0, r7, r3
	strh r1, [r0]
	ldr r5, _0811B26C  @ =0x0000097C
	add r0, r7, r5
	strh r6, [r0]
	lsl r0, r6, #1
	ldr r1, _0811B270  @ =0x00001849
	add r4, r7, r1
	add r5, r0, r4
	strb r2, [r5]
	add r0, r0, #1
	add r0, r0, r4
	strb r2, [r0]
	bl sub_08085FAC
	add r0, r6, #1
	lsl r0, r0, #1
	add r0, r0, r4
	ldrb r1, [r5]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _0811B23E
	ldr r2, _0811B274  @ =0x00000E1F
	add r0, r7, r2
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
_0811B23E:
	add r0, r6, #0
	bl sub_0811B278
_0811B244:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0811B250:
	.4byte 0x00001832
_0811B254:
	.4byte gUnknown_0817F593
_0811B258:
	.4byte gRam
_0811B25C:
	.4byte 0x00000E29
_0811B260:
	.4byte 0x00000DC5
_0811B264:
	.4byte 0x00000DD9
_0811B268:
	.4byte 0x00000964
_0811B26C:
	.4byte 0x0000097C
_0811B270:
	.4byte 0x00001849
_0811B274:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_0811AC24

