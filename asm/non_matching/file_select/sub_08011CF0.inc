	THUMB_FUNC_START sub_08011CF0
sub_08011CF0: @ 0x08011CF0
	push {r4,lr}
	add r2, r0, #0
	ldrb r0, [r2, #20]
	cmp r0, #0
	bne _08011D1A
	mov r0, #1
	strb r0, [r2, #20]
	ldrb r1, [r2, #31]
	mov r0, #63
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #31]
	ldrb r0, [r2, #29]
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r2, #29]
	add r1, r2, #0
	add r1, r1, #33
	mov r0, #14
	strb r0, [r1]
_08011D1A:
	ldr r4, _08011D48  @ =gUnknown_02016D60
	ldrb r0, [r4, #3]
	mov r3, #0
	cmp r0, #4
	bhi _08011D26
	mov r3, #2
_08011D26:
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r3
	strb r0, [r2, #28]
	ldrb r0, [r4, #2]
	lsl r0, r0, #4
	add r0, r0, #24
	strh r0, [r2, #50]
	ldrb r0, [r4, #3]
	lsl r0, r0, #4
	add r0, r0, #53
	strh r0, [r2, #54]
	pop {r4}
	pop {r0}
	bx r0
_08011D48:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011CF0

