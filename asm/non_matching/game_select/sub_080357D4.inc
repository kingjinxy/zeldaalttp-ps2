	THUMB_FUNC_START sub_080357D4
sub_080357D4: @ 0x080357D4
	push {r4,lr}
	add r4, r0, #0
	ldrb r3, [r4, #20]
	cmp r3, #1
	beq _08035844
	cmp r3, #1
	bgt _080357E8
	cmp r3, #0
	beq _080357EE
	b _0803588E
_080357E8:
	cmp r3, #2
	beq _08035868
	b _0803588E
_080357EE:
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _0803580E
	ldrb r1, [r4, #29]
	mov r0, #63
	and r0, r0, r1
	strb r0, [r4, #29]
	b _08035832
_0803580E:
	ldrb r0, [r4, #29]
	mov r1, #192
	orr r0, r0, r1
	mov r1, #13
	neg r1, r1
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldr r1, _0803583C  @ =gUnknown_030004A0
	add r2, r1, #0
	add r2, r2, #102
	mov r0, #244
	lsl r0, r0, #4
	strh r0, [r2]
	add r1, r1, #104
	ldr r0, _08035840  @ =0x00000809
	strh r0, [r1]
_08035832:
	ldrb r1, [r4, #11]
	add r0, r4, #0
	bl sub_08003870
	b _0803588E
_0803583C:
	.4byte gUnknown_030004A0
_08035840:
	.4byte 0x00000809
_08035844:
	ldr r0, _08035864  @ =gUnknown_0201F000
	ldr r0, [r0]
	and r0, r0, r3
	cmp r0, #0
	beq _0803588E
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _0803585C
	mov r0, #135
	lsl r0, r0, #2
	bl play_sound
_0803585C:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	b _0803588E
_08035864:
	.4byte gUnknown_0201F000
_08035868:
	ldr r0, _080358A8  @ =gUnknown_03000948
	ldrh r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	bic r1, r1, r0
	ldrb r2, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldr r0, _080358AC  @ =gUnknown_0201F000
	ldr r0, [r0]
	and r0, r0, r3
	cmp r0, #0
	beq _0803588E
	add r0, r4, #0
	bl DeleteThisEntity
_0803588E:
	ldr r1, [r4, #84]
	ldr r0, [r1, #48]
	str r0, [r4, #48]
	ldr r0, [r1, #52]
	str r0, [r4, #52]
	ldr r0, [r1, #56]
	str r0, [r4, #56]
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
_080358A8:
	.4byte gUnknown_03000948
_080358AC:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080357D4

