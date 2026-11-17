	THUMB_FUNC_START sub_08020F9C
sub_08020F9C: @ 0x08020F9C
	push {r4-r6,lr}
	add r4, r0, #0
	mov r5, #0
	add r2, r4, #0
	add r2, r2, #112
	ldrh r0, [r2]
	sub r0, r0, #8
	strh r0, [r2]
	add r3, r4, #0
	add r3, r3, #114
	ldrh r0, [r3]
	add r0, r0, #8
	strh r0, [r3]
	ldrh r1, [r2]
	ldr r6, _08021030  @ =gUnknown_0813B8D8
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	add r0, r0, r6
	ldr r0, [r0]
	cmp r1, r0
	bgt _08020FCA
	strh r0, [r2]
	mov r5, #1
_08020FCA:
	ldrh r1, [r3]
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	cmp r1, r0
	blt _08020FE4
	strh r0, [r3]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
_08020FE4:
	ldr r0, [r4, #56]
	mov r1, #128
	lsl r1, r1, #8
	add r0, r0, r1
	str r0, [r4, #56]
	ldr r1, _08021034  @ =gUnknown_0813B8C0
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	mov r2, #58
	ldrsh r1, [r4, r2]
	ldr r0, [r0]
	cmp r0, r1
	bgt _08021008
	strh r0, [r4, #58]
	cmp r5, #2
	bne _08021008
	strb r5, [r4, #20]
_08021008:
	ldr r0, _08021038  @ =gUnknown_03000488
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
	bl GetNextFrame
	pop {r4-r6}
	pop {r0}
	bx r0
_08021030:
	.4byte gUnknown_0813B8D8
_08021034:
	.4byte gUnknown_0813B8C0
_08021038:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08020F9C

