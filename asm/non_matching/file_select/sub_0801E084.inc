	THUMB_FUNC_START sub_0801E084
sub_0801E084: @ 0x0801E084
	push {r4,lr}
	mov r4, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	mov r3, #4
	neg r3, r3
	add r1, r3, #0
	and r1, r1, r2
	orr r1, r1, r4
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #4
	strb r1, [r2]
	ldr r1, _0801E0B4  @ =gUnknown_0813AD74
	str r1, [r0, #72]
	strh r3, [r0, #58]
	mov r1, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_0801E0B4:
	.4byte gUnknown_0813AD74
	THUMB_FUNC_END sub_0801E084

