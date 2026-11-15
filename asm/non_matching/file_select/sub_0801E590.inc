	THUMB_FUNC_START sub_0801E590
sub_0801E590: @ 0x0801E590
	push {r4,lr}
	add r4, r0, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801E5D4  @ =gUnknown_0813AE64
	str r0, [r4, #72]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_0801E5D4:
	.4byte gUnknown_0813AE64
	THUMB_FUNC_END sub_0801E590

