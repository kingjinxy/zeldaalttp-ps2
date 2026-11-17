	THUMB_FUNC_START sub_0802657C
sub_0802657C: @ 0x0802657C
	push {r4,lr}
	mov r12, r0
	mov r2, #1
	mov r4, #1
	strb r4, [r0, #20]
	mov r1, #8
	strb r1, [r0, #23]
	ldrb r0, [r0, #28]
	mov r3, #4
	neg r3, r3
	and r3, r3, r0
	orr r3, r3, r2
	mov r0, #49
	neg r0, r0
	and r3, r3, r0
	mov r0, #16
	orr r3, r3, r0
	mov r0, r12
	strb r3, [r0, #28]
	add r0, r0, #43
	ldrb r2, [r0]
	and r1, r1, r2
	cmp r1, #0
	beq _080265D0
	mov r0, #16
	and r0, r0, r2
	cmp r0, #0
	bne _080265BC
	mov r0, #4
	orr r3, r3, r0
	mov r2, r12
	strb r3, [r2, #28]
_080265BC:
	mov r1, r12
	add r1, r1, #42
	strb r4, [r1]
	ldr r0, _080265CC  @ =gUnknown_0813C724
	mov r3, r12
	str r0, [r3, #72]
	add r0, r1, #0
	b _080265EE
_080265CC:
	.4byte gUnknown_0813C724
_080265D0:
	mov r0, #16
	and r0, r0, r2
	cmp r0, #0
	beq _080265E0
	mov r0, #8
	orr r3, r3, r0
	mov r0, r12
	strb r3, [r0, #28]
_080265E0:
	mov r0, r12
	add r0, r0, #42
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080265FC  @ =gUnknown_0813C71C
	mov r2, r12
	str r1, [r2, #72]
_080265EE:
	ldrb r1, [r0]
	mov r0, r12
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
_080265FC:
	.4byte gUnknown_0813C71C
	THUMB_FUNC_END sub_0802657C

