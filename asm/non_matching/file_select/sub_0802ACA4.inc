	THUMB_FUNC_START sub_0802ACA4
sub_0802ACA4: @ 0x0802ACA4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r6, r0, #0
	ldrb r0, [r6, #10]
	cmp r0, #1
	beq _0802ACF0
	cmp r0, #1
	bgt _0802ACBE
	cmp r0, #0
	beq _0802ACC4
	b _0802ADC8
_0802ACBE:
	cmp r0, #2
	beq _0802AD44
	b _0802ADC8
_0802ACC4:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802ACDC
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D3D0
_0802ACDC:
	mov r5, #3
	ldr r0, _0802ACEC  @ =gUnknown_0813D52A
	mov r8, r0
	add r0, r6, #0
	mov r1, #107
	bl sub_08003E10
	b _0802ADC8
_0802ACEC:
	.4byte gUnknown_0813D52A
_0802ACF0:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802AD0E
	mov r3, #128
	lsl r3, r3, #12
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
_0802AD0E:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802AD2A
	ldr r3, _0802AD3C  @ =0xFFF80000
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
_0802AD2A:
	mov r5, #4
	ldr r1, _0802AD40  @ =gUnknown_0813D532
	mov r8, r1
	add r0, r6, #0
	mov r1, #108
	bl sub_08003E10
	b _0802ADC8
	.byte 0x00
	.byte 0x00
_0802AD3C:
	.4byte 0xFFF80000
_0802AD40:
	.4byte gUnknown_0813D532
_0802AD44:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802AD60
	ldr r3, _0802AE30  @ =0xFFF00000
	add r0, r6, #0
	add r1, r4, #0
	add r2, r3, #0
	bl sub_0803D4A4
_0802AD60:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802AD7E
	ldr r2, _0802AE30  @ =0xFFF00000
	mov r3, #128
	lsl r3, r3, #13
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D4A4
_0802AD7E:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802AD9C
	mov r2, #128
	lsl r2, r2, #13
	ldr r3, _0802AE30  @ =0xFFF00000
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D4A4
_0802AD9C:
	mov r0, #15
	mov r1, #14
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802ADBA
	mov r3, #128
	lsl r3, r3, #13
	add r0, r6, #0
	add r1, r4, #0
	add r2, r3, #0
	bl sub_0803D4A4
_0802ADBA:
	mov r5, #5
	ldr r0, _0802AE34  @ =gUnknown_0813D53C
	mov r8, r0
	add r0, r6, #0
	mov r1, #109
	bl sub_08003E10
_0802ADC8:
	lsl r0, r5, #16
	cmp r0, #0
	blt _0802AE22
	ldr r1, _0802AE38  @ =gUnknown_0813D548
	mov r9, r1
	mov r7, #31
_0802ADD4:
	bl sub_0800099C
	and r0, r0, r7
	lsl r0, r0, #1
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r4, r0, #0
	lsl r5, r5, #16
	cmp r4, #0
	beq _0802AE18
	bl sub_0800099C
	and r0, r0, r7
	mov r1, #128
	add r2, r4, #0
	add r2, r2, #43
	orr r0, r0, r1
	strb r0, [r2]
	asr r0, r5, #15
	add r0, r0, r8
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #16
	mov r3, #1
	ldrsb r3, [r0, r3]
	lsl r3, r3, #16
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D4A4
_0802AE18:
	ldr r1, _0802AE3C  @ =0xFFFF0000
	add r0, r5, r1
	lsr r5, r0, #16
	cmp r0, #0
	bge _0802ADD4
_0802AE22:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802AE30:
	.4byte 0xFFF00000
_0802AE34:
	.4byte gUnknown_0813D53C
_0802AE38:
	.4byte gUnknown_0813D548
_0802AE3C:
	.4byte 0xFFFF0000
	THUMB_FUNC_END sub_0802ACA4

