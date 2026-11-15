	THUMB_FUNC_START sub_08022E0C
sub_08022E0C: @ 0x08022E0C
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800099C
	strb r0, [r4, #24]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #6
	strb r0, [r1]
	ldr r0, _08022E68  @ =gUnknown_0813991C
	str r0, [r4, #72]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #124
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #126
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	ldrb r1, [r4, #11]
	bl sub_08012F84
	str r0, [r4, #112]
	str r0, [r4, #116]
	add r0, r4, #0
	bl sub_08023010
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08022E68:
	.4byte gUnknown_0813991C
	THUMB_FUNC_END sub_08022E0C

