	THUMB_FUNC_START sub_08035EEC
sub_08035EEC: @ 0x08035EEC
	push {r4-r6,lr}
	add r6, r0, #0
	mov r0, #105
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08035F62
	str r6, [r1, #84]
	add r0, r6, #0
	bl sub_0803D3D0
	mov r5, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r6, #20]
	mov r0, #8
	strb r0, [r6, #23]
	ldrb r1, [r6, #28]
	mov r4, #4
	neg r4, r4
	add r0, r4, #0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r6, #28]
	add r1, r6, #0
	add r1, r1, #69
	mov r0, #255
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #0
	bl sub_08003870
	add r0, r6, #0
	bl 0x08003B94
	ldrb r2, [r6, #29]
	lsl r0, r2, #30
	lsr r0, r0, #30
	mov r1, #2
	orr r0, r0, r1
	and r4, r4, r2
	orr r4, r4, r0
	strb r4, [r6, #29]
	add r0, r6, #0
	add r0, r0, #124
	add r1, r1, #254
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	ldr r0, _08035F68  @ =gUnknown_03000488
	strh r1, [r0]
	strh r1, [r0, #2]
	strh r5, [r0, #4]
	add r1, r6, #0
	bl sub_0803D770
_08035F62:
	pop {r4-r6}
	pop {r0}
	bx r0
_08035F68:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08035EEC

