	THUMB_FUNC_START sub_08022764
sub_08022764: @ 0x08022764
	push {r4-r6,lr}
	add r6, r0, #0
	mov r0, #42
	bl sub_08012468
	str r0, [r6, #100]
	cmp r0, #0
	beq _080227AC
	str r6, [r0, #84]
	ldr r1, [r6, #100]
	mov r2, #0
	mov r0, #1
	strb r0, [r1, #10]
	ldr r0, [r6, #100]
	strb r2, [r0, #23]
	ldr r2, [r6, #100]
	add r1, r2, #0
	add r1, r1, #116
	mov r0, #15
	strb r0, [r1]
	strb r0, [r2, #24]
	ldr r3, [r6, #100]
	ldrb r1, [r6, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r3, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, [r6, #100]
	add r1, r6, #0
	add r1, r1, #32
	ldrb r1, [r1]
	add r0, r0, #32
	strb r1, [r0]
_080227AC:
	mov r0, #42
	bl sub_08012468
	str r0, [r6, #116]
	cmp r0, #0
	beq _080227EE
	str r6, [r0, #84]
	ldr r0, [r6, #116]
	mov r1, #1
	strb r1, [r0, #10]
	ldr r0, [r6, #116]
	strb r1, [r0, #23]
	ldr r2, [r6, #116]
	add r1, r2, #0
	add r1, r1, #116
	mov r0, #15
	strb r0, [r1]
	strb r0, [r2, #24]
	ldr r3, [r6, #116]
	ldrb r1, [r6, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r3, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, [r6, #116]
	add r1, r6, #0
	add r1, r1, #32
	ldrb r1, [r1]
	add r0, r0, #32
	strb r1, [r0]
_080227EE:
	mov r0, #42
	bl sub_08012468
	str r0, [r6, #120]
	cmp r0, #0
	beq _08022832
	str r6, [r0, #84]
	ldr r1, [r6, #120]
	mov r0, #1
	strb r0, [r1, #10]
	ldr r1, [r6, #120]
	mov r0, #2
	strb r0, [r1, #23]
	ldr r2, [r6, #120]
	add r1, r2, #0
	add r1, r1, #116
	mov r0, #15
	strb r0, [r1]
	strb r0, [r2, #24]
	ldr r3, [r6, #120]
	ldrb r1, [r6, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r3, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, [r6, #120]
	add r1, r6, #0
	add r1, r1, #32
	ldrb r1, [r1]
	add r0, r0, #32
	strb r1, [r0]
_08022832:
	mov r0, #42
	bl sub_08012468
	str r0, [r6, #124]
	cmp r0, #0
	beq _08022876
	str r6, [r0, #84]
	ldr r1, [r6, #124]
	mov r0, #1
	strb r0, [r1, #10]
	ldr r1, [r6, #124]
	mov r0, #3
	strb r0, [r1, #23]
	ldr r2, [r6, #124]
	add r1, r2, #0
	add r1, r1, #116
	mov r0, #15
	strb r0, [r1]
	strb r0, [r2, #24]
	ldr r3, [r6, #124]
	ldrb r1, [r6, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r3, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, [r6, #124]
	add r1, r6, #0
	add r1, r1, #32
	ldrb r1, [r1]
	add r0, r0, #32
	strb r1, [r0]
_08022876:
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	ldr r4, [r6, #100]
	ldr r3, _08022920  @ =gUnknown_0813BCEC
	lsl r0, r0, #2
	add r1, r0, r3
	ldrb r1, [r1]
	mov r2, #128
	orr r1, r1, r2
	strb r1, [r4, #11]
	ldr r4, [r6, #116]
	add r1, r3, #1
	add r1, r0, r1
	ldrb r1, [r1]
	orr r1, r1, r2
	strb r1, [r4, #11]
	ldr r4, [r6, #120]
	add r1, r3, #2
	add r1, r0, r1
	ldrb r1, [r1]
	orr r1, r1, r2
	strb r1, [r4, #11]
	ldr r1, [r6, #124]
	add r3, r3, #3
	add r0, r0, r3
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r1, #11]
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	ldr r1, _08022924  @ =gUnknown_03006C80
	ldrb r1, [r1]
	sub r1, r1, #1
	lsl r1, r1, #2
	add r0, r0, r1
	lsl r0, r0, #24
	ldr r2, [r6, #100]
	ldr r5, _08022928  @ =gUnknown_0813BD2C
	ldrb r4, [r2, #11]
	mov r3, #15
	add r1, r3, #0
	and r1, r1, r4
	lsr r0, r0, #22
	add r1, r1, r0
	add r1, r1, r5
	ldrb r1, [r1]
	add r2, r2, #115
	strb r1, [r2]
	ldr r2, [r6, #116]
	ldrb r4, [r2, #11]
	add r1, r3, #0
	and r1, r1, r4
	add r1, r1, r0
	add r1, r1, r5
	ldrb r1, [r1]
	add r2, r2, #115
	strb r1, [r2]
	ldr r2, [r6, #120]
	ldrb r4, [r2, #11]
	add r1, r3, #0
	and r1, r1, r4
	add r1, r1, r0
	add r1, r1, r5
	ldrb r1, [r1]
	add r2, r2, #115
	strb r1, [r2]
	ldr r1, [r6, #124]
	ldrb r2, [r1, #11]
	and r3, r3, r2
	add r3, r3, r0
	add r3, r3, r5
	ldrb r0, [r3]
	add r1, r1, #115
	strb r0, [r1]
	mov r0, #163
	bl play_sound
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08022920:
	.4byte gUnknown_0813BCEC
_08022924:
	.4byte gUnknown_03006C80
_08022928:
	.4byte gUnknown_0813BD2C
	THUMB_FUNC_END sub_08022764

