	THUMB_FUNC_START sub_08016E6C
sub_08016E6C: @ 0x08016E6C
	push {r4,r5,lr}
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
	mov r5, #0
	mov r0, #2
	strb r0, [r1]
	ldr r0, _08016EA4  @ =gUnknown_0813935C
	str r0, [r4, #72]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r4, r4, #42
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08016EA4:
	.4byte gUnknown_0813935C
	THUMB_FUNC_END sub_08016E6C

