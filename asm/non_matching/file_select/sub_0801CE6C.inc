	THUMB_FUNC_START sub_0801CE6C
sub_0801CE6C: @ 0x0801CE6C
	push {r4-r6,lr}
	add r4, r0, #0
	add r0, r0, #66
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801CEA6
	ldrb r0, [r4, #20]
	cmp r0, #3
	beq _0801CEA6
	cmp r0, #6
	bhi _0801CEA6
	mov r1, #0
	mov r0, #3
	strb r0, [r4, #20]
	strb r1, [r4, #23]
	ldrb r1, [r4, #28]
	sub r0, r0, #7
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
_0801CEA6:
	add r0, r4, #0
	add r0, r0, #114
	add r1, r4, #0
	add r1, r1, #69
	ldrb r2, [r0]
	add r6, r0, #0
	add r5, r1, #0
	ldrb r0, [r5]
	cmp r2, r0
	bne _0801CEC4
	add r0, r4, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801CF0E
_0801CEC4:
	ldr r0, [r4, #84]
	cmp r0, #0
	beq _0801CF00
	bl sub_0801D3F0
	ldr r0, [r4, #84]
	add r0, r0, #69
	mov r1, #0
	strb r1, [r0]
	str r1, [r4, #84]
	add r0, r4, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801CF00
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
_0801CF00:
	ldrb r0, [r4, #20]
	cmp r0, #6
	bhi _0801CF0A
	mov r0, #7
	strb r0, [r4, #20]
_0801CF0A:
	ldrb r0, [r5]
	strb r0, [r6]
_0801CF0E:
	ldr r1, [r4, #16]
	mov r0, #192
	lsl r0, r0, #9
	cmp r1, r0
	bne _0801CF26
	add r0, r4, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _0801CF26
	mov r0, #0
	str r0, [r4, #16]
_0801CF26:
	ldr r1, _0801CF34  @ =gUnknown_0813A780
	add r0, r4, #0
	bl sub_080098A0
	pop {r4-r6}
	pop {r0}
	bx r0
_0801CF34:
	.4byte gUnknown_0813A780
	THUMB_FUNC_END sub_0801CE6C

