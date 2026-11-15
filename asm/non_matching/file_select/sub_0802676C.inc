	THUMB_FUNC_START sub_0802676C
sub_0802676C: @ 0x0802676C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	mov r1, #0
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #60
	strb r1, [r0]
	ldr r0, _080267BC  @ =gUnknown_0813CBF0
	str r0, [r4, #72]
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _080267C0  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	add r0, r4, #0
	add r0, r0, #124
	strh r1, [r0]
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #80
	ldrh r1, [r1]
	bl 0x0800932C
	add r1, r4, #0
	add r1, r1, #122
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080267BC:
	.4byte gUnknown_0813CBF0
_080267C0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0802676C

