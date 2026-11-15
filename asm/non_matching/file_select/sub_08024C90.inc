	THUMB_FUNC_START sub_08024C90
sub_08024C90: @ 0x08024C90
	push {r4-r6,lr}
	add r4, r0, #0
	bl 0x0800099C
	ldr r6, [r4, #112]
	ldr r5, _08024CC8  @ =gUnknown_0813C138
	ldrb r1, [r4, #30]
	lsl r1, r1, #28
	lsr r1, r1, #28
	sub r1, r1, #7
	lsl r4, r1, #1
	add r4, r4, r1
	ldr r1, _08024CCC  @ =gUnknown_03006C80
	ldrb r1, [r1]
	sub r1, r1, #1
	bl __umodsi3
	add r4, r4, r0
	add r4, r4, r5
	ldrb r0, [r4]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r6, #30]
	pop {r4-r6}
	pop {r0}
	bx r0
_08024CC8:
	.4byte gUnknown_0813C138
_08024CCC:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08024C90

