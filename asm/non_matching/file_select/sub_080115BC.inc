	THUMB_FUNC_START sub_080115BC
sub_080115BC: @ 0x080115BC
	push {r4,lr}
	add r4, r0, #0
	ldr r2, _080115D0  @ =gUnknown_02016D60
	ldrb r0, [r2, #30]
	ldrb r1, [r4, #11]
	cmp r0, r1
	bne _080115D4
	mov r2, #3
	b _080115DE
	.byte 0x00
	.byte 0x00
_080115D0:
	.4byte gUnknown_02016D60
_080115D4:
	ldrb r0, [r2, #31]
	mov r2, #6
	cmp r0, r1
	bne _080115DE
	mov r2, #4
_080115DE:
	ldrb r1, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #30]
	add r0, r4, #0
	bl sub_0803D8AC
	ldrb r1, [r4, #29]
	mov r0, #192
	orr r1, r1, r0
	strb r1, [r4, #29]
	ldr r2, _08011640  @ =gUnknown_02016D60
	ldrb r0, [r2, #31]
	ldrb r3, [r4, #11]
	cmp r0, r3
	bne _0801161C
	add r0, r2, #0
	add r0, r0, #36
	ldrb r0, [r0]
	cmp r0, #0
	beq _08011612
	mov r0, #63
	and r1, r1, r0
	strb r1, [r4, #29]
_08011612:
	add r0, r4, #0
	mov r1, #0
	mov r2, #12
	bl sub_08011EE8
_0801161C:
	ldr r1, _08011640  @ =gUnknown_02016D60
	ldrb r0, [r1, #30]
	cmp r0, #2
	bls _0801167A
	ldrb r2, [r1, #26]
	cmp r2, #3
	bne _0801164E
	mov r0, #1
	strb r0, [r1, #27]
	ldrb r0, [r1, #31]
	ldrb r1, [r4, #11]
	cmp r0, r1
	beq _08011644
	add r0, r4, #0
	bl DeleteThisEntity
	b _0801167A
	.byte 0x00
	.byte 0x00
_08011640:
	.4byte gUnknown_02016D60
_08011644:
	mov r1, #6
	strb r2, [r4, #20]
	mov r0, #0
	strb r0, [r4, #21]
	b _08011660
_0801164E:
	ldrb r2, [r4, #11]
	ldrb r0, [r1, #31]
	cmp r0, r2
	bcc _0801165A
	ldrb r1, [r4, #11]
	b _08011660
_0801165A:
	add r0, r2, #3
	lsl r0, r0, #24
	lsr r1, r0, #24
_08011660:
	add r0, r4, #0
	add r0, r0, #103
	ldrb r2, [r0]
	cmp r1, r2
	beq _0801167A
	strb r1, [r0]
	lsl r1, r1, #2
	ldr r0, _08011680  @ =gUnknown_081380A6
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #8
	bl sub_0803D7E8
_0801167A:
	pop {r4}
	pop {r0}
	bx r0
_08011680:
	.4byte gUnknown_081380A6
	THUMB_FUNC_END sub_080115BC

