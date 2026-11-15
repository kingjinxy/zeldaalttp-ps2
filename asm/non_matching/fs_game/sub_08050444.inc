	THUMB_FUNC_START sub_08050444
sub_08050444: @ 0x08050444
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, _080504BC  @ =gUnknown_08140830
	ldr r1, _080504C0  @ =gUnknown_03006C80
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
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _080504B0
	b _0805066C
_080504B0:
	cmp r0, #1
	bgt _080504C4
	cmp r0, #0
	beq _080504D2
	b _08050B48
	.byte 0x00
	.byte 0x00
_080504BC:
	.4byte gUnknown_08140830
_080504C0:
	.4byte gUnknown_03006C80
_080504C4:
	cmp r0, #2
	bne _080504CA
	b _0805080C
_080504CA:
	cmp r0, #3
	bne _080504D0
	b _080509A8
_080504D0:
	b _08050B48
_080504D2:
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
	ldr r1, _08050668  @ =0x0000FFFF
	cmp r0, r1
	beq _08050666
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
_08050666:
	b _08050B48
_08050668:
	.4byte 0x0000FFFF
_0805066C:
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
	ldr r1, _08050808  @ =0x0000FFFF
	cmp r0, r1
	beq _08050804
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
_08050804:
	b _08050B48
	.byte 0x00
	.byte 0x00
_08050808:
	.4byte 0x0000FFFF
_0805080C:
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
	ldr r1, _080509A4  @ =0x0000FFFF
	cmp r0, r1
	beq _080509A0
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
_080509A0:
	b _08050B48
	.byte 0x00
	.byte 0x00
_080509A4:
	.4byte 0x0000FFFF
_080509A8:
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
	ldr r1, _08050B44  @ =0x0000FFFF
	cmp r0, r1
	beq _08050B40
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
_08050B40:
	b _08050B48
	.byte 0x00
	.byte 0x00
_08050B44:
	.4byte 0x0000FFFF
_08050B48:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08050444

