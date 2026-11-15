	THUMB_FUNC_START sub_08020DB0
sub_08020DB0: @ 0x08020DB0
	push {r4-r6,lr}
	add r4, r0, #0
	mov r6, #0
	add r2, r4, #0
	add r2, r2, #112
	ldrh r0, [r2]
	sub r0, r0, #24
	strh r0, [r2]
	add r3, r4, #0
	add r3, r3, #114
	ldrh r0, [r3]
	sub r0, r0, #16
	strh r0, [r3]
	ldrh r1, [r2]
	ldr r5, _08020E24  @ =gUnknown_0813B8D8
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	add r0, r0, r5
	ldr r0, [r0]
	cmp r1, r0
	bgt _08020DDE
	strh r0, [r2]
	mov r6, #1
_08020DDE:
	ldrh r1, [r3]
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	cmp r1, r0
	bgt _08020DFA
	strh r0, [r3]
	cmp r6, #0
	beq _08020DFA
	mov r0, #2
	strb r0, [r4, #20]
_08020DFA:
	ldr r0, _08020E28  @ =gUnknown_03000488
	add r1, r4, #0
	add r1, r1, #112
	ldrh r1, [r1]
	mov r2, #0
	strh r1, [r0]
	add r1, r4, #0
	add r1, r1, #114
	ldrh r1, [r1]
	strh r1, [r0, #2]
	strh r2, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	add r0, r4, #0
	bl 0x08003828
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020E24:
	.4byte gUnknown_0813B8D8
_08020E28:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08020DB0

