	THUMB_FUNC_START sub_0801BA38
sub_0801BA38: @ 0x0801BA38
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801BA98
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r0, r3, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801BA7C
	add r2, r3, #0
	add r2, r2, #114
	ldr r0, _0801BA78  @ =gUnknown_0813A11C
	ldrb r1, [r3, #23]
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldrh r2, [r2]
	add r0, r0, r2
	b _0801BAA6
	.byte 0x00
	.byte 0x00
_0801BA78:
	.4byte gUnknown_0813A11C
_0801BA7C:
	add r2, r3, #0
	add r2, r2, #112
	ldr r1, _0801BA94  @ =gUnknown_0813A11C
	ldrb r0, [r3, #23]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r3, #50]
	b _0801BAA8
_0801BA94:
	.4byte gUnknown_0813A11C
_0801BA98:
	add r0, r3, #0
	add r0, r0, #112
	ldrh r0, [r0]
	strh r0, [r3, #50]
	add r0, r3, #0
	add r0, r0, #114
	ldrh r0, [r0]
_0801BAA6:
	strh r0, [r3, #54]
_0801BAA8:
	bx lr
	THUMB_FUNC_END sub_0801BA38

	.byte 0x00
	.byte 0x00
