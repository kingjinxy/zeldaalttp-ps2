	THUMB_FUNC_START sub_08134074
sub_08134074: @ 0x08134074
	ldr r2, _081342D8  @ =0x68736D53
	ldr r3, [r0, #52]
	cmp r2, r3
	beq _0813407E
	bx lr
_0813407E:
	add r3, r3, #1
	str r3, [r0, #52]
	push {r0,lr}
	ldr r3, [r0, #56]
	cmp r3, #0
	beq _08134090
	ldr r0, [r0, #60]
	bl _081342BC+0x10
_08134090:
	pop {r0}
	push {r4-r7}
	mov r4, r8
	mov r5, r9
	mov r6, r10
	mov r7, r11
	push {r4-r7}
	add r7, r0, #0
	ldr r0, [r7, #4]
	cmp r0, #0
	bge _081340A8
	b _081342BC
_081340A8:
	ldr r0, _081342D4  @ =gUnknown_03007FF0
	ldr r0, [r0]
	mov r8, r0
	add r0, r7, #0
	bl sub_08134F60
	ldr r0, [r7, #4]
	cmp r0, #0
	bge _081340BC
	b _081342BC
_081340BC:
	ldrh r0, [r7, #34]
	ldrh r1, [r7, #32]
	add r0, r0, r1
	b _0813420C
_081340C4:
	ldrb r6, [r7, #8]
	ldr r5, [r7, #44]
	mov r3, #1
	mov r4, #0
_081340CC:
	ldrb r0, [r5]
	mov r1, #128
	tst r1, r0
	bne _081340D6
	b _081341E8
_081340D6:
	mov r10, r3
	orr r4, r4, r3
	mov r11, r4
	ldr r4, [r5, #32]
	cmp r4, #0
	beq _0813410A
_081340E2:
	ldrb r1, [r4]
	mov r0, #199
	tst r0, r1
	beq _081340FE
	ldrb r0, [r4, #16]
	cmp r0, #0
	beq _08134104
	sub r0, r0, #1
	strb r0, [r4, #16]
	bne _08134104
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r4]
	b _08134104
_081340FE:
	add r0, r4, #0
	bl sub_08134A5C
_08134104:
	ldr r4, [r4, #52]
	cmp r4, #0
	bne _081340E2
_0813410A:
	ldrb r3, [r5]
	mov r0, #64
	tst r0, r3
	beq _08134188
	add r0, r5, #0
	bl sub_08134A70
	mov r0, #128
	strb r0, [r5]
	mov r0, #2
	strb r0, [r5, #15]
	mov r0, #64
	strb r0, [r5, #19]
	mov r0, #22
	strb r0, [r5, #25]
	mov r0, #1
	add r1, r5, #6
	strb r0, [r1, #30]
	b _08134188
_08134130:
	ldr r2, [r5, #64]
	ldrb r1, [r2]
	cmp r1, #128
	bcs _0813413C
	ldrb r1, [r5, #7]
	b _08134146
_0813413C:
	add r2, r2, #1
	str r2, [r5, #64]
	cmp r1, #189
	bcc _08134146
	strb r1, [r5, #7]
_08134146:
	cmp r1, #207
	bcc _0813415C
	mov r0, r8
	ldr r3, [r0, #56]
	add r0, r1, #0
	sub r0, r0, #207
	add r1, r7, #0
	add r2, r5, #0
	bl _081342BC+0x10
	b _08134188
_0813415C:
	cmp r1, #176
	bls _0813417E
	add r0, r1, #0
	sub r0, r0, #177
	strb r0, [r7, #10]
	mov r3, r8
	ldr r3, [r3, #52]
	lsl r0, r0, #2
	ldr r3, [r3, r0]
	add r0, r7, #0
	add r1, r5, #0
	bl _081342BC+0x10
	ldrb r0, [r5]
	cmp r0, #0
	beq _081341E4
	b _08134188
_0813417E:
	ldr r0, _081342D0  @ =gUnknown_083C28C8
	sub r1, r1, #128
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r5, #1]
_08134188:
	ldrb r0, [r5, #1]
	cmp r0, #0
	beq _08134130
	sub r0, r0, #1
	strb r0, [r5, #1]
	ldrb r1, [r5, #25]
	cmp r1, #0
	beq _081341E4
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _081341E4
	ldrb r0, [r5, #28]
	cmp r0, #0
	beq _081341AA
	sub r0, r0, #1
	strb r0, [r5, #28]
	b _081341E4
_081341AA:
	ldrb r0, [r5, #26]
	add r0, r0, r1
	strb r0, [r5, #26]
	add r1, r0, #0
	sub r0, r0, #64
	lsl r0, r0, #24
	bpl _081341BE
	lsl r2, r1, #24
	asr r2, r2, #24
	b _081341C2
_081341BE:
	mov r0, #128
	sub r2, r0, r1
_081341C2:
	ldrb r0, [r5, #23]
	mul r0, r2, r0
	asr r2, r0, #6
	ldrb r0, [r5, #22]
	eor r0, r0, r2
	lsl r0, r0, #24
	beq _081341E4
	strb r2, [r5, #22]
	ldrb r0, [r5]
	ldrb r1, [r5, #24]
	cmp r1, #0
	bne _081341DE
	mov r1, #12
	b _081341E0
_081341DE:
	mov r1, #3
_081341E0:
	orr r0, r0, r1
	strb r0, [r5]
_081341E4:
	mov r3, r10
	mov r4, r11
_081341E8:
	sub r6, r6, #1
	ble _081341F4
	mov r0, #80
	add r5, r5, r0
	lsl r3, r3, #1
	b _081340CC
_081341F4:
	ldr r0, [r7, #12]
	add r0, r0, #1
	str r0, [r7, #12]
	cmp r4, #0
	bne _08134206
	mov r0, #128
	lsl r0, r0, #24
	str r0, [r7, #4]
	b _081342BC
_08134206:
	str r4, [r7, #4]
	ldrh r0, [r7, #34]
	sub r0, r0, #150
_0813420C:
	strh r0, [r7, #34]
	cmp r0, #150
	bcc _08134214
	b _081340C4
_08134214:
	ldrb r2, [r7, #8]
	ldr r5, [r7, #44]
_08134218:
	ldrb r0, [r5]
	mov r1, #128
	tst r1, r0
	beq _081342B2
	mov r1, #15
	tst r1, r0
	beq _081342B2
	mov r9, r2
	add r0, r7, #0
	add r1, r5, #0
	bl sub_08135028
	ldr r4, [r5, #32]
	cmp r4, #0
	beq _081342A8
_08134236:
	ldrb r1, [r4]
	mov r0, #199
	tst r0, r1
	bne _08134246
	add r0, r4, #0
	bl sub_08134A5C
	b _081342A2
_08134246:
	ldrb r0, [r4, #1]
	mov r6, #7
	and r6, r6, r0
	ldrb r3, [r5]
	mov r0, #3
	tst r0, r3
	beq _08134264
	bl sub_08134320
	cmp r6, #0
	beq _08134264
	ldrb r0, [r4, #29]
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #29]
_08134264:
	ldrb r3, [r5]
	mov r0, #12
	tst r0, r3
	beq _081342A2
	ldrb r1, [r4, #8]
	mov r0, #8
	ldrsb r0, [r5, r0]
	add r2, r1, r0
	bpl _08134278
	mov r2, #0
_08134278:
	cmp r6, #0
	beq _08134296
	mov r0, r8
	ldr r3, [r0, #48]
	add r1, r2, #0
	ldrb r2, [r5, #9]
	add r0, r6, #0
	bl _081342BC+0x10
	str r0, [r4, #32]
	ldrb r0, [r4, #29]
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #29]
	b _081342A2
_08134296:
	add r1, r2, #0
	ldrb r2, [r5, #9]
	ldr r0, [r4, #36]
	bl sub_081345B8+0x28
	str r0, [r4, #32]
_081342A2:
	ldr r4, [r4, #52]
	cmp r4, #0
	bne _08134236
_081342A8:
	ldrb r0, [r5]
	mov r1, #240
	and r0, r0, r1
	strb r0, [r5]
	mov r2, r9
_081342B2:
	sub r2, r2, #1
	ble _081342BC
	mov r0, #80
	add r5, r5, r0
	bgt _08134218
_081342BC:
	ldr r0, _081342D8  @ =0x68736D53
	str r0, [r7, #52]
	pop {r0-r7}
	mov r8, r0
	mov r9, r1
	mov r10, r2
	mov r11, r3
	pop {r3}
	bx r3
	.byte 0x00
	.byte 0x00
_081342D0:
	.4byte gUnknown_083C28C8
_081342D4:
	.4byte gUnknown_03007FF0
_081342D8:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134074

