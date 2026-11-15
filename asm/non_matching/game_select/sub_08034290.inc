	THUMB_FUNC_START sub_08034290
sub_08034290: @ 0x08034290
	push {r4,lr}
	add r4, r0, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	strb r1, [r4, #29]
	bl sub_080399CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080342D6
	ldr r0, _08034300  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	add r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
_080342D6:
	ldr r1, _08034304  @ =gUnknown_0813DAE4
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldr r0, _08034300  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	add r0, r4, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
_08034300:
	.4byte gUnknown_03006C80
_08034304:
	.4byte gUnknown_0813DAE4
	THUMB_FUNC_END sub_08034290

