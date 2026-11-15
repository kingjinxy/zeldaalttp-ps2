	THUMB_FUNC_START sub_08018B14
sub_08018B14: @ 0x08018B14
	push {r4-r6,lr}
	add r5, r0, #0
	ldrb r0, [r5, #10]
	bl sub_08013D20
	str r0, [r5, #120]
	ldrb r0, [r5, #11]
	bl sub_08013D20
	str r0, [r5, #116]
	ldrb r2, [r5, #23]
	lsr r0, r2, #4
	strb r0, [r5, #10]
	ldr r1, _08018BF8  @ =gUnknown_08139934
	mov r0, #15
	and r0, r0, r2
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5, #23]
	ldrh r1, [r5, #50]
	mov r4, #63
	add r0, r4, #0
	and r0, r0, r1
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	add r6, r5, #0
	add r6, r6, #82
	ldrb r0, [r6]
	ldrh r1, [r5, #54]
	lsl r1, r1, #16
	asr r1, r1, #22
	mov r2, #63
	and r1, r1, r2
	bl sub_08012F84
	ldrh r1, [r5, #54]
	and r4, r4, r1
	lsl r1, r4, #1
	add r1, r1, r4
	lsl r1, r1, #1
	add r0, r0, r1
	ldrb r2, [r0]
	lsl r2, r2, #4
	ldr r3, _08018BFC  @ =gUnknown_0201EFF8
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r1, r1, r3
	ldrh r1, [r1]
	add r1, r1, #8
	add r2, r2, r1
	strh r2, [r5, #50]
	add r0, r0, #1
	ldrb r2, [r0]
	lsl r2, r2, #4
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r4, r3, #2
	add r1, r1, r4
	ldrh r1, [r1]
	add r1, r1, #8
	add r2, r2, r1
	strh r2, [r5, #54]
	add r0, r0, #1
	ldrb r2, [r0]
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r1, r1, r3
	lsl r2, r2, #4
	ldrh r1, [r1]
	add r2, r2, r1
	add r1, r5, #0
	add r1, r1, #112
	strh r2, [r1]
	add r0, r0, #1
	ldrb r2, [r0]
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r1, r1, r4
	lsl r2, r2, #4
	ldrh r1, [r1]
	add r2, r2, r1
	add r1, r5, #0
	add r1, r1, #114
	strh r2, [r1]
	add r0, r0, #1
	ldrb r1, [r0]
	lsl r1, r1, #4
	add r1, r1, #16
	add r2, r5, #0
	add r2, r2, #124
	strh r1, [r2]
	ldrb r0, [r0, #1]
	lsl r0, r0, #4
	add r0, r0, #16
	add r1, r5, #0
	add r1, r1, #126
	strh r0, [r1]
	ldrb r1, [r5, #10]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08018C00
	strb r2, [r5, #20]
	bl 0x0800099C
	mov r1, #3
	and r0, r0, r1
	ldrb r1, [r5, #23]
	add r0, r0, r1
	strb r0, [r5, #24]
	b _08018C04
	.byte 0x00
	.byte 0x00
_08018BF8:
	.4byte gUnknown_08139934
_08018BFC:
	.4byte gUnknown_0201EFF8
_08018C00:
	mov r0, #2
	strb r0, [r5, #20]
_08018C04:
	add r0, r5, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08018C20
	bl 0x0800099C
	mov r1, #3
	and r0, r0, r1
	ldrb r1, [r5, #23]
	add r0, r0, r1
	b _08018C22
_08018C20:
	ldrb r0, [r5, #23]
_08018C22:
	strb r0, [r5, #24]
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018B14

	.byte 0x00
	.byte 0x00
