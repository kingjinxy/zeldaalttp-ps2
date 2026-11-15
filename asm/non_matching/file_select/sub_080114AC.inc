	THUMB_FUNC_START sub_080114AC
sub_080114AC: @ 0x080114AC
	push {r4-r6,lr}
	add r6, r0, #0
	mov r5, #0
	mov r4, #1
	strb r4, [r6, #20]
	ldrb r1, [r6, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r6, #28]
	ldrb r3, [r6, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	mov r3, #64
	orr r0, r0, r3
	strb r0, [r6, #31]
	ldrb r0, [r6, #29]
	and r1, r1, r0
	orr r1, r1, r3
	strb r1, [r6, #29]
	ldrb r1, [r6, #11]
	add r3, r6, #0
	add r3, r3, #94
	mov r0, #3
	and r0, r0, r1
	ldrb r1, [r3]
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r3]
	strb r5, [r6, #23]
	ldrb r1, [r6, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	mov r1, #6
	orr r0, r0, r1
	strb r0, [r6, #30]
	ldrb r0, [r6, #11]
	add r1, r6, #0
	add r1, r1, #33
	strb r0, [r1]
	add r1, r1, #70
	mov r0, #255
	strb r0, [r1]
	ldr r0, _08011528  @ =gUnknown_02016D60
	strb r4, [r0, #27]
	ldrb r2, [r6, #11]
	mov r0, #59
	mov r1, #3
	bl sub_0804C8A8
	str r0, [r6, #88]
	cmp r0, #0
	beq _08011522
	str r6, [r0, #84]
_08011522:
	pop {r4-r6}
	pop {r0}
	bx r0
_08011528:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080114AC

