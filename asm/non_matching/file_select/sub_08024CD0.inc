	THUMB_FUNC_START sub_08024CD0
sub_08024CD0: @ 0x08024CD0
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #63
	strb r0, [r1]
	ldr r0, _08024D0C  @ =gUnknown_0813C154
	str r0, [r4, #72]
	ldr r1, [r4, #112]
	add r1, r1, #60
	ldrb r2, [r1]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, [r4, #112]
	mov r1, #8
	bl sub_08003870
	bl sub_0800099C
	ldr r1, [r4, #112]
	add r1, r1, #40
	mov r2, #7
	and r0, r0, r2
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_08024D0C:
	.4byte gUnknown_0813C154
	THUMB_FUNC_END sub_08024CD0

