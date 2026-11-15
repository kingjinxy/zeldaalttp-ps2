	THUMB_FUNC_START sub_08021694
sub_08021694: @ 0x08021694
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _080216AA
	bl sub_0803DF84
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	b _080216B0
_080216AA:
	ldr r1, _080216D0  @ =gUnknown_03000450
	ldr r0, [r4, #88]
	str r0, [r1]
_080216B0:
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08021730
	mov r0, #127
	and r0, r0, r1
	cmp r0, #8
	beq _08021700
	cmp r0, #8
	bgt _080216D4
	cmp r0, #4
	beq _08021700
	b _08021730
_080216D0:
	.4byte gUnknown_03000450
_080216D4:
	cmp r0, #12
	beq _08021700
	cmp r0, #16
	bne _08021730
	ldr r2, _08021738  @ =gUnknown_03006A30
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #6
	strb r1, [r0, #12]
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
_08021700:
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #232
	strb r0, [r1]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802172A
	ldrb r0, [r4, #30]
	lsr r0, r0, #4
	sub r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r4, #30]
	add r0, r4, #0
	bl sub_08022A7C
_0802172A:
	add r0, r4, #0
	bl sub_08022D88
_08021730:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08021738:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08021694

