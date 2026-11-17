	THUMB_FUNC_START sub_0801E1F0
sub_0801E1F0: @ 0x0801E1F0
	push {r4-r6,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, [r4, #88]
	add r1, r4, #0
	add r1, r1, #41
	ldrb r1, [r1]
	mov r3, #3
	and r3, r3, r1
	sub r3, r3, #1
	lsl r3, r3, #16
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	ldrh r0, [r4, #58]
	sub r0, r0, #4
	strh r0, [r4, #58]
	ldr r1, _0801E24C  @ =gUnknown_03000940
	ldr r0, [r4, #88]
	ldrb r2, [r0, #10]
	lsl r3, r2, #1
	add r1, r3, r1
	ldrh r1, [r1]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0801E22E
	b _0801E35A
_0801E22E:
	ldr r5, _0801E250  @ =gUnknown_03006A30
	lsl r0, r2, #3
	add r0, r0, r2
	lsl r0, r0, #4
	add r1, r0, r5
	add r0, r1, #0
	add r0, r0, #60
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801E254
	add r0, r4, #0
	bl sub_080098CC
	b _0801E35A
	.byte 0x00
	.byte 0x00
_0801E24C:
	.4byte gUnknown_03000940
_0801E250:
	.4byte gUnknown_03006A30
_0801E254:
	ldrh r1, [r1, #54]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801E260
	b _0801E35A
_0801E260:
	mov r6, #0
	ldr r0, _0801E2E0  @ =gUnknown_03005E10
	add r0, r3, r0
	ldrh r0, [r0]
	add r2, r4, #0
	add r2, r2, #112
	cmp r0, #0
	beq _0801E276
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
_0801E276:
	ldr r1, [r4, #88]
	ldrb r0, [r1, #20]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _0801E2A4
	ldrb r0, [r1, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r5
	add r0, r1, #0
	add r0, r0, #38
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801E2A4
	ldrh r1, [r1, #54]
	mov r0, #200
	lsl r0, r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0801E2AA
_0801E2A4:
	mov r0, #0
	strh r0, [r2]
	mov r6, #1
_0801E2AA:
	ldrh r0, [r2]
	cmp r0, #0
	beq _0801E2E4
	add r1, r4, #0
	add r1, r1, #114
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801E35A
	mov r0, #120
	strh r0, [r1]
	ldr r0, [r4, #88]
	mov r1, #4
	neg r1, r1
	bl sub_0802C3F0
	ldr r0, [r4, #88]
	add r0, r0, #61
	mov r1, #16
	strb r1, [r0]
	ldr r0, [r4, #88]
	add r0, r0, #65
	mov r1, #164
	strb r1, [r0]
	b _0801E35A
_0801E2E0:
	.4byte gUnknown_03005E10
_0801E2E4:
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #45
	strb r0, [r4, #24]
	mov r0, #96
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #92
	ldr r0, _0801E33C  @ =0x000021FF
	strh r0, [r1]
	add r2, r4, #0
	add r2, r2, #80
	ldrh r1, [r2]
	mov r3, #192
	lsl r3, r3, #8
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_08008DD8
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r2, r4, #0
	add r2, r2, #62
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	sub r2, r2, #19
	strb r0, [r2]
	lsr r0, r0, #4
	add r1, r4, #0
	add r1, r1, #42
	strb r0, [r1]
	cmp r6, #0
	beq _0801E340
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
	b _0801E35A
	.byte 0x00
	.byte 0x00
_0801E33C:
	.4byte 0x000021FF
_0801E340:
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #244
	strb r0, [r1]
	add r1, r1, #5
	mov r0, #16
	strb r0, [r1]
	ldrb r1, [r2]
	lsr r1, r1, #4
	add r1, r1, #4
	add r0, r4, #0
	bl sub_08003870
_0801E35A:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E1F0

