	THUMB_FUNC_START sub_0801DC14
sub_0801DC14: @ 0x0801DC14
	push {r4-r6,lr}
	mov r12, r0
	ldr r1, [r0, #88]
	cmp r1, #0
	beq _0801DC72
	ldr r6, _0801DC78  @ =gUnknown_03000E20
	ldrh r0, [r6]
	mov r4, #7
	add r3, r4, #0
	and r3, r3, r0
	add r3, r3, r1
	add r3, r3, #116
	mov r0, r12
	ldrh r1, [r0, #50]
	add r0, r0, #112
	ldrb r0, [r0]
	sub r1, r1, r0
	add r1, r1, #8
	mov r5, #15
	and r1, r1, r5
	mov r2, r12
	ldrh r0, [r2, #54]
	add r2, r2, #114
	ldrb r2, [r2]
	sub r0, r0, r2
	add r0, r0, #8
	and r0, r0, r5
	lsl r0, r0, #4
	add r1, r1, r0
	strb r1, [r3]
	ldrb r1, [r6]
	add r0, r4, #0
	and r0, r0, r1
	lsl r0, r0, #2
	mov r1, r12
	add r1, r1, #42
	ldrb r1, [r1]
	and r4, r4, r1
	lsl r4, r4, r0
	mov r1, #15
	lsl r1, r1, r0
	mov r0, r12
	ldr r2, [r0, #88]
	ldr r0, [r2, #124]
	bic r0, r0, r1
	orr r4, r4, r0
	str r4, [r2, #124]
_0801DC72:
	pop {r4-r6}
	pop {r0}
	bx r0
_0801DC78:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0801DC14

