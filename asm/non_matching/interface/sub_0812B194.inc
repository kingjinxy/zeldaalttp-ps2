	THUMB_FUNC_START sub_0812B194
sub_0812B194: @ 0x0812B194
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r2, [r5, #12]
	ldr r6, [r5, #4]
	add r3, r5, #0
	add r3, r3, #44
	ldr r0, [r5, #44]
	cmp r0, #0
	beq _0812B1AC
	sub r0, r0, #1
	str r0, [r5, #44]
	b _0812B1C6
_0812B1AC:
	ldr r4, [r3, #4]
	cmp r4, #0
	beq _0812B1C6
	ldr r0, [r3, #8]
	ldr r1, [r3, #16]
	add r0, r0, r1
	str r0, [r3, #8]
	sub r0, r4, #1
	str r0, [r3, #4]
	cmp r0, #0
	bne _0812B1C6
	ldr r0, [r3, #12]
	str r0, [r3, #8]
_0812B1C6:
	ldr r0, [r3, #8]
	add r2, r2, r0
	add r0, r6, #0
	add r0, r0, #79
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	beq _0812B272
	cmp r1, #0
	ble _0812B21A
	add r3, r1, #0
	ldr r1, _0812B200  @ =gUnknown_08199040
	add r0, r0, #1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mul r3, r0, r3
	mov r0, #128
	lsl r0, r0, #15
	add r3, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0812B204
	lsr r3, r3, #7
	mul r2, r3, r2
	lsr r2, r2, #15
	b _0812B272
_0812B200:
	.4byte gUnknown_08199040
_0812B204:
	mov r4, #128
	lsl r4, r4, #4
	sub r2, r4, r2
	lsl r2, r2, #22
	add r0, r2, #0
	add r1, r3, #0
	bl __udivsi3
	add r2, r0, #0
	sub r2, r4, r2
	b _0812B272
_0812B21A:
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	neg r3, r0
	ldr r1, _0812B250  @ =gUnknown_08199040
	add r0, r6, #0
	add r0, r0, #80
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mul r3, r0, r3
	mov r0, #128
	lsl r0, r0, #15
	add r3, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0812B254
	lsl r2, r2, #15
	lsr r3, r3, #7
	add r0, r2, #0
	add r1, r3, #0
	bl __udivsi3
	add r2, r0, #0
	b _0812B272
_0812B250:
	.4byte gUnknown_08199040
_0812B254:
	mov r1, #128
	lsl r1, r1, #4
	sub r2, r1, r2
	lsr r3, r3, #7
	mul r2, r3, r2
	lsr r2, r2, #15
	ldr r0, _0812B26C  @ =0x000007FF
	cmp r2, r0
	bhi _0812B270
	sub r2, r1, r2
	b _0812B272
	.byte 0x00
	.byte 0x00
_0812B26C:
	.4byte 0x000007FF
_0812B270:
	mov r2, #0
_0812B272:
	add r4, r5, #0
	add r4, r4, #32
	ldr r0, [r4, #8]
	ldr r3, [r0, #8]
	cmp r3, #0
	beq _0812B320
	ldr r0, [r4, #4]
	cmp r0, #0
	bne _0812B31C
	ldr r0, _0812B2A8  @ =gUnknown_08199220
	ldr r1, [r5, #32]
	lsr r1, r1, #1
	add r1, r1, r0
	ldrb r1, [r1]
	ldrb r0, [r5]
	cmp r0, #0
	bne _0812B2C8
	lsl r0, r1, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0812B2AC
	mul r0, r2, r0
	mul r0, r3, r0
	lsr r0, r0, #19
	add r2, r2, r0
	b _0812B300
	.byte 0x00
	.byte 0x00
_0812B2A8:
	.4byte gUnknown_08199220
_0812B2AC:
	lsl r2, r2, #12
	neg r0, r0
	add r1, r0, #0
	mul r1, r3, r1
	lsr r1, r1, #3
	mov r3, #128
	lsl r3, r3, #9
	add r1, r1, r3
	add r0, r2, #0
	bl __udivsi3
	add r2, r0, #0
	lsl r2, r2, #4
	b _0812B300
_0812B2C8:
	lsl r0, r1, #24
	asr r1, r0, #24
	cmp r1, #0
	blt _0812B2E6
	mov r0, #128
	lsl r0, r0, #4
	sub r0, r0, r2
	lsl r0, r0, #19
	mul r1, r3, r1
	mov r2, #128
	lsl r2, r2, #12
	add r1, r1, r2
	bl __udivsi3
	b _0812B2FA
_0812B2E6:
	mov r0, #128
	lsl r0, r0, #4
	neg r1, r1
	sub r0, r0, r2
	mul r1, r3, r1
	mov r3, #128
	lsl r3, r3, #12
	add r1, r1, r3
	mul r0, r1, r0
	lsr r0, r0, #19
_0812B2FA:
	mov r2, #128
	lsl r2, r2, #4
	sub r2, r2, r0
_0812B300:
	ldr r0, [r4, #8]
	ldr r1, [r4]
	ldr r0, [r0, #4]
	add r1, r1, r0
	str r1, [r4]
	lsr r0, r1, #1
	cmp r0, #255
	bls _0812B320
	ldr r3, _0812B318  @ =0xFFFFFE00
	add r0, r1, r3
	str r0, [r4]
	b _0812B320
_0812B318:
	.4byte 0xFFFFFE00
_0812B31C:
	sub r0, r0, #1
	str r0, [r4, #4]
_0812B320:
	add r0, r2, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812B194

