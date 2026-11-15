	THUMB_FUNC_START sub_0801E83C
sub_0801E83C: @ 0x0801E83C
	push {lr}
	mov r3, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	sub r1, r1, #5
	and r1, r1, r2
	orr r1, r1, r3
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #5
	strb r1, [r2]
	ldr r1, _0801E864  @ =gUnknown_0813AEA8
	str r1, [r0, #72]
	mov r1, #0
	bl 0x08003870
	pop {r0}
	bx r0
_0801E864:
	.4byte gUnknown_0813AEA8
	THUMB_FUNC_END sub_0801E83C

