	THUMB_FUNC_START sub_08021930
sub_08021930: @ 0x08021930
	push {r4,lr}
	add r4, r0, #0
	bl sub_08022D50
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _08021948
	add r0, r4, #0
	add r0, r0, #121
	ldrb r0, [r0]
	cmp r0, #15
	bne _08021A46
_08021948:
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	cmp r1, #0
	bne _080219BC
	add r0, r4, #0
	bl sub_0803CC20
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _080219AC
	add r1, r4, #0
	add r1, r1, #40
	mov r0, #1
	strb r0, [r1]
	ldrb r1, [r4, #23]
	sub r1, r1, #1
	strb r1, [r4, #23]
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r1, r1, #24
	cmp r1, #0
	bne _080219A4
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _08021996
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	sub r0, r0, #8
	b _0802199E
_08021996:
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	add r0, r0, #8
_0802199E:
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
_080219A4:
	add r0, r4, #0
	bl sub_080229CC
	b _08021A46
_080219AC:
	ldr r0, [r4, #16]
	cmp r0, #0
	bne _08021A46
	add r1, r4, #0
	add r1, r1, #40
	mov r0, #1
	strb r0, [r1]
	b _08021A46
_080219BC:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08021A46
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _080219D2
	add r1, r4, #0
	add r1, r1, #121
	mov r0, #0
	strb r0, [r1]
_080219D2:
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _08021A10
	ldrb r2, [r4, #23]
	cmp r2, #0
	bne _080219F2
	add r1, r4, #0
	add r1, r1, #115
	ldrb r0, [r1]
	cmp r0, #0
	beq _080219EE
	strb r2, [r1]
	mov r0, #1
	b _080219F0
_080219EE:
	mov r0, #2
_080219F0:
	strb r0, [r4, #23]
_080219F2:
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r4, #16]
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	b _08021A46
_08021A10:
	mov r0, #12
	strb r0, [r4, #20]
	mov r0, #255
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08022CA4
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08021A30
	add r0, r4, #0
	bl sub_08022A7C
	b _08021A46
_08021A30:
	bl sub_0800099C
	ldr r2, _08021A4C  @ =gUnknown_0813BD9A
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #24]
	add r0, r4, #0
	bl sub_08022BB8
_08021A46:
	pop {r4}
	pop {r0}
	bx r0
_08021A4C:
	.4byte gUnknown_0813BD9A
	THUMB_FUNC_END sub_08021930

