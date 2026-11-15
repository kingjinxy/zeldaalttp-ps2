	THUMB_FUNC_START sub_08011684
sub_08011684: @ 0x08011684
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #21]
	cmp r0, #0
	beq _08011694
	cmp r0, #1
	beq _08011710
	b _08011744
_08011694:
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r4, #29]
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _0801173E
	mov r0, #1
	strb r0, [r4, #21]
	mov r0, #32
	strb r0, [r4, #24]
	ldr r2, _080116F8  @ =gUnknown_030004A0
	ldrh r1, [r2]
	mov r3, #184
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r1, r2, #0
	add r1, r1, #96
	mov r0, #9
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _080116FC  @ =0x00001F3F
	strh r0, [r1]
	sub r1, r1, #10
	ldr r0, _08011700  @ =0x000008E8
	strh r0, [r1]
	add r1, r1, #4
	ldr r0, _08011704  @ =0x00002898
	strh r0, [r1]
	add r1, r1, #10
	ldr r0, _08011708  @ =0x00000844
	strh r0, [r1]
	add r1, r1, #2
	sub r0, r0, #56
	strh r0, [r1]
	ldr r0, _0801170C  @ =gUnknown_08427598
	bl sub_0804C808
	b _0801173E
	.byte 0x00
	.byte 0x00
_080116F8:
	.4byte gUnknown_030004A0
_080116FC:
	.4byte 0x00001F3F
_08011700:
	.4byte 0x000008E8
_08011704:
	.4byte 0x00002898
_08011708:
	.4byte 0x00000844
_0801170C:
	.4byte gUnknown_08427598
_08011710:
	ldrb r0, [r4, #24]
	cmp r0, #151
	bhi _08011730
	add r0, r0, #8
	strb r0, [r4, #24]
	ldr r1, _0801172C  @ =gUnknown_030004A0
	ldrb r0, [r4, #24]
	lsl r0, r0, #8
	mov r2, #152
	add r1, r1, #92
	orr r0, r0, r2
	strh r0, [r1]
	b _0801173E
	.byte 0x00
	.byte 0x00
_0801172C:
	.4byte gUnknown_030004A0
_08011730:
	ldr r2, _08011754  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08011758  @ =0x0000DFFF
	and r0, r0, r1
	strh r0, [r2]
	mov r0, #2
	strb r0, [r4, #21]
_0801173E:
	ldr r1, _0801175C  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #27]
_08011744:
	add r0, r4, #0
	mov r1, #0
	mov r2, #12
	bl sub_08011EE8
	pop {r4}
	pop {r0}
	bx r0
_08011754:
	.4byte gUnknown_030004A0
_08011758:
	.4byte 0x0000DFFF
_0801175C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011684

