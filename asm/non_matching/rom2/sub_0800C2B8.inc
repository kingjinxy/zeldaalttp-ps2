	THUMB_FUNC_START sub_0800C2B8
sub_0800C2B8: @ 0x0800C2B8
	push {r4,r5,lr}
	add r2, r0, #0
	lsl r4, r1, #2
	add r4, r4, r1
	lsl r4, r4, #2
	ldr r0, _0800C31C  @ =gUnknown_084273A0
	add r4, r4, r0
	ldrh r0, [r4, #4]
	add r1, r2, #0
	add r1, r1, #126
	mov r5, #0
	strh r0, [r1]
	ldrh r0, [r4, #6]
	sub r1, r1, #1
	strb r0, [r1]
	ldrh r1, [r4, #8]
	add r0, r2, #0
	add r0, r0, #124
	strb r1, [r0]
	ldrh r0, [r4, #10]
	add r1, r2, #0
	add r1, r1, #123
	strb r0, [r1]
	ldrh r0, [r4, #12]
	sub r1, r1, #1
	strb r0, [r1]
	ldrh r1, [r4, #14]
	add r0, r2, #0
	add r0, r0, #121
	strb r1, [r0]
	ldr r0, _0800C320  @ =gUnknown_030004A0
	add r0, r0, #96
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	ldrh r1, [r4, #16]
	orr r0, r0, r1
	ldrh r1, [r4, #18]
	bl sub_0800CA84
	ldrb r0, [r4]
	ldrb r1, [r4, #2]
	bl sub_0800C0B0
	ldr r0, _0800C324  @ =gUnknown_03000520
	strb r5, [r0, #4]
	pop {r4,r5}
	pop {r0}
	bx r0
_0800C31C:
	.4byte gUnknown_084273A0
_0800C320:
	.4byte gUnknown_030004A0
_0800C324:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_0800C2B8

