	THUMB_FUNC_START sub_08033EEC
sub_08033EEC: @ 0x08033EEC
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	strb r1, [r4, #29]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #128
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #16
	strb r0, [r1]
	bl sub_080399CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _08033F40
	ldr r0, _08033F58  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	add r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
_08033F40:
	ldr r1, _08033F5C  @ =gUnknown_0813D9D4
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	pop {r4}
	pop {r0}
	bx r0
_08033F58:
	.4byte gUnknown_03006C80
_08033F5C:
	.4byte gUnknown_0813D9D4
	THUMB_FUNC_END sub_08033EEC

