	THUMB_FUNC_START sub_080181EC
sub_080181EC: @ 0x080181EC
	push {r4,lr}
	add r4, r0, #0
	mov r0, #9
	bl sub_08012468
	add r1, r0, #0
	cmp r1, #0
	beq _0801827C
	str r1, [r4, #84]
	str r4, [r1, #84]
	ldrb r0, [r4, #10]
	strb r0, [r1, #10]
	mov r2, #1
	mov r0, #1
	strb r0, [r1, #11]
	ldrb r0, [r4, #30]
	lsl r0, r0, #28
	lsr r0, r0, #28
	add r1, r4, #0
	add r1, r1, #125
	strb r0, [r1]
	ldr r1, _08018284  @ =gUnknown_081397A0
	ldrb r0, [r4, #10]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08018288  @ =gUnknown_0813986C
	str r0, [r4, #72]
	sub r2, r2, #28
	ldrb r1, [r2]
	ldrb r0, [r4, #28]
	lsr r0, r0, #6
	lsl r0, r0, #8
	orr r1, r1, r0
	add r0, r4, #0
	add r0, r0, #126
	strh r1, [r0]
	mov r0, #40
	strb r0, [r2]
	ldrb r0, [r4, #28]
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_0801827C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08018284:
	.4byte gUnknown_081397A0
_08018288:
	.4byte gUnknown_0813986C
	THUMB_FUNC_END sub_080181EC

