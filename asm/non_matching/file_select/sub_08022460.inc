	THUMB_FUNC_START sub_08022460
sub_08022460: @ 0x08022460
	push {lr}
	mov r12, r0
	ldrb r0, [r0, #20]
	add r0, r0, #1
	mov r1, r12
	strb r0, [r1, #20]
	ldrb r1, [r1, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	mov r2, r12
	strb r0, [r2, #28]
	ldr r0, [r2, #84]
	add r0, r0, #80
	ldrh r1, [r0]
	mov r0, r12
	add r0, r0, #80
	strh r1, [r0]
	ldr r3, [r2, #84]
	ldrb r0, [r3, #30]
	lsl r0, r0, #28
	lsr r0, r0, #28
	lsl r1, r0, #4
	orr r0, r0, r1
	strb r0, [r2, #30]
	ldrb r1, [r3, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r2, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	mov r1, r12
	strb r0, [r1, #28]
	add r3, r3, #32
	ldrb r1, [r3]
	mov r0, r12
	add r0, r0, #32
	strb r1, [r0]
	mov r2, r12
	ldr r1, [r2, #84]
	ldr r0, [r1, #48]
	str r0, [r2, #48]
	ldr r0, [r1, #52]
	str r0, [r2, #52]
	ldrb r0, [r2, #23]
	cmp r0, #0
	beq _080224EC
	mov r1, r12
	add r1, r1, #46
	mov r2, #8
	mov r0, #8
	strb r0, [r1]
	mov r1, r12
	ldrb r0, [r1, #28]
	mov r1, #48
	orr r0, r0, r1
	mov r1, r12
	strb r0, [r1, #28]
	mov r3, r12
	add r3, r3, #94
	ldrb r1, [r3]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3]
	b _080224F4
_080224EC:
	mov r1, r12
	add r1, r1, #60
	mov r0, #0
	strb r0, [r1]
_080224F4:
	ldr r0, _08022504  @ =gUnknown_0813BCB4
	mov r2, r12
	str r0, [r2, #72]
	mov r0, r12
	bl sub_08022508
	pop {r0}
	bx r0
_08022504:
	.4byte gUnknown_0813BCB4
	THUMB_FUNC_END sub_08022460

