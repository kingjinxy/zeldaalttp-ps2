	THUMB_FUNC_START sub_0801C7AC
sub_0801C7AC: @ 0x0801C7AC
	push {r4,lr}
	add r3, r0, #0
	add r0, r0, #43
	ldrb r0, [r0]
	cmp r0, #255
	beq _0801C80A
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _0801C80A
	mov r0, #3
	strb r0, [r3, #20]
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r3, #12]
	str r4, [r3, #16]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r3, #0
	add r1, r1, #63
	mov r0, #7
	strb r0, [r1]
	add r1, r1, #7
	mov r0, #12
	strb r0, [r1]
	sub r1, r1, #9
	mov r0, #248
	strb r0, [r1]
	ldr r0, _0801C810  @ =gUnknown_0813A730
	str r0, [r3, #72]
	add r0, r3, #0
	add r0, r0, #112
	strb r4, [r0]
	sub r1, r1, #19
	mov r0, #8
	strb r0, [r1]
	add r0, r3, #0
	mov r1, #8
	bl 0x08003870
_0801C80A:
	pop {r4}
	pop {r0}
	bx r0
_0801C810:
	.4byte gUnknown_0813A730
	THUMB_FUNC_END sub_0801C7AC

