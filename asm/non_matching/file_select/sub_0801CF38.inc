	THUMB_FUNC_START sub_0801CF38
sub_0801CF38: @ 0x0801CF38
	push {r4,lr}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0801CF80  @ =gUnknown_0813A86C
	str r0, [r4, #72]
	ldr r1, _0801CF84  @ =gUnknown_0813A7CC
	ldr r0, [r4, #84]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #63
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	add r1, r1, #51
	strb r0, [r1]
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r0, r0, #30
	add r1, r4, #0
	add r1, r1, #115
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CF80:
	.4byte gUnknown_0813A86C
_0801CF84:
	.4byte gUnknown_0813A7CC
	THUMB_FUNC_END sub_0801CF38

