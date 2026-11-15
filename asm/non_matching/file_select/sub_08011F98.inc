	THUMB_FUNC_START sub_08011F98
sub_08011F98: @ 0x08011F98
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #11]
	cmp r0, #1
	beq _08011FCC
	cmp r0, #2
	beq _08011FDC
	ldr r2, _08011FC8  @ =gUnknown_02016D60
	add r0, r2, #0
	add r0, r0, #37
	ldrb r0, [r0]
	add r0, r0, #28
	add r1, r4, #0
	add r1, r1, #33
	strb r0, [r1]
	add r3, r4, #0
	add r3, r3, #94
	ldrb r1, [r3]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	b _08011FFA
	.byte 0x00
	.byte 0x00
_08011FC8:
	.4byte gUnknown_02016D60
_08011FCC:
	ldr r2, _08011FD8  @ =gUnknown_02016D60
	add r0, r2, #0
	add r0, r0, #38
	ldrb r0, [r0]
	add r0, r0, #30
	b _08011FE6
_08011FD8:
	.4byte gUnknown_02016D60
_08011FDC:
	ldr r2, _08012014  @ =gUnknown_02016D60
	add r0, r2, #0
	add r0, r0, #39
	ldrb r0, [r0]
	add r0, r0, #33
_08011FE6:
	add r1, r4, #0
	add r1, r1, #33
	strb r0, [r1]
	add r3, r4, #0
	add r3, r3, #94
	ldrb r1, [r3]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
_08011FFA:
	orr r0, r0, r1
	strb r0, [r3]
	add r3, r2, #0
	mov r1, #1
	strb r1, [r3, #27]
	ldrb r0, [r4, #20]
	cmp r0, #1
	beq _0801206E
	cmp r0, #1
	bgt _08012018
	cmp r0, #0
	beq _0801201E
	b _080120BC
_08012014:
	.4byte gUnknown_02016D60
_08012018:
	cmp r0, #2
	beq _08012090
	b _080120BC
_0801201E:
	strb r1, [r4, #20]
	ldrb r1, [r4, #31]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #29]
	and r2, r2, r0
	mov r0, #128
	orr r2, r2, r0
	strb r2, [r4, #29]
	ldr r1, _08012084  @ =gUnknown_081380E6
	ldrb r0, [r3, #31]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #50]
	ldrb r0, [r3, #31]
	lsl r0, r0, #2
	add r1, r1, #2
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #54]
	ldrb r1, [r3, #31]
	lsl r1, r1, #2
	ldr r0, _08012088  @ =gUnknown_081380DA
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #16
	bl sub_0803D7E8
_0801206E:
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _080120CC
	mov r0, #0
	mov r1, #2
	strb r1, [r4, #20]
	ldr r1, _0801208C  @ =gUnknown_02016D60
	strb r0, [r1, #27]
	b _080120CC
_08012084:
	.4byte gUnknown_081380E6
_08012088:
	.4byte gUnknown_081380DA
_0801208C:
	.4byte gUnknown_02016D60
_08012090:
	add r0, r2, #0
	add r0, r0, #36
	ldrb r0, [r0]
	cmp r0, #2
	beq _080120CC
	mov r0, #3
	strb r0, [r4, #20]
	ldrb r1, [r2, #31]
	lsl r1, r1, #2
	ldr r0, _080120B8  @ =gUnknown_081380E6
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #10
	bl sub_0803D7E8
	mov r0, #68
	bl play_sound
	b _080120CC
	.byte 0x00
	.byte 0x00
_080120B8:
	.4byte gUnknown_081380E6
_080120BC:
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _080120CC
	add r0, r4, #0
	bl DeleteThisEntity
_080120CC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011F98

	.byte 0x00
	.byte 0x00
