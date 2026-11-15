	THUMB_FUNC_START sub_080345E4
sub_080345E4: @ 0x080345E4
	push {r4,lr}
	add r4, r0, #0
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r4, #29]
	ldrb r1, [r4, #11]
	add r1, r1, #13
	mov r0, #15
	and r1, r1, r0
	ldrb r2, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldr r2, _08034670  @ =gUnknown_08427AE4
	ldrb r0, [r4, #11]
	lsl r0, r0, #2
	add r0, r0, r2
	ldrh r1, [r0]
	strh r1, [r4, #50]
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #96
	strh r1, [r0]
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	strh r1, [r4, #54]
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #98
	strh r0, [r1]
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #32
	str r0, [r4, #12]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08034670:
	.4byte gUnknown_08427AE4
	THUMB_FUNC_END sub_080345E4

