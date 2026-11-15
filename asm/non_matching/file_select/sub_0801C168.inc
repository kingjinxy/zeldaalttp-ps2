	THUMB_FUNC_START sub_0801C168
sub_0801C168: @ 0x0801C168
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	sub r0, r0, #1
	cmp r0, #1
	bgt _0801C1BC
	add r0, r4, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #131
	bls _0801C1BC
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	ldr r1, [r4, #88]
	cmp r1, #0
	beq _0801C190
	mov r0, #0
	str r0, [r1, #84]
_0801C190:
	add r0, r4, #0
	add r0, r0, #62
	ldrb r0, [r0]
	mov r1, #16
	eor r0, r0, r1
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	add r2, r4, #0
	add r2, r2, #42
	strb r0, [r2]
	ldr r1, _0801C1CC  @ =gUnknown_0813A44C
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0801C1BC:
	ldr r1, _0801C1D0  @ =gUnknown_0813A40C
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801C1CC:
	.4byte gUnknown_0813A44C
_0801C1D0:
	.4byte gUnknown_0813A40C
	THUMB_FUNC_END sub_0801C168

