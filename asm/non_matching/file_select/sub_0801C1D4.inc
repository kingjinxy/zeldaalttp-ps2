	THUMB_FUNC_START sub_0801C1D4
sub_0801C1D4: @ 0x0801C1D4
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801C20C  @ =gUnknown_0813A618
	str r0, [r4, #72]
	bl sub_0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0801C4C4
	pop {r4}
	pop {r0}
	bx r0
_0801C20C:
	.4byte gUnknown_0813A618
	THUMB_FUNC_END sub_0801C1D4

