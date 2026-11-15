	THUMB_FUNC_START sub_080EBC3C
sub_080EBC3C: @ 0x080EBC3C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080EBD44  @ =gRam
	ldr r1, _080EBD48  @ =0x00000F62
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EBC5C
	b _080EBFE8
_080EBC5C:
	ldr r2, _080EBD4C  @ =0x00001062
	add r0, r5, r2
	add r0, r0, r6
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EBC6C
	b _080EBF34
_080EBC6C:
	ldr r3, _080EBD50  @ =0x00000FA2
	add r0, r5, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080EBC7A
	b _080EBE04
_080EBC7A:
	ldr r1, _080EBD54  @ =0x000016C4
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080EBD58  @ =0x000016C5
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #40
	ldr r3, _080EBD5C  @ =0x00001622
	add r0, r5, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #79
	bls _080EBCAC
	b _080EBE04
_080EBCAC:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080EBD60  @ =0x000016C1
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #48
	add r3, r3, #1
	add r0, r5, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #79
	bls _080EBCE0
	b _080EBE04
_080EBCE0:
	ldr r1, _080EBD64  @ =0x000016F6
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #128
	bne _080EBCEC
	b _080EBE04
_080EBCEC:
	ldr r2, _080EBD68  @ =0x00001142
	add r1, r5, r2
	add r1, r6, r1
	ldr r3, _080EBD6C  @ =0x000010D2
	add r0, r5, r3
	add r0, r6, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _080EBD04
	b _080EBE04
_080EBD04:
	mov r1, #161
	lsl r1, r1, #4
	add r0, r5, r1
	sub r2, r2, #80
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080EBE04
	mov r7, #0
	mov r4, #0
	add r0, r6, #0
	bl sub_080C2FA8
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	strb r0, [r1]
	ldr r1, _080EBD70  @ =0x00001804
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EBD88
	ldr r2, _080EBD74  @ =0x000016EA
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #143
	bls _080EBD78
	mov r4, #1
	b _080EBD84
	.byte 0x00
	.byte 0x00
_080EBD44:
	.4byte gRam
_080EBD48:
	.4byte 0x00000F62
_080EBD4C:
	.4byte 0x00001062
_080EBD50:
	.4byte 0x00000FA2
_080EBD54:
	.4byte 0x000016C4
_080EBD58:
	.4byte 0x000016C5
_080EBD5C:
	.4byte 0x00001622
_080EBD60:
	.4byte 0x000016C1
_080EBD64:
	.4byte 0x000016F6
_080EBD68:
	.4byte 0x00001142
_080EBD6C:
	.4byte 0x000010D2
_080EBD70:
	.4byte 0x00001804
_080EBD74:
	.4byte 0x000016EA
_080EBD78:
	sub r0, r0, #9
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EBD84
	mov r7, #1
_080EBD84:
	cmp r7, #0
	beq _080EBDA8
_080EBD88:
	ldr r0, _080EBE1C  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r1, r0, r3
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldr r1, _080EBE20  @ =gUnknown_08178290
	ldr r3, _080EBE24  @ =0x000016D5
	add r0, r0, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r2, r0
	beq _080EBDA8
	mov r4, #1
_080EBDA8:
	cmp r4, #0
	beq _080EBE04
	ldr r4, _080EBE1C  @ =gRam
	ldr r1, _080EBE28  @ =0x00000FB2
	add r0, r4, r1
	add r0, r6, r0
	mov r2, #150
	lsl r2, r2, #4
	add r5, r4, r2
	ldrb r1, [r5]
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #32
	bl sub_080C2CB4
	ldr r3, _080EBE2C  @ =0x00000F22
	add r1, r4, r3
	add r1, r6, r1
	ldr r2, _080EBE30  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	sub r3, r3, #16
	add r1, r4, r3
	add r1, r6, r1
	ldrb r0, [r5]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EBE34  @ =0x00001152
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #11
	bl sub_080CF140
	ldr r2, _080EBE38  @ =0x00001142
	add r4, r4, r2
	add r4, r6, r4
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080EBE04:
	ldr r5, _080EBE1C  @ =gRam
	ldr r3, _080EBE38  @ =0x00001142
	add r0, r5, r3
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080EBE3C
	add r0, r6, #0
	bl sub_080EC1E0
	b _080EBFEE
	.byte 0x00
	.byte 0x00
_080EBE1C:
	.4byte gRam
_080EBE20:
	.4byte gUnknown_08178290
_080EBE24:
	.4byte 0x000016D5
_080EBE28:
	.4byte 0x00000FB2
_080EBE2C:
	.4byte 0x00000F22
_080EBE30:
	.4byte 0x00000961
_080EBE34:
	.4byte 0x00001152
_080EBE38:
	.4byte 0x00001142
_080EBE3C:
	ldr r0, _080EBF0C  @ =0x00000F92
	add r1, r5, r0
	add r1, r6, r1
	ldr r2, _080EBF10  @ =gUnknown_08178294
	ldr r3, _080EBF14  @ =0x00000FB2
	add r0, r5, r3
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080EC000
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080EBE68
	b _080EBFEE
_080EBE68:
	ldr r2, _080EBF18  @ =0x00001072
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EBE7C
	ldr r3, _080EBF1C  @ =0x00001152
	add r0, r5, r3
	add r0, r6, r0
	strb r1, [r0]
_080EBE7C:
	add r0, r6, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080EBE8C
	b _080EBFEE
_080EBE8C:
	add r0, r6, #0
	bl sub_080C5044
	add r0, r6, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080EBEAC
	ldr r2, _080EBF20  @ =0x00000F22
	add r0, r5, r2
	add r0, r6, r0
	strb r4, [r0]
_080EBEAC:
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _080EBEBC
	ldr r3, _080EBF24  @ =0x00000F12
	add r0, r5, r3
	add r0, r6, r0
	strb r4, [r0]
_080EBEBC:
	add r0, r6, #0
	bl sub_080C99DC
	ldr r0, _080EBF1C  @ =0x00001152
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldrb r0, [r7]
	sub r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EBEDC
	b _080EBFEE
_080EBEDC:
	strb r4, [r7]
	add r0, r6, #0
	bl sub_080C351C
	add r0, r6, #0
	mov r1, #13
	bl sub_080CF0AC
	ldr r1, _080EBF28  @ =0x00001002
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EBEFA
	b _080EBFEE
_080EBEFA:
	ldr r2, _080EBF2C  @ =0x000010B2
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	ldr r3, _080EBF30  @ =0x00001052
	add r0, r5, r3
	b _080EBFDC
	.byte 0x00
	.byte 0x00
_080EBF0C:
	.4byte 0x00000F92
_080EBF10:
	.4byte gUnknown_08178294
_080EBF14:
	.4byte 0x00000FB2
_080EBF18:
	.4byte 0x00001072
_080EBF1C:
	.4byte 0x00001152
_080EBF20:
	.4byte 0x00000F22
_080EBF24:
	.4byte 0x00000F12
_080EBF28:
	.4byte 0x00001002
_080EBF2C:
	.4byte 0x000010B2
_080EBF30:
	.4byte 0x00001052
_080EBF34:
	ldr r1, _080EBF60  @ =0x00000FC2
	add r0, r5, r1
	add r0, r0, r6
	mov r10, r0
	ldrb r4, [r0]
	cmp r4, #0
	beq _080EBF68
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r6, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EBFEE
	ldr r2, _080EBF64  @ =0x00001172
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	b _080EBFEE
_080EBF60:
	.4byte 0x00000FC2
_080EBF64:
	.4byte 0x00001172
_080EBF68:
	ldr r3, _080EBFC8  @ =0x00000F22
	add r0, r5, r3
	add r0, r0, r6
	mov r8, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080EBFCC  @ =0x00000F12
	add r0, r5, r2
	add r7, r6, r0
	strb r1, [r7]
	ldr r3, _080EBFD0  @ =0x00001172
	add r0, r5, r3
	add r0, r6, r0
	strb r4, [r0]
	add r0, r6, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EBFD8
	mov r0, r9
	strb r4, [r0]
	add r0, r6, #0
	mov r1, #21
	bl sub_080CF0AC
	add r0, r6, #0
	bl sub_080CF6C0
	ldr r1, _080EBFD4  @ =0x00000FE2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	mov r0, #64
	mov r2, r10
	strb r0, [r2]
	strb r4, [r7]
	mov r3, r8
	strb r4, [r3]
	mov r0, sp
	add r0, r0, #2
	mov r1, sp
	add r1, r1, #3
	add r2, r6, #0
	bl sub_080C632C
	b _080EBFEE
_080EBFC8:
	.4byte 0x00000F22
_080EBFCC:
	.4byte 0x00000F12
_080EBFD0:
	.4byte 0x00001172
_080EBFD4:
	.4byte 0x00000FE2
_080EBFD8:
	ldr r1, _080EBFE4  @ =0x00000FA2
	add r0, r5, r1
_080EBFDC:
	add r0, r6, r0
	strb r4, [r0]
	b _080EBFEE
	.byte 0x00
	.byte 0x00
_080EBFE4:
	.4byte 0x00000FA2
_080EBFE8:
	add r0, r6, #0
	bl sub_080EC0FC
_080EBFEE:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EBC3C

	.byte 0x00
	.byte 0x00
