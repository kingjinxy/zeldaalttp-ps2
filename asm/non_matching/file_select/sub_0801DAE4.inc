	THUMB_FUNC_START sub_0801DAE4
sub_0801DAE4: @ 0x0801DAE4
	push {lr}
	add r3, r0, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #28]
	ldrb r0, [r3, #10]
	cmp r0, #1
	bne _0801DB08
	ldr r0, _0801DB04  @ =gUnknown_0813AABC
	b _0801DB0A
	.byte 0x00
	.byte 0x00
_0801DB04:
	.4byte gUnknown_0813AABC
_0801DB08:
	ldr r0, _0801DB8C  @ =gUnknown_0813AAC4
_0801DB0A:
	str r0, [r3, #72]
	add r0, r3, #0
	add r0, r0, #116
	mov r1, #136
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r0, [r3, #84]
	add r0, r0, #42
	ldrb r0, [r0]
	mov r1, #42
	add r1, r1, r3
	mov r12, r1
	strb r0, [r1]
	add r2, r3, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	mov r2, r12
	ldrb r1, [r2]
	lsl r0, r1, #4
	orr r0, r0, r1
	lsl r2, r1, #8
	orr r0, r0, r2
	lsl r2, r1, #12
	orr r0, r0, r2
	lsl r2, r1, #16
	orr r0, r0, r2
	lsl r2, r1, #20
	orr r0, r0, r2
	lsl r2, r1, #24
	orr r0, r0, r2
	lsl r1, r1, #28
	orr r0, r0, r1
	str r0, [r3, #124]
	ldrb r0, [r3, #10]
	lsl r0, r0, #3
	mov r1, r12
	ldrb r1, [r1]
	add r0, r0, r1
	mov r2, r12
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r3, #0
	bl 0x08003870
	pop {r0}
	bx r0
_0801DB8C:
	.4byte gUnknown_0813AAC4
	THUMB_FUNC_END sub_0801DAE4

