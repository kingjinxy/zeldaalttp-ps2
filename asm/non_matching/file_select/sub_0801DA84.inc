	THUMB_FUNC_START sub_0801DA84
sub_0801DA84: @ 0x0801DA84
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, [r5, #84]
	bl 0x08002E18
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _0801DAD8
	ldr r1, _0801DAD4  @ =gUnknown_0813A90C
	ldrb r0, [r5, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	ldr r4, [r5, #84]
	ldrb r2, [r4, #31]
	lsr r2, r2, #6
	lsl r2, r2, #6
	ldrb r3, [r5, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	orr r0, r0, r2
	strb r0, [r5, #31]
	ldrb r0, [r4, #29]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r2, [r5, #29]
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r5, #29]
	add r4, r4, #80
	ldrh r1, [r4]
	add r0, r5, #0
	add r0, r0, #80
	strh r1, [r0]
	b _0801DADE
_0801DAD4:
	.4byte gUnknown_0813A90C
_0801DAD8:
	add r0, r5, #0
	bl DeleteThisEntity
_0801DADE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801DA84

