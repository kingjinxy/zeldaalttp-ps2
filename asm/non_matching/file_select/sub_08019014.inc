	THUMB_FUNC_START sub_08019014
sub_08019014: @ 0x08019014
	push {lr}
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #0
	strb r1, [r2]
	mov r1, #128
	str r1, [r0, #12]
	sub r2, r2, #3
	mov r1, #8
	strb r1, [r2]
	ldr r1, _0801904C  @ =gUnknown_08139AB0
	ldr r1, [r1, #12]
	str r1, [r0, #72]
	mov r1, #1
	strb r1, [r0, #26]
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	mov r1, #4
	bl 0x08003870
	pop {r0}
	bx r0
_0801904C:
	.4byte gUnknown_08139AB0
	THUMB_FUNC_END sub_08019014

