	THUMB_FUNC_START sub_0801B9D8
sub_0801B9D8: @ 0x0801B9D8
	mov r12, r0
	ldrb r0, [r0, #23]
	sub r0, r0, #1
	mov r1, r12
	strb r0, [r1, #23]
	mov r0, r12
	add r0, r0, #42
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801BA14
	mov r3, r12
	add r3, r3, #114
	ldr r2, _0801BA10  @ =gUnknown_0813A11C
	mov r0, r12
	ldrb r1, [r0, #23]
	mov r0, #15
	sub r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, r12
	strh r0, [r1, #54]
	b _0801BA32
_0801BA10:
	.4byte gUnknown_0813A11C
_0801BA14:
	mov r3, r12
	add r3, r3, #112
	ldr r2, _0801BA34  @ =gUnknown_0813A11C
	mov r0, r12
	ldrb r1, [r0, #23]
	mov r0, #15
	sub r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, r12
	strh r0, [r1, #50]
_0801BA32:
	bx lr
_0801BA34:
	.4byte gUnknown_0813A11C
	THUMB_FUNC_END sub_0801B9D8

