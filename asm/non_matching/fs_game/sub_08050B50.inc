	THUMB_FUNC_START sub_08050B50
sub_08050B50: @ 0x08050B50
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08050BB8
	ldr r0, _08050BB0  @ =gUnknown_08140820
	ldr r1, _08050BB4  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	mov r4, #3
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r4, r2, #0
	lsl r3, r4, #1
	add r3, r3, r2
	lsl r2, r3, #1
	add r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #4]
	b _08050BF8
	.byte 0x00
	.byte 0x00
_08050BB0:
	.4byte gUnknown_08140820
_08050BB4:
	.4byte gUnknown_03006C80
_08050BB8:
	ldr r0, _08050C28  @ =gUnknown_08140840
	ldr r1, _08050C2C  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	mov r4, #3
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r4, r2, #0
	lsl r3, r4, #1
	add r3, r3, r2
	lsl r2, r3, #1
	add r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #4]
_08050BF8:
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #7
	bls _08050C1E
	bl 0x080515B8
_08050C1E:
	lsl r1, r0, #2
	ldr r2, _08050C30  @ =0x08050C34
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
_08050C28:
	.4byte gUnknown_08140840
_08050C2C:
	.4byte gUnknown_03006C80
_08050C30:
	.4byte 0x08050C34
	.4byte _08050C54
	.4byte _08050DF0
	.4byte _08050F90
	.4byte _0805112C
	.4byte _080512CC
	.4byte _08051386
	.4byte _08051442
	.4byte _080514FC
_08050C54:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r1, _08050DEC  @ =0x0000FFFF
	cmp r0, r1
	beq _08050DE8
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r1, r1, #14
	str r1, [r7, #4]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_08050DE8:
	bl 0x080515B8
_08050DEC:
	.4byte 0x0000FFFF
_08050DF0:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r1, _08050F8C  @ =0x0000FFFF
	cmp r0, r1
	beq _08050F88
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r1, r1, #14
	str r1, [r7, #4]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
_08050F88:
	b _080515B8
	.byte 0x00
	.byte 0x00
_08050F8C:
	.4byte 0x0000FFFF
_08050F90:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r1, _08051128  @ =0x0000FFFF
	cmp r0, r1
	beq _08051124
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	sub r1, r1, #34
	str r1, [r7, #4]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
_08051124:
	b _080515B8
	.byte 0x00
	.byte 0x00
_08051128:
	.4byte 0x0000FFFF
_0805112C:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r1, _080512C8  @ =0x0000FFFF
	cmp r0, r1
	beq _080512C4
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	sub r1, r1, #34
	str r1, [r7, #4]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_080512C4:
	b _080515B8
	.byte 0x00
	.byte 0x00
_080512C8:
	.4byte 0x0000FFFF
_080512CC:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	b _080515B8
_08051386:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	b _080515B8
_08051442:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	b _080515B8
_080514FC:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	b _080515B8
_080515B8:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08050B50

