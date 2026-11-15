	THUMB_FUNC_START sub_080175F4
sub_080175F4: @ 0x080175F4
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
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08017634  @ =gUnknown_08139594
	str r0, [r4, #72]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_08017634:
	.4byte gUnknown_08139594
	THUMB_FUNC_END sub_080175F4

