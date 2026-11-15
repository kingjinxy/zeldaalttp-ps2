	THUMB_FUNC_START sub_08029A70
sub_08029A70: @ 0x08029A70
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #80
	mov r0, #128
	lsl r0, r0, #7
	strh r0, [r1]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	mov r1, #8
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08029AD8  @ =gUnknown_0813D454
	str r0, [r4, #72]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #255
	strb r0, [r1]
	add r1, r1, #63
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0802A028
	mov r0, #60
	strb r0, [r4, #24]
	add r1, r4, #0
	add r1, r1, #123
	mov r0, #30
	strb r0, [r1]
	ldr r1, _08029ADC  @ =gUnknown_03000450
	ldr r0, [r1]
	str r0, [r4, #88]
	str r4, [r1]
	pop {r4}
	pop {r0}
	bx r0
_08029AD8:
	.4byte gUnknown_0813D454
_08029ADC:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08029A70

